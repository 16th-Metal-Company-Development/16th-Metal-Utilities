class CfgPatches
{
	class HUD_Prototype
	{
		weapons[]=
		{
			// Base Trooper
			"MET_Helmet_HUD_Test"

		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_characters_F",
            "MET_HUD",
            "Armor_Rewrite"
		};
		author="DJ, LCDR Wolf, JLTS Team";
		Name="16th Metal Armor";
	};
};
class CfgWeapons
{
    class MET_Helmet_Trooper_Base;
    class MET_Helmet_HUD_Test : MET_Helmet_Trooper_Base
    {
        scope = 2;
        displayName = "[16th] Trooper Helmet(Prototype)";
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Trooper_Helmet_CO.paa"
        };
        metalHUDVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		metalHUDStyle="Phase2";
    };
};