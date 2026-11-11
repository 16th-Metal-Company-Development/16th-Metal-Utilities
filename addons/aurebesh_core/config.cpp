#include "script_component.hpp"

class CfgPatches
{
    class met_aurebesh_core
    {
        name = "16th Aurebesh Core";
        units[] = {};
        weapons[] = {};
		requiredVersion = 2.10;
        requiredAddons[] = {"A3_Ui_F"};
        authors[] = {"Hazmat"};
    };
};

#ifndef AUREBESH_DISABLED
    #include "cfgfontfamilies.hpp"
#endif
