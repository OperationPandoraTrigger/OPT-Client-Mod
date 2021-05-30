#include "\opt\opt_client\addons\core\macros.hpp"

class CfgPatches
{
    class opt_characters
    {
        units[] = {"OPT_NATO_Pilot", "OPT_NATO_Pilot_T", "OPT_B_diver_F", "OPT_NATO_Scharfschuetze", "OPT_NATO_Scharfschuetze_2", "OPT_NATO_Beobachter", "OPT_NATO_Scharfschuetze_T",
                   "OPT_NATO_Scharfschuetze_2_T", "OPT_NATO_Beobachter_T", "OPT_NATO_Soldat", "OPT_NATO_Soldat_T", "OPT_NATO_Besatzungsmitglied", "OPT_NATO_Besatzungsmitglied_T",
                   "OPT_NATO_Offizier", "OPT_NATO_Offizier_T", "OPT_NATO_Truppfuehrer", "OPT_NATO_Gruppenfuehrer", "OPT_NATO_Gruppenfuehrer_T", "OPT_NATO_Sanitaeter", "OPT_NATO_Sanitaeter_T",
                   "OPT_NATO_Pionier", "OPT_NATO_Pionier_T", "OPT_NATO_Operator", "OPT_NATO_Operator_T", "OPT_NATO_Grenadier", "OPT_NATO_Grenadier_T", "OPT_NATO_Luftabwehrspezialist",
                   "OPT_NATO_Luftabwehrspezialist_T", "OPT_NATO_PA_Schuetze", "OPT_NATO_PA_Schuetze_T", "OPT_NATO_PA_Schuetze_Heavy", "OPT_NATO_PA_Schuetze_Heavy_T", "OPT_NATO_MG_Schuetze",
                   "OPT_NATO_MG_Schuetze_T", "OPT_NATO_LMG_Schuetze_T", "OPT_NATO_SMG_Schuetze", "OPT_NATO_SMG_Schuetze_T", "OPT_NATO_Aufklaerung_Truppfuehrer", "OPT_NATO_Aufklaerung_Truppfuehrer_T",
                   "OPT_NATO_Aufklaerung_Sprengmeister", "OPT_NATO_Aufklaerung_Sprengmeister_T", "OPT_NATO_Aufklaerung_JTAC", "OPT_NATO_Aufklaerung_JTAC_T", "OPT_NATO_Aufklaerung_Scharfschutze",
                   "OPT_NATO_Aufklaerung_Scharfschutze_T", "OPT_NATO_Aufklaerung_Scharfschutze_2", "OPT_NATO_Aufklaerung_Spaeher_AT", "OPT_NATO_Aufklaerung_Spaeher_AT_T",
                   "OPT_CSAT_Pilot", "OPT_CSAT_Pilot_T", "OPT_CSAT_Offizier", "OPT_CSAT_Offizier_T", "OPT_O_diver_F", "OPT_CSAT_Truppfuehrer", "OPT_CSAT_Truppfuehrer_T", "OPT_CSAT_Gruppenfuehrer",
                   "OPT_CSAT_Gruppenfuehrer_T", "OPT_CSAT_Soldat", "OPT_CSAT_Soldat_T", "OPT_CSAT_Grenadier", "OPT_CSAT_Grenadier_T", "OPT_CSAT_Operator", "OPT_CSAT_Operator_T", "OPT_CSAT_MG_Schuetze",
                   "OPT_CSAT_MG_Schuetze_T", "OPT_CSAT_LMG_Schuetze_T", "OPT_CSAT_SMG_Schuetze", "OPT_CSAT_SMG_Schuetze_T", "OPT_CSAT_PA_Schuetze", "OPT_CSAT_PA_Schuetze_T", "OPT_CSAT_PA_Schuetze_Heavy",
                   "OPT_CSAT_PA_Schuetze_Heavy_T", "OPT_CSAT_Luftabwehrspezialist", "OPT_CSAT_Luftabwehrspezialist_T", "OPT_CSAT_Scharfschuetze", "OPT_CSAT_Scharfschuetze_2", "OPT_CSAT_Beobachter",
                   "OPT_CSAT_Scharfschuetze_T", "OPT_CSAT_Scharfschuetze_2_T", "OPT_CSAT_Beobachter_T", "OPT_CSAT_Pionier", "OPT_CSAT_Pionier_T", "OPT_CSAT_Sanitaeter", "OPT_CSAT_Sanitaeter_T",
                   "OPT_CSAT_Besatzungsmitglied", "OPT_CSAT_Besatzungsmitglied_T", "OPT_CSAT_Aufklaerung_Truppfuehrer", "OPT_CSAT_Aufklaerung_Truppfuehrer_T", "OPT_CSAT_Aufklaerung_Sprengmeister",
                   "OPT_CSAT_Aufklaerung_Sprengmeister_T", "OPT_CSAT_Aufklaerung_JTAC", "OPT_CSAT_Aufklaerung_JTAC_T", "OPT_CSAT_Aufklaerung_Scharfschutze", "OPT_CSAT_Aufklaerung_Scharfschutze_2",
                   "OPT_CSAT_Aufklaerung_Scharfschutze_T", "OPT_CSAT_Aufklaerung_Spaeher_AT", "OPT_CSAT_Aufklaerung_Spaeher_AT_T"};
        weapons[] = {"OPT_H_HelmetB_light_snakeskin", "OPT_H_HelmetB_Light_tna_F", "OPT_H_HelmetB_snakeskin", "OPT_H_HelmetB_grass", "OPT_H_HelmetB_tna_F", "OPT_H_HelmetO_ocamo", "OPT_H_HelmetO_ghex_F",
                     "OPT_H_HelmetLeaderO_ocamo", "OPT_H_HelmetLeaderO_ghex_F", "OPT_H_HelmetSpecO_blk", "OPT_H_HelmetSpecO_ghex_F", "OPT_V_HarnessO_brn", "OPT_V_HarnessOGL_brn", "OPT_V_HarnessOGL_ghex_F",
                     "OPT_V_HarnessO_ghex_F", "OPT_V_TacVest_khk", "OPT_V_TacVest_2_khk", "OPT_V_TacVest_blk", "OPT_V_TacVest_oli", "OPT_V_BandollierB_khk", "OPT_V_BandollierB_2_khk", "OPT_V_BandollierB_rgr",
                     "OPT_V_BandollierB_ghex_F", "OPT_V_BandollierB_2_ghex_F", "OPT_V_Chestrig_khk", "OPT_V_Chestrig_rgr", "OPT_V_Chestrig_oli", "OPT_V_PlateCarrierL_CTRG", "OPT_V_PlateCarrier1_tna_F",
                     "OPT_V_PlateCarrierH_CTRG", "OPT_V_PlateCarrier2_tna_F", "OPT_V_RebreatherB", "OPT_V_RebreatherIR"};
        requiredVersion = 0.100000;
        version = VERSION;
        versionStr = QUOTE(VERSION);
        versionAr[] = {VERSION_AR};
        requiredAddons[] = {"opt_weapons", "A3_Characters_F_Beta", "A3_Characters_F_Gamma", "a3_characters_f_epa", "A3_Characters_F_EPB", "a3_characters_f_epc",
                            "A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_INDEP", "A3_Characters_F_Bootcamp", "a3_characters_f_civil",
                            "A3_Characters_F_Exp_Vests", "A3_Characters_F_Exp_Headgear", "A3_Characters_F_Exp", "A3_Characters_F_Mark", "A3_Characters_F_Jets", "A3_Characters_F"};
    };
};

