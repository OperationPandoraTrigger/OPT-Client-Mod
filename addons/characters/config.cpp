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
        weapons[] = {"OPT_CUP_smg_Mac10", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_smg_Mac10", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "SmokeShell", "SmokeShell"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_SPH4_visor", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "H_PilotHelmetHeli_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "CUP_U_B_USArmy_PilotOverall";
    };

    class OPT_NATO_Pilot_jet : B_Helipilot_F
    {
        displayName = "Jet Pilot";
        faction = "OPT_NATO_CUP";
        weapons[] = {"OPT_CUP_smg_Mac10", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_smg_Mac10", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "SmokeShell", "SmokeShell"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_SPH4_visor", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "H_PilotHelmetHeli_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps","Binocular"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "CUP_U_B_USArmy_PilotOverall";
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
        weapons[] = {"OPT_CUP_srifle_AS50", "CUP_hgun_M9", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_srifle_AS50", "CUP_hgun_M9", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "CUP_U_B_BAF_DPM_GHILLIE";
    };

    class OPT_NATO_Scharfschuetze_2 : OPT_NATO_Scharfschuetze
    {
        displayName = "Scharfschütze (DMR)";
        faction = "OPT_NATO_CUP";
        Items[] = {"CUP_bipod_Harris_1A2_L_BLK"};
        respawnItems[] = {"CUP_bipod_Harris_1A2_L_BLK"};
        weapons[] = {"OPT_CUP_arifle_HK417_20", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_HK417_20", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_AssaultPack_mccuu";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
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
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_AssaultPack_mccuu";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
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
        weapons[] = {"OPT_CUP_smg_Mac10","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_smg_Mac10","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M", "CUP_30Rnd_45ACP_MAC10_M","SmokeShell", "SmokeShell"};
        Items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_CZ_Helmet05", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_CZ_Helmet05", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
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
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
    };

    class OPT_NATO_Truppfuehrer : OPT_NATO_Soldat
    {
        icon = "iconManLeader";
        displayName = "Truppführer";
        faction = "OPT_NATO_CUP";
        Items[] = {"ACE_HuntIR_monitor"};
        respawnItems[] = {"ACE_HuntIR_monitor"};
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "OPT_Laserdesignator", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "OPT_Laserdesignator", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell", "Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell", "Laserbatteries"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
    };

    class OPT_NATO_Sanitaeter : B_CTRG_soldier_AR_A_F
    {
        icon = "iconManMedic";
        displayName = "Sanitäter";
        faction = "OPT_NATO_CUP";
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        attendant = 1;
        Items[] = {"Medikit"};
        respawnItems[] = {"Medikit"};
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_AssaultPack_mccuu";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
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
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_Carryall_mccuu";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
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
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_AssaultPack_mccuu";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
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
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "B_UavTerminal"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "B_UavTerminal"};
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        backpack = "TFAR_rt1523g_big_bwmod";
        uniformClass = "CUP_U_B_USMC_MCCUU_gloves";
    };

    class OPT_NATO_Grenadier : OPT_NATO_Soldat
    {
        displayName = "Grenadier";
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_EGLM_black","Binocular","Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_EGLM_black","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "SmokeShell", "SmokeShell"};
    };

    class OPT_NATO_Luftabwehrspezialist : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Raketenspezialist (Flugabwehr)";
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "OPT_CUP_launch_FIM92Stinger", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "OPT_CUP_launch_FIM92Stinger", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_Carryall_mccuu";
    };

    class OPT_NATO_PA_Schuetze : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Panzerabwehr (Schwer)";
        Items[] = {"CUP_optic_MAAWS_Scope"};
        respawnItems[] = {"CUP_optic_MAAWS_Scope"};
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "CUP_launch_MAAWS", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "CUP_launch_MAAWS", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_Carryall_mccuu";
    };

    class OPT_NATO_PA_Schuetze_lt : OPT_NATO_Soldat
    {
        icon = "iconManAT";
        displayName = "Panzerabwehr (Leicht)";
        Items[] = {""};
        respawnItems[] = {""};
        weapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "CUP_launch_M72A6", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_Mk16_STD_FG_black", "CUP_launch_M72A6", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout", "CUP_H_USArmy_ECH_Headset_MARPAT", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        backpack = "OPT_B_AssaultPack_mccuu";
    };

    class OPT_NATO_MG_Schuetze : OPT_NATO_Soldat
    {
        icon = "iconManMG";
        displayName = "MG-Schütze";
        weapons[] = {"OPT_CUP_lmg_M240_B","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "SmokeShell", "SmokeShell"};
        respawnWeapons[] = {"OPT_CUP_lmg_M240_B", "Binocular", "Throw", "Put"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "SmokeShell", "SmokeShell"};
        backpack = "OPT_B_AssaultPack_mccuu";
    };

    class OPT_NATO_LMG_Schuetze : OPT_NATO_MG_Schuetze
    {
        displayName = "LMG-Schütze";
        weapons[] = {"OPT_CUP_lmg_m249_pip3","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_lmg_m249_pip3", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "SmokeShell", "SmokeShell"};
        backpack = "OPT_B_AssaultPack_mccuu";
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
        weapons[] = {"OPT_CUP_smg_SA61","Binocular" , "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_smg_SA61","Binocular" , "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_4", "CUP_H_SPH4_khaki_visor", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_4", "CUP_H_SPH4_khaki_visor", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };

    class OPT_CSAT_Pilot_jet : O_helipilot_F
    {
        displayName = "Jet Pilot";
        faction = "OPT_WP";
        weapons[] = {"OPT_CUP_smg_SA61","Binocular" , "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_smg_SA61","Binocular" , "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_4", "CUP_H_SPH4_khaki_visor", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_4", "CUP_H_SPH4_khaki_visor", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };

    class O_officer_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Offizier : O_officer_F
    {
        faction = "OPT_WP";
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed",  "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK","SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };

    class O_Soldier_SL_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Truppfuehrer : O_Soldier_SL_F
    {
        displayName = "Truppführer";
        faction = "OPT_WP";
        Items[] = {"ACE_HuntIR_monitor"};
        respawnItems[] = {"ACE_HuntIR_monitor"};
        Weapons[] = {"OPT_CUP_arifle_AK101_railed", "OPT_Laserdesignator_02", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "OPT_Laserdesignator_02", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell", "Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell", "Laserbatteries"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };

    class O_Soldier_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Soldat : O_Soldier_F
    {
        displayName = "Schütze";
        faction = "OPT_WP";
        weapons[] = {"OPT_CUP_arifle_AK101_railed","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        Items[] = {};
        respawnItems[] = {};
        backpack = "OPT_B_AssaultPack_VSR98Worm";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };
    
    class OPT_CSAT_Grenadier : OPT_CSAT_Soldat
    {
        displayName = "Grenadier";
        weapons[] = {"OPT_CUP_arifle_AK101_GL_railed","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_GL_railed","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK","SmokeShell", "SmokeShell"};
    };

    class OPT_CSAT_Operator : OPT_CSAT_Soldat
    {
        displayName = "Drohnen-Operator";
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "O_UavTerminal"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "O_UavTerminal"};
        backpack = "TFAR_mr3000_bwmod";
    };

    class OPT_CSAT_MG_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "MG-Schütze";
        icon = "iconManMG";
        weapons[] = {"OPT_CUP_lmg_PKM_top_rail", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_lmg_PKM_top_rail", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "SmokeShell", "SmokeShell"};
    };

    class OPT_CSAT_LMG_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "LMG-Schütze";
        icon = "iconManMG";
        weapons[] = {"OPT_CUP_arifle_RPK74M_top_rail", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_RPK74M_top_rail", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","SmokeShell", "SmokeShell"};
    };

    class OPT_CSAT_PA_Schuetze : OPT_CSAT_Soldat
    {
        displayName = "Panzerabwehr (Schwer)";
        icon = "iconManAT";
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "CUP_launch_Mk153Mod0", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "CUP_launch_Mk153Mod0", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        backpack = "OPT_B_Carryall_VSR98Worm";
        Items[] = {"CUP_optic_SMAW_Scope"};
        respawnItems[] = {"CUP_optic_SMAW_Scope"};
    };

    class OPT_CSAT_PA_Schuetze_lt : OPT_CSAT_Soldat
    {
        displayName = "Panzerabwehr (Leicht)";
        icon = "iconManAT";
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "CUP_launch_RPG18", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "CUP_launch_RPG18", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        backpack = "OPT_B_AssaultPack_VSR98Worm";
        Items[] = {""};
        respawnItems[] = {""};
    };

    class OPT_CSAT_Luftabwehrspezialist : OPT_CSAT_Soldat
    {
        displayName = "Raketenspezialist (Flugabwehr)";
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "OPT_CUP_launch_Igla","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "OPT_CUP_launch_Igla","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        backpack = "OPT_B_Carryall_VSR98Worm";
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
        weapons[] = {"OPT_CUP_srifle_AS50", "CUP_hgun_CZ75", "Rangefinder", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_srifle_AS50", "CUP_hgun_CZ75", "Rangefinder", "Throw", "Put"};
        magazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_16Rnd_9x19_cz75", "CUP_16Rnd_9x19_cz75", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_5Rnd_127x99_as50_M", "CUP_16Rnd_9x19_cz75", "CUP_16Rnd_9x19_cz75", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3","OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3","OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "CUP_U_O_RUS_Ghillie";
    };

    class OPT_CSAT_Scharfschuetze_2 : OPT_CSAT_Scharfschuetze
    {
        displayName = "Scharfschütze (DMR)";
        faction = "OPT_WP";
        weapons[] = {"OPT_CUP_arifle_FNFAL5061_railed","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_FNFAL5061_railed","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M","SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M","SmokeShell", "SmokeShell"};
        Items[] = {"CUP_bipod_FNFAL"};
        respawnItems[] = {"CUP_bipod_FNFAL"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3","OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3","OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
        backpack = "OPT_B_AssaultPack_VSR98Worm";
    };

    class O_engineer_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Ingenieur: O_engineer_F
    {
        displayName = "Ingenieur";
        faction = "OPT_WP";
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "OPT_B_AssaultPack_VSR98Worm";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };

    class OPT_CSAT_Sprengmeister : O_engineer_F
    {
        displayName = "Sprengmeister";
        faction = "OPT_WP";
        Items[] = { "MineDetector"};
        respawnItems[] = {"MineDetector"};
        engineer = 0;
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        backpack = "OPT_B_Carryall_VSR98Worm";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };

    class O_medic_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Sanitaeter : O_medic_F
    {
        displayName = "Sanitäter";
        faction = "OPT_WP";
        weapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_arifle_AK101_railed", "Binocular", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "CUP_30Rnd_556x45_AK", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "OPT_CUP_H_HIL_HelmetACH_Headset_TTS", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        items[] = {"Medikit"};
        respawnItems[] = {"Medikit"};
        backpack = "OPT_B_AssaultPack_VSR98Worm";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };

    class O_crew_F : O_Soldier_base_F
    {
    };

    class OPT_CSAT_Besatzungsmitglied : O_crew_F
    {
        displayName = "Besatzungsmitglied";
        faction = "OPT_WP";
        weapons[] = {"OPT_CUP_smg_SA61","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"OPT_CUP_smg_SA61","Binocular", "Throw", "Put"};
        magazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "H_HelmetCrew_I_E", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        respawnLinkedItems[] = {"CUP_V_RUS_6B3_Flora_3", "H_HelmetCrew_I_E", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak", "ItemGps"};
        items[] = {};
        respawnItems[] = {};
        backpack = "TFAR_mr3000_bwmod";
        uniformClass = "CUP_U_O_RUS_VSR98_worn_MSV";
    };
};
