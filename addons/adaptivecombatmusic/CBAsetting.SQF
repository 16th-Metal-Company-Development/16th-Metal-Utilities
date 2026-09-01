//Arma 3 Music Script
//CBA menu code added by Phenosi

["A3_Adapt_setting", "CHECKBOX", "Enable Adaptive Music", ["Adaptive ARMA 3 Music", "Adaptive Music"], false, 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_debug", "CHECKBOX", "Enable debug mode", ["Adaptive ARMA 3 Music", "Adaptive Music"], false, 0, {}, true] call CBA_fnc_addSetting; 

["A3_Adapt_SafeDuration", "SLIDER", "Safe track transition duration", ["Adaptive ARMA 3 Music", "Adaptive Music"], [1, 300, 15, 0], 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_CombatDuration", "SLIDER", "Combat track transition duration", ["Adaptive ARMA 3 Music", "Adaptive Music"], [1, 300, 5, 0], 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_Theme", "LIST", "Select Music Theme", ["Adaptive ARMA 3 Music", "Adaptive Music"], [["starwars", "halo", "generic", "dramatic", "darkness"], 0], 0, {}, true] call CBA_fnc_addSetting;

["A3_Adapt_Difficulty", "LIST", "Select Difficulty Level", ["Adaptive ARMA 3 Music", "Adaptive Music"], [["stealth", "trivial", "normal", "hard", "desperate"], 1], 0, {}, true] call CBA_fnc_addSetting;