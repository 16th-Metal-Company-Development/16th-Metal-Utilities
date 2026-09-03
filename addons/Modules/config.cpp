class CfgPatches
{
	class MET_U_Modules
	{
		// units[] = { "MET_Module_BuildZone","MET_Module_LogisticsBudget","MET_Module_VehiclePad","MET_Module_WaveDefense_Eden","MET_Module_Teleport"};
		units[] = { "MET_Module_Teleport"};
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
	};
};

/*class Extended_PreInit_EventHandlers
{
	class MET_Settings_PreInit
	{
		init = "call compile preprocessFileLineNumbers 'z\MET\addons\modules\Settings\XEH_preInit.sqf'";
	};
};*/



//#include "\a3\ui_f\hpp\defineResincl.inc"
//#include "UI\BaseControls.hpp"
//
//#define GUI_GRID_CENTER_W (safezoneW / 40)
//#define GUI_GRID_CENTER_H (safezoneH / 25)
//#define GUI_GRID_CENTER_X (safezoneX + safezoneW/2 - 20 * GUI_GRID_CENTER_W)
//#define GUI_GRID_CENTER_Y (safezoneY + safezoneH/2 - 12.5 * GUI_GRID_CENTER_H)
//
//#include "UI\MET_SpawnDialog.hpp"
//class RscTitles
//{
//	#include "UI\MET_WaveHUD.hpp"
//};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class MET_Category_Modules : NO_CATEGORY
	{
		displayName = "[16th] Modules";
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};

		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	/*class MET_Module_BuildZone : Module_F
	{
		scope = 2;
		scopeCurator = 0;
		displayName = "[16th] Build Zones";
		icon = "iconModule";
		category = "MET_Category_Modules";

		function = "MET_fnc_BuildZone";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		curatorCanAttach = 0;

		canSetArea = 0;
		canSetAreaShape = 0;
		canSetAreaHeight = 0;

		class AttributeValues
		{
			size3[] = { 100, 100, -1 };
			isRectangle = 0;
		};

		class Attributes : AttributesBase
		{
			class AllowedClasses : Edit
			{
				displayName = "Allowed Classes";
				tooltip = "Comma-separated list of Vehicle classnames that should have zones attached (e.g., 'MET_Bantha_E_MSV,MET_LAAT_MK1')";
				property = "MET_Module_BuildZone_VehicleClasses";
				typeName = "STRING";
				defaultValue = """MET_Bantha_E_MSV,MET_LAAT_MK1,MET_LAAT_Mk2,MET_LAAT_Mk2_Lamps"""; // Note the nested quotes for string
			};

			class Radius : Edit
			{
				displayName = "Radius";
				tooltip = "Build radius in meters";
				property = "MET_Module_BuildZone_Radius";
				typeName = "NUMBER";
				defaultValue = "50";
			};

			class ShowMarkers : Checkbox
			{
				displayName = "Show Build Zones";
				tooltip = "If enabled, spawns markers around valid vehicles for a visual representation of the build zone.";
				property = "MET_Module_BuildZone_ShowMarkers";
				defaultValue = "0";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Defines a dynamic build zone system. Automatically applies ACE Fortify build zones with the desired radius to qualifying vehicles based on class name.";

			sync[] = {};
		};

	};*/

	/*class MET_Module_LogisticsBudget : Module_F
	{
		scope = 2;
		scopeCurator = 0;
		displayName = "[16th] Logistics Budget";
		icon = "iconModule";
		category = "MET_Category_Modules";

		function = "MET_fnc_LogisticsBudget";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		curatorCanAttach = 0;

		canSetArea = 0;
		canSetAreaShape = 0;
		canSetAreaHeight = 0;

		class Attributes : AttributesBase
		{

			class Side : Combo
			{
				displayName = "Side";
				tooltip = "Side that receives fortification budget from kills";
				property = "MET_Module_LogisticsBudget_Side";
				typeName = "NUMBER";
				defaultValue = "1"; // BLUFOR

				class Values
				{
					class Opfor { name = "OPFOR";  value = 0; };
					class Blufor { name = "BLUFOR"; value = 1; };	
					class Grefor { name = "GREFOR"; value = 2; };
				};
			};

			class DefaultScore : Edit
			{
				displayName = "Default Score";
				tooltip = "Score awarded per qualifying kill";
				property = "MET_Module_LogisticsBudget_BasicScore";
				typeName = "NUMBER";
				defaultValue = "15";
			};

			class GroundVehicleScore : Edit
			{
				displayName = "Ground Vehicle Score";
				tooltip = "Score awarded for destroying ground vehicles";
				property = "MET_Module_LogisticsBudget_GroundVehicleScore";
				typeName = "NUMBER";
				defaultValue = "30";
			};

			class AirVehicleScore : Edit
			{
				displayName = "Air Vehicle Score";
				tooltip = "Score awarded for destroying air vehicles";
				property = "MET_Module_LogisticsBudget_AirVehicleScore";
				typeName = "NUMBER";
				defaultValue = "30";
			};

			class ValuableScore : Edit
			{
				displayName = "Valuable Target Score";
				tooltip = "Score awarded for destroying valuable targets";
				property = "MET_Module_LogisticsBudget_ValuableScore";
				typeName = "NUMBER";
				defaultValue = "100";
			};


			class ValuableTargets : Edit
			{
				displayName = "Valuable Target Classes";
				tooltip = "Comma-separated classnames for high-value targets";
				property = "MET_Module_LogisticsBudget_ValuableTargets";
				typeName = "STRING";
				defaultValue = """""";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Awards ACE Fortify budget to a selected side based on kills. Supports basic or advanced scoring modes.";

			sync[] = {};
		};
	};*/

	/*class MET_Module_VehiclePad : Module_F 
	{
		scope = 2;
		scopeCurator = 0;
		displayName = "[16th] Vehicle Pad";
		icon = "iconModule";
		category = "MET_Category_Modules";

		function = "MET_fnc_AddSpawnAction";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		curatorCanAttach = 0;

		canSetArea = 0;
		canSetAreaShape = 0;
		canSetAreaHeight = 0;

		class Attributes : AttributesBase 
		{
			class SpawnPreset : Combo
			{
				displayName = "Vehicle Preset";
				tooltip = "Select which vehicles are available to spawn";
				property = "MET_spawnPreset";
				typeName = "STRING";

				defaultValue = "MET_SupportPad_AllGround";

				class Values {
					class PresetOne {
						name = "Preset One";
						value = "One";
					};
					class PresetTwo {
						name = "Preset Two";
						value = "Two";
					};
					class PresetThree {
						name = "Preset Three";
						value = "Three";
					};
					class PresetFour {
						name = "Preset Four";
						value = "Four";
					};
					class PresetFive {
						name = "Preset Five";
						value = "Five";
					};
					class PresetSix {
						name = "Preset Six";
						value = "Six";
					};
					class PresetSeven {
						name = "Preset Seven";
						value = "Seven";
					};
					class PresetEight {
						name = "Preset Eight";
						value = "Eight";
					};
					class PresetNine {
						name = "Preset Nine";
						value = "Nine";
					};
					class PresetTen {
						name = "Preset Ten";
						value = "Ten";
					};
				};

			};

			class VehiclesCostPoints : Checkbox
			{
				displayName = "Enable Cost";
				tooltip = "Spawning Vehicles will cost points from ACE Logistics Budget, Amounts defined in the Preset";
				property = "MET_vehiclesCostPoints";
				control = "Checkbox";
				defaultValue = "false";
			};

			class AllowClearPad : Checkbox
			{
				displayName = "Enable Pad Clear Action";
				property = "MET_allowClearPad";
				control = "Checkbox";
				defaultValue = "true";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Vehicle Support Pad. Spawn, Repair, Configure. Must be synced to a Prop for scroll actions";

			sync[] = {};
		};
	};*/

	/*class MET_Module_SupportPad : Module_F
	{
		scope = 2;
		scopeCurator = 0;
		displayName = "[16th] Support Pad";
		icon = "iconModule";
		category = "MET_Category_Modules";

		function = "MET_fnc_AddSupportAction";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		curatorCanAttach = 0;

		canSetArea = 0;
		canSetAreaShape = 0;
		canSetAreaHeight = 0;

		class Attributes : AttributesBase
		{
			class CratesCostPoints : Checkbox
			{
				displayName = "Enable Cost";
				tooltip = "Spawning Crates will cost points from ACE Logistics Budget, Amounts defined in settings";
				property = "MET_cratesCostPoints";
				control = "Checkbox";
				defaultValue = "false";
			};

			class AllowRepair : Checkbox
			{
				displayName = "Enable Repair";
				property = "MET_allowRepair";
				control = "Checkbox";
				defaultValue = "true";
			};

			class AllowRefuel : Checkbox
			{
				displayName = "Enable Refuel";
				property = "MET_allowRefuel";
				control = "Checkbox";
				defaultValue = "true";
			};

			class AllowRearm : Checkbox
			{
				displayName = "Enable Rearm";
				property = "MET_allowRearm";
				control = "Checkbox";
				defaultValue = "true";
			};

			class AllowPylons : Checkbox
			{
				displayName = "Enable Pylon Editing";
				property = "MET_allowPylons";
				control = "Checkbox";
				defaultValue = "true";
			};

			class AllowClearPad : Checkbox
			{
				displayName = "Enable Pad Clear Action";
				property = "MET_allowClearPad";
				control = "Checkbox";
				defaultValue = "true";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Support Pad. Spawn Creates or Repair, Rearm and Configure Vehicles. Must be synced to a Prop for scroll actions";

			sync[] = {};
		};
	};*/

	/*class MET_Module_WaveDefense_Eden : Module_F
	{
		scope = 2;
		scopeCurator = 0;
		displayName = "[16th] Wave Defense";
		icon = "iconModule";
		category = "MET_Category_Modules";

		function = "MET_fnc_initModule";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 1;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;

		canSetArea = 1;
		canSetAreaShape = 0;
		canSetAreaHeight = 0;

		class AttributeValues
		{
			size3[] = { 100, 100, -1 };
			isRectangle = 0;
		};

		class Attributes : AttributesBase
		{
			class SideToSpawn : Combo
			{
				displayName = "Side";
				tooltip = "Side Wave Units should Spawn In";
				property = "MET_Module_WaveDefense_Side";
				typeName = "NUMBER";
				defaultValue = "0"; // BLUFOR

				class Values
				{
					class Opfor { name = "OPFOR";  value = 0; };
					class Blufor { name = "BLUFOR"; value = 1; };
					class Grefor { name = "GREFOR"; value = 2; };
				};
			};

			class WaveCount : Edit
			{
				displayName = "Wave Count";
				tooltip = "Maximum Number of Waves (-1 for Infinite)";
				property = "MET_Module_WaveDefense_WaveCount";
				typeName = "NUMBER";
				defaultValue = "10";
			};

			class SetupTime : Edit
			{
				displayName = "Setup Time";
				tooltip = "Time Before First Wave after Activation (Seconds)";
				property = "MET_Module_WaveDefense_SetupTime";
				typeName = "NUMBER";
				defaultValue = "300";
			};

			class RespiteTime : Edit
			{
				displayName = "Respite Time";
				tooltip = "Time Between Waves (Seconds)";
				property = "MET_Module_WaveDefense_RespiteTime";
				typeName = "NUMBER";
				defaultValue = "120";
			};

			class WaitForClear : Checkbox
			{
				displayName = "Wait For Wave Clear";
				tooltip = "If enabled, module will wait for all units from a previous wave to die before spawning the next wave";
				property = "MET_Module_WaveDefense_WaitForClear";
				defaultValue = "1";
			};

			// Infantry

			class InfantryGroupSize : Edit
			{
				displayName = "Infantry Group Size";
				tooltip = "How Many Units each Infatry Group should have";
				property = "MET_Module_WaveDefense_InfantryGroupSize";
				typeName = "NUMBER";
				defaultValue = "7";
			};

			class InfantryGroupsPerWave : Edit
			{
				displayName = "Infantry Group Count";
				tooltip = "Base Amount of Infantry Groups should spawn per wave";
				property = "MET_Module_WaveDefense_InfantryGroupCount";
				typeName = "NUMBER";
				defaultValue = "3";
			};

			class InfantryDifficultyMultiplier : Edit
			{
				displayName = "Infantry Difficulty Modifier";
				tooltip = "How Much Infantry Difficulty should icnrease per wave (Multiplier)";
				property = "MET_Module_WaveDefense_InfantryDifficultyModifier";
				typeName = "NUMBER";
				defaultValue = "2";
			};


			// Air
			class AirUnitsPerWave : Edit
			{
				displayName = "Air Unit Count";
				tooltip = "Base Amount of Air Units to Spawn per Wave";
				property = "MET_Module_WaveDefense_AirUnitsPerWave";
				typeName = "NUMBER";
				defaultValue = "1";
			};

			class AirDifficultyMultiplier : Edit
			{
				displayName = "Air Difficulty Modifier";
				tooltip = "How Much Air Difficulty should icnrease per wave (Multiplier)";
				property = "MET_Module_WaveDefense_AirDifficultyModifier";
				typeName = "NUMBER";
				defaultValue = "1.5";
			};


			// Armor
			class ArmorUnitsPerWave : Edit
			{
				displayName = "Armor Unit Count";
				tooltip = "Base Amount of Armor Units to Spawn per Wave";
				property = "MET_Module_WaveDefense_ArmorUnitsPerWave";
				typeName = "NUMBER";
				defaultValue = "1";
			};

			class ArmorDifficultyMultiplier : Edit
			{
				displayName = "Armor Difficulty Modifier";
				tooltip = "How Much Armor Difficulty should icnrease per wave (Multiplier)";
				property = "MET_Module_WaveDefense_ArmorDifficultyModifier";
				typeName = "NUMBER";
				defaultValue = "1.5";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Wave Defense";

			sync[] = {};
		};

	};*/

	class MET_Module_Teleport : Module_F
	{
		scope = 2;
		scopeCurator = 0;

		displayName = "[16th] Portal";
		category = "MET_Category_Modules";	

		function = "MET_fnc_modulePortal";
		functionPriority = 1;

		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;

		curatorCanAttach = 0;

		canSetArea = 1;
		canSetAreaShape = 1;
		canSetAreaHeight = 1;

		class AttributeValues
		{
			size3[] = { 5, 2, 5 };
			isRectangle = 1;
		};

		class Attributes : AttributesBase
		{
			class FadeOut : Checkbox
			{
				property = "MET_ModulePortal_F_FadeOut";
				displayName = "Fade Out";
				tooltip = "Fade affected players before teleporting.";
				typeName = "BOOL";
				defaultValue = "false";
			};

			class FreezeOnTransit : Checkbox
			{
				property = "MET_ModulePortal_F_FreezeOnTransit";
				displayName = "Freeze on Transit";
				tooltip = "Prevents the affected unit or vehicle from moving during the fade-out transition.";
				typeName = "BOOL";
				defaultValue = "true";
			};

			class FadeTime : Edit
			{
				property = "MET_ModulePortal_F_FadeTime";
				displayName = "Fade Time";
				tooltip = "Fade duration in seconds.";
				typeName = "NUMBER";
				defaultValue = "1";
			};

			class SoundPath : Edit
			{
				property = "MET_ModulePortal_F_SoundPath";
				displayName = "Transition Sound";
				tooltip = "Optional CfgSounds class or sound-file path.";
				typeName = "STRING";
				defaultValue = "''";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description =
				"Defines one end of a portal. Synchronize exactly two Linked Portal modules together. The module direction points away from the portal surface and into the playable area.";

			sync[] =
			{
				"MET_ModulePortal_F"
			};
		};
	};
};

