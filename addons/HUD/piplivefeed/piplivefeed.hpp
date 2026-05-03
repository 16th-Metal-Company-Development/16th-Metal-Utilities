	class OPTRE_Communications_CamFrame
	{

			idd = -1;
			fadein = 0;
			fadeout = 0;
			duration = 9999;
		
		class controls {
			
			class boarder: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\data\PIP\pip_border.paa";
				x = 0.695937 * safezoneW + safezoneX;
				y = 0.148 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.407 * safezoneH;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Frame"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "#(argb,256,256,1)r2t(OPTRE_HUD_LiveFeedRender,1.0)";
				x = 0.79341 * safezoneW + safezoneX;
				y = 0.2503 * safezoneH + safezoneY;
				w = 0.1965 * safezoneW;
				h = 0.2024 * safezoneH; 
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Render"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_signal: OPTRE_HUD_RscPicture
			{
				idc = 10;
				text = "OPTRE_Hud\data\PIP\pip_signal_100.paa";
				x = 0.695937 * safezoneW + safezoneX;
				y = 0.148 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.407 * safezoneH;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_sigStrenght"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_bliperThing: OPTRE_HUD_RscPicture
			{
				idc = 11;
				text = "OPTRE_Hud\data\PIP\pip_rec_bip.paa";
				x = 0.695937 * safezoneW + safezoneX;
				y = 0.148 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.407 * safezoneH;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_bip"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_pulse_weak : OPTRE_HUD_RscPicture
			{
				idc = 200;
				text = "OPTRE_Hud\data\PIP\pip_link_pulse_1.paa";
				x = 0.695937 * safezoneW + safezoneX;
				y = 0.148 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.407 * safezoneH;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_PulseWeak"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_pulse : OPTRE_HUD_RscPicture
			{
				idc = 12;
				text = "OPTRE_Hud\data\PIP\pip_link_pulse_5.paa";
				x = 0.695937 * safezoneW + safezoneX;
				y = 0.148 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.407 * safezoneH;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Pulse"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text1: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = ""; //--- ToDo: Localize;
				x = 0.783594 * safezoneW + safezoneX;
				y = 0.188 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.036;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text1"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text2: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				text = ""; //--- ToDo: Localize;
				x = 0.783594 * safezoneW + safezoneX;
				y = 0.221 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.036;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text2"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text1_l: OPTRE_HUD_SructuredText
			{
				idc = -1;
				text = "DESIGNATION"; //--- ToDo: Localize;
				x = 0.783594 * safezoneW + safezoneX;
				y = 0.188 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.036;
				class Attributes {
					align = "left";
					color = "#070103"; 
				};
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text1_l"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text2_l: OPTRE_HUD_SructuredText
			{
				idc = -1;
				text = "UNIT ID"; //--- ToDo: Localize;
				x = 0.783594 * safezoneW + safezoneX;
				y = 0.221 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.036;
				class Attributes {
					align = "left";
					color = "#070103"; 
				};
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text2_l"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			
		};

	};