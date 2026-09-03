// NOD Colorize (author Fat_Lurch) ported into the 42nd modpack. Recolors the
// night-vision view via a ColorCorrections post-process with ppEffectForceInNVG,
// so it applies DURING night vision. Settings live under Addon Options >
// "42nd Night Vision". Internal Fat_Lurch names are kept; only the PBO location,
// patch class and settings category are 42nd-branded.
//
// Do NOT also load the standalone @NOD Colorize / @White_Phosphor mods - they
// would stack a second colorCorrections effect on the NVG.

class CfgPatches
{
	class MET_NVG
	{
		name = "16th Night Vision";
		author = "Fat_Lurch (ported by HoundaCivic)";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;
		requiredAddons[] = {"cba_main","cba_xeh","cba_settings"};
		version = "0.1";
	};
};
class CfgFunctions
{
	class fatLurch
	{
		class Lurch_Functions
		{
			class WP
			{
				file = "z\MET\addons\custom_nvg\functions\WP.sqf";
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class MET_NVG
	{
		init = "call compile preprocessFileLineNumbers 'z\MET\addons\custom_nvg\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class MET_NVG
	{
		init = "[] spawn fatLurch_fnc_WP";
	};
};