class CfgFunctions
{
	class MET
	{
		tag = "MET"; 

		/*class Module_BuildZone
		{
			file = "z\MET\addons\modules\functions";

			class BuildZone{};
		};*/

		/*class Module_LogisticsBudget
		{
			file = "z\MET\addons\modules\functions";

			class LogisticsBudget {};
		};*/

		/*class Module_SpawnPad
		{
			file = "z\MET\addons\modules\functions\spawnpad";

			class AddSpawnAction {};
			class GetSpawnPresets {};
			class OpenSpawnDialog {};

			class SpawnVehicleClient {};
			class SpawnVehicleServer {};

			class DeleteVehicleClient {};
			class DeleteVehicleServer {};

			class UpdatePylons {};
		};*/

		/*class Module_SupportPad
		{
			file = "z\MET\addons\modules\functions\supportpad";

			class AddSupportAction {};
			class GetSupportPresets {};
			class OpenSupportDialog {};

			class RearmVehicle {};
			class RepairVehicle {};
			class RefuelVehicle {};
		};*/

		/*class Module_VehiclePad_UI
		{
			file = "z\MET\addons\modules\functions\spawnpad\ui";
			class UpdateDescription {};	
			class UpdateList {};	
			class UpdatePreview {};	
		};

		class WaveDefense_Init
		{
			file = "z\MET\addons\modules\functions\wavedefense\init";

			class initModule {};
		};

		class WaveDefense_Core
		{
			file = "z\MET\addons\modules\functions\wavedefense\core";

			class buildWaveComposition {};
			class selectSpawnPositions {};
			class spawnWave {};
			class waveLoop {};
		};

		class WaveDefense_UI
		{
			file = "z\MET\addons\modules\functions\wavedefense\ui";

			class updateWaveHUD {};
			class showWaveHUD {};
			class hideWaveHUD {};
		};*/

