class CfgPatches
{
	class MET_HUD
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		version=0.11;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons"
		};
		skipWhenMissingDependencies=1;
		author="Article 2 Studios";
		fileName="SW_Hud.pbo";
	};
};
class OPTRE_HUD_RscPicture;
class OPTRE_HUD_SructuredText;
class OPTRE_HUD_SructuredTextCenter;
class OPTRE_HUD_SructuredTextLeft;
class RscTitles
{
    class Metal_P2_Main_1_white_NoHex
	{
		idd=8000;
		duration=99999;
		onLoad="_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc=880;
				type=82;
				model="\OPTRE_Hud\compass_mark.p3d";
				scale=3;
				direction[]={0,0,0};
				up[]={0,0,0};
				position[]={0.5,1.2,0.5};
				x=0.5;
				y=0.5;
				z=0.5;
				xBack=0.5;
				yBack=0.5;
				zBack=1.2;
				inBack=1;
				enableZoom=0;
				zoomDuration=0;
			};
			class Compass3
			{
				idc=881;
				type=82;
				model="\OPTRE_Hud\compass_mark_1.p3d";
				scale=3;
				direction[]={0,0,0};
				up[]={0,0,0};
				position[]={0.5,1.2,0.5};
				x=0.5;
				y=0.5;
				z=0.5;
				xBack=0.5;
				yBack=0.5;
				zBack=1.2;
				inBack=1;
				enableZoom=0;
				zoomDuration=0;
			};
			class Compass2
			{
				idc=882;
				type=82;
				model="\OPTRE_Hud\compass_mark_2.p3d";
				scale=3;
				direction[]={0,0,0};
				up[]={0,0,0};
				position[]={0.5,1.2,0.5};
				x=0.5;
				y=0.5;
				z=0.5;
				xBack=0.5;
				yBack=0.5;
				zBack=1.2;
				inBack=1;
				enableZoom=0;
				zoomDuration=0;
			};
			class Compass1
			{
				idc=883;
				type=82;
				model="\OPTRE_Hud\compass_mark_3.p3d";
				scale=3;
				direction[]={0,0,0};
				up[]={0,0,0};
				position[]={0.5,1.2,0.5};
				x=0.5;
				y=0.5;
				z=0.5;
				xBack=0.5;
				yBack=0.5;
				zBack=1.2;
				inBack=1;
				enableZoom=0;
				zoomDuration=0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc=2;
				text="OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x="-0.000156274 * safezoneW + safezoneX";
				y="-0.00599999 * safezoneH + safezoneY";
				w="1.00031 * safezoneW";
				h="1.012 * safezoneH";
				colorText[]={1,1,1,1};
				onLoad="if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc=4;
				text="z\16th\addons\hud\Data\hud_p2\p2_holo_hud.paa";
				x="-0.000156274 * safezoneW + safezoneX";
				y="-0.00599999 * safezoneH + safezoneY";
				w="1.00031 * safezoneW";
				h="1.012 * safezoneH";
				colorText[]={1,1,1,1};
				onLoad="if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc=10001;
				text="";
				x="0.484531 * safezoneW + safezoneX";
				y="0.112 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc=10002;
				text="";
				x="0.494844 * safezoneW + safezoneX";
				y="0.112 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc=10003;
				text="";
				x="0.505156 * safezoneW + safezoneX";
				y="0.112 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc=120;
				x="0.860937 * safezoneW + safezoneX";
				y="0.775 * safezoneH + safezoneY";
				w="0.12375 * safezoneW";
				h="0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc=121;
				x="0.922813 * safezoneW + safezoneX";
				y="0.912 * safezoneH + safezoneY";
				w="0.061875 * safezoneW";
				h="0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc=122;
				x="0.778437 * safezoneW + safezoneX";
				y="0.896 * safezoneH + safezoneY";
				w="0.04125 * safezoneW";
				h="0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc=123;
				x="0.860937 * safezoneW + safezoneX";
				y="0.912 * safezoneH + safezoneY";
				w="0.061875 * safezoneW";
				h="0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc=101;
				x="0.850625 * safezoneW + safezoneX";
				y="0.841 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc=102;
				x="0.840312 * safezoneW + safezoneX";
				y="0.841 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc=103;
				x="0.83 * safezoneW + safezoneX";
				y="0.841 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc=104;
				x="0.762969 * safezoneW + safezoneX";
				y="0.896 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc=105;
				x="0.773281 * safezoneW + safezoneX";
				y="0.896 * safezoneH + safezoneY";
				w="0.0103125 * safezoneW";
				h="0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc=300;
				x="0.855781 * safezoneW + safezoneX";
				y="0.775 * safezoneH + safezoneY";
				w="0.134062 * safezoneW";
				h="0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc=301;
				x="0.762969 * safezoneW + safezoneX";
				y="0.962 * safezoneH + safezoneY";
				w="0.0721875 * safezoneW";
				h="0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc=302;
				x="0.855781 * safezoneW + safezoneX";
				y="0.775 * safezoneH + safezoneY";
				w="0.134062 * safezoneW";
				h="0.022 * safezoneH";
			};
		};
	};
};
class CfgOptreHudSchemes
{
	class Phase2
	{
		class MainDialogs
		{
			class white1
			{
				value[]=
				{
					"Metal_P2_Main_1_white_NoHex",
					"[Plain] White",
					"1,1,1,0.28"
				};
			};
		};
		class LHDs
		{
			LHD_0[]=
			{
				"",
				"LHD OFF"
			};
			LHD_1[]=
			{
				"OPTRE_LHD_LeftBottom_Radar",
				"LHD Identify Friend "
			};
			LHD_2[]=
			{
				"OPTRE_LHD_LeftBottom_PIP",
				"LHD Team Shoulder Cameras"
			};
			LHD_3[]=
			{
				"OPTRE_LHD_LeftBottom_HudMap",
				"LHD Personal Navigation Assistant"
			};
			LHD_4[]=
			{
				"",
				""
			};
		};
		class AmmoCounters
		{
			smg[]=
			{
				"DialogName",
				3,
				60
			};
		};
		healthBar="OPTRE_ODST_HealthBar";
		ammoCounter="OPTRE_ODST_WeaponProgress";
		sheildBar="";
		overSheildBar="";
		armMenuItems[]={};
	};
};