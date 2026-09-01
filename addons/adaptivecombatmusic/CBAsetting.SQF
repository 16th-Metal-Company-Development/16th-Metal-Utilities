//Arma 3 Music Script
//CBA menu code added by Phenosi

["A3_Adapt_setting", "CHECKBOX", "Enable Adaptive Music", ["16th Metal Aux Mod", "Adaptive Music"], false, 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_debug", "CHECKBOX", "Enable debug mode", ["16th Metal Aux Mod", "Adaptive Music"], false, 0, {}, true] call CBA_fnc_addSetting; 

["A3_Adapt_SafeDuration", "SLIDER", "Safe track transition duration", ["16th Metal Aux Mod", "Adaptive Music"], [1, 300, 15, 0], 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_CombatDuration", "SLIDER", "Combat track transition duration", ["16th Metal Aux Mod", "Adaptive Music"], [1, 300, 5, 0], 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_Theme", "LIST", "Select Music Theme", ["16th Metal Aux Mod", "Adaptive Music"], [["starwars", "halo", "generic", "dramatic", "darkness"], 0], 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_Difficulty", "LIST", "Select Difficulty Level", ["16th Metal Aux Mod", "Adaptive Music"], [["stealth", "trivial", "normal", "hard", "desperate"], 1], 0, {}, true] call CBA_fnc_addSetting;