		class Portals
		{
			file = "z\MET\addons\modules\functions\teleport";

			class getPortalID {};
			class modulePortal {};
			class portalClientTransition {};
			class triggerPortalTeleport {};
		};
	};
};

/*class MET_SupportPad_VehicleCosts
{
	Default = 500;

	B_G_Offroad_01_F = 100;
	B_G_Offroad_01_armed_F = 150;
	B_G_Offroad_01_AT_F = 200;

	MET_ARC_170 = 750;
	MET_Ywing_V1 = 850;
	MET_Z95_Base = 750;
	MET_LAAT_MK1 = 1250;
	MET_LAAT_Mk2 = 1000;
	MET_LAAT_Mk2_Lamps = 900;
	MET_LAATCMK2 = 750;

	MET_ATTE_Base = 1500;
	MET_Juggernaut = 1250;
	MET_Tx130_Super_v1 = 1000;
	MET_Tx130_Base_V1 = 750;
	MET_Tx130_GL_v1 = 1000;

	MET_Bantha_C_AA = 750;
	MET_Bantha_C_IFV = 750;
	MET_Bantha_C_Mortar = 750;
	MET_Bantha_E_MSV = 250;
	MET_Bantha_C_Unarmed = 250;
	MET_Bantha_T_Assault = 500;
	MET_Bantha_T_Cargo = 500;

	MET_BARC = 150;
	MET_BARC_SideCar = 300;
	MET_ISP = 350;
	MET_ISP_Transport = 175;
};*/

