/*
    Runs locally on every affected player's client.

    Parameters:
        0: Transition mode ("OUT" or "IN")
        1: Fade duration
        2: Optional CfgSounds class or sound-file path
*/

params
[
    ["_mode", "", [""]],
    ["_duration", 0, [0]],
    ["_sound", "", [""]]
];

if (!hasInterface) exitWith { false };

_duration = _duration max 0;

/*
    Use a high numeric layer so another mission cutText layer is much less
    likely to cover or replace the portal transition.
*/
private _layer = 9999;

switch (toUpper _mode) do
{
    case "OUT":
    {
        // Clear any unfinished transition left on this layer.
        _layer cutFadeOut 0;

        _layer cutText
        [
            "",
            "BLACK OUT",
            _duration,
            true,
            false,
            true
        ];

        if !(_sound isEqualTo "") then
        {
            playSoundUI [_sound];
        };
    };

    case "IN":
    {
        _layer cutText
        [
            "",
            "BLACK IN",
            _duration,
            true,
            false,
            true
        ];
    };
};

true