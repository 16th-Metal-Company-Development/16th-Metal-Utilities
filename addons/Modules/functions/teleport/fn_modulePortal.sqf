params
[
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (
    isNull _logic ||
    {!_activated}
) exitWith { true };

/*
    Local initialization guard.

    The module function uses persistent global execution, so it may be
    executed again for JIP clients. Each machine only needs one local
    runtime trigger and monitor for this module.
*/
if (
    _logic getVariable
    [
        "MET_portalInitializedLocal",
        false
    ]
) exitWith { true };

_logic setVariable
[
    "MET_portalInitializedLocal",
    true
];

private _objectArea = _logic getVariable
[
    "objectArea",
    [5, 2, getDir _logic, true, 5]
];

_objectArea params
[
    ["_sizeX", 5, [0]],
    ["_sizeY", 2, [0]],
    ["_angle", getDir _logic, [0]],
    ["_rectangle", true, [true]],
    ["_height", 5, [0]]
];

/*
    Create a local runtime trigger matching the module's Eden area.
*/
private _portalTrigger = createTrigger
[
    "EmptyDetector",
    getPosATL _logic,
    false
];

_portalTrigger setPosASL (getPosASL _logic);

_portalTrigger setTriggerArea
[
    _sizeX,
    _sizeY,
    _angle,
    _rectangle,
    _height
];

/*
    ANY detects units from every side.

    A fast trigger interval is necessary because aircraft can otherwise
    pass completely through a narrow portal between trigger updates.
*/
_portalTrigger setTriggerActivation
[
    "ANY",
    "PRESENT",
    true
];

_portalTrigger setTriggerStatements
[
    "this",
    "",
    ""
];

_portalTrigger setTriggerInterval 0.02;

_portalTrigger setVariable
[
    "MET_portalModule",
    _logic
];

_logic setVariable
[
    "MET_portalTrigger",
    _portalTrigger
];

private _portalClass = typeOf _logic;

/*
    Modules initialize before normal mission init scripts. Wait until
    simulation has begun before resolving Eden synchronization.
*/
waitUntil
{
    uiSleep 0.05;

    time > 0 ||
    {isNull _logic}
};

if (isNull _logic) exitWith
{
    deleteVehicle _portalTrigger;
    true
};

/*
    Repeatedly check for the synchronized portal.

    _units is included as a fallback because the module framework may
    provide synchronized/affected entities through the function arguments.
*/
private _linkedPortals = [];
private _rawSynchronized = [];
private _syncTimeoutAt = diag_tickTime + 10;

waitUntil
{
    uiSleep 0.10;

    _rawSynchronized = +_units;

    {
        _rawSynchronized pushBackUnique _x;
    }
    forEach (synchronizedObjects _logic);

    _linkedPortals = _rawSynchronized select
    {
        !isNull _x &&
        {!(_x isEqualTo _logic)} &&
        {typeOf _x isEqualTo _portalClass}
    };

    (count _linkedPortals) > 0 ||
    {isNull _logic} ||
    {diag_tickTime >= _syncTimeoutAt}
};

if (isNull _logic) exitWith
{
    deleteVehicle _portalTrigger;
    true
};

if ((count _linkedPortals) != 1) exitWith
{
    private _rawTypes = _rawSynchronized apply
    {
        typeOf _x
    };

    diag_log format
    [
        "[MET Portals] %1 pairing failed. Portal class: %2 | Matching portals: %3 | Raw synchronized objects: %4 | Raw types: %5",
        _logic,
        _portalClass,
        count _linkedPortals,
        _rawSynchronized,
        _rawTypes
    ];

    if (hasInterface) then
    {
        systemChat format
        [
            "MET Portal error: expected one linked portal, found %1. Check the RPT for raw synchronization data.",
            count _linkedPortals
        ];
    };

    deleteVehicle _portalTrigger;

    _logic setVariable
    [
        "MET_portalTrigger",
        objNull
    ];

    true
};

private _destinationModule = _linkedPortals # 0;

/*
    Wait for the linked module to create its local runtime trigger.
*/
private _destinationTimeoutAt = diag_tickTime + 10;

waitUntil
{
    uiSleep 0.05;

    !isNull
    (
        _destinationModule getVariable
        [
            "MET_portalTrigger",
            objNull
        ]
    ) ||
    {isNull _logic} ||
    {isNull _destinationModule} ||
    {diag_tickTime >= _destinationTimeoutAt}
};

if (
    isNull _logic ||
    {isNull _destinationModule}
) exitWith
{
    deleteVehicle _portalTrigger;
    true
};

private _destinationTrigger = _destinationModule getVariable
[
    "MET_portalTrigger",
    objNull
];

if (isNull _destinationTrigger) exitWith
{
    diag_log format
    [
        "[MET Portals] %1 timed out waiting for the runtime trigger belonging to %2.",
        _logic,
        _destinationModule
    ];

    if (hasInterface) then
    {
        systemChat
            "MET Portal initialization error: destination portal failed to initialize.";
    };

    deleteVehicle _portalTrigger;

    _logic setVariable
    [
        "MET_portalTrigger",
        objNull
    ];

    true
};

private _sourcePortalID =
    [_logic] call MET_fnc_getPortalID;

diag_log format
[
    "[MET Portals] Linked %1 (%2) to %3 (%4).",
    _logic,
    _sourcePortalID,
    _destinationModule,
    [_destinationModule] call MET_fnc_getPortalID
];

/*
    Allow the dynamic trigger time to build its detection list.
*/
uiSleep 1;

/*
    Every machine runs this monitor, but only moves entities local to it:

    - Server handles server-owned AI.
    - Headless clients handle their AI.
    - Player clients handle players and player-owned vehicles.
    - Zeus clients handle units when locality has transferred to them.
*/
while
{
    !isNull _logic &&
    {!isNull _destinationModule} &&
    {!isNull _portalTrigger} &&
    {!isNull _destinationTrigger}
}
do
{
    private _detectedObjects = list _portalTrigger;

    if !(isNil "_detectedObjects") then
    {
        private _localEntities = [];

        {
            /*
                For infantry, vehicle _x returns the infantry unit.
                For vehicle crew, it returns the containing vehicle.

                pushBackUnique prevents every crew member from causing
                another teleport call on the same vehicle.
            */
            private _entity = vehicle _x;

            if (
                !isNull _entity &&
                {local _entity} &&
                {_entity inArea _portalTrigger}
            ) then
            {
                _localEntities pushBackUnique _entity;
            };
        }
        forEach _detectedObjects;

        {
            private _blockedPortalID = _x getVariable
            [
                "MET_portalBlockedID",
                ""
            ];

            if (_blockedPortalID != _sourcePortalID) then
            {
                [
                    _x,
                    _portalTrigger,
                    _destinationTrigger
                ]
                call MET_fnc_triggerPortalTeleport;
            };
        }
        forEach _localEntities;
    };

    uiSleep 0.02;
};

if (!isNull _portalTrigger) then
{
    deleteVehicle _portalTrigger;
};

true