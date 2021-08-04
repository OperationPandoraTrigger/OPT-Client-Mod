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

    ////////////////// Finland /////////////////////

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
        faction = "OPT_FIN";
        weapons[] = {"OPT_SMG_02_ACO_F", "Throw", "Put"};
        respawnWeapons[] = {"OPT_SMG_02_ACO_F", "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_PilotHelmetHeli_I_E", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_PilotHelmetHeli_I_E", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Pilot_jet : B_Helipilot_F
    {
        displayName = "Jet Pilot";
        faction = "OPT_FIN";
        weapons[] = {"OPT_SMG_02_ACO_F", "Throw", "Put"};
        respawnWeapons[] = {"OPT_SMG_02_ACO_F", "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_PilotHelmetHeli_I_E", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_PilotHelmetHeli_I_E", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
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
        faction = "OPT_FIN";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"OPT_srifle_GM6_camo_LRPS_F", "OPT_hgun_P07_khk_F", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_srifle_GM6_camo_LRPS_F", "OPT_hgun_P07_khk_F", "Rangefinder", "Throw", "Put"};
        magazines[] = {"5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "U_B_T_FullGhillie_tna_F";
    };

    class OPT_NATO_Scharfschuetze_2 : OPT_NATO_Scharfschuetze
    {
        displayName = "Scharfschütze (DMR)";
        faction = "OPT_FIN";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"OPT_srifle_DMR_03_ERCO_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_srifle_DMR_03_ERCO_F", "Binocular", "Throw", "Put"};
        magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_AssaultPack_eaf_F";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
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
        faction = "OPT_FIN";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        icon = "iconMan";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"OPT_arifle_MXC_Black_ACO_pointer_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_MXC_Black_ACO_pointer_F","Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_AssaultPack_eaf_F";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
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
        faction = "OPT_FIN";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        icon = "iconMan";
        weapons[] = {"OPT_SMG_02_ACO_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_SMG_02_ACO_F","Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetCrew_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetCrew_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Offizier : B_CTRG_soldier_AR_A_F
    {
        icon = "iconManOfficer";
        displayName = "Offizier";
        faction = "OPT_FIN";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Truppfuehrer : OPT_NATO_Soldat
    {
        icon = "iconManLeader";
        displayName = "Truppführer";
        faction = "OPT_FIN";
        Items[] = {"ACE_HuntIR_monitor"};
        respawnItems[] = {"ACE_HuntIR_monitor"};
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "OPT_Laserdesignator", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "OPT_Laserdesignator", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell", "Laserbatteries","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell", "Laserbatteries","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Sanitaeter : B_CTRG_soldier_AR_A_F
    {
        icon = "iconManMedic";
        displayName = "Sanitäter";
        faction = "OPT_FIN";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        attendant = 1;
        Items[] = {"Medikit"};
        respawnItems[] = {"Medikit"};
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_AssaultPack_eaf_F";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Sprengmeister : B_CTRG_soldier_AR_A_F
    {
        displayName = "Sprengmeister";
        faction = "OPT_FIN";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        Items[] = { "MineDetector"};
        respawnItems[] = {"MineDetector"};
        engineer = 0;
        canDeactivateMines = 1;
        icon = "iconManEngineer";
        weapons[] = {"OPT_SMG_03C_TR_black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_SMG_03C_TR_black", "Binocular", "Throw", "Put"};
        magazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_Carryall_eaf_F";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Ingenieur : B_CTRG_soldier_AR_A_F
    {
        displayName = "Ingenieur";
        faction = "OPT_FIN";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        Items[] = {};
        respawnItems[] = {};
        engineer = 0;
        canDeactivateMines = 0;
        icon = "iconManEngineer";
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_AssaultPack_eaf_F";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Operator : B_CTRG_soldier_AR_A_F
    {
        displayName = "Drohnen-Operator";
        faction = "OPT_FIN";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        icon = "iconMan";
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "B_UavTerminal"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "B_UavTerminal"};
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";
    };

    class OPT_NATO_Grenadier : OPT_NATO_Soldat
    {
        displayName = "Grenadier";
        weapons[] = {"OPT_arifle_SPAR_01_GL_blk_ERCO_Pointer_F","Binocular","Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_GL_blk_ERCO_Pointer_F","Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
    };

    class OPT_NATO_Luftabwehrspezialist : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Raketenspezialist (Flugabwehr)";
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "OPT_launch_B_Titan_tna_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "OPT_launch_B_Titan_tna_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_Carryall_eaf_F";
    };

    class OPT_NATO_PA_Schuetze : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Panzerabwehr (Schwer)";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "OPT_launch_MRAWS_green_F", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "OPT_launch_MRAWS_green_F", "Rangefinder", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_Carryall_eaf_F";
    };

    class OPT_NATO_PA_Schuetze_lt : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Panzerabwehr (Leicht)";
        Items[] = {""};
        respawnItems[] = {""};
        weapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "launch_RPG7_F", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_SPAR_01_blk_ERCO_Pointer_F", "launch_RPG7_F", "Rangefinder", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_headset_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "B_AssaultPack_eaf_F";
    };

    class OPT_NATO_MG_Schuetze : OPT_NATO_Soldat
    {
        icon = "iconManMG";
        displayName = "MG-Schütze";
        weapons[] = {"OPT_LMG_Zafir_ACO_pointer_F","Binocular", "Throw", "Put"};
        magazines[] = {"OPT_100Rnd_762x54_Box", "OPT_100Rnd_762x54_Box", "SmokeShell", "SmokeShell"};
        respawnWeapons[] = {"OPT_LMG_Zafir_ACO_pointer_F", "Binocular", "Throw", "Put"};
        respawnMagazines[] = {"OPT_100Rnd_762x54_Box", "OPT_100Rnd_762x54_Box", "SmokeShell", "SmokeShell"};
        backpack = "B_AssaultPack_eaf_F";
    };

    class OPT_NATO_LMG_Schuetze : OPT_NATO_MG_Schuetze
    {
        displayName = "LMG-Schütze";
        weapons[] = {"OPT_arifle_MX_SW_Black_ACO_pointer_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_MX_SW_Black_ACO_pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        backpack = "B_AssaultPack_eaf_F";
    };
  
    ////////////////// Sowjet /////////////////////

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
        faction = "OPT_Sowjet";
        weapons[] = {"OPT_hgun_PDW2000_ACO_F","Binocular" , "Throw", "Put"};
        respawnWeapons[] = {"OPT_hgun_PDW2000_ACO_F","Binocular" , "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };

    class OPT_CSAT_Pilot_jet : O_helipilot_F
    {
        displayName = "Jet Pilot";
        faction = "OPT_Sowjet";
        weapons[] = {"OPT_hgun_PDW2000_ACO_F","Binocular" , "Throw", "Put"};
        respawnWeapons[] = {"OPT_hgun_PDW2000_ACO_F","Binocular" , "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };

    class O_officer_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Offizier : O_officer_F
    {
        faction = "OPT_Sowjet";
        weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F",  "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };

    class O_Soldier_SL_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Truppfuehrer : O_Soldier_SL_F
    {
        displayName = "Truppführer";
        faction = "OPT_Sowjet";
        Items[] = {"ACE_HuntIR_monitor"};
        respawnItems[] = {"ACE_HuntIR_monitor"};
        Weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "OPT_Laserdesignator_02", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "OPT_Laserdesignator_02", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell", "Laserbatteries","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell", "Laserbatteries","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };

    class O_Soldier_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Soldat : O_Soldier_F
    {
        displayName = "Schütze";
        faction = "OPT_Sowjet";
        weapons[] = {"OPT_arifle_Katiba_C_ACO_pointer_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_Katiba_C_ACO_pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "OPT_B_AssaultPack_blk";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };
    
    class OPT_CSAT_Grenadier : OPT_CSAT_Soldat
    {
        displayName = "Grenadier";
        weapons[] = {"OPT_arifle_CTAR_GL_blk_ERCO_Pointer_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_GL_blk_ERCO_Pointer_F","Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
    };

    class OPT_CSAT_Operator : OPT_CSAT_Soldat
    {
        displayName = "Drohnen-Operator";
        weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F",  "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "O_UavTerminal"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "O_UavTerminal"};
        backpack = "TFAR_mr3000_bwmod";
    };

    class OPT_CSAT_MG_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "MG-Schütze";
        icon = "iconManMG";
        weapons[] = {"OPT_arifle_RPK12_ACO_BI_pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_RPK12_ACO_BI_pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"OPT_100rnd_762x39_AK12_Mag_F", "OPT_100rnd_762x39_AK12_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"OPT_100rnd_762x39_AK12_Mag_F", "OPT_100rnd_762x39_AK12_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
    };

    class OPT_CSAT_LMG_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "LMG-Schütze";
        icon = "iconManMG";
        weapons[] = {"OPT_LMG_Mk200_ACO_BI_pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_LMG_Mk200_ACO_BI_pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"OPT_100Rnd_65x39_cased_Box", "OPT_100Rnd_65x39_cased_Box","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"OPT_100Rnd_65x39_cased_Box", "OPT_100Rnd_65x39_cased_Box","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
    };

    class OPT_CSAT_PA_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "Panzerabwehr (Schwer)";
        icon = "iconManAT";
        weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "OPT_launch_MRAWS_green_F", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "OPT_launch_MRAWS_green_F", "Rangefinder", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        backpack = "B_Carryall_taiga_F";
        Items[] = {};
        respawnItems[] = {};
    };

    class OPT_CSAT_PA_Schuetze_lt : OPT_CSAT_Soldat
    {
        displayName = "Panzerabwehr (Leicht)";
        icon = "iconManAT";
        weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "launch_RPG7_F", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "launch_RPG7_F", "Rangefinder", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        backpack = "OPT_B_AssaultPack_blk";
        Items[] = {};
        respawnItems[] = {};
    };

    class OPT_CSAT_Luftabwehrspezialist : OPT_CSAT_Soldat
    {
        displayName = "Raketenspezialist (Flugabwehr)";
        weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "OPT_launch_O_Titan_ghex_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "OPT_launch_O_Titan_ghex_F","Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        backpack = "B_Carryall_taiga_F";
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
        faction = "OPT_Sowjet";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"OPT_srifle_GM6_ghex_LRPS_F", "OPT_hgun_Rook40_F", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_srifle_GM6_ghex_LRPS_F", "OPT_hgun_Rook40_F", "Rangefinder", "Throw", "Put"};
        magazines[] = {"5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "U_O_T_FullGhillie_tna_F";
    };

    class OPT_CSAT_Scharfschuetze_2 : OPT_CSAT_Scharfschuetze
    {
        displayName = "Scharfschütze (DMR)";
        faction = "OPT_Sowjet";
        weapons[] = {"OPT_srifle_EBR_ERCO_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_srifle_EBR_ERCO_F","Binocular", "Throw", "Put"};
        magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        uniformClass = "U_O_R_Gorka_01_camo_F";
        backpack = "OPT_B_AssaultPack_blk";
    };

    class O_engineer_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Ingenieur: O_engineer_F
    {
        displayName = "Ingenieur";
        faction = "OPT_Sowjet";
        Items[] = {};
        respawnItems[] = {};
        canDeactivateMines = 0;
        weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "OPT_B_AssaultPack_blk";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };

    class OPT_CSAT_Sprengmeister : O_engineer_F
    {
        displayName = "Sprengmeister";
        faction = "OPT_Sowjet";
        Items[] = { "MineDetector"};
        respawnItems[] = {"MineDetector"};
        engineer = 0;
        weapons[] = {"OPT_SMG_03C_TR_black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_SMG_03C_TR_black", "Binocular", "Throw", "Put"};
        magazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "B_Carryall_taiga_F";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };

    class O_medic_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Sanitaeter : O_medic_F
    {
        displayName = "Sanitäter";
        faction = "OPT_Sowjet";
        weapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_arifle_CTAR_ERCO_Pointer_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F", "SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetAggressor_cover_taiga_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        items[] = {"Medikit"};
        respawnItems[] = {"Medikit"};
        backpack = "OPT_B_AssaultPack_blk";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };

    class O_crew_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Besatzungsmitglied : O_crew_F
    {
        displayName = "Besatzungsmitglied";
        faction = "OPT_Sowjet";
        weapons[] = {"OPT_hgun_PDW2000_ACO_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_hgun_PDW2000_ACO_F","Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell", "SmokeShell","HandGrenade","HandGrenade"};
        linkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetCrew_O_ghex_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_HelmetCrew_O_ghex_F", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "U_O_R_Gorka_01_camo_F";
    };
};
