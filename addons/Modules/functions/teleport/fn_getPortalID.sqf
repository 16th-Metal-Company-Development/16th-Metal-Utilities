params
[
    ["_module", objNull, [objNull]]
];

if (isNull _module) exitWith { "" };

private _portalID = netId _module;

/*
    Editor-created module logics should normally have a network ID.
    The position-based fallback prevents the system from shitting itself
    if the network ID is unavailable during very early initialization.
*/
if (
    _portalID isEqualTo "" ||
    {_portalID isEqualTo "0:0"}
) then
{
    private _position = getPosWorld _module;

    private _objectArea = _module getVariable
    [
        "objectArea",
        [5, 2, getDir _module, true, 5]
    ];

    private _direction = _objectArea param
    [
        2,
        getDir _module,
        [0]
    ];

    _portalID = format
    [
        "MET_PORTAL_%1_%2_%3_%4",
        round ((_position # 0) * 100),
        round ((_position # 1) * 100),
        round ((_position # 2) * 100),
        round (_direction * 100)
    ];
};

_portalID