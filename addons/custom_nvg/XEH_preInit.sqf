// 42nd Night Vision - NVG recolor settings (ported from NOD Colorize, Fat_Lurch).
// All client-side. The defaults (Colorize white + luminance desaturate) give a
// white-phosphor look; change Colorize Color to tint the NVG (green/amber/etc).

if (isNil "CBA_fnc_addSetting") exitWith {};

[
    "Fat_Lurch_NODC_Enabled",
    "CHECKBOX",
    ["Enable NVG Recolor", "Recolor your night-vision view. When off, the native green NVG is used."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    true,
    0
] call CBA_fnc_addSetting;

[
    "Fat_Lurch_NODC_Preset",
    "LIST",
    ["NVG Preset", "Quick color presets. Choose Custom to use the sliders / color pickers below."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    [
        ["white", "green", "amber", "red", "blue", "protanopia", "deuteranopia", "tritanopia", "mono", "protanomaly", "deuteranomaly", "tritanomaly", "achromatopsia", "bcm", "custom"],
        ["White Phosphor", "Green", "Amber", "Red", "Blue", "Protanopia (red-blind)", "Deuteranopia (green-blind)", "Tritanopia (blue-blind)", "Monochrome", "Protanomaly (mild red-weak)", "Deuteranomaly (mild green-weak)", "Tritanomaly (mild blue-weak)", "Achromatopsia (total)", "Blue Cone Monochromacy", "Custom (use settings below)"],
        0
    ],
    0
] call CBA_fnc_addSetting;

[
    "Fat_Lurch_NODC_Bright",
    "SLIDER",
    ["Brightness", "NVG image brightness (1 = neutral)."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    [0, 2, 1, 3],
    0
] call CBA_fnc_addSetting;

[
    "Fat_Lurch_NODC_Contrast",
    "SLIDER",
    ["Contrast", "NVG image contrast (author's white-phosphor value is 0.6)."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    [-100, 100, 0.6, 3],
    0
] call CBA_fnc_addSetting;

[
    "Fat_Lurch_NODC_Contrast_Offset",
    "SLIDER",
    ["Contrast Offset", "Contrast offset (0 = neutral)."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    [-100, 100, 0, 3],
    0
] call CBA_fnc_addSetting;

[
    "Fat_Lurch_NODC_Blend",
    "COLOR",
    ["Blend Color (RGBA)", "Color added on top of the image. Keep alpha at 0."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    [0, 0.1, 0.2, 0],
    0
] call CBA_fnc_addSetting;

[
    "Fat_Lurch_NODC_Colorize",
    "COLOR",
    ["Colorize Color (RGBA)", "Per-channel tint multipliers (may exceed 1). Alpha MUST be 0 or the NVG stays green."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    [0.4, 1.4, 2.4, 0],
    0
] call CBA_fnc_addSetting;

[
    "Fat_Lurch_NODC_Desaturate",
    "COLOR",
    ["Desaturate Color (RGBA)", "Desaturation weights. Author's white-phosphor value is 1,1,1,0."],
    ["16th Metal Aux Mod", "Night Vision Settings"],
    [1, 1, 1, 0],
    0
] call CBA_fnc_addSetting;
