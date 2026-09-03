class CfgPatches
{
	class radio_sound
	{
		name = "Replacement Star Wars Themed Sounds for Radios";
		author = "Hazmat";
		requiredVersion = 2.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgSounds
{
	class tfs_lr_off
	{
		name = "tfs_lr_off";
		sound[] = { "z\MET\addons\radio_sounds\sfx\default\LR_OFF.ogg", 3, 1, 3 };
		titles[] = { 0, " " };
	};
	class tfs_lr_on
	{
		name = "tfs_lr_on";
		sound[] = { "z\MET\addons\radio_sounds\sfx\default\LR_ON.ogg", 3, 1, 3 };
		titles[] = { 0, " " };
	};
	class tfs_sr_off
	{
		name = "tfs_sr_off";
		sound[] = { "z\MET\addons\radio_sounds\sfx\default\SR_OFF.ogg", 3, 1, 3 };
		titles[] = { 0, " " };
	};
	class tfs_sr_on
	{
		name = "tfs_sr_on";
		sound[] = { "z\MET\addons\radio_sounds\sfx\default\SR_ON.ogg", 3, 1, 3 };
		titles[] = { 0, " " };
	};

	class tfs_lr_off_low
	{
		name = "tfs_lr_off_low";
		sound[] = { "z\MET\addons\radio_sounds\sfx\default\LR_OFF.ogg", 0.75, 1, 3 };
		titles[] = { 0, " " };
	};
	class tfs_lr_on_low
	{
		name = "tfs_lr_on_low";
		sound[] = { "z\MET\addons\radio_sounds\default\low\LR_ON.ogg", 0.75, 1, 3 };
		titles[] = { 0, " " };
	};
	class tfs_sr_off_low
	{
		name = "tfs_sr_off_low";
		sound[] = { "z\MET\addons\radio_sounds\default\low\SR_OFF.ogg", 0.75, 1, 3 };
		titles[] = { 0, " " };
	};
	class tfs_sr_on_low
	{
		name = "tfs_sr_on_low";
		sound[] = { "z\MET\addons\radio_sounds\default\low\SR_ON.ogg", 0.75, 1, 3 };
		titles[] = { 0, " " };
	};
};

class Extended_PostInit_Eventhandlers
{
    tfar_sound_postInit="call compile preprocessFileLineNumbers 'z\MET\addons\radio_sounds\XEH_postInit.sqf'"
};

class Extended_PreInit_EventHandlers
{
    tfar_sound_preInit="call compile preprocessFileLineNumbers 'z\MET\addons\radio_sounds\XEH_preInit.sqf'"
};