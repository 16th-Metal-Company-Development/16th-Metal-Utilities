params
[
    ["_entity", objNull, [objNull]],
    ["_source", objNull, [objNull]],
    ["_destination", objNull, [objNull]]
];

if (
    isNull _entity ||
    {isNull _source} ||
    {isNull _destination} ||
    {_source isEqualTo _destination} ||
    {!local _entity} ||
    {
        _entity getVariable
        [
            "MET_portalTeleportPending",
            false
        ]
    }
) exitWith
{
    false
};

_entity setVariable
[
    "MET_portalTeleportPending",
    true,
    false
];

[
    _entity,
    _source,
    _destination
]
spawn
{
    params
    [
        "_entity",
        "_source",
        "_destination"
    ];

    private _clearPending =
    {
        params ["_object"];

        if (!isNull _object) then
        {
            _object setVariable
            [
                "MET_portalTeleportPending",
                false,
                false
            ];
        };
    };

    private _sourceModule =
        _source getVariable
        [
            "MET_portalModule",
            objNull
        ];

    private _destinationModule =
        _destination getVariable
        [
            "MET_portalModule",
            objNull
        ];

    if (
        isNull _entity ||
        {isNull _source} ||
        {isNull _destination} ||
        {isNull _sourceModule} ||
        {isNull _destinationModule}
    ) exitWith
    {
        [_entity] call _clearPending;
    };

    private _destinationID =
        _destination getVariable
        [
            "MET_portalID",
            ""
        ];

    if (_destinationID isEqualTo "") then
    {
        _destinationID =
            [_destinationModule] call MET_fnc_getPortalID;
    };

    if (_destinationID isEqualTo "") exitWith
    {
        systemChat
            "[MET Portals] Could not determine the destination portal ID.";

        [_entity] call _clearPending;
    };

    /*
        These settings belong only to the source portal being entered.
    */
    private _fadeEnabled =
        _sourceModule getVariable
        [
            "FadeOut",
            false
        ];

    private _fadeTime =
        _sourceModule getVariable
        [
            "FadeTime",
            0
        ];

    private _soundPath =
        _sourceModule getVariable
        [
            "SoundPath",
            ""
        ];

    private _freezeOnTransit =
        _sourceModule getVariable
        [
            "FreezeOnTransit",
            true
        ];

    if !(_fadeEnabled isEqualType true) then
    {
        _fadeEnabled =
            parseNumber str _fadeEnabled > 0;
    };

    if !(_freezeOnTransit isEqualType true) then
    {
        _freezeOnTransit =
            parseNumber str _freezeOnTransit > 0;
    };

    if !(_fadeTime isEqualType 0) then
    {
        _fadeTime =
            parseNumber str _fadeTime;
    };

    if !(_soundPath isEqualType "") then
    {
        _soundPath =
            str _soundPath;
    };

    private _useFade =
        _fadeEnabled &&
        {_fadeTime > 0};

    private _useTransitFreeze =
        _useFade &&
        {_freezeOnTransit};

    /*
        Locate every human player affected by the teleport, including
        passengers and Zeus players remotely controlling AI.
    */
    private _affectedPlayers = [];

    private _occupants =
        if (_entity isKindOf "Man") then
        {
            [_entity]
        }
        else
        {
            crew _entity
        };

    {
        private _humanPlayer =
            if (isPlayer _x) then
            {
                _x
            }
            else
            {
                remoteControlled _x
            };

        if (!isNull _humanPlayer) then
        {
            _affectedPlayers pushBackUnique _humanPlayer;
        };
    }
    forEach _occupants;

    private _sendTransition =
    {
        params
        [
            "_players",
            "_mode",
            "_duration",
            "_sound"
        ];

        private _arguments =
        [
            _mode,
            _duration,
            _sound
        ];

        {
            if (
                hasInterface &&
                {_x isEqualTo player}
            ) then
            {
                _arguments call
                    MET_fnc_portalClientTransition;
            }
            else
            {
                _arguments remoteExecCall
                [
                    "MET_fnc_portalClientTransition",
                    _x
                ];
            };
        }
        forEach _players;
    };

    /*
        When freezing, preserve the transform and velocity from the instant
        the entity entered the portal.
    */
    private _frozenPosition = [];
    private _frozenVectorDir = [];
    private _frozenVectorUp = [];
    private _frozenVelocity = [];

    private _simulationWasEnabled =
        simulationEnabled _entity;

    if (_useTransitFreeze) then
    {
        _frozenPosition =
            getPosASL _entity;

        _frozenVectorDir =
            vectorDir _entity;

        _frozenVectorUp =
            vectorUp _entity;

        _frozenVelocity =
            velocity _entity;

        _entity setVelocity
        [
            0,
            0,
            0
        ];

        if (_simulationWasEnabled) then
        {
            _entity enableSimulationGlobal false;
        };
    };

    if (_useFade) then
    {
        [
            _affectedPlayers,
            "OUT",
            _fadeTime,
            _soundPath
        ]
        call _sendTransition;

        sleep _fadeTime;
    };

    /*
        Re-enable simulation immediately before relocation.
    */
    if (
        _useTransitFreeze &&
        {_simulationWasEnabled} &&
        {!isNull _entity}
    ) then
    {
        _entity enableSimulationGlobal true;
    };

    private _canTeleport =
        !isNull _entity &&
        {!isNull _source} &&
        {!isNull _destination} &&
        {local _entity};

    if (_canTeleport) then
    {
        private _sourceDirection =
            (triggerArea _source) # 2;

        private _destinationDirection =
            (triggerArea _destination) # 2;

        private _travelRotation =
            _destinationDirection -
            _sourceDirection +
            180;

        private _sourceSin =
            sin _sourceDirection;

        private _sourceCos =
            cos _sourceDirection;

        private _destinationSin =
            sin _destinationDirection;

        private _destinationCos =
            cos _destinationDirection;

        private _sourceForward =
        [
            _sourceSin,
            _sourceCos,
            0
        ];

        /*
            This is the source portal's left-facing vector. It replaces
            calculating sourceRight and multiplying it by -1.
        */
        private _sourceEntryRight =
        [
            -_sourceCos,
            _sourceSin,
            0
        ];

        private _destinationForward =
        [
            _destinationSin,
            _destinationCos,
            0
        ];

        private _destinationRight =
        [
            _destinationCos,
            -_destinationSin,
            0
        ];

        private _sourcePosition =
            getPosASL _source;

        private _destinationPosition =
            getPosASL _destination;

        /*
            A frozen transit uses the values captured upon entry. An unfrozen
            transit uses the entity's current state when the fade completes.
        */
        private _entityPosition =
            if (_useTransitFreeze) then
            {
                _frozenPosition
            }
            else
            {
                getPosASL _entity
            };

        private _entityVectorDir =
            if (_useTransitFreeze) then
            {
                _frozenVectorDir
            }
            else
            {
                vectorDir _entity
            };

        private _entityVectorUp =
            if (_useTransitFreeze) then
            {
                _frozenVectorUp
            }
            else
            {
                vectorUp _entity
            };

        private _entityVelocity =
            if (_useTransitFreeze) then
            {
                _frozenVelocity
            }
            else
            {
                velocity _entity
            };

        private _relativeOffset =
            _entityPosition vectorDiff
            _sourcePosition;

        private _lateralOffset =
            _relativeOffset vectorDotProduct
            _sourceEntryRight;

        private _depthOffset =
            _relativeOffset vectorDotProduct
            _sourceForward;

        private _newPosition =
            _destinationPosition
            vectorAdd
            (
                (
                    _destinationRight
                    vectorMultiply
                    _lateralOffset
                )
                vectorAdd
                (
                    _destinationForward
                    vectorMultiply
                    _depthOffset
                )
            )
            vectorAdd
            [
                0,
                0,
                _relativeOffset # 2
            ];

        /*
            Calculate the rotation values once and reuse them for the
            direction, up vector, and velocity.
        */
        private _rotationSin =
            sin _travelRotation;

        private _rotationCos =
            cos _travelRotation;

        private _rotateZ =
        {
            params ["_vector"];

            private _x =
                _vector # 0;

            private _y =
                _vector # 1;

            [
                (_x * _rotationCos) +
                    (_y * _rotationSin),

                (_y * _rotationCos) -
                    (_x * _rotationSin),

                _vector # 2
            ]
        };

        private _newVectorDir =
            [_entityVectorDir] call _rotateZ;

        private _newVectorUp =
            [_entityVectorUp] call _rotateZ;

        private _newVelocity =
            [_entityVelocity] call _rotateZ;

        private _blockedObjects =
            [_entity];

        {
            _blockedObjects pushBackUnique _x;
        }
        forEach crew _entity;

        {
            _x setVariable
            [
                "MET_portalBlockedID",
                _destinationID,
                true
            ];
        }
        forEach _blockedObjects;

        /*
            Use one scheduled monitor for all blocked objects instead of
            spawning a separate polling script for each object.
        */
        [
            _blockedObjects,
            _destination,
            _destinationID
        ]
        spawn
        {
            params
            [
                "_objects",
                "_trigger",
                "_triggerID"
            ];

            private _remaining =
                +_objects;

            waitUntil
            {
                sleep 0.05;

                if (isNull _trigger) exitWith
                {
                    _remaining = [];
                    true
                };

                for "_index" from
                    (count _remaining - 1)
                    to 0
                    step -1
                do
                {
                    private _object =
                        _remaining # _index;

                    if (
                        isNull _object ||
                        {!(_object inArea _trigger)}
                    ) then
                    {
                        if (
                            !isNull _object &&
                            {
                                (
                                    _object getVariable
                                    [
                                        "MET_portalBlockedID",
                                        ""
                                    ]
                                )
                                isEqualTo
                                _triggerID
                            }
                        ) then
                        {
                            _object setVariable
                            [
                                "MET_portalBlockedID",
                                "",
                                true
                            ];
                        };

                        _remaining deleteAt _index;
                    };
                };

                _remaining isEqualTo []
            };
        };

        _entity setVelocity
        [
            0,
            0,
            0
        ];

        _entity setPosASL
            _newPosition;

        _entity setVectorDirAndUp
        [
            _newVectorDir,
            _newVectorUp
        ];

        _entity setVelocity
            _newVelocity;
    };

    if (_useFade) then
    {
        [
            _affectedPlayers,
            "IN",
            _fadeTime,
            ""
        ]
        call _sendTransition;

        sleep _fadeTime;
    };

    [_entity] call _clearPending;
};

true