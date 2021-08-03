#include "macros.hpp"


class CfgPatches
{
    class opt_core
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.100000;
        version = VERSION;
        versionStr = QUOTE(VERSION);
        versionAr[] = {VERSION_AR};
        requiredAddons[] = {"A3_Ui_F", "A3_Ui_F_Data", "A3_Functions_F", "A3_UIFonts_F", "A3_Data_F"};
    };
};

class CfgFactionClasses
{
    class BLU_F;
    class OPF_F;
    class IND_F;

    class OPT_NATO : BLU_F
    {
        displayName = "OPT NATO";
        priority = 3;
    };

    class OPT_NATO_T : OPT_NATO
    {
        displayName = "OPT NATO (Pazifik)";
    };

    class OPT_CSAT : OPF_F
    {
        displayName = "OPT CSAT";
        priority = 3;
    };

    class OPT_CSAT_T : OPT_CSAT
    {
        displayName = "OPT CSAT (Pazifik)";
    };

    class OPT_AAF : IND_F
    {
        displayName = "OPT AAF";
        priority = 3;
    };

    class OPT_Maintainer : IND_F
    {
        displayName = "Maintainer";
        priority = 4;
    };

    class OPT_WP : OPF_F
    {
        displayName = "OPT Warschauer Pakt";
    };

    class OPT_NATO_CUP : BLU_F
    {
        displayName = "OPT NATO kalter Krieg";
    };

    class OPT_Sowjet : OPF_F
    {
        displayName = "OPT Sowjet";
    };

    class OPT_FIN : BLU_F
    {
        displayName = "OPT Finland";
    };
};