/*class MET_SupportPad_Presets
{
	class Default
	{
		displayName = "Default";
		vehicleClasses[] =
		{
			"B_G_Offroad_01_F",
			"B_G_Offroad_01_armed_F",
			"B_G_Offroad_01_AT_F"
		};
	};

	class MET_SupportPad_Air : Default
	{
		displayName = "Air";
		vehicleClasses[] =
		{
			"MET_ARC_170",
			"MET_Ywing_V1",
			"MET_Z95_Base",
			"MET_LAAT_MK1",
			"MET_LAAT_Mk2",
			"MET_LAAT_Mk2_Lamps",
			"MET_LAATCMK2"
		};
	};

	class MET_SupportPad_Armor : Default
	{
		displayName = "Armor";
		vehicleClasses[] =
		{
			"MET_ATTE_Base",
			"MET_Juggernaut",
			"MET_Tx130_Super_v1",
			"MET_Tx130_Base_V1",
			"MET_Tx130_GL_v1"
		};
	};

	class MET_SupportPad_AllGround : Default
	{
		displayName = "All Ground";
		vehicleClasses[] =
		{
			"MET_Bantha_C_AA",
			"MET_Bantha_C_IFV",
			"MET_Bantha_C_Mortar",
			"MET_Bantha_E_MSV",
			"MET_Bantha_C_Unarmed",
			"MET_Bantha_T_Assault",
			"MET_Bantha_T_Cargo",
			"MET_BARC",
			"MET_BARC_SideCar",
			"MET_ISP_Transport",
			"MET_ISP"

		};
	};

	class MET_SupportPad_Bantha : Default
	{
		displayName = "Banthas Only";
		vehicleClasses[] =
		{
			"MET_Bantha_C_AA",
			"MET_Bantha_C_IFV",
			"MET_Bantha_C_Mortar",		
			"MET_Bantha_E_MSV",
			"MET_Bantha_C_Unarmed",
			"MET_Bantha_T_Assault",
			"MET_Bantha_T_Cargo"
		};
	};

	class MET_SupportPad_Speeders : Default
	{
		displayName = "Speeders Only";
		vehicleClasses[] =
		{		
			"MET_ISP_Transport",
			"MET_ISP",
			"MET_BARC",
			"MET_BARC_SideCar"
		};
	};

	class MET_SupportPad_BARC : Default
	{
		displayName = "BARCs Only";
		vehicleClasses[] =
		{
			"MET_BARC",
			"MET_BARC_SideCar"
		};
	};
};*/