class cfgWeapons
{
    ////////////// Helme /////////////////

    class H_HelmetB_light;

    class H_HelmetB_light_snakeskin : H_HelmetB_light
    {
        class ItemInfo;
    };

    class OPT_H_HelmetB_light_snakeskin : H_HelmetB_light_snakeskin
    {
        _generalMacro = "OPT_H_HelmetB_light_snakeskin";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {


            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 4 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetB_Light_tna_F : H_HelmetB_light
    {
        class ItemInfo;
    };

    class OPT_H_HelmetB_Light_tna_F : H_HelmetB_Light_tna_F
    {
        _generalMacro = "OPT_H_HelmetB_Light_tna_F";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {


            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 4 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetB;

    class H_HelmetB_snakeskin : H_HelmetB
    {
        class ItemInfo;
    };

    class OPT_H_HelmetB_snakeskin : H_HelmetB_snakeskin
    {
        _generalMacro = "OPT_H_HelmetB_snakeskin";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {


            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetB_grass : H_HelmetB
    {
        class ItemInfo;
    };
    class OPT_H_HelmetB_grass : H_HelmetB_grass
    {
        _generalMacro = "OPT_H_HelmetB_grass";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {


            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetB_tna_F : H_HelmetB
    {
        class ItemInfo;
    };

    class OPT_H_HelmetB_tna_F : H_HelmetB_tna_F
    {
        _generalMacro = "OPT_H_HelmetB_tna_F";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {


            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetO_ocamo : H_HelmetB
    {
        class ItemInfo;
    };

    class OPT_H_HelmetO_ocamo : H_HelmetO_ocamo
    {
        _generalMacro = "OPT_H_HelmetO_ocamo";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {
    

            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 8 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetO_ghex_F : H_HelmetO_ocamo
    {
        class ItemInfo;
    };

    class OPT_H_HelmetO_ghex_F : H_HelmetO_ghex_F
    {
        _generalMacro = "OPT_H_HelmetO_ghex_F";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {
    

            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 8 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetLeaderO_ocamo : H_HelmetO_ocamo
    {
        class ItemInfo;
    };

    class OPT_H_HelmetLeaderO_ocamo : H_HelmetLeaderO_ocamo
    {
        _generalMacro = "OPT_H_HelmetLeaderO_ocamo";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {
    

            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 12 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetLeaderO_ghex_F : H_HelmetLeaderO_ocamo
    {
    };

    class OPT_H_HelmetLeaderO_ghex_F : H_HelmetLeaderO_ghex_F
    {
        _generalMacro = "OPT_H_HelmetLeaderO_ghex_F";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {
    

            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 12 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetSpecO_ocamo;

    class H_HelmetSpecO_blk : H_HelmetSpecO_ocamo
    {
        class ItemInfo;
    };

    class OPT_H_HelmetSpecO_blk : H_HelmetSpecO_blk
    {
        _generalMacro = "OPT_H_HelmetSpecO_blk";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {


            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 10 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_HelmetSpecO_ghex_F : H_HelmetSpecO_ocamo
    {
        class ItemInfo;
    };

    class OPT_H_HelmetSpecO_ghex_F : H_HelmetSpecO_ghex_F
    {
        _generalMacro = "OPT_H_HelmetSpecO_ghex_F";
        descriptionShort = "$STR_A3_SP_AL_II";

        class ItemInfo : ItemInfo
        {


            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 6; // 10 //
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    /////////////////// Westen ///////////////////

    class Vest_NoCamo_Base;

    class V_HarnessO_brn : Vest_NoCamo_Base
    {
        class ItemInfo;
    };

    class OPT_V_HarnessO_brn : V_HarnessO_brn
    {
        _generalMacro = "OPT_V_HarnessO_brn";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply160";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_HarnessOGL_brn : Vest_NoCamo_Base
    {
        class ItemInfo;
    };

    class OPT_V_HarnessOGL_brn : V_HarnessOGL_brn
    {
        _generalMacro = "OPT_V_HarnessOGL_brn";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply120";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_HarnessOGL_ghex_F : V_HarnessOGL_brn
    {
    };

    class OPT_V_HarnessOGL_ghex_F : V_HarnessOGL_ghex_F
    {
        _generalMacro = "OPT_V_HarnessOGL_ghex_F";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply120";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_HarnessO_gry : V_HarnessO_brn
    {
    };

    class V_HarnessO_ghex_F : V_HarnessO_gry
    {
    };

    class OPT_V_HarnessO_ghex_F : V_HarnessO_ghex_F
    {
        _generalMacro = "OPT_V_HarnessO_ghex_F";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {
    
            containerClass = "Supply160";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class Vest_Camo_Base;

    class V_TacVest_khk : Vest_Camo_Base
    {
        class ItemInfo;
    };

    class OPT_V_TacVest_khk : V_TacVest_khk
    {
        _generalMacro = "OPT_V_TacVest_khk";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply100";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class OPT_V_TacVest_2_khk : V_TacVest_khk
    {
        _generalMacro = "OPT_V_TacVest_2_khk";
        descriptionShort = "$STR_A3_SP_AL_I";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply100";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.500000;
                };
            };
        };
    };

    class V_TacVest_blk : V_TacVest_khk
    {
        class ItemInfo;
    };

    class OPT_V_TacVest_blk : V_TacVest_blk
    {
        _generalMacro = "OPT_V_TacVest_blk";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply100";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_TacVest_oli : V_TacVest_khk
    {
    };

    class OPT_V_TacVest_oli : V_TacVest_oli
    {
        _generalMacro = "OPT_V_TacVest_oli";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply100";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class OPT_V_TacVest_2_oli : V_TacVest_oli
    {
        _generalMacro = "OPT_V_TacVest_2_oli";
        descriptionShort = "Keine Panzerung";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply100";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 0;
                    passThrough = 0.500000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 0;
                    passThrough = 0.500000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 0;
                    passThrough = 0.500000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.500000;
                };
            };
        };
    };

    class V_BandollierB_khk : Vest_Camo_Base
    {
        class ItemInfo;
    };

    class OPT_V_BandollierB_khk : V_BandollierB_khk
    {
        _generalMacro = "OPT_V_BandollierB_khk";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply80";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class OPT_V_BandollierB_2_khk : V_BandollierB_khk
    {
        _generalMacro = "OPT_V_BandollierB_2_khk";
        descriptionShort = "$STR_A3_SP_AL_I";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply80";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.500000;
                };
            };
        };
    };

    class V_BandollierB_rgr : V_BandollierB_khk
    {
        class ItemInfo;
    };

    class OPT_V_BandollierB_rgr : V_BandollierB_rgr
    {
        _generalMacro = "OPT_V_BandollierB_rgr";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply80";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_BandollierB_ghex_F : V_BandollierB_khk
    {
    };

    class OPT_V_BandollierB_ghex_F : V_BandollierB_ghex_F
    {
        _generalMacro = "OPT_V_BandollierB_ghex_F";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply80";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class OPT_V_BandollierB_2_ghex_F : OPT_V_BandollierB_ghex_F
    {
        _generalMacro = "OPT_V_BandollierB_2_ghex_F";
        descriptionShort = "$STR_A3_SP_AL_I";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply80";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.500000;
                };
            };
        };
    };

    class V_Chestrig_khk : Vest_Camo_Base
    {
        class ItemInfo;
    };

    class OPT_V_Chestrig_khk : V_Chestrig_khk
    {
        _generalMacro = "OPT_V_Chestrig_khk";
        descriptionShort = "$STR_A3_SP_AL_I";

        class ItemInfo : ItemInfo
        {
    
            containerClass = "Supply140";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.500000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.500000;
                };
            };
        };
    };

    class V_Chestrig_rgr : V_Chestrig_khk
    {
    };

    class OPT_V_Chestrig_rgr : V_Chestrig_rgr
    {
        _generalMacro = "OPT_V_Chestrig_rgr";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply140";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_Chestrig_oli : Vest_Camo_Base
    {
        class ItemInfo;
    };

    class OPT_V_Chestrig_oli : V_Chestrig_oli
    {
        _generalMacro = "OPT_V_Chestrig_oli";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply140";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_PlateCarrier1_rgr;

    class V_PlateCarrierL_CTRG : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };

    class OPT_V_PlateCarrierL_CTRG : V_PlateCarrierL_CTRG
    {
        _generalMacro = "OPT_V_PlateCarrierL_CTRG";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {
    
            containerClass = "Supply140";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_PlateCarrier1_blk;

    class V_PlateCarrier1_tna_F : V_PlateCarrier1_blk
    {
        class ItemInfo;
    };

    class OPT_V_PlateCarrier1_tna_F : V_PlateCarrier1_tna_F
    {
        _generalMacro = "OPT_V_PlateCarrier1_tna_F";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply140";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_PlateCarrier2_rgr;

    class V_PlateCarrierH_CTRG : V_PlateCarrier2_rgr
    {
        class ItemInfo;
    };

    class OPT_V_PlateCarrierH_CTRG : V_PlateCarrierH_CTRG
    {
        _generalMacro = "OPT_V_PlateCarrierH_CTRG";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply140";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_PlateCarrier2_blk;

    class V_PlateCarrier2_tna_F : V_PlateCarrier2_blk
    {
        class ItemInfo;
    };

    class OPT_V_PlateCarrier2_tna_F : V_PlateCarrier2_tna_F
    {
        _generalMacro = "OPT_V_PlateCarrier2_tna_F";
        descriptionShort = "$STR_A3_SP_AL_III";

        class ItemInfo : ItemInfo
        {

            containerClass = "Supply140";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.300000;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
        };
    };

    class V_RebreatherB : Vest_Camo_Base
    {
        class ItemInfo;
    };

    class OPT_V_RebreatherB : V_RebreatherB
    {
        _generalMacro = "OPT_V_RebreatherB";

        class ItemInfo : ItemInfo
        {

        };
    };

    class V_RebreatherIR : V_RebreatherB
    {
        class ItemInfo;
    };

    class OPT_V_RebreatherIR : V_RebreatherIR
    {
        _generalMacro = "OPT_V_RebreatherIR";

        class ItemInfo : ItemInfo
        {

        };
    };
};

class CfgVehicles
{
    class Logic;

    class opt_characters_require : Logic
    {
        displayName = "Benoetigt OPT A3 Characters";
        vehicleClass = "Modules";
    };

    class Land;

    class Man : Land
    {
    };

    class CAManBase : Man
    {
    };

    class SoldierWB : CAManBase
    {
    };

    class B_Soldier_base_F : SoldierWB
    {
    };

    class B_Soldier_04_f : B_Soldier_base_F
    {
    };

    ////////////////// NATO /////////////////////

    class B_Helipilot_F : B_Soldier_04_f
    {
        class HitPoints;
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };

    class OPT_NATO_Pilot : B_Helipilot_F
    {
        displayName = "Pilot";
        faction = "OPT_NATO_CUP";
        weapons[] = {"CUP_smg_Mac10", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_Mac10", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "SmokeShell", "SmokeShell"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"OPT_V_TacVest_blk", "H_PilotHelmetHeli_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_TacVest_blk", "H_PilotHelmetHeli_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "tf_rt1523g_big_bwmod";
        uniformClass = "U_B_HeliPilotCoveralls";
    };

    class B_Soldier_sniper_base_F : B_Soldier_base_F
    {
    };

    class B_sniper_F : B_Soldier_sniper_base_F
    {
        class HitPoints;
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };

    class OPT_NATO_Scharfschuetze : B_sniper_F
    {
        displayName = "Scharfschütze";
        faction = "OPT_NATO_CUP";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"CUP_srifle_AS50", "CUP_hgun_M9", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_AS50", "CUP_hgun_M9", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "tf_rt1523g_big_bwmod";
        uniformClass = "U_B_HeliPilotCoveralls";
    };

    class OPT_NATO_Scharfschuetze_2 : OPT_NATO_Scharfschuetze
    {
        displayName = "Scharfschütze (DMR)";
        faction = "OPT_NATO_CUP";
        Items[] = {"CUP_bipod_Harris_1A2_L_BLK"};
        respawnItems[] = {"CUP_bipod_Harris_1A2_L_BLK"};
        weapons[] = {"CUP_arifle_HK417_20", "CUP_hgun_M9", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK417_20", "CUP_hgun_M9", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShell", "SmokeShell"};
        backpack = "tf_rt1523g_big_bwmod";
        uniformClass = "U_B_HeliPilotCoveralls";
    };

    class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F
    {
        class HitPoints;
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };

    class OPT_NATO_Soldat : B_CTRG_soldier_GL_LAT_F
    {
        displayName = "Schütze";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        icon = "iconMan";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"CUP_arifle_HK416_Black","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_PlateCarrierH_CTRG", "OPT_H_HelmetB_light_snakeskin", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierH_CTRG", "OPT_H_HelmetB_light_snakeskin", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "";
    };

    class B_Soldier_03_f : B_Soldier_base_F
    {
    };

    class B_CTRG_soldier_AR_A_F : B_Soldier_03_f
    {
        class HitPoints;
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };

    class OPT_NATO_Besatzungsmitglied : B_CTRG_soldier_AR_A_F
    {
        displayName = "Besatzungsmitglied";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        icon = "iconMan";
        weapons[] = {"CUP_smg_Mac10","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_Mac10","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M","SmokeShell", "SmokeShell"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"OPT_V_BandollierB_rgr", "H_HelmetCrew_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_BandollierB_rgr", "H_HelmetCrew_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "tf_rt1523g_big_bwmod";
    };

    class OPT_NATO_Offizier : B_CTRG_soldier_AR_A_F
    {
        icon = "iconManOfficer";
        displayName = "Offizier";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_BandollierB_rgr", "H_Beret_Colonel", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_BandollierB_rgr", "H_Beret_Colonel", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "tf_rt1523g_big_bwmod";
    };

    class OPT_NATO_Truppfuehrer : OPT_NATO_Soldat
    {
        icon = "iconManLeader";
        displayName = "Truppführer";
        faction = "OPT_NATO_CUP";
        weapons[] = {"CUP_arifle_HK416_Black", "OPT_Laserdesignator", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "OPT_Laserdesignator", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell", "Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell", "Laserbatteries"};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_snakeskin", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_snakeskin", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "tf_rt1523g_big_bwmod";
    };

    class OPT_NATO_Sanitaeter : B_CTRG_soldier_AR_A_F
    {
        icon = "iconManMedic";
        displayName = "Sanitäter";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        attendant = 1;
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "OPT_B_AssaultPack_rgr_Medic";
    };

    class OPT_NATO_Sprengmeister : B_CTRG_soldier_AR_A_F
    {
        displayName = "Sprengmeister";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        Items[] = { "MineDetector"};
        respawnItems[] = {"MineDetector"};
        engineer = 0;
        canDeactivateMines = 1;
        icon = "iconManEngineer";
        weapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "OPT_B_Kitbag_rgr_Eng";
    };

    class OPT_NATO_Ingenieur : B_CTRG_soldier_AR_A_F
    {
        displayName = "Ingenieur";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        Items[] = {};
        respawnItems[] = {};
        engineer = 0;
        canDeactivateMines = 1;
        icon = "iconManEngineer";
        weapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "OPT_B_Kitbag_rgr_Eng";
    };

    class OPT_NATO_Operator : B_CTRG_soldier_AR_A_F
    {
        displayName = "Drohnen-Operator";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        icon = "iconMan";
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "NVGoggles", "B_UavTerminal"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "NVGoggles", "B_UavTerminal"};
        weapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        backpack = "tf_rt1523g_big_bwmod";
    };

    class OPT_NATO_Grenadier : OPT_NATO_Soldat
    {
        displayName = "Grenadier";
        weapons[] = {"CUP_arifle_HK416_M203_Black","Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_M203_Black", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
    };

    class OPT_NATO_Luftabwehrspezialist : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Raketenspezialist (Flugabwehr)";
        weapons[] = {"CUP_arifle_HK416_Black", "OPT_CUP_launch_FIM92Stinger", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "OPT_CUP_launch_FIM92Stinger", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "B_TacticalPack_blk";
    };

    class OPT_NATO_PA_Schuetze : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Panzerabwehr (Schwer)";
        Items[] = {"CUP_optic_MAAWS_Scope"};
        respawnItems[] = {"CUP_optic_MAAWS_Scope"};
        weapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_MAAWS", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_MAAWS", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "B_TacticalPack_blk";
    };

    class OPT_NATO_PA_Schuetze_lt : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Panzerabwehr (Leicht)";
        Items[] = {""};
        respawnItems[] = {""};
        weapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M72A6_Loaded", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M72A6_Loaded", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        respawnLinkedItems[] = {"OPT_V_PlateCarrierL_CTRG", "OPT_H_HelmetB_grass", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles"};
        backpack = "B_TacticalPack_blk";
    };

    class OPT_NATO_MG_Schuetze : OPT_NATO_Soldat
    {
        icon = "iconManMG";
        displayName = "MG-Schütze";
        weapons[] = {"OPT_LMG_Mk200_ACO_BI_pointer_F", "OPT_hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnWeapons[] = {"OPT_LMG_Mk200_ACO_BI_pointer_F", "OPT_hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        backpack = "";
    };

    class OPT_NATO_LMG_Schuetze : OPT_NATO_MG_Schuetze
    {
        displayName = "LMG-Schütze";
        weapons[] = {"CUP_lmg_m249_pip3","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_m249_pip3", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "SmokeShell", "SmokeShell"};
        backpack = "";
    };
  
    ////////////////// CSAT /////////////////////

    class SoldierEB : CAManBase
    {
    };

    class O_Soldier_base_F : SoldierEB
    {
        class HitPoints;
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };

    class O_Soldier_02_F : O_Soldier_base_F
    {
        class HitPoints;
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };

    class O_helipilot_F : O_Soldier_02_F
    {
    };

    class OPT_CSAT_Pilot : O_helipilot_F
    {
        displayName = "Pilot";
        faction = "OPT_WP";
        weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_TacVest_2_khk", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_TacVest_2_khk", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "tf_mr3000";
    };

    class O_officer_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Offizier : O_officer_F
    {
        faction = "OPT_WP";
        weapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed",  "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK","SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_BandollierB_2_khk", "H_Beret_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_BandollierB_2_khk", "H_Beret_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        backpack = "tf_mr3000";
    };

    class O_Soldier_SL_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Truppfuehrer : O_Soldier_SL_F
    {
        displayName = "Truppführer";
        faction = "OPT_WP";
        Items[] = {"", ""};
        respawnItems[] = {"", ""};
        Weapons[] = {"CUP_arifle_AK101_railed", "OPT_Laserdesignator_02", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "OPT_Laserdesignator_02", "Throw", "Put", "Binocular"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell", "Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell", "Laserbatteries"};
        linkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetLeaderO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetLeaderO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        backpack = "tf_mr3000";
    };

    class O_Soldier_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Soldat : O_Soldier_F
    {
        displayName = "Schütze";
        faction = "OPT_WP";
        weapons[] = {"CUP_arifle_AK101_railed","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "";
    };
    
    class OPT_CSAT_Grenadier : OPT_CSAT_Soldat
    {
        displayName = "Grenadier";
        weapons[] = {"CUP_arifle_AK101_GL_railed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_GL_railed", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell"};
    };

    class OPT_CSAT_Operator : OPT_CSAT_Soldat
    {
        displayName = "Drohnen-Operator";
        weapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "NVGoggles_OPFOR", "O_UavTerminal"};
        respawnLinkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "NVGoggles_OPFOR", "O_UavTerminal"};
        backpack = "tf_mr3000";
    };

    class OPT_CSAT_MG_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "MG-Schütze";
        icon = "iconManMG";
        weapons[] = {"CUP_lmg_PKM_top_rail", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_PKM_top_rail", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "SmokeShell", "SmokeShell"};
    };

    class OPT_CSAT_LMG_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "LMG-Schütze";
        icon = "iconManMG";
        weapons[] = {"CUP_arifle_RPK74M_top_rail", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74M_top_rail", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","SmokeShell", "SmokeShell"};
    };

    class OPT_CSAT_PA_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "Panzerabwehr (Schwer)";
        icon = "iconManAT";
        weapons[] = {"CUP_arifle_AK101_railed", "CUP_launch_Mk153Mod0", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "CUP_launch_Mk153Mod0", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        backpack = "B_FieldPack_ocamo";
        Items[] = {"CUP_optic_SMAW_Scope"};
        respawnItems[] = {"CUP_optic_SMAW_Scope"};
    };

    class OPT_CSAT_PA_Schuetze_lt : OPT_CSAT_Soldat
    {
        displayName = "Panzerabwehr (Leicht)";
        icon = "iconManAT";
        weapons[] = {"CUP_arifle_AK101_railed", "CUP_launch_RPG18", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "CUP_launch_RPG18", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        backpack = "B_FieldPack_ocamo";
        Items[] = {""};
        respawnItems[] = {""};
    };

    class OPT_CSAT_Luftabwehrspezialist : OPT_CSAT_Soldat
    {
        displayName = "Raketenspezialist (Flugabwehr)";
        weapons[] = {"CUP_arifle_AK101_railed", "OPT_CUP_launch_Igla", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "OPT_CUP_launch_Igla", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        backpack = "B_FieldPack_ocamo";
    };

    class O_Soldier_sniper_base_F : O_Soldier_base_F
    {
    };

    class O_sniper_F : O_Soldier_sniper_base_F
    {
    };

    class OPT_CSAT_Scharfschuetze : O_sniper_F
    {
        displayName = "Scharfschütze";
        faction = "OPT_WP";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"CUP_srifle_AS50", "CUP_hgun_CZ75", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_AS50", "CUP_hgun_CZ75", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_16Rnd_9x19_cz75", "CUP_16Rnd_9x19_cz75", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_16Rnd_9x19_cz75", "CUP_16Rnd_9x19_cz75", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_Chestrig_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_Chestrig_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        backpack = "";
    };

    class OPT_CSAT_Scharfschuetze_2 : OPT_CSAT_Scharfschuetze
    {
        displayName = "Scharfschütze (FAL)";
        faction = "OPT_WP";
        weapons[] = {"CUP_arifle_FNFAL5061_railed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_FNFAL5061_railed", "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M","SmokeShell", "SmokeShell"};
        Items[] = {"CUP_bipod_FNFAL"};
        respawnItems[] = {"CUP_bipod_FNFAL"};
    };

    class O_engineer_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Ingenieur: O_engineer_F
    {
        displayName = "Ingenieur";
        faction = "OPT_WP";
        Items[] = { "MineDetector"};
        respawnItems[] = {"MineDetector"};
        weapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        backpack = "OPT_B_Carryall_ocamo_Eng";
    };

    class OPT_CSAT_Sprengmeister : O_engineer_F
    {
        displayName = "Sprengmeister";
        faction = "OPT_WP";
        Items[] = { "MineDetector"};
        respawnItems[] = {"MineDetector"};
        engineer = 0;
        weapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        backpack = "OPT_B_Carryall_ocamo_Eng";
    };

    class O_medic_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Sanitaeter : O_medic_F
    {
        displayName = "Sanitäter";
        faction = "OPT_WP";
        weapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_TacVest_khk", "OPT_H_HelmetO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        items[] = {};
        respawnItems[] = {};
        backpack = "OPT_B_FieldPack_ocamo_ReconMedic";
    };

    class O_crew_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Besatzungsmitglied : O_crew_F
    {
        displayName = "Besatzungsmitglied";
        faction = "OPT_WP";
        weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"OPT_V_BandollierB_khk", "H_HelmetCrew_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"OPT_V_BandollierB_khk", "H_HelmetCrew_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps", "NVGoggles_OPFOR"};
        items[] = {};
        respawnItems[] = {};
        backpack = "tf_mr3000_bwmod";
    };
};
