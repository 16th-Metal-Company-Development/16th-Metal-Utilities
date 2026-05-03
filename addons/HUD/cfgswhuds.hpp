class CfgOptreHudSchemes
{
	
	class Phase2 
	{
	
		class MainDialogs {
		
			// Hex
			
			// Plain
			class white1  			{ value[]  = {"OPTRE_P2_Main_1_white_NoHex",			"[Plain] White"				,"1,1,1,0.28"			};	};

			// Quite
			
			//broken -- Make What color tho? --  Venom likes purple, It become purple xoxo
		};
	
		class LHDs {
		
			LHD_0[] = {"","LHD OFF"};
			LHD_1[] = {"OPTRE_LHD_LeftBottom_Radar","LHD Identify Friend "};
			LHD_2[] = {"OPTRE_LHD_LeftBottom_PIP","LHD Team Shoulder Cameras"};
			LHD_3[] = {"OPTRE_LHD_LeftBottom_HudMap","LHD Personal Navigation Assistant"};
			LHD_4[] = {"",""};
			
		};
		
		class AmmoCounters {
			
			smg[] = {"DialogName",3,60};
			
		};
		
		healthBar = "OPTRE_ODST_HealthBar";
		ammoCounter = "OPTRE_ODST_WeaponProgress";
		sheildBar = "";
		overSheildBar = "";
		armMenuItems[] = {};
		
	};
	
};