class CfgPatches
{
	class MET_spotlight
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.60000002;
		requiredAddons[]=
		{
			"A3_3den"
		};
		version=2;
		versionStr=2;
		versionAr[]={2,0};
		author="Lyy Amao, based on Ampersand";
	};
};
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		class serverOperations
		{
			text="Metal Company Operations Server";
			textIsQuote=0;
			picture="\gold_serverspotlight\button1.paa";
			action="connectToServer ['208.73.202.68', 2302, 'OneSix']";
			actionText="Play";
			condition="true";
		};
	};
	class Controls
    {
        class BackgroundSpotlight: RscPicture
        {
            show = 1;
        };
        class BackgroundSpotlightLeft: BackgroundSpotlight
        {
            show = 1;
        };
        class BackgroundSpotlightRight: BackgroundSpotlightLeft
        {
            show = 1;
        };
        class Spotlight1: RscMainMenuSpotlight //Left Spotlight
        {
            show = 1;
        };
        class Spotlight2: RscText //Center Spotlight
        {
            idc = 1020;
            x = "0.5 - (0.5 *     10) *     (pixelW * pixelGridNoUIScale * 2)";
            y = "0.5 - (    10 / 2) *     (pixelH * pixelGridNoUIScale * 2)";
            w = "10 *     (pixelW * pixelGridNoUIScale * 2)";
            h = "10 *     (pixelH * pixelGridNoUIScale * 2)";
            show = 1;
        };
        class Spotlight3: RscMainMenuSpotlight //Right Spotlight
        {
            show = 1;
        };
        class SpotLightPrev: RscActivePictureKeepAspect
        {
            show = 1;
        };
        class SpotlightNext: SpotLightPrev
        {
            show = 1;
        };
    };
};