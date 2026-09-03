/*
    fatLurch_fnc_WP  (NOD Colorize, Fat_Lurch - ported to the 42nd)

    Runs a ColorCorrections post-process with ppEffectForceInNVG so it applies
    while night vision is active, re-reading the "42nd Night Vision" settings
    each tick (so changes apply live). Client-only; single instance.
*/

if (isDedicated) exitWith {};
if (isServer && {!hasInterface}) exitWith {};
if (missionNamespace getVariable ["FL_WP_Running", false]) exitWith {};
FL_WP_Running = true;

waitUntil { !isNull player };

FL_Handle = ppEffectCreate ["ColorCorrections", 1501];
FL_Handle ppEffectForceInNVG true;

// ColorCorrections recipe follows the mod author's white-phosphor method:
//   ppEffectAdjust [brightness, contrast, offset, blend[rgba], colorize[rgba], desaturate[rgba]]
// The image is desaturated by _desat, then multiplied by the colorize channels.
// CRITICAL: colorize/desaturate alpha MUST be 0 (alpha 1 keeps the original
// green). Colorize channels are per-channel MULTIPLIERS (can exceed 1); the
// relative R:G:B sets the tint. Values scaled so the brightest channel ~2.4.
private _desat = [1, 1, 1, 0];

while {true} do {
    if ((currentVisionMode player) == 1 && {missionNamespace getVariable ["Fat_Lurch_NODC_Enabled", true]}) then {
        private _preset = missionNamespace getVariable ["Fat_Lurch_NODC_Preset", "white"];

        private _params = switch (_preset) do {
            // Author's exact white-phosphor recipe.
            case "white": { [1, 0.6, 0, [0, 0.1, 0.2, 0], [0.4, 1.4, 2.4, 0], _desat] };
            case "green": { [1, 0.6, 0, [0, 0, 0, 0], [0.36, 2.4, 0.6, 0], _desat] };
            case "amber": { [1, 0.6, 0, [0, 0, 0, 0], [2.4, 1.56, 0.24, 0], _desat] };
            case "red":   { [1, 0.6, 0, [0, 0, 0, 0], [2.4, 0.36, 0.24, 0], _desat] };
            case "blue":  { [1, 0.6, 0, [0, 0, 0, 0], [0.48, 0.96, 2.4, 0], _desat] };
            // Colorblind sets: green NVG is worst for red-green deficiency, so
            // protanopia/deuteranopia get non-green high-visibility tints;
            // tritanopia avoids blue; mono is neutral (no hue).
            case "protanopia":   { [1, 0.6, 0, [0,0,0,0], [0.72, 1.68, 2.4, 0], _desat] };
            case "deuteranopia": { [1, 0.6, 0, [0,0,0,0], [2.4, 1.92, 0.72, 0], _desat] };
            case "tritanopia":   { [1, 0.6, 0, [0,0,0,0], [2.4, 1.08, 0.96, 0], _desat] };
            case "mono":         { [1, 0.6, 0, [0,0,0,0], [2.0, 2.0, 2.0, 0], _desat] };
            // Rarer sets: mild anomalous trichromacy (subtler, near-neutral hues),
            // plus the monochromacies. Achromatopsia is light-sensitive so it is
            // dimmed; blue cone monochromacy leans blue and dim.
            case "protanomaly":   { [1, 0.6, 0, [0,0,0,0], [1.44, 2.04, 2.4, 0], _desat] };
            case "deuteranomaly": { [1, 0.6, 0, [0,0,0,0], [2.4, 2.16, 1.44, 0], _desat] };
            case "tritanomaly":   { [1, 0.6, 0, [0,0,0,0], [2.4, 1.73, 1.63, 0], _desat] };
            case "achromatopsia": { [0.7, 0.6, 0, [0,0,0,0], [2.0, 2.0, 2.0, 0], _desat] };
            case "bcm":           { [0.75, 0.6, 0, [0,0,0,0], [1.2, 1.68, 2.4, 0], _desat] };
            default {
                [
                    missionNamespace getVariable ["Fat_Lurch_NODC_Bright", 1],
                    missionNamespace getVariable ["Fat_Lurch_NODC_Contrast", 0.6],
                    missionNamespace getVariable ["Fat_Lurch_NODC_Contrast_Offset", 0],
                    missionNamespace getVariable ["Fat_Lurch_NODC_Blend", [0, 0.1, 0.2, 0]],
                    missionNamespace getVariable ["Fat_Lurch_NODC_Colorize", [0.4, 1.4, 2.4, 0]],
                    missionNamespace getVariable ["Fat_Lurch_NODC_Desaturate", [1, 1, 1, 0]]
                ]
            };
        };

        FL_Handle ppEffectAdjust _params;
        FL_Handle ppEffectCommit 0;
        FL_Handle ppEffectEnable true;
    } else {
        FL_Handle ppEffectEnable false;
    };

    sleep 0.05;
};
