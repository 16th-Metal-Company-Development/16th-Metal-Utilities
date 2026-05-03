class OPTRE_ODST_BaseHUD  {
	idd = 8000; 
	duration = 99999; 
	onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
	//onLoad = "_this execVM (OPTRE_HUD_PATH + 'Scripts\HudLoaders\Fn_HudLoad_ODST1.sqf')";
		
	class Objects
	{
		class Compass { 
			//-0.45 // bar, heli quad
			//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
			//colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};		
			
			idc = 880; 
			type = 82; 
			model = "\OPTRE_Hud\compass_mark_org.p3d";
			//model = "\OPTRE_Hud\compass_mark_1.p3d";
			scale = 3; // 3 is good to fit centre of health bar. 
			
			direction[] = {0,0,0}; 
			up[] = {0,0,0}; 
			position[] = {0.5,1.2,0.5};
			
			x = 0.5;
			y = 0.5; 
			z = 0.5; 
			//positionBack[] = {0,0,1.2}; optional 
			
			xBack = 0.5; 
			yBack = 0.5; 
			zBack = 1.2; 
			inBack = 1; 
			
			enableZoom = 0; 
			zoomDuration = 0;
		};
		class Compass3 { 
				//-0.45 // bar, heli quad
				//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
				
				idc = 881; 
				type = 82; 
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";// model = "\OPTRE_Hud\compass_mark_1_org.p3d"; 
				//model = "\OPTRE_Hud\compass_mark_1.p3d";
				scale = 3; // 3 is good to fit centre of health bar. 
				
				direction[] = {0,0,0}; 
				up[] = {0,0,0}; 
				position[] = {0.5,1.2,0.5};
				
				x = 0.5;
				y = 0.5; 
				z = 0.5; 
				//positionBack[] = {0,0,1.2}; optional 
				
				xBack = 0.5; 
				yBack = 0.5; 
				zBack = 1.2; 
				inBack = 1; 
				
				enableZoom = 0; 
				zoomDuration = 0;
		};
		class Compass2 { 
			//-0.45 // bar, heli quad
			//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
			
			idc = 882; 
			type = 82; 
			model = "\OPTRE_Hud\compass_mark_2_org.p3d";
			//model = "\OPTRE_Hud\compass_mark_1.p3d";
			scale = 3; // 3 is good to fit centre of health bar. 
			
			direction[] = {0,0,0}; 
			up[] = {0,0,0}; 
			position[] = {0.5,1.2,0.5};
			
			x = 0.5;
			y = 0.5; 
			z = 0.5; 
			//positionBack[] = {0,0,1.2}; optional 
			
			xBack = 0.5; 
			yBack = 0.5; 
			zBack = 1.2; 
			inBack = 1; 
			
			enableZoom = 0; 
			zoomDuration = 0;
		};
		class Compass1 { 
			//-0.45 // bar, heli quad
			//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
			
			idc = 883; 
			type = 82; 
			model = "\OPTRE_Hud\compass_mark_3_org.p3d"; 
			//model = "\OPTRE_Hud\compass_mark_1.p3d";
			scale = 3; // 3 is good to fit centre of health bar. 
			
			direction[] = {0,0,0}; 
			up[] = {0,0,0}; 
			position[] = {0.5,1.2,0.5};
			
			x = 0.5;
			y = 0.5; 
			z = 0.5; 
			//positionBack[] = {0,0,1.2}; optional 
			
			xBack = 0.5; 
			yBack = 0.5; 
			zBack = 1.2; 
			inBack = 1; 
			
			enableZoom = 0; 
			zoomDuration = 0;
		};				
	}; 
		
	class controls {
		
		// Main Frame 
		
		// Load Annim Only //
		class RscPicture_120: OPTRE_HUD_RscPicture
		{
			idc = 1;

			text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa"; //--- ToDo: Localize; 
			x = -0.000156274 * safezoneW + safezoneX;
			y = -0.00599999 * safezoneH + safezoneY;
			w = 1.00031 * safezoneW;
			h = 1.012 * safezoneH;
			colorText[] = {0.94,0.84,0.16,1};
			//onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame; if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
		};
		class RscPicture_121: OPTRE_HUD_RscPicture
		{
			idc = 2;

			text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa"; //--- ToDo: Localize;
			x = -0.000156274 * safezoneW + safezoneX;
			y = -0.00599999 * safezoneH + safezoneY;
			w = 1.00031 * safezoneW;
			h = 1.012 * safezoneH;
			colorText[] = {0.94,0.84,0.16,1};
			//onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame; if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
		};
		// Load Annim Only //
		class RscPicture_123: OPTRE_HUD_RscPicture
		{
			idc = 4;

			text = "z\16th\addons\hud\Data\hud_p2\p2_holo_hud.paa"; //--- ToDo: Localize;
			x = -0.000156274 * safezoneW + safezoneX;
			y = -0.00599999 * safezoneH + safezoneY;
			w = 1.00031 * safezoneW;
			h = 1.012 * safezoneH;
			colorText[] = {0.94,0.84,0.16,1};
			onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
		};
		
		// Compass Numbers ///
		class compass_No1: OPTRE_HUD_RscPicture
		{
			idc = 10001;
			text = ""; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.112 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class compass_No2: OPTRE_HUD_RscPicture
		{
			idc = 10002;
			text = ""; //--- ToDo: Localize;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.112 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class compass_No3: OPTRE_HUD_RscPicture
		{
			idc = 10003;
			text = ""; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.112 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
		};

		// Icon Displays
		class primeWeaponIcon: OPTRE_HUD_RscPicture
		{
			idc = 120;
			x = 0.860937 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.132 * safezoneH;
		};					
		class secondaryWeaponIcon: OPTRE_HUD_RscPicture
		{
			idc = 121;
			x = 0.922813 * safezoneW + safezoneX;
			y = 0.912 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class throwIcon: OPTRE_HUD_RscPicture
		{
			idc = 122;
			x = 0.778437 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class atIcon: OPTRE_HUD_RscPicture
		{
			idc = 123;
			x = 0.860937 * safezoneW + safezoneX;
			y = 0.912 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.066 * safezoneH;		
		};			
		
		// Ammo Count
		class RscPicture_101: OPTRE_HUD_RscPicture
		{
			idc = 101;
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscPicture_102: OPTRE_HUD_RscPicture
		{
			idc = 102;
			x = 0.840312 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;			
		};
		class RscPicture_103: OPTRE_HUD_RscPicture
		{
			idc = 103;
			x = 0.83 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;		
		};

		class left: OPTRE_HUD_RscPicture
		{
			idc = 104;	
			x = 0.762969 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class right: OPTRE_HUD_RscPicture
		{
			idc = 105;
			x = 0.773281 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		// Text Info: 
		class WeaponZero: OPTRE_HUD_SructuredText
		{
			idc = 300;
			x = 0.855781 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class GrenText: OPTRE_HUD_SructuredTextCenter
		{
			idc = 301;
			//text = "Smoke Grenade Whilte"; //--- ToDo: Localize;
			x = 0.762969 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};			
		class WeaponName: OPTRE_HUD_SructuredTextLeft
		{
			idc = 302;
			x = 0.855781 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};