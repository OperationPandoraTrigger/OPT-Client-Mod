#include "\opt\opt_client\addons\core\macros.hpp"

class CfgPatches
{
    class opt_weapons
    {
        units[] = {"OPT_Land_Pod_Heli_Transport_04_ammo_F", "OPT_Land_Pod_Heli_Transport_04_fuel_F", "OPT_Land_Pod_Heli_Transport_04_medevac_F", "OPT_Land_Pod_Heli_Transport_04_repair_F",
                   "OPT_Land_Pod_Heli_Transport_04_repair_radar_F", "OPT_B_Slingload_01_Repair_F", "OPT_B_Slingload_01_Repair_Radar_F", "OPT_B_Slingload_01_Ammo_F", "OPT_B_Slingload_01_Fuel_F",
                   "OPT_B_Slingload_01_Medevac_F", "OPT_FlexibleTank_01_sand_F", "OPT_FlexibleTank_01_forest_F", "OPT_B_HMG_01_F", "OPT_O_HMG_01_F", "OPT_B_HMG_01_high_F", "OPT_O_HMG_01_high_F",
                   "OPT_B_GMG_01_F", "OPT_O_GMG_01_F", "OPT_B_GMG_01_high_F", "OPT_O_GMG_01_high_F", "OPT_B_static_AA_F", "OPT_O_static_AA_F", "OPT_B_static_AT_F", "OPT_O_static_AT_F",
                   "OPT_B_Static_Designator_01_F", "OPT_O_Static_Designator_02_F", "OPT_B_Mortar_01_F", "OPT_O_Mortar_01_F", "OPT_B_CargoNet_01_ammo_F", "OPT_B_supplyCrate_F", "OPT_Box_NATO_Ammo_F",
                   "OPT_Box_NATO_WpsSpecial_F", "OPT_Box_NATO_WpsSpecial_AT_F", "OPT_Box_NATO_WpsSpecial_AT_L1", "OPT_Box_NATO_WpsSpecial_AT_L2", "OPT_Box_NATO_WpsSpecial_AT_H1", "OPT_Box_NATO_WpsSpecial_AA_F", "OPT_Box_NATO_WpsSpecial_Diver_F", "OPT_Box_NATO_WpsLaunch_F", "OPT_Box_NATO_Grenades_F",
                   "OPT_O_CargoNet_01_ammo_F", "OPT_O_supplyCrate_F", "OPT_Box_East_Ammo_F", "OPT_Box_East_WpsSpecial_F", "OPT_Box_East_WpsLaunch_F", "OPT_Box_East_WpsSpecial_AT_L1", "OPT_Box_East_WpsSpecial_AT_L2", "OPT_Box_East_WpsSpecial_AT_L3", "OPT_Box_East_WpsSpecial_AA_F", "OPT_Box_East_WpsSpecial_Diver_F", "OPT_Box_East_WpsLaunch_F_F", "OPT_Box_East_Grenades_F",
                   "OPT_B_HMG_01_weapon_F", "OPT_B_HMG_01_high_weapon_F", "OPT_I_HMG_01_weapon_F", "OPT_I_HMG_01_high_weapon_F","OPT_O_HMG_01_weapon_F", "OPT_O_HMG_01_high_weapon_F", "OPT_B_UAV_01_backpack_F", "OPT_O_UAV_01_backpack_F", "OPT_B_Static_Designator_01_weapon_F", "OPT_I_Static_Designator_01_weapon_F",
                   "OPT_O_Static_Designator_02_weapon_F", "OPT_B_GMG_01_high_weapon_F","OPT_I_GMG_01_high_weapon_F", "OPT_O_GMG_01_high_weapon_F", "OPT_B_GMG_01_weapon_F", "OPT_I_GMG_01_weapon_F","OPT_O_GMG_01_weapon_F", "OPT_B_AA_01_weapon_F","OPT_I_AA_01_weapon_F", "OPT_O_AA_01_weapon_F",
                   "OPT_B_AT_01_weapon_F", "OPT_I_AT_01_weapon_F","OPT_O_AT_01_weapon_F", "OPT_B_Mortar_01_weapon_F","OPT_I_Mortar_01_weapon_F", "OPT_O_Mortar_01_weapon_F", "OPT_B_Kitbag_rgr_Eng", "OPT_B_Carryall_ocamo_Eng", "OPT_B_FieldPack_ocamo_AT", "OPT_B_FieldPack_ocamo_AA",
                   "OPT_B_FieldPack_ocamo_LAT", "OPT_B_TacticalPack_rgr", "OPT_B_TacticalPack_blk", "OPT_B_TacticalPack_blk_AA", "OPT_B_TacticalPack_blk_LAT", "OPT_B_TacticalPack_blk_AT", "OPT_B_AssaultPack_rgr_Medic",
                   "OPT_B_AssaultPack_blk_Medic", "OPT_B_FieldPack_ocamo_ReconMedic", "OPT_tf_mr3000_bwmod", "OPT_tf_rt1523g_big_bwmod", "OPT_tf_fadak", "OPT_tf_anprc152", "OPT_ACE_Box_82mm_Mo_HE"};

        weapons[] = {"OPT_hgun_P07_F", "OPT_hgun_P07_snds_F", "OPT_hgun_Rook40_F", "OPT_hgun_Rook40_snds_F", "OPT_SMG_01_ACO_F", "OPT_SMG_02_ACO_F", "OPT_arifle_SDAR_F", "OPT_LMG_Zafir_ACO_pointer_F",
                     "OPT_LMG_Mk200_ACO_BI_pointer_F", "OPT_MMG_02_black_ACO_BI_Pointer_F", "OPT_MMG_01_hex_ACO_BI_Pointer_F", "OPT_MMG_01_tan_ACO_BI_Pointer_F", "OPT_arifle_MXM_Black_RCO_LP_BI_snds_F", "OPT_arifle_MX_SW_Black_ACO_pointer_F",
                     "OPT_arifle_MX_GL_Black_RCO_pointer_F", "OPT_arifle_MX_GL_Black_ACO_pointer_F", "OPT_arifle_MX_GL_Black_RCO_pointer_snds_F", "OPT_arifle_MX_GL_Black_ACO_pointer_snds_F",
                     "OPT_arifle_MX_Black_Hamr_pointer_F", "OPT_arifle_MX_Black_RCO_pointer_snds_F", "OPT_arifle_MX_Black_ACO_pointer_F", "OPT_arifle_MX_Black_ACO_pointer_snds_F", "OPT_arifle_MXC_Black_F",
                     "OPT_arifle_MXC_Black_ACO_pointer_F", "OPT_arifle_Katiba_C_ACO_pointer_F", "OPT_arifle_Katiba_GL_RCO_pointer_F", "OPT_arifle_Katiba_GL_RCO_pointer_snds_F", "OPT_arifle_Katiba_GL_ACO_pointer_snds_F",
                     "OPT_arifle_Katiba_RCO_pointer_F", "OPT_arifle_Katiba_ACO_pointer_F", "OPT_arifle_Katiba_RCO_pointer_snds_F", "OPT_arifle_Katiba_ACO_pointer_snds_F", "OPT_srifle_DMR_01_DMS_LP_BI_snds_F",
                     "OPT_srifle_DMR_01_RCO_LP_BI_snds_F", "OPT_srifle_EBR_DMS_LP_BI_snds_F", "OPT_srifle_DMR_02_AMS_LP_BI_snds_F", "OPT_srifle_DMR_05_hex_KHS_LP_BI_F", "OPT_srifle_DMR_03_AMS_LP_BI_snds_F",
                     "OPT_srifle_DMR_06_olive_KHS_BI_snds_F", "OPT_srifle_GM6_camo_LRPS_F", "OPT_srifle_LRR_LRPS_F", "OPT_srifle_LRR_tna_F", "OPT_srifle_LRR_tna_LRPS_F", "OPT_arifle_SPAR_01_blk_F", "OPT_arifle_SPAR_01_blk_C_F", "OPT_arifle_SPAR_01_GL_blk_F", "OPT_arifle_SPAR_02_blk_F",
                     "OPT_arifle_CTAR_blk_C_F", "OPT_arifle_SPAR_03_blk_F", "OPT_arifle_CTAR_blk_F", "OPT_arifle_CTAR_GL_blk_F", "OPT_arifle_CTARS_blk_F","OPT_LMG_03_F", "OPT_arifle_ARX_blk_F", "OPT_srifle_DMR_07_blk_F", "OPT_launch_B_Titan_F",
                     "OPT_launch_B_Titan_tna_F", "OPT_launch_B_Titan_short_F", "OPT_launch_B_Titan_short_tna_F", "OPT_launch_O_Titan_F", "OPT_launch_O_Titan_ghex_F", "OPT_launch_O_Titan_short_F",
                     "OPT_launch_O_Titan_short_ghex_F", "OPT_launch_NLAW_F", "OPT_launch_RPG32_F", "OPT_launch_RPG32_ghex_F", "OPT_launch_MRAWS_olive_rail_F", "OPT_launch_MRAWS_green_rail_F","OPT_missiles_Firefist", "OPT_launch_O_Vorona_green_F", "OPT_Laserdesignator", "OPT_Laserdesignator_02"};

        requiredVersion = 0.100000;
        version = VERSION;
        versionStr = QUOTE(VERSION);
        versionAr[] = {VERSION_AR};
        requiredAddons[] = {"A3_Supplies_F_Heli_CargoNets", "A3_Air_F_Heli_Heli_Transport_04", "A3_Static_F_Gamma_AA", "a3_weapons_f_epb_rifles_mx_black", "a3_weapons_f_gamma", "a3_weapons_f_beta_ammoboxes",
                            "a3_weapons_f_ammoboxes", "a3_uav_f_weapons_f_gamma_ammoboxes", "a3_weapons_f_bootcamp", "A3_Weapons_F_Rifles_MX_Black", "A3_Weapons_f_Exp", "task_force_radio_items", "task_force_radio",
                            "A3_Weapons_F_Jets","CUP_Weapons_VehicleWeapons","CUP_Weapons_Ammunition","CUP_Weapons_Stinger","CUP_Weapons_IGLA","CUP_Weapons_StaticWeapons","CUP_TrackedVehicles_Bradley","CUP_AirVehicles_Su25","CUP_Weapons_AK"};
    };
};

class CfgMagazineWells 
{
    class CBA_40mm_GP 
    {
        ADDON[] = {"ACE_HuntIR_M203"};
    };   
};

class CfgAmmo
{
    class B_20mm;

    class OPT_B_20mm : B_20mm
    {
        airLock = 2;
        irLock = 0; // 1 //
    };

    class Gatling_30mm_HE_Plane_CAS_01_F;

    class OPT_Gatling_30mm_HE_Plane_CAS_01_F : Gatling_30mm_HE_Plane_CAS_01_F
    {
        airlock = 2; // 1 //
        irLock = 0;  // 1 //
        cost = 60;
    };

    class Cannon_30mm_HE_Plane_CAS_02_F;

    class OPT_Cannon_30mm_HE_Plane_CAS_02_F : Cannon_30mm_HE_Plane_CAS_02_F
    {
        airlock = 2; // 1 //
        irLock = 0;  // 1 //
        cost = 60;
    };

    class ammo_Fighter01_Gun20mm_AA;

    class OPT_ammo_Fighter01_Gun20mm_AA : ammo_Fighter01_Gun20mm_AA
    {
        cost = 30;
    };

    class ammo_Fighter02_Gun30mm_AA;

    class OPT_ammo_Fighter02_Gun30mm_AA : ammo_Fighter02_Gun30mm_AA
    {
        cost = 30;
    };

    class B_35mm_AA_Tracer_Red;

    class OPT_B_35mm_AA_Tracer_Red : B_35mm_AA_Tracer_Red
    {
        airLock = 2; // 1 //
    };

    class B_35mm_AA_Tracer_Green;

    class OPT_B_35mm_AA_Tracer_Green : B_35mm_AA_Tracer_Green
    {
        airLock = 2; // 1 //
    };

    class M_Titan_AT;

    class OPT_M_Titan_AT : M_Titan_AT
    {
        cost = 1000; // 500 //
        irLock = 0;  // 1 //
    };

    class M_Titan_AT_long;

    class OPT_M_Titan_AT_long : M_Titan_AT_long
    {
    };

    class M_Titan_AA_long;

    class OPT_M_Titan_AA_long : M_Titan_AA_long
    {
        cost = 500;
    };

    class M_PG_AT;

    class OPT_M_PG_AT : M_PG_AT
    {
        cost = 1000; // 500 //
        irLock = 0; // 1 //
        laserLock = 1;
    };

    class M_AT;

    class OPT_M_AT : M_AT
    {
        cost = 1000;
    };

    class M_Scalpel_AT;

    class OPT_M_Scalpel_AT : M_Scalpel_AT
    {
        cost = 1000; // 1000
        irLock = 0; // 1
    };

    class M_Jian_AT;

    class OPT_M_Jian_AT : M_Jian_AT
    {
        cost = 10800; // 1500
        irLock = 0; // 1
    };

    class Missile_AA_03_F;

    class OPT_Missile_AA_03_F : Missile_AA_03_F
    {
        cost = 10000;
    };

    class Missile_AA_04_F;

    class OPT_Missile_AA_04_F : Missile_AA_04_F
    {
        cost = 10000;
    };

    class Missile_AGM_01_F;

    class OPT_Missile_AGM_01_F : Missile_AGM_01_F
    {
        cost = 10000; // 1500 //
        irLock = 0;                         // 1 //
        laserLock = 1;                     // 0 //
        weaponLockSystem = "2 + 4 + 16"; // "2 + 16"//

        class Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class LaserSensorComponent
                    {
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 70;
                        animDirection = "";
                        color[] = {1, 1, 1, 0};
                        componentType = "LaserSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = "1e+010";
                        maxTrackableSpeed = 55;
                        minSpeedThreshold = 0;
                        minTrackableATL = "-1e+010";
                        minTrackableSpeed = "-1e+010";
                        typeRecognitionDistance = 0;

                        class AirTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };

                        class GroundTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };
                };
            };
        };
    };

    class Missile_AGM_02_F;

    class OPT_Missile_AGM_02_F : Missile_AGM_02_F
    {
        cost = 10000; // 1500 //
        irLock = 0;                         // 1 //
        laserLock = 1;                     // 0 //
        weaponLockSystem = "2 + 4 + 16"; // "2 + 16"//

        class Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class LaserSensorComponent
                    {
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 70;
                        animDirection = "";
                        color[] = {1, 1, 1, 0};
                        componentType = "LaserSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = "1e+010";
                        maxTrackableSpeed = 55;
                        minSpeedThreshold = 0;
                        minTrackableATL = "-1e+010";
                        minTrackableSpeed = "-1e+010";
                        typeRecognitionDistance = 0;

                        class AirTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };

                        class GroundTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };
                };
            };
        };
    };

    class M_Air_AA;

    class OPT_M_Air_AA : M_Air_AA
    {
        cost = 10000;
    };

    class M_Zephyr;

    class OPT_M_Zephyr : M_Zephyr
    {
        cost = 2000;
    };

    class ammo_Missile_AMRAAM_D;

    class OPT_ammo_Missile_AMRAAM_D : ammo_Missile_AMRAAM_D
    {
        cost = 10000;
    };

    class ammo_Missile_BIM9X;

    class OPT_ammo_Missile_BIM9X : ammo_Missile_BIM9X
    {
        cost = 10000;
    };

    class ammo_Missile_AA_R73;

    class OPT_ammo_Missile_AA_R73 : ammo_Missile_AA_R73
    {
        cost = 10000;
    };

    class ammo_Missile_AA_R77;

    class OPT_ammo_Missile_AA_R77 : ammo_Missile_AA_R77
    {
        cost = 10000;
    };

    class Sh_82mm_AMOS;

    class OPT_Sh_82mm_AMOS : Sh_82mm_AMOS
    {
        cost = 1000; //vorher 910 standart 200//
    };

    class Sh_155mm_AMOS;

    class OPT_Sh_155mm_AMOS : Sh_155mm_AMOS
    {
        cost = 500; //300//
    };

    class Cluster_155mm_AMOS;

    class OPT_Cluster_155mm_AMOS : Cluster_155mm_AMOS
    {
        cost = 15000; // 200 //
    };

    class R_230mm_HE;

    class OPT_R_230mm_HE : R_230mm_HE
    {
        cost = 2500; // 1000 //
    };

    class Bo_GBU12_LGB;

    class OPT_Bo_GBU12_LGB : Bo_GBU12_LGB
    {
        cost = 10000; // 20000 //
    };

    class Bo_GBU12_LGB_MI10;

    class OPT_Bo_GBU12_LGB_MI10 : Bo_GBU12_LGB_MI10
    {
        cost = 10000; // 20000 //
    };

    class Bomb_04_F;

    class OPT_Bomb_04_F : Bomb_04_F
    {
        cost = 10000; // 20000 //
    };

    class Bomb_03_F;

    class OPT_Bomb_03_F : Bomb_03_F
    {
        cost = 10000; // 20000 //
    };

    class R_80mm_HE;

    class OPT_R_80mm_HE : R_80mm_HE
    {
        cost = 1000;
    };

    class Rocket_04_HE_F;

    class OPT_Rocket_04_HE_F : Rocket_04_HE_F 
    {
        cost = 1000;
    };

    class Rocket_04_AP_F;

    class OPT_Rocket_04_AP_F : Rocket_04_AP_F
    {
        cost = 1000;
    };

    class Rocket_03_HE_F;

    class OPT_Rocket_03_HE_F : Rocket_03_HE_F
    {
        cost = 1000;
    };

    class Rocket_03_AP_F;

    class OPT_Rocket_03_AP_F : Rocket_03_AP_F
    {
        cost = 1000;
    };

    class CUP_R_GRAD_HE;

    class OPT_CUP_R_GRAD_HE : CUP_R_GRAD_HE
    {
        cost = 100000;
    };
    
};

class CfgMagazines
{
    class 60Rnd_CMFlare_Chaff_Magazine;

    class OPT_72Rnd_CMFlare_Chaff_Magazine : 60Rnd_CMFlare_Chaff_Magazine
    {
        count = 72;
    };

    class OPT_12Rnd_CMFlare_Chaff_Magazine : 60Rnd_CMFlare_Chaff_Magazine
    {
        count = 12;
    };

    class OPT_20Rnd_CMFlare_Chaff_Magazine : 60Rnd_CMFlare_Chaff_Magazine
    {
        count = 20;
    };

    class OPT_30Rnd_CMFlare_Chaff_Magazine : 60Rnd_CMFlare_Chaff_Magazine
    {
        count = 30;
    };

    class 168Rnd_CMFlare_Chaff_Magazine;

    class 96Rnd_CMFlare_Chaff_Magazine : 168Rnd_CMFlare_Chaff_Magazine
    {
        count = 96;
    };

    class PylonMissile_Missile_AA_R73_x1;

    class OPT_PylonMissile_Missile_AA_R73_x1 : PylonMissile_Missile_AA_R73_x1
    {
        ammo = "OPT_ammo_Missile_AA_R73";
        pylonWeapon = "OPT_weapon_R73Launcher";
    };

    class PylonMissile_Missile_AA_R77_INT_x1;

    class OPT_PylonMissile_Missile_AA_R77_INT_x1 : PylonMissile_Missile_AA_R77_INT_x1
    {
        ammo = "OPT_ammo_Missile_AA_R77";
        pylonWeapon = "OPT_weapon_R77Launcher";
    };

    class PylonMissile_Missile_AA_R77_x1;

    class OPT_PylonMissile_Missile_AA_R77_x1 : PylonMissile_Missile_AA_R77_x1
    {
        ammo = "OPT_ammo_Missile_AA_R77";
        pylonWeapon = "OPT_weapon_R77Launcher";
    };

    class PylonMissile_Missile_AGM_KH25_x1;

    class OPT_PylonMissile_Missile_AGM_KH25_x1 : PylonMissile_Missile_AGM_KH25_x1
    {
        ammo = "OPT_Missile_AGM_01_F";
        displayName = "OPT KH25 AGM x1";
        pylonWeapon = "OPT_weapon_AGM_KH25Launcher";
    };

    class PylonMissile_Missile_AGM_KH25_INT_x1;

    class OPT_PylonMissile_Missile_AGM_KH25_INT_x1 : PylonMissile_Missile_AGM_KH25_INT_x1
    {
        ammo = "OPT_Missile_AGM_01_F";
        descriptionShort = "OPT KH25 x1";
        pylonWeapon = "OPT_weapon_AGM_KH25Launcher";
    };

    class PylonMissile_Bomb_KAB250_x1;

    class OPT_PylonMissile_Bomb_KAB250_x1 : PylonMissile_Bomb_KAB250_x1
    {
        ammo = "OPT_Bomb_03_F";
        displayName = "OPT KAB 250 LGB x1";
        pylonWeapon = "OPT_weapon_KAB250Launcher";
    };

    class PylonRack_Missile_AGM_02_x1;

    class OPT_PylonRack_Missile_AGM_02_x1 : PylonRack_Missile_AGM_02_x1
    {
        ammo = "OPT_Missile_AGM_02_F";
        displayName = "OPT Macer II AGM x1";
        pylonWeapon = "OPT_weapon_AGM_65Launcher";
    };

    class PylonRack_Missile_AGM_02_x2;

    class OPT_PylonRack_Missile_AGM_02_x2 : PylonRack_Missile_AGM_02_x2
    {
        ammo = "OPT_Missile_AGM_02_F";
        descriptionShort = "OPT Macer II AGM 2x";
        pylonWeapon = "OPT_weapon_AGM_65Launcher";
    };

    class PylonMissile_Missile_AMRAAM_D_INT_x1;

    class OPT_PylonMissile_Missile_AMRAAM_D_INT_x1 : PylonMissile_Missile_AMRAAM_D_INT_x1
    {
        ammo = "OPT_ammo_Missile_AMRAAM_D";
        displayName = "AMRAAM D AA x1";
        pylonWeapon = "OPT_weapon_AMRAAMLauncher";
    };

    class PylonMissile_Missile_AMRAAM_D_x1;

    class OPT_PylonMissile_Missile_AMRAAM_D_x1 : PylonMissile_Missile_AMRAAM_D_x1
    {
        ammo = "OPT_ammo_Missile_AMRAAM_D";
        displayName = "OPT AMRAAM D AA x1";
        pylonWeapon = "OPT_weapon_AMRAAMLauncher";
    };

    class PylonMissile_Missile_BIM9X_x1;

    class OPT_PylonMissile_Missile_BIM9X_x1 : PylonMissile_Missile_BIM9X_x1
    {
        ammo = "OPT_ammo_Missile_BIM9X";
        displayName = "OPT BIM 9X AA x1";
        pylonWeapon = "OPT_weapon_BIM9xLauncher";
    };

    class PylonRack_Missile_BIM9X_x2;

    class OPT_PylonRack_Missile_BIM9X_x2 : PylonRack_Missile_BIM9X_x2
    {
        ammo = "OPT_ammo_Missile_BIM9X";
        displayName = "OPT BIM 9X AA x2";
        pylonWeapon = "OPT_weapon_BIM9xLauncher";
    };

    class PylonMissile_Bomb_GBU12_x1;

    class OPT_PylonMissile_Bomb_GBU12_x1 : PylonMissile_Bomb_GBU12_x1
    {
        ammo = "OPT_Bomb_04_F";
        displayName = "GBU 12 LGB x1";
        pylonWeapon = "OPT_weapon_GBU12Launcher";
    };

    class PylonRack_1Rnd_Missile_AGM_02_F;

    class OPT_PylonRack_1Rnd_Missile_AGM_02_F : PylonRack_1Rnd_Missile_AGM_02_F
    {
        ammo = "OPT_Missile_AGM_02_F";
        displayName = "OPT Macer";
        pylonWeapon = "OPT_Missile_AGM_02_Plane_CAS_01_F";
    };

    class PylonRack_1Rnd_Missile_AGM_01_F;

    class OPT_PylonRack_1Rnd_Missile_AGM_01_F : PylonRack_1Rnd_Missile_AGM_01_F
    {
        ammo = "OPT_Missile_AGM_01_F";
        displayName = "OPT Sharur";
        pylonWeapon = "OPT_Missile_AGM_01_Plane_CAS_02_F";
    };

    class PylonMissile_1Rnd_Bomb_04_F;

    class OPT_PylonMissile_1Rnd_Bomb_04_F : PylonMissile_1Rnd_Bomb_04_F
    {
        ammo = "OPT_Bomb_04_F";
        displayName = "OPT GBU-12";
        pylonWeapon = "OPT_Bomb_04_Plane_CAS_01_F";
    };

    class PylonMissile_1Rnd_Bomb_03_F;

    class OPT_PylonMissile_1Rnd_Bomb_03_F : PylonMissile_1Rnd_Bomb_03_F
    {
        ammo = "OPT_Bomb_03_F";
        displayName = "OPT LOM-250G";
        pylonWeapon = "OPT_Bomb_03_Plane_CAS_02_F";
    };

    class PylonRack_1Rnd_Missile_AA_03_F;

    class OPT_PylonRack_1Rnd_Missile_AA_03_F : PylonRack_1Rnd_Missile_AA_03_F
    {
        ammo = "OPT_Missile_AA_03_F";
        displayName = "OPT Sahr-3";
        pylonWeapon = "OPT_Missile_AA_03_Plane_CAS_02_F";
    };

    class PylonRack_1Rnd_Missile_AA_04_F;

    class OPT_PylonRack_1Rnd_Missile_AA_04_F : PylonRack_1Rnd_Missile_AA_04_F
    {
        ammo = "OPT_Missile_AA_04_F";
        displayName = "OPT Falchion-22";
        pylonWeapon = "OPT_Missile_AA_04_Plane_CAS_01_F";
    };

    class PylonMissile_1Rnd_LG_scalpel;

    class OPT_PylonMissile_1Rnd_LG_scalpel : PylonMissile_1Rnd_LG_scalpel
    {
        ammo = "OPT_M_Scalpel_AT";
        displayName = "OPT Scalpel";
        pylonWeapon = "OPT_missiles_SCALPEL";
        displayNameShort = "AG";
    };

    class PylonRack_1Rnd_LG_scalpel;

    class OPT_PylonRack_1Rnd_LG_scalpel : PylonRack_1Rnd_LG_scalpel
    {
        ammo = "OPT_M_Scalpel_AT";
        displayName = "OPT Scalpel 1x";
        pylonWeapon = "OPT_missiles_SCALPEL";
        displayNameShort = "AG";
    };

    class PylonRack_3Rnd_LG_scalpel;

    class OPT_PylonRack_3Rnd_LG_scalpel : PylonRack_3Rnd_LG_scalpel
    {
        ammo = "OPT_M_Scalpel_AT";
        displayName = "OPT Scalpel 3x";
        pylonWeapon = "OPT_missiles_SCALPEL";
        displayNameShort = "AG";
    };

    class PylonRack_4Rnd_LG_scalpel;

    class OPT_PylonRack_4Rnd_LG_scalpel : PylonRack_4Rnd_LG_scalpel
    {
        ammo = "OPT_M_Scalpel_AT";
        pylonWeapon = "OPT_missiles_SCALPEL";
        displayName = "OPT Scalpel 4x";
        displayNameShort = "AG";
    };

    class PylonRack_12Rnd_missiles;

    class OPT_PylonRack_12Rnd_missiles : PylonRack_12Rnd_missiles
    {
        ammo = "OPT_M_AT";
        displayName = "OPT DAR";
        pylonWeapon = "OPT_missiles_DAR";
        displayNameShort = "Explosiv";
    };

    class PylonRack_12Rnd_PG_missiles;

    class OPT_PylonRack_12Rnd_PG_missiles : PylonRack_12Rnd_PG_missiles
    {
        ammo = "OPT_M_PG_AT";
        displayName = "OPT DAGR";
        pylonWeapon = "OPT_missiles_DAGR";
        displayNameShort = "Explosiv";
    };

    class PylonRack_1Rnd_AAA_missiles;

    class OPT_PylonRack_1Rnd_AAA_missiles : PylonRack_1Rnd_AAA_missiles
    {
        ammo = "OPT_M_Air_AA";
        displayName = "OPT ASRAAM";
        pylonWeapon = "OPT_missiles_ASRAAM";
    };

    class PylonMissile_1Rnd_AAA_missiles;

    class OPT_PylonMissile_1Rnd_AAA_missiles : PylonMissile_1Rnd_AAA_missiles
    {
        ammo = "OPT_M_Air_AA";
        displayName = "OPT ASRAAM";
        pylonWeapon = "OPT_missiles_ASRAAM";
    };

    class PylonRack_1Rnd_GAA_missiles;

    class OPT_PylonRack_1Rnd_GAA_missiles : PylonRack_1Rnd_GAA_missiles
    {
        ammo = "OPT_M_Zephyr";
        displayName = "OPT Zephyr";
        pylonWeapon = "OPT_missiles_Zephyr";
    };

    class PylonWeapon_300Rnd_20mm_shells;

    class OPT_PylonWeapon_300Rnd_20mm_shells : PylonWeapon_300Rnd_20mm_shells
    {
        ammo = "OPT_B_20mm";
        displayName = "OPT Zwillingsgeschütz 20mm";
        pylonWeapon = "OPT_Twin_Cannon_20mm";
    };

    class PylonRack_19Rnd_Rocket_Skyfire;

    class OPT_PylonRack_19Rnd_Rocket_Skyfire : PylonRack_19Rnd_Rocket_Skyfire
    {
        ammo = "OPT_R_80mm_HE";
        displayName = "OPT Skyfire 19x";
        pylonWeapon = "OPT_rockets_Skyfire";
    };

    class PylonRack_7Rnd_Rocket_04_HE_F;

    class OPT_PylonRack_7Rnd_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F
    {
        ammo = "OPT_Rocket_04_HE_F";
        displayName = "OPT Shrieker 7x HE";
        pylonWeapon = "OPT_Rocket_04_HE_Plane_CAS_01_F";
    };

    class PylonRack_7Rnd_Rocket_04_AP_F;

    class OPT_PylonRack_7Rnd_Rocket_04_AP_F : PylonRack_7Rnd_Rocket_04_AP_F
    {
        ammo = "OPT_Rocket_04_AP_F";
        displayName = "OPT Shrieker 7x AP";
        pylonWeapon = "OPT_Rocket_04_AP_Plane_CAS_01_F";
    };

    class PylonRack_20Rnd_Rocket_03_HE_F;

    class OPT_PylonRack_20Rnd_Rocket_03_HE_F : PylonRack_20Rnd_Rocket_03_HE_F
    {
        ammo = "OPT_Rocket_03_HE_F";
        displayName = "OPT Tratnyr 20x HE";
        pylonWeapon = "OPT_Rocket_03_HE_Plane_CAS_02_F";
    };

    class PylonRack_20Rnd_Rocket_03_AP_F;

    class OPT_PylonRack_20Rnd_Rocket_03_AP_F : PylonRack_20Rnd_Rocket_03_AP_F
    {
        ammo = "OPT_Rocket_03_AP_F";
        displayName = "OPT Tratnyr 20x AP";
        pylonWeapon = "OPT_Rocket_03_AP_Plane_CAS_02_F";
    };

    class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;

    class OPT_1000Rnd_Gatling_30mm_Plane_CAS_01_F : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
    {
        ammo = "OPT_Gatling_30mm_HE_Plane_CAS_01_F";
    };

    class 500Rnd_Cannon_30mm_Plane_CAS_02_F;

    class OPT_500Rnd_Cannon_30mm_Plane_CAS_02_F : 500Rnd_Cannon_30mm_Plane_CAS_02_F
    {
        ammo = "OPT_Cannon_30mm_HE_Plane_CAS_02_F";
    };

    class magazine_Fighter01_Gun20mm_AA_x450;

    class OPT_magazine_Fighter01_Gun20mm_AA_x450 : magazine_Fighter01_Gun20mm_AA_x450
    {
        ammo = "OPT_ammo_Fighter01_Gun20mm_AA";
    };

    class magazine_Fighter02_Gun30mm_AA_x180;

    class OPT_magazine_Fighter02_Gun30mm_AA_x180 : magazine_Fighter02_Gun30mm_AA_x180
    {
        ammo = "OPT_ammo_Fighter02_Gun30mm_AA";
    };

    class 680Rnd_35mm_AA_shells_Tracer_Red;

    class OPT_680Rnd_35mm_AA_shells_Tracer_Red : 680Rnd_35mm_AA_shells_Tracer_Red
    {
        ammo = "OPT_B_35mm_AA_Tracer_Red";
    };

    class 680Rnd_35mm_AA_shells_Tracer_Green;

    class OPT_680Rnd_35mm_AA_shells_Tracer_Green : 680Rnd_35mm_AA_shells_Tracer_Green
    {
        ammo = "OPT_B_35mm_AA_Tracer_Green";
    };

    class 60Rnd_40mm_GPR_Tracer_Red_shells;

    class OPT_30Rnd_40mm_GPR_Tracer_Red_shells : 60Rnd_40mm_GPR_Tracer_Red_shells
    {
        count = 30;
    };

    class NLAW_F;

    class OPT_NLAW_F : NLAW_F
    {
        displayName = "PCML-Rakete (M)";
        displaynameshort = "Panzerabwehr M";
    };

    class Titan_AT;

    class OPT_Titan_AT : Titan_AT
    {
        ammo = "OPT_M_Titan_AT";
        displayName = "Titan-Panzerabwehr-Rakete (M)";
        displayNameShort = "Panzerabwehr M";
    };

    class 8Rnd_82mm_Mo_shells;

    class OPT_8Rnd_82mm_Mo_shells : 8Rnd_82mm_Mo_shells
    {
        ammo = "OPT_Sh_82mm_AMOS";
    };

    class 32Rnd_155mm_Mo_shells;

    class OPT_32Rnd_155mm_Mo_shells : 32Rnd_155mm_Mo_shells
    {
        ammo = "OPT_Sh_155mm_AMOS";
    };

    class 2Rnd_155mm_Mo_Cluster;

    class OPT_2Rnd_155mm_Mo_Cluster : 2Rnd_155mm_Mo_Cluster
    {
        ammo = "OPT_Cluster_155mm_AMOS";
    };

    class 12Rnd_230mm_rockets;

    class OPT_12Rnd_230mm_rockets : 12Rnd_230mm_rockets
    {
        ammo = "OPT_R_230mm_HE";
    };

    class 4Rnd_LG_Jian;

    class OPT_4Rnd_LG_Jian : 4Rnd_LG_Jian
    {
        ammo = "OPT_M_Jian_AT";
    };

    class 150Rnd_556x45_Drum_Mag_Tracer_F;

    class OPT_150Rnd_556x45_Drum_Mag_Tracer_F : 150Rnd_556x45_Drum_Mag_Tracer_F
    {
    };

    class 100Rnd_580x42_Mag_Tracer_F;

    class OPT_100Rnd_580x42_Mag_Tracer_F : 100Rnd_580x42_Mag_Tracer_F
    {
    };

    class CUP_1100Rnd_TE1_Red_Tracer_20mm_M168_M;

    class OPT_CUP_50Rnd_TE1_Red_Tracer_20mm_M168_M : CUP_1100Rnd_TE1_Red_Tracer_20mm_M168_M
    {
        count = 50;
    };

    class OPT_CUP_80Rnd_TE1_Red_Tracer_20mm_M168_M : CUP_1100Rnd_TE1_Red_Tracer_20mm_M168_M
    {
        count = 80;
    };

    class CUP_2000Rnd_23mm_AZP23_M;

    class OPT_CUP_50Rnd_23mm_AZP23_M : CUP_2000Rnd_23mm_AZP23_M
    {
        count = 50;
    };

    class OPT_CUP_80Rnd_23mm_AZP23_M : CUP_2000Rnd_23mm_AZP23_M
    {
        count = 80;
    };

    class CUP_40Rnd_GRAD_HE;

    class OPT_CUP_40Rnd_GRAD_HE: CUP_40Rnd_GRAD_HE
    {
        ammo = "OPT_CUP_R_GRAD_HE";
    };

    class CUP_Stinger_M;

    class OPT_CUP_Stinger_M: CUP_Stinger_M
    {
        author = $STR_CUP_AUTHOR_STRING;
        dlc = "CommunityUpgradeProject";
        displayName = "$STR_CUP_dn_stinger_M";
        displayNameShort = $STR_A3_CFGMAGAZINES_TITAN_AA_DNS;
        ammo = "CUP_M_Stinger_AA";
        type = 6 * 256;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_stinger_ca.paa";
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\Stinger\CUP_Stinger_Proxy.p3d";
        modelSpecial = "";
        descriptionShort = "$STR_CUP_dss_stinger_M";
        mass = 219;
        count = 1;
        initSpeed = 40;
        maxLeadSpeed = 320;
    };

    class CUP_Igla_M;

    class OPT_CUP_Igla_M: CUP_Igla_M
    {
        author = $STR_CUP_AUTHOR_STRING;
        dlc = "CommunityUpgradeProject";
        displayName = "$STR_CUP_dn_igla_M";
        descriptionShort = "$STR_CUP_dss_igla_M";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Igla\CUP_igla_loaded.p3d";
        ammo = "CUP_M_9K38_Igla_AA";
        type = 6 * 256;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_igla_ca.paa";
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Igla\CUP_igla_loaded.p3d";
        initSpeed = 32;
        maxLeadSpeed = 150;
        mass = 219;
        maxThrowHoldTime = 2;
        maxThrowIntensityCoef = 1.4;
        minThrowIntensityCoef = 0.3;
        simulation = "ProxyMagazines";
    };

    class CUP_8Rnd_AT5_BMP2_M;

    class OPT_CUP_5Rnd_AT5_BMP2_M: CUP_8Rnd_AT5_BMP2_M
    {
        count = 5;
    };

    class CUP_2Rnd_TOW2_M;

    class OPT_CUP_1Rnd_TOW2_M: CUP_2Rnd_TOW2_M
    {
        count = 1;
    };

    class CUP_250Rnd_TE1_30mm_GSh302K_HE_M;

    class OPT_CUP_50Rnd_TE1_30mm_GSh302K_HE_M: CUP_250Rnd_TE1_30mm_GSh302K_HE_M
    {
        count = 50;
    };
};

class CfgWeapons
{
    class Pistol_Base_F;

    class hgun_P07_F : Pistol_Base_F
    {
        class WeaponSlotsInfo;
    };

    class OPT_hgun_P07_F : hgun_P07_F
    {
        displayname = "P07 9 mm";
        _generalMacro = "OPT_hgun_P07_F";
        baseWeapon = "OPT_hgun_P07_F";
        magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class hgun_P07_khk_F : hgun_P07_F
    {
    };

    class OPT_hgun_P07_khk_F : hgun_P07_khk_F
    {
        displayName = "P07 9 mm (Khaki)";
        _generalMacro = "OPT_hgun_P07_F";
        baseWeapon = "OPT_hgun_P07_khk_F";
        magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class hgun_P07_snds_F : hgun_P07_F
    {
    };

    class OPT_hgun_P07_snds_F : hgun_P07_snds_F
    {
        displayname = "P07 9 mm";
        _generalMacro = "OPT_hgun_P07_snds_F";
        baseWeapon = "OPT_hgun_P07_F";
        magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class hgun_P07_khk_Snds_F : hgun_P07_khk_F
    {
    };

    class OPT_hgun_P07_khk_Snds_F : hgun_P07_khk_Snds_F
    {
        _generalMacro = "OPT_hgun_P07_snds_F";
        displayName = "P07 9 mm (Khaki)";
        baseWeapon = "OPT_hgun_P07_khk_F";
        magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class hgun_Rook40_F : Pistol_Base_F
    {
        class WeaponSlotsInfo;
    };

    class OPT_hgun_Rook40_F : hgun_Rook40_F
    {
        displayname = "Rook-40 9 mm";
        _generalMacro = "OPT_hgun_Rook40_F";
        baseWeapon = "OPT_hgun_Rook40_F";
        magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class hgun_Rook40_snds_F : hgun_Rook40_F
    {
    };

    class OPT_hgun_Rook40_snds_F : hgun_Rook40_snds_F
    {
        displayname = "Rook-40 9 mm";
        _generalMacro = "OPT_hgun_Rook40_snds_F";
        baseWeapon = "OPT_hgun_Rook40_F";
        magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class hgun_ACPC2_F : Pistol_Base_F
    {
        class WeaponSlotsInfo;
    };

    class OPT_hgun_ACPC2_F : hgun_ACPC2_F
    {
        displayname = "ACP-C2 .45 ACP";
        _generalMacro = "OPT_hgun_ACPC2_F";
        baseWeapon = "OPT_hgun_ACPC2_F";
        magazines[] = {"9Rnd_45ACP_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class hgun_ACPC2_snds_F : hgun_ACPC2_F
    {
    };

    class OPT_hgun_ACPC2_snds_F : hgun_ACPC2_snds_F
    {
        displayname = "ACP-C2 .45 ACP";
        _generalMacro = "OPT_hgun_ACPC2_snds_F";
        baseWeapon = "OPT_hgun_Rook40_F";
        magazines[] = {"9Rnd_45ACP_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class Rifle;

    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
    };

    class Rifle_Short_Base_F : Rifle_Base_F
    {
    };

    class SMG_01_Base : Rifle_Short_Base_F
    {
    };

    class SMG_01_F : SMG_01_Base
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
            class MuzzleSlot;
        };
    };

    class OPT_SMG_01_F : SMG_01_F
    {
        _generalMacro = "OPT_SMG_01_F";
        baseWeapon = "OPT_SMG_01_F";
        displayName = "Vermin MP .45 ACP";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco_smg", "optic_ACO_grn_smg", "optic_Holosight_smg", "optic_Holosight_smg_blk_F"};
            };

            class MuzzleSlot : MuzzleSlot
            {
                compatibleItems[] = {};
            };
        };
    };

    class OPT_SMG_01_ACO_F : OPT_SMG_01_F
    {
        _generalMacro = "OPT_SMG_01_ACO_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_aco_smg";
            };
        };
    };

    class SMG_02_base_F : Rifle_Short_Base_F
    {
    };

    class SMG_02_F : SMG_02_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
            class MuzzleSlot;
        };
    };

    class OPT_SMG_02_F : SMG_02_F
    {
        _generalMacro = "OPT_SMG_02_F";
        displayName = "Sting 9 mm";
        baseWeapon = "OPT_SMG_02_F";
        magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Green_Mag"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco_smg", "optic_ACO_grn_smg", "optic_Holosight_smg", "optic_Holosight_smg_blk_F"};
            };

            class MuzzleSlot : MuzzleSlot
            {
                compatibleItems[] = {};
            };
        };
    };

    class OPT_SMG_02_ACO_F : OPT_SMG_02_F
    {
        _generalMacro = "OPT_SMG_02_ACO_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn_smg";
            };
        };
    };

    class SDAR_base_F : Rifle_Base_F
    {
    };

    class arifle_SDAR_F : SDAR_base_F
    {
    };

    class OPT_arifle_SDAR_F : arifle_SDAR_F
    {
        displayName = "SDAR 5,56 mm";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class Rifle_Long_Base_F : Rifle_Base_F
    {
    };

    class LMG_Zafir_F : Rifle_Long_Base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_LMG_Zafir_F : LMG_Zafir_F
    {
        _generalMacro = "OPT_LMG_Zafir_F";
        displayName = "Zafir 7,62 mm";
        baseWeapon = "OPT_LMG_Zafir_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {


            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_LMG_Zafir_ACO_pointer_F : OPT_LMG_Zafir_F
    {
        _generalMacro = "OPT_LMG_Zafir_ACO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class LMG_Mk200_F : Rifle_Long_Base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_LMG_Mk200_F : LMG_Mk200_F
    {
        _generalMacro = "OPT_LMG_Mk200_F";
        displayName = "Mk200 6,5 mm";
        baseWeapon = "OPT_LMG_Mk200_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_LMG_Mk200_ACO_BI_pointer_F : OPT_LMG_Mk200_F
    {
        _generalMacro = "OPT_LMG_Mk200_ACO_BI_pointer_F";
        displayName = "Mk200 6,5 mm";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                item = "bipod_01_F_blk";
                slot = "UnderBarrelSlot";
            };
        };
    };

    class MMG_02_base_F : Rifle_Long_Base_F
    {
    };

    class MMG_02_camo_F : MMG_02_base_F
    {
    };

    class MMG_02_black_F : MMG_02_camo_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_MMG_02_black_F : MMG_02_black_F
    {
        _generalMacro = "OPT_MMG_02_black_F";
        baseWeapon = "OPT_MMG_02_black_F";
        displayName = "SPMG .338 (Schwarz)";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_MMG_02_black_ACO_BI_Pointer_F : OPT_MMG_02_black_F
    {
        _generalMacro = "OPT_MMG_02_black_ACO_BI_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_01_F_blk";
            };
        };
    };

    class MMG_01_base_F : Rifle_Long_Base_F
    {
    };

    class MMG_01_hex_F : MMG_01_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_MMG_01_hex_F : MMG_01_hex_F
    {
        _generalMacro = "OPT_MMG_01_hex_F";
        baseWeapon = "OPT_MMG_01_hex_F";
        displayName = "Navid 9,3 mm (Hex)";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_MMG_01_hex_ACO_BI_Pointer_F : OPT_MMG_01_hex_F
    {
        _generalMacro = "OPT_MMG_01_hex_ACO_BI_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_hex";
            };
        };
    };

    class MMG_01_tan_F : MMG_01_hex_F
    {
    };

    class OPT_MMG_01_tan_F : MMG_01_tan_F
    {
        _generalMacro = "OPT_MMG_01_tan_F";
        baseWeapon = "OPT_MMG_01_tan_F";
        displayName = "Navid 9,3 mm (Hellbraun)";
        scope = 2;

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_MMG_01_tan_ACO_BI_Pointer_F : OPT_MMG_01_tan_F
    {
        _generalMacro = "OPT_MMG_01_tan_ACO_BI_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_blk";
            };
        };
    };

    class arifle_MX_Base_F : Rifle_Base_F
    {
    };

    class arifle_MXM_F : arifle_MX_Base_F
    {
    };

    class arifle_MXM_Black_F : arifle_MXM_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_MXM_Black_F : arifle_MXM_Black_F
    {
        _generalMacro = "OPT_arifle_MXM_Black_F";
        baseWeapon = "OPT_arifle_MXM_Black_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_DMS", "optic_ERCO_blk_F", "optic_NVS", "optic_SOS", "optic_KHS_blk", "optic_AMS"};
            };
        };
    };

    class OPT_arifle_MXM_Black_RCO_LP_BI_snds_F : OPT_arifle_MXM_Black_F
    {
        _generalMacro = "OPT_arifle_MXM_Black_RCO_LP_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                item = "bipod_01_F_blk";
                slot = "UnderBarrelSlot";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class OPT_arifle_MXM_Black_AMS_LP_BI_snds_F : OPT_arifle_MXM_Black_F
    {
        _generalMacro = "OPT_arifle_MXM_Black_AMS_LP_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_AMS";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                item = "bipod_01_F_blk";
                slot = "UnderBarrelSlot";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class arifle_MX_SW_F : arifle_MX_Base_F
    {
    };

    class arifle_MX_SW_Black_F : arifle_MX_SW_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_MX_SW_Black_F : arifle_MX_SW_Black_F
    {
        _generalMacro = "OPT_arifle_MX_SW_Black_F";
        baseWeapon = "OPT_arifle_MX_SW_Black_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_MX_SW_Black_ACO_pointer_F : OPT_arifle_MX_SW_Black_F
    {
        _generalMacro = "OPT_arifle_MX_SW_Black_ACO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                item = "bipod_01_F_blk";
                slot = "UnderBarrelSlot";
            };
        };
    };

    class arifle_MX_GL_F : arifle_MX_Base_F
    {
    };

    class arifle_MX_GL_Black_F : arifle_MX_GL_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_MX_GL_Black_F : arifle_MX_GL_Black_F
    {
        _generalMacro = "OPT arifle_MX_GL_Black_F";
        baseWeapon = "OPT_arifle_MX_GL_Black_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_MX_GL_Black_RCO_pointer_F : OPT_arifle_MX_GL_Black_F
    {
        _generalMacro = "OPT_arifle_MX_GL_Black_RCO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_MX_GL_Black_ACO_pointer_F : OPT_arifle_MX_GL_Black_F
    {
        _generalMacro = "OPT_arifle_MX_GL_Black_RCO_pointer_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_MX_GL_Black_RCO_pointer_snds_F : OPT_arifle_MX_GL_Black_F
    {
        _generalMacro = "OPT_arifle_MX_GL_Black_RCO_pointer_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class OPT_arifle_MX_GL_Black_ACO_pointer_snds_F : OPT_arifle_MX_GL_Black_F
    {
        _generalMacro = "OPT_arifle_MX_GL_Black_ACO_pointer_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class arifle_MX_F : arifle_MX_Base_F
    {
    };

    class arifle_MX_Black_F : arifle_MX_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_MX_Black_F : arifle_MX_Black_F
    {
        _generalMacro = "OPT_arifle_MX_Black_F";
        baseWeapon = "OPT_arifle_MX_Black_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_MX_Black_Hamr_pointer_F : OPT_arifle_MX_Black_F
    {
        _generalMacro = "OPT_arifle_MX_Black_Hamr_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_MX_Black_RCO_pointer_snds_F : OPT_arifle_MX_Black_F
    {
        _generalMacro = "OPT_arifle_MX_Black_RCO_pointer_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class OPT_arifle_MX_Black_ACO_pointer_F : OPT_arifle_MX_Black_F
    {
        _generalMacro = "OPT_arifle_MX_Black_ACO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_MX_Black_ACO_pointer_snds_F : OPT_arifle_MX_Black_F
    {
        _generalMacro = "OPT_arifle_MX_Black_ACO_pointer_snds_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class arifle_MXC_F : arifle_MX_Base_F
    {
    };

    class arifle_MXC_Black_F : arifle_MXC_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_MXC_Black_F : arifle_MXC_Black_F
    {
        _generalMacro = "OPT_arifle_MXC_Black_F";
        baseWeapon = "OPT_arifle_MXC_Black_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_arifle_MXC_Black_ACO_pointer_F : OPT_arifle_MXC_Black_F
    {
        _generalMacro = "OPT_arifle_MXC_Black_ACO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class arifle_Katiba_Base_F : Rifle_Base_F
    {
    };

    class arifle_Katiba_C_F : arifle_Katiba_Base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_Katiba_C_F : arifle_Katiba_C_F
    {
        _generalMacro = "OPT_arifle_Katiba_C_F";
        baseWeapon = "OPT_arifle_Katiba_C_F";
        displayName = "Katiba-Karabiner 6,5 mm";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_arifle_Katiba_C_ACO_pointer_F : OPT_arifle_Katiba_C_F
    {
        _generalMacro = "OPT_arifle_Katiba_C_ACO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class arifle_Katiba_GL_F : arifle_Katiba_Base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_Katiba_GL_F : arifle_Katiba_GL_F
    {
        _generalMacro = "OPT_arifle_Katiba_GL_F";
        baseWeapon = "OPT_arifle_Katiba_GL_F";
        displayName = "Katiba GL 6,5 mm";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_Katiba_GL_RCO_pointer_F : OPT_arifle_Katiba_GL_F
    {
        _generalMacro = "OPT_arifle_Katiba_GL_RCO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_Katiba_GL_RCO_pointer_snds_F : OPT_arifle_Katiba_GL_F
    {
        _generalMacro = "OPT_arifle_Katiba_GL_RCO_pointer_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class OPT_arifle_Katiba_GL_ACO_pointer_snds_F : OPT_arifle_Katiba_GL_F
    {
        _generalMacro = "OPT_arifle_Katiba_GL_ACO_pointer_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class arifle_Katiba_F : arifle_Katiba_Base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_Katiba_F : arifle_Katiba_F
    {
        _generalMacro = "OPT_arifle_Katiba_F";
        baseWeapon = "OPT_arifle_Katiba_F";
        displayName = "Katiba 6,5 mm";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_Katiba_RCO_pointer_F : OPT_arifle_Katiba_F
    {
        _generalMacro = "OPT_arifle_Katiba_RCO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_Katiba_ACO_pointer_F : OPT_arifle_Katiba_F
    {
        _generalMacro = "OPT_arifle_Katiba_ACO_pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_Katiba_RCO_pointer_snds_F : OPT_arifle_Katiba_F
    {
        _generalMacro = "OPT_arifle_Katiba_RCO_pointer_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class OPT_arifle_Katiba_ACO_pointer_snds_F : OPT_arifle_Katiba_F
    {
        _generalMacro = "OPT_arifle_Katiba_ACO_pointer_snds_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_H";
            };
        };
    };

    class DMR_01_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_DMR_01_F : DMR_01_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_srifle_DMR_01_F : srifle_DMR_01_F
    {
        _generalMacro = "OPT_srifle_DMR_01_F";
        baseWeapon = "OPT_srifle_DMR_01_F";
        displayName = "Rahim 7,62 mm";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class OPT_srifle_DMR_01_DMS_LP_BI_snds_F : OPT_srifle_DMR_01_F
    {
        _generalMacro = "OPT_srifle_DMR_01_DMS_LP_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_DMS";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_hex";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class OPT_srifle_DMR_01_RCO_LP_BI_snds_F : OPT_srifle_DMR_01_F
    {
        _generalMacro = "OPT_srifle_DMR_01_RCO_LP_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_hex";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class EBR_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_EBR_F : EBR_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_srifle_EBR_F : srifle_EBR_F
    {
        _generalMacro = "OPT_srifle_EBR_F";
        baseWeapon = "OPT_srifle_EBR_F";
        displayName = "Mk18 ABR 7,62 mm";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class OPT_srifle_EBR_DMS_LP_BI_snds_F : OPT_srifle_EBR_F
    {
        _generalMacro = "OPT_srifle_EBR_DMS_LP_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_DMS";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                item = "bipod_01_F_blk";
                slot = "UnderBarrelSlot";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class DMR_02_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_DMR_02_F : DMR_02_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_srifle_DMR_02_F : srifle_DMR_02_F
    {
        _generalMacro = "OPT_srifle_DMR_02_F";
        displayName = "MAR-10 .338 (Schwarz)";
        baseWeapon = "OPT_srifle_DMR_02_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class OPT_srifle_DMR_02_AMS_LP_BI_F : OPT_srifle_DMR_02_F
    {
        _generalMacro = "OPT_srifle_DMR_02_AMS_LP_BI_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_AMS";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_01_F_blk";
            };
        };
    };

    class DMR_05_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_DMR_05_blk_F : DMR_05_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class srifle_DMR_05_hex_F : srifle_DMR_05_blk_F
    {
    };

    class OPT_srifle_DMR_05_hex_F : srifle_DMR_05_hex_F
    {
        _generalMacro = "OPT_srifle_DMR_05_hex_F";
        displayName = "Cyrus 9,3 mm (Hex)";
        baseWeapon = "OPT_srifle_DMR_05_hex_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class OPT_srifle_DMR_05_hex_KHS_LP_BI_F : OPT_srifle_DMR_05_hex_F
    {
        _generalMacro = "OPT_srifle_DMR_05_hex_KHS_LP_BI_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_KHS_hex";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_hex";
            };
        };
    };

    class OPT_srifle_DMR_05_blk_F : srifle_DMR_05_blk_F
    {
        _generalMacro = "OPT_srifle_DMR_05_blk_F";
        displayName = "Cyrus 9,3 mm (Schwarz)";
        baseWeapon = "OPT_srifle_DMR_05_blk_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class OPT_srifle_DMR_05_blk_KHS_LP_BI_F : OPT_srifle_DMR_05_blk_F
    {
        _generalMacro = "OPT_srifle_DMR_05_blk_KHS_LP_BI_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_KHS_blk";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_blk";
            };
        };
    };

    class DMR_03_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_DMR_03_F : DMR_03_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_srifle_DMR_03_F : srifle_DMR_03_F
    {
        _generalMacro = "OPT_srifle_DMR_03_F";
        displayName = "Mk-I EMR 7,62 mm (Schwarz)";
        baseWeapon = "OPT_srifle_DMR_03_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class OPT_srifle_DMR_03_AMS_LP_BI_snds_F : OPT_srifle_DMR_03_F
    {
        _generalMacro = "OPT_srifle_DMR_03_AMS_LP_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_AMS";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_01_F_blk";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class OPT_srifle_DMR_03_RCO_LP_BI_snds_F : OPT_srifle_DMR_03_F
    {
        _generalMacro = "OPT_srifle_DMR_03_RCO_LP_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_hamr";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_01_F_blk";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class DMR_06_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_DMR_06_camo_F : DMR_06_base_F
    {
    };

    class srifle_DMR_06_olive_F : srifle_DMR_06_camo_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_srifle_DMR_06_olive_F : srifle_DMR_06_olive_F
    {
        _generalMacro = "OPT_srifle_DMR_06_olive_F";
        displayName = "Mk14 7,62 mm (Oliv)";
        baseWeapon = "OPT_srifle_DMR_06_olive_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class OPT_srifle_DMR_06_olive_KHS_BI_snds_F : OPT_srifle_DMR_06_olive_F
    {
        _generalMacro = "OPT_srifle_DMR_06_olive_KHS_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_KHS_blk";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_blk";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class OPT_srifle_DMR_06_olive_RCO_BI_snds_F : OPT_srifle_DMR_06_olive_F
    {
        _generalMacro = "OPT_srifle_DMR_06_olive_RCO_BI_snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_hamr";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_02_F_blk";
            };

            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class GM6_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_GM6_F : GM6_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class srifle_GM6_camo_F : srifle_GM6_F
    {
    };

    class OPT_srifle_GM6_camo_F : srifle_GM6_camo_F
    {
        _generalMacro = "OPT_srifle_GM6_camo_F";
        displayName = "GM6 Lynx 12,7 mm (Tarnfleck)";
        baseWeapon = "OPT_srifle_GM6_camo_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_NVS", "optic_SOS", "optic_LRPS", "optic_LRPS_ghex_F"};
            };
        };
    };

    class OPT_srifle_GM6_camo_LRPS_F : OPT_srifle_GM6_camo_F
    {
        _generalMacro = "OPT_srifle_GM6_camo_LRPS_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_LRPS";
            };
        };
    };

    class srifle_GM6_ghex_F : srifle_GM6_F
    {
    };

    class OPT_srifle_GM6_ghex_F : srifle_GM6_ghex_F
    {
        _generalMacro = "OPT_srifle_GM6_ghex_F";
        displayName = "GM6 Lynx 12,7 mm (Grüne Sechsecke)";
        baseWeapon = "OPT_srifle_GM6_ghex_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_NVS", "optic_SOS", "optic_LRPS", "optic_LRPS_ghex_F"};
            };
        };
    };

    class OPT_srifle_GM6_ghex_LRPS_F : OPT_srifle_GM6_ghex_F
    {
        _generalMacro = "OPT_srifle_GM6_ghex_LRPS_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_LRPS_ghex_F";
            };
        };
    };

    class LRR_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_LRR_F : LRR_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_srifle_LRR_F : srifle_LRR_F
    {
        _generalMacro = "OPT_srifle_LRR_F";
        displayName = "M320 LRR .408";
        baseWeapon = "OPT_srifle_LRR_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_NVS", "optic_SOS", "optic_LRPS", "optic_LRPS_tna_F"};
            };
        };
    };

    class OPT_srifle_LRR_LRPS_F : OPT_srifle_LRR_F
    {
        _generalMacro = "OPT_srifle_LRR_LRPS_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_LRPS";
            };
        };
    };

    class srifle_LRR_camo_F : srifle_LRR_F
    {
    };

    class srifle_LRR_tna_F : srifle_LRR_camo_F
    {
    };

    class OPT_srifle_LRR_tna_F : srifle_LRR_tna_F
    {
        _generalMacro = "OPT_srifle_LRR_tna_F";
        displayName = "M320 LRR .408 (Tropen)";
        baseWeapon = "OPT_srifle_LRR_tna_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_NVS", "optic_SOS", "optic_LRPS", "optic_LRPS_tna_F"};
            };
        };
    };

    class OPT_srifle_LRR_tna_LRPS_F : OPT_srifle_LRR_tna_F
    {
        _generalMacro = "OPT_srifle_LRR_tna_LRPS_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_LRPS_tna_F";
            };
        };
    };

    class arifle_SPAR_01_base_F : Rifle_Base_F
    {
        magazines[] = {"30Rnd_556x45_Stanag"};
        class WeaponSlotsInfo;
    };

    class arifle_SPAR_01_blk_F : arifle_SPAR_01_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_SPAR_01_blk_F : arifle_SPAR_01_blk_F
    {
        displayName = "SPAR-16 5,56 mm (Schwarz)";
        _generalMacro = "OPT_arifle_SPAR_01_blk_F";
        baseWeapon = "OPT_arifle_SPAR_01_blk_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_SPAR_01_blk_ERCO_Pointer_F : OPT_arifle_SPAR_01_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_01_blk_ERCO_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ERCO_blk_F";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_SPAR_01_blk_ACO_Pointer_F : OPT_arifle_SPAR_01_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_01_blk_ACO_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_SPAR_01_blk_ACO_Pointer_Snds_F : OPT_arifle_SPAR_01_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_01_blk_ACO_Pointer_Snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                item = "muzzle_snds_M";
                slot = "MuzzleSlot";
            };
        };
    };

    class OPT_arifle_SPAR_01_blk_C_F : arifle_SPAR_01_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_01_blk_C_F";
        baseWeapon = "OPT_arifle_SPAR_01_blk_C_F";
        displayName = "SPAR-16 5,56 mm (Schwarz)";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F
    {
    };

    class arifle_SPAR_01_GL_blk_F : arifle_SPAR_01_GL_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_SPAR_01_GL_blk_F : arifle_SPAR_01_GL_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_01_GL_blk_F";
        displayName = "SPAR-16 GL 5,56 mm (Schwarz)";
        baseWeapon = "OPT_arifle_SPAR_01_GL_blk_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_SPAR_01_GL_blk_ACO_Pointer_F : OPT_arifle_SPAR_01_GL_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_01_GL_blk_ACO_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_SPAR_01_GL_blk_ERCO_Pointer_F : OPT_arifle_SPAR_01_GL_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_01_GL_blk_ERCO_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ERCO_blk_F";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class arifle_SPAR_02_base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class arifle_SPAR_02_blk_F : arifle_SPAR_02_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_SPAR_02_blk_F : arifle_SPAR_02_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_02_blk_F";
        displayName = "SPAR-16S 5,56 mm (Schwarz)";
        baseWeapon = "OPT_arifle_SPAR_02_blk_F";

        magazines[] = {"OPT_150Rnd_556x45_Drum_Mag_Tracer_F"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_arifle_SPAR_02_blk_ACO_Pointer_F : OPT_arifle_SPAR_02_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_02_blk_ACO_Pointer_F";

        magazines[] = {"OPT_150Rnd_556x45_Drum_Mag_Tracer_F"};

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_aco";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_01_F_blk";
            };
        };
    };

    class arifle_SPAR_03_base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class arifle_SPAR_03_blk_F : arifle_SPAR_03_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_SPAR_03_blk_F : arifle_SPAR_03_blk_F
    {
        _generalMacro = "OPT_arifle_SPAR_03_blk_F";
        displayName = "SPAR-17 7,62 mm (Schwarz)";
        baseWeapon = "OPT_arifle_SPAR_03_blk_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class arifle_CTAR_base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class arifle_CTAR_blk_F : arifle_CTAR_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_CTAR_blk_F : arifle_CTAR_blk_F
    {
        _generalMacro = "OPT_arifle_CTAR_blk_F";
        displayName = "CAR-95 5,8 mm";
        baseWeapon = "OPT_arifle_CTAR_blk_F";

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class mk20_base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class arifle_Mk20C_F : mk20_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_Mk20C_F : arifle_Mk20C_F
    {
        _generalMacro = "OPT_arifle_Mk20C_F";
        baseWeapon = "OPT_arifle_Mk20C_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class arifle_Mk20_F : mk20_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_Mk20_F : arifle_Mk20_F
    {
        _generalMacro = "OPT_arifle_Mk20_F";
        baseWeapon = "OPT_arifle_Mk20_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class arifle_Mk20_GL_F : mk20_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_Mk20_GL_F : arifle_Mk20_GL_F
    {
        _generalMacro = "OPT_arifle_Mk20_GL_F";
        baseWeapon = "OPT_arifle_Mk20_GL_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class pdw2000_base_F : Rifle_Short_Base_F
    {
        class WeaponSlotsInfo;
    };

    class hgun_PDW2000_F : pdw2000_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_hgun_PDW2000_F : hgun_PDW2000_F
    {
        _generalMacro = "OPT_hgun_PDW2000_F";
        baseWeapon = "OPT_hgun_PDW2000_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_CTAR_blk_ERCO_Pointer_F : OPT_arifle_CTAR_blk_F
    {
        _generalMacro = "OPT_arifle_CTAR_blk_ERCO_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ERCO_blk_F";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_CTAR_blk_ACO_Pointer_F : OPT_arifle_CTAR_blk_F
    {
        _generalMacro = "OPT_arifle_CTAR_blk_ACO_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class OPT_arifle_CTAR_blk_ACO_Pointer_Snds_F : OPT_arifle_CTAR_blk_F
    {
        _generalMacro = "OPT_arifle_CTAR_blk_ACO_Pointer_Snds_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                item = "muzzle_snds_58_blk_F";
                slot = "MuzzleSlot";
            };
        };
    };

    class OPT_arifle_CTAR_blk_C_F : arifle_CTAR_blk_F
    {
        _generalMacro = "OPT_arifle_CTAR_blk_C_F";
        displayName = "CAR-95 5,8 mm";
        baseWeapon = "OPT_arifle_CTAR_blk_C_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class arifle_CTAR_GL_base_F : arifle_CTAR_base_F
    {
    };

    class arifle_CTAR_GL_blk_F : arifle_CTAR_GL_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_CTAR_GL_blk_F : arifle_CTAR_GL_blk_F
    {
        _generalMacro = "OPT_arifle_CTAR_GL_blk_F";
        displayName = "CAR-95 GL 5,8 mm (Schwarz)";
        baseWeapon = "OPT_arifle_CTAR_GL_blk_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class OPT_arifle_CTAR_GL_blk_ERCO_Pointer_F : OPT_arifle_CTAR_GL_blk_F
    {
        _generalMacro = "OPT_arifle_CTAR_GL_blk_ERCO_Pointer_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ERCO_blk_F";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class arifle_CTARS_base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class arifle_CTARS_blk_F : arifle_CTARS_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_CTARS_blk_F : arifle_CTARS_blk_F
    {
        _generalMacro = "OPT_arifle_CTARS_blk_F";
        displayName = "CAR-95-1 5,8 mm (Schwarz)";
        baseWeapon = "OPT_arifle_CTARS_blk_F";

        magazines[] = {"OPT_100Rnd_580x42_Mag_Tracer_F"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class OPT_arifle_CTARS_blk_ACO_Pointer_F : OPT_arifle_CTARS_blk_F
    {
        _generalMacro = "OPT_arifle_CTARS_blk_ACO_Pointer_F";

        magazines[] = {"OPT_100Rnd_580x42_Mag_Tracer_F"};

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class LMG_03_base_F : Rifle_Long_Base_F
    {
        class WeaponSlotsInfo;
    };

    class LMG_03_F : LMG_03_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_LMG_03_F : LMG_03_F
    {
        _generalMacro = "OPT_LMG_03_F";
        baseWeapon = "OPT_LMG_03_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F"};
            };
        };
    };

    class arifle_ARX_base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class arifle_ARX_blk_F : arifle_ARX_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_arifle_ARX_blk_F : arifle_ARX_blk_F
    {
        _generalMacro = "OPT_arifle_ARX_blk_F";
        displayName = "Typ 115 6,5 mm (Schwarz)";
        baseWeapon = "OPT_arifle_ARX_blk_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F"};
            };
        };
    };

    class DMR_07_base_F : Rifle_Long_Base_F
    {
    };

    class srifle_DMR_07_blk_F : DMR_07_base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_srifle_DMR_07_blk_F : srifle_DMR_07_blk_F
    {
        _generalMacro = "OPT_srifle_DMR_07_blk_F";
        baseWeapon = "OPT_srifle_DMR_07_blk_F";
        displayName = "CMR-76 6,5 mm (Schwarz)";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_DMS", "optic_ERCO_blk_F", "optic_NVS", "optic_SOS", "optic_KHS_blk", "optic_AMS"};
            };
        };
    };

    class OPT_srifle_DMR_07_blk_KHS_LP_BI_SD_F : OPT_srifle_DMR_07_blk_F
    {
        _generalMacro = "OPT_srifle_DMR_07_blk_KHS_LP_BI_SD_F";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_KHS_blk";
            };

            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };

            class LinkedItemsMuzzle
            {
                item = "muzzle_snds_65_TI_blk_F";
                slot = "MuzzleSlot";
            };
        };
    };

    class Launcher_Base_F;

    class launch_Titan_base : Launcher_Base_F
    {
        class OpticsModes;
    };

    class launch_B_Titan_F : launch_Titan_base
    {
        class WeaponSlotsInfo;
        class OpticsModes : OpticsModes
        {
            class StepScope;
        };
    };

    class OPT_launch_B_Titan_F : launch_B_Titan_F
    {
        _generalMacro = "OPT_launch_B_Titan_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_B_Titan_tna_F : launch_B_Titan_F
    {
    };

    class OPT_launch_B_Titan_tna_F : launch_B_Titan_tna_F
    {
        _generalMacro = "OPT_launch_B_Titan_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_Titan_short_base : launch_Titan_base
    {
        class OpticsModes;
    };

    class launch_B_Titan_short_F : launch_Titan_short_base
    {
        class WeaponSlotsInfo;
        class OpticsModes : OpticsModes
        {
            class StepScope;
        };
    };

    class OPT_launch_B_Titan_short_F : launch_B_Titan_short_F
    {
        _generalMacro = "OPT_launch_B_Titan_short_F";
        magazines[] = {"OPT_Titan_AT", "Titan_AT", "Titan_AP"};
        canLock = 0; // 2 //


        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_B_Titan_short_tna_F : launch_B_Titan_short_F
    {
    };

    class OPT_launch_B_Titan_short_tna_F : launch_B_Titan_short_tna_F
    {
        _generalMacro = "OPT_launch_B_Titan_short_tna_F";
        magazines[] = {"OPT_Titan_AT", "Titan_AT", "Titan_AP"};
        canLock = 0; // 2 //

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_O_Titan_F : launch_Titan_base
    {
        class WeaponSlotsInfo;
        class OpticsModes : OpticsModes
        {
            class StepScope;
        };
    };

    class OPT_launch_O_Titan_F : launch_O_Titan_F
    {
        _generalMacro = "OPT_launch_O_Titan_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_O_Titan_ghex_F : launch_O_Titan_F
    {
        class WeaponSlotsInfo;
        class OpticsModes : OpticsModes
        {
            class StepScope;
        };
    };

    class OPT_launch_O_Titan_ghex_F : launch_O_Titan_ghex_F
    {
        _generalMacro = "OPT_launch_O_Titan_ghex_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_O_Titan_short_F : launch_Titan_short_base
    {
        class WeaponSlotsInfo;
        class OpticsModes : OpticsModes
        {
            class StepScope;
        };
    };

    class OPT_launch_O_Titan_short_F : launch_O_Titan_short_F
    {
        _generalMacro = "OPT_launch_O_Titan_short_F";
        magazines[] = {"OPT_Titan_AT", "Titan_AT", "Titan_AP"};
        canLock = 0; // 2 //

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_O_Titan_short_ghex_F : launch_O_Titan_short_F
    {
        class WeaponSlotsInfo;
        class OpticsModes : OpticsModes
        {
            class StepScope;
        };
    };

    class OPT_launch_O_Titan_short_ghex_F : launch_O_Titan_short_ghex_F
    {
        _generalMacro = "OPT_launch_O_Titan_short_ghex_F";
        magazines[] = {"OPT_Titan_AT", "Titan_AT", "Titan_AP"};
        canLock = 0; // 2 //

        class WeaponSlotsInfo : WeaponSlotsInfo
        {

        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class launch_NLAW_F : Launcher_Base_F
    {
        class WeaponSlotsInfo;
    };

    class OPT_launch_NLAW_F : launch_NLAW_F
    {
        _generalMacro = "OPT_launch_NLAW_F";
        canLock = 0; // 2 //
        magazines[] = {"NLAW_F", "OPT_NLAW_F"};
        magazineWell[] = {"NLAW"};
        ACE_UsedTube = "";
        ace_nlaw_enabled = 0;
        weaponInfoType = "RscWeaponEmpty";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class launch_RPG32_F : Launcher_Base_F
    {
        class WeaponSlotsInfo;
    };

    class OPT_launch_RPG32_F : launch_RPG32_F
    {
        _generalMacro = "OPT_launch_RPG32_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class OPT_launch_B_RPG32_F : OPT_launch_RPG32_F
    {
        _generalMacro = "OPT_launch_RPG32_F";
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rpg32\nato\rpg32_tropic.paa", "\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"};

    };

    class launch_RPG32_ghex_F : launch_RPG32_F
    {
        class WeaponSlotsInfo;
    };

    class OPT_launch_RPG32_ghex_F : launch_RPG32_ghex_F
    {
        _generalMacro = "OPT_launch_RPG32_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class launch_MRAWS_base_F : Launcher_Base_F
    {
        class WeaponSlotsInfo;
    };

    class launch_MRAWS_olive_rail_F : launch_MRAWS_base_F
    {
    };

    class OPT_launch_MRAWS_olive_rail_F : launch_MRAWS_olive_rail_F
    {
        _generalMacro = "launch_MRAWS_olive_rail_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class OPT_launch_MRAWS_green_rail_F : launch_MRAWS_olive_rail_F
    {
        _generalMacro = "OPT_launch_MRAWS_green_rail_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class launch_MRAWS_green_F : launch_MRAWS_base_F
    {
    };

    class OPT_launch_MRAWS_green_F : launch_MRAWS_green_F
    {
        _generalMacro = "OPT_launch_MRAWS_green_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };

    class launch_Vorona_base_F : Launcher_Base_F
    {
        class OpticsModes;
    };

    class launch_O_Vorona_green_F : launch_Vorona_base_F
    {
        class WeaponSlotsInfo;
        class OpticsModes : OpticsModes
        {
            class StepScope;
        };

    };

    class OPT_launch_O_Vorona_green_F : launch_O_Vorona_green_F
    {
        _generalMacro = "launch_O_Vorona_green_F";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };

        class OpticsModes : OpticsModes
        {
            class StepScope : StepScope
            {
                visionMode[] = {"Normal", "NVG"};
            };
        };
    };

    class CUP_launch_FIM92Stinger;

    class OPT_CUP_launch_FIM92Stinger : CUP_launch_FIM92Stinger
    {
        class EventHandlers 
        {

        };
        
        magazines[] = {"OPT_CUP_Stinger_M"};
    };

    class CUP_launch_Igla_Loaded;

    class CUP_launch_Igla : CUP_launch_Igla_Loaded
    {
        class WeaponSlotsInfo;
    };
    
    class OPT_CUP_launch_Igla : CUP_launch_Igla
    {
        class EventHandlers 
        {

        };
        
        magazines[] = {"OPT_CUP_Igla_M"};

        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 241.2; // 285.5
        };
    };

    class CUP_arifle_HK416_145_Base : Rifle_Base_F
    {
        class WeaponSlotsInfo;

    };

    class CUP_arifle_HK416_Black : CUP_arifle_HK416_145_Base
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_CUP_arifle_HK416_Black : CUP_arifle_HK416_Black
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_DMS", "optic_ERCO_blk_F", "optic_NVS", "optic_SOS", "optic_KHS_blk", "optic_AMS"};
            };
        };
    };

    class CUP_arifle_HK416_M203_Black : CUP_arifle_HK416_Black
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_CUP_arifle_HK416_M203_Black : CUP_arifle_HK416_M203_Black
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_DMS", "optic_ERCO_blk_F", "optic_NVS", "optic_SOS", "optic_KHS_blk", "optic_AMS"};
            };
        };
    };

    class CUP_arifle_SCAR_L_Base;

    class CUP_arifle_Mk16_STD : CUP_arifle_SCAR_L_Base
    {
        class WeaponSlotsInfo;
    };

    class CUP_arifle_Mk16_STD_FG_black : CUP_arifle_Mk16_STD
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMount;
        };
    };

    class OPT_CUP_arifle_Mk16_STD_FG_black : CUP_arifle_Mk16_STD_FG_black
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMountSCAR : CUP_PicatinnyTopMount 
            {
                displayName = "Visier-Slot";
                iconPosition[] = {0.58, 0.22};
                iconScale = 0.15;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinPoint = "Bottom";
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                    optic_MRCO= 1;
                    optic_Arco= 1;
                    optic_Arco_blk_F= 1;
                    optic_hamr= 1; 
                    optic_DMS= 0; 
                    optic_ERCO_blk_F= 1;
                    optic_NVS= 0;
                    optic_SOS= 0; 
                    optic_KHS_blk= 0;
                    optic_AMS= 0;
                };    
            };
        };
    };

    class CUP_arifle_Mk16_STD_EGLM : CUP_arifle_Mk16_STD
    {
        class WeaponSlotsInfo;
    };

    class CUP_arifle_Mk16_STD_EGLM_black : CUP_arifle_Mk16_STD_EGLM
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopShortMount;
        };
    };

    class OPT_CUP_arifle_Mk16_STD_EGLM_black : CUP_arifle_Mk16_STD_EGLM_black
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMountSCAR : CUP_PicatinnyTopShortMount 
            {
                displayName = "Visier-Slot";
                iconPinpoint = "center";
                iconPosition[] = {0.59, 0.281};
                iconScale = 0.17;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                    optic_MRCO= 1;
                    optic_Arco= 1;
                    optic_Arco_blk_F= 1;
                    optic_hamr= 1; 
                    optic_DMS= 0; 
                    optic_ERCO_blk_F= 1;
                    optic_NVS= 0;
                    optic_SOS= 0; 
                    optic_KHS_blk= 0;
                    optic_AMS= 0;
                };    
            };
        };
    };

    class CUP_arifle_AK74M;

    class CUP_arifle_AK101 : CUP_arifle_AK74M
    {
        class WeaponSlotsInfo;
    };

    class CUP_arifle_AK101_railed : CUP_arifle_AK101
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopShortMount;
        };
    };

    class OPT_CUP_arifle_AK101_railed : CUP_arifle_AK101_railed
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMountAK : CUP_PicatinnyTopShortMount  
            {
                displayName = "Visier-Slot";
                iconPinpoint = "center";
                iconPosition[] = {0.59, 0.281};
                iconScale = 0.17;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                    optic_MRCO= 1;
                    optic_Arco= 1;
                    optic_Arco_blk_F= 1;
                    optic_hamr= 1; 
                    optic_DMS= 0; 
                    optic_ERCO_blk_F= 1;
                    optic_NVS= 0;
                    optic_SOS= 0; 
                    optic_KHS_blk= 0;
                    optic_AMS= 0;
                };    
            };
        };
    };
    
    class CUP_arifle_AK74M_GL;

    class CUP_arifle_AK101_GL : CUP_arifle_AK74M_GL
    {
        class WeaponSlotsInfo;
    };

    class CUP_arifle_AK101_GL_railed : CUP_arifle_AK101_GL
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopShortMount;
        };

        class GP25Muzzle;
    };

    class OPT_CUP_arifle_AK101_GL_railed : CUP_arifle_AK101_GL_railed
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMountAK : CUP_PicatinnyTopShortMount 
            {
                displayName = "Visier-Slot";
                iconPosition[] = {0.58, 0.22};
                iconScale = 0.15;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinPoint = "Bottom";
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                    optic_MRCO= 1;
                    optic_Arco= 1;
                    optic_Arco_blk_F= 1;
                    optic_hamr= 1; 
                    optic_DMS= 0; 
                    optic_ERCO_blk_F= 1;
                    optic_NVS= 0;
                    optic_SOS= 0; 
                    optic_KHS_blk= 0;
                    optic_AMS= 0;
                };    
            };

            class GP25Muzzle : GP25Muzzle 
            {
                magazines[] += {"ACE_HuntIR_M203"};
            };
        };
    };
  
    class CUP_lmg_minimipara;

    class CUP_lmg_minimi_railed : CUP_lmg_minimipara
    {
        class WeaponSlotsInfo;
    };

    class CUP_lmg_m249_pip3 : CUP_lmg_minimi_railed
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMount;
        };
    };

    class OPT_CUP_lmg_m249_pip3 : CUP_lmg_m249_pip3
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CUP_PicatinnyTopMountM249 : CUP_PicatinnyTopMount
            {
                access = 1;
                displayName = "Visier-Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                                                               
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                }; 
            };
        };
    };

    class CUP_lmg_M240 : Rifle_Long_Base_F
    {
        class WeaponSlotsInfo;
    };

    class CUP_lmg_M240_B : CUP_lmg_M240
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopShortMount;
        };
    };

    class OPT_CUP_lmg_M240_B : CUP_lmg_M240_B
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMountM240 : CUP_PicatinnyTopShortMount 
            {
                displayName = "Visier-Slot";
                iconPosition[] = {0.605882,0.376471};
                iconScale = 0.15;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinPoint = "Bottom";
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                };    
            };
        };
    };

    class CUP_arifle_RPK74;

    class CUP_arifle_RPK74M : CUP_arifle_RPK74
    {
        class WeaponSlotsInfo;
    };

    class CUP_arifle_RPK74M_top_rail : CUP_arifle_RPK74M
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopShortMount;
        };
    };

    class OPT_CUP_arifle_RPK74M_top_rail : CUP_arifle_RPK74M_top_rail
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMountAK : CUP_PicatinnyTopShortMount 
            {
                displayName = "Visier-Slot";
                iconPosition[] = {0.62, 0.23};
                iconScale = 0.15;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinPoint = "Bottom";
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                };    
            };
        };
    };

    class CUP_lmg_PKM : Rifle_Long_Base_F
    {
        class WeaponSlotsInfo;
    };

    class CUP_lmg_PKM_top_rail : CUP_lmg_PKM
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_CUP_lmg_PKM_top_rail : CUP_lmg_PKM_top_rail
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                class compatibleItems 
                {
                    optic_aco = 1;
                    optic_ACO_grn= 1;
                    optic_Holosight= 1;
                    optic_Holosight_blk_F= 1;
                };
            };
        };
    };

    class CUP_arifle_HK416_145_Base;

    class CUP_arifle_HK417_Base : CUP_arifle_HK416_145_Base
    {
        class WeaponSlotsInfo;
    };

    class CUP_arifle_HK417_20 : CUP_arifle_HK417_Base
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_CUP_arifle_HK417_20 : CUP_arifle_HK417_20
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };
        };
    };

    class CUP_arifle_FNFAL;

    class CUP_arifle_FNFAL5061 : CUP_arifle_FNFAL
    {
        class WeaponSlotsInfo;
    };

    class CUP_arifle_FNFAL5061_railed : CUP_arifle_FNFAL5061
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
            class UnderBarrelSlot;
        };
    };

    class OPT_CUP_arifle_FNFAL5061_railed : CUP_arifle_FNFAL5061_railed
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
                compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_Holosight", "optic_Holosight_blk_F", "optic_MRCO", "optic_Arco", "optic_Arco_blk_F", "optic_hamr", "optic_ERCO_blk_F", "optic_NVS", "optic_DMS", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS"};
            };

            class UnderBarrelSlot : UnderBarrelSlot
            {
                access = 1;
                compatibleItems[] = {"CUP_bipod_FNFAL"};
                iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
                iconPinpoint = "center";
                iconPosition[] = {0.22,0.52};
                iconScale = 0.25;
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                scope = 0;
            };


        };
    };

    class CUP_srifle_AS50 : Rifle_Long_Base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopShortMount;
        };
    };

    class OPT_CUP_srifle_AS50 : CUP_srifle_AS50
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CUP_PicatinnyTopMountAS50 : CUP_PicatinnyTopShortMount 
            {
                displayName = "Visier-Slot";
                iconPosition[] = {0.62,0.45};
                iconScale = 0.15;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinPoint = "Bottom";
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                
                class compatibleItems 
                {
                    optic_NVS=1;
                    optic_SOS=1; 
                    optic_LRPS=1;
                    optic_LRPS_tna_F=1;
                };    
            };
        };
    };

    class CUP_Mac10_Base : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class CUP_smg_Mac10 : CUP_Mac10_Base
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_CUP_smg_Mac10 : CUP_smg_Mac10
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
            };
        };
    };

    class CUP_smg_SA61 : Rifle_Base_F
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };

    class OPT_CUP_smg_SA61 : CUP_smg_SA61
    {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {

            class CowsSlot : CowsSlot
            {
            };
        };
    };



    class Binocular;

    class Laserdesignator : Binocular
    {
    };

    class OPT_Laserdesignator : Laserdesignator
    {
        _generalMacro = "OPT_Laserdesignator";
        visionMode[] = {"Normal", "NVG"};
    };

    class Laserdesignator_01_khk_F : Laserdesignator
    {
    };

    class OPT_Laserdesignator_01_khk_F : Laserdesignator_01_khk_F
    {
        _generalMacro = "OPT_Laserdesignator_01_khk_F";
        visionMode[] = {"Normal", "NVG"};
    };

    class Laserdesignator_02 : Laserdesignator
    {
    };

    class OPT_Laserdesignator_02 : Laserdesignator_02
    {
        _generalMacro = "OPT_Laserdesignator_02";
        visionMode[] = {"Normal", "NVG"};
    };

    class Laserdesignator_02_ghex_F : Laserdesignator_02
    {
    };

    class OPT_Laserdesignator_02_ghex_F : Laserdesignator_02_ghex_F
    {
        _generalMacro = "OPT_Laserdesignator_02_ghex_F";
        visionMode[] = {"Normal", "NVG"};
    };

    class tf_anprc152;

    class OPT_tf_anprc152 : tf_anprc152
    {
        tf_range = 20000;
        _generalMacro = "OPT_tf_anprc152";
        displayName = "OPT AN/PRC-152";
        descriptionShort = "Mit 20km Reichweite";
    };

    class tf_fadak;

    class OPT_tf_fadak : tf_fadak
    {
        tf_range = 20000;
        _generalMacro = "OPT_tf_fadak";
        displayName = "OPT FADAK";
        descriptionShort = "Mit 20km Reichweite";
    };
    
    class CUP_H_RUS_SSH68_cover_base;

    class CUP_H_RUS_SSH68_cover_vsr98 : CUP_H_RUS_SSH68_cover_base
    {
        class ItemInfo;        
    };
    
    class OPT_CUP_H_HIL_HelmetACH_Headset_TTS : CUP_H_RUS_SSH68_cover_vsr98
    {
        class ItemInfo : ItemInfo
        {
            hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr98_co.paa"};
            class HitpointsProtectionInfo 
            {
                class Head 
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    class CMFlareLauncher;

    class OPT_CMFlareLauncher : CMFlareLauncher
    {
        magazines[] = {"OPT_12Rnd_CMFlare_Chaff_Magazine","OPT_20Rnd_CMFlare_Chaff_Magazine","OPT_30Rnd_CMFlare_Chaff_Magazine", "OPT_72Rnd_CMFlare_Chaff_Magazine", "60Rnd_CMFlareMagazine","96Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlareMagazine", "240Rnd_CMFlareMagazine", "60Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "192Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};
    };

    class CMFlareLauncher_Triples;

    class OPT_CMFlareLauncher_Triples : CMFlareLauncher_Triples
    {
        magazines[] = {"OPT_12Rnd_CMFlare_Chaff_Magazine","OPT_20Rnd_CMFlare_Chaff_Magazine","OPT_30Rnd_CMFlare_Chaff_Magazine", "OPT_72Rnd_CMFlare_Chaff_Magazine", "60Rnd_CMFlareMagazine","96Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlareMagazine", "240Rnd_CMFlareMagazine", "60Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "192Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};
    };

    class rockets_Skyfire;

    class OPT_rockets_Skyfire : rockets_Skyfire
    {
        showAimCursorInternal = 0;
        magazines[] = {"38Rnd_80mm_rockets", "OPT_PylonRack_19Rnd_Rocket_Skyfire"};
    };

    class missiles_DAR;

    class OPT_missiles_DAR : missiles_DAR
    {
        magazines[] = {"OPT_PylonRack_12Rnd_missiles"};
        showAimCursorInternal = 0; // 1 //
    };

    class missiles_DAGR;

    class OPT_missiles_DAGR : missiles_DAGR
    {
        magazines[] = {"OPT_PylonRack_12Rnd_PG_missiles"};
        showAimCursorInternal = 0; // 1 //
    };

    class missiles_SCALPEL;

    class OPT_missiles_SCALPEL : missiles_SCALPEL
    {
        magazines[] = {"OPT_PylonRack_1Rnd_LG_scalpel", "OPT_PylonRack_3Rnd_LG_scalpel", "OPT_PylonRack_4Rnd_LG_scalpel", "OPT_PylonMissile_1Rnd_LG_scalpel"};
        displayName = "Scalpel ATGM";
    };

    class missiles_Jian;

    class OPT_missiles_Jian : missiles_Jian
    {
        magazines[] = {"OPT_4Rnd_LG_Jian", "PylonRack_1Rnd_Missile_Jian"};
    };

    class gatling_20mm;

    class OPT_gatling_20mm : gatling_20mm
    {
        showAimCursorInternal = 0;
        displayName = "Minigun 20 mm";
    };

    class gatling_30mm;

    class OPT_gatling_30mm : gatling_30mm
    {
        showAimCursorInternal = 0;
        displayName = "Geschütz hülsenlos 30 mm";
    };

    class gatling_30mm_VTOL_02;

    class OPT_gatling_30mm_VTOL_02 : gatling_30mm_VTOL_02
    {
        showAimCursorInternal = 0;
        displayName = "Geschütz hülsenlos 30 mm";
    };

    class Twin_Cannon_20mm;

    class OPT_Twin_Cannon_20mm : Twin_Cannon_20mm
    {
        magazines[] = {"2000Rnd_20mm_shells", "1000Rnd_20mm_shells", "300Rnd_20mm_shells", "OPT_PylonWeapon_300Rnd_20mm_shells"};
        displayName = "Zwillingsgeschütz 20 mm";
    };

    class Gatling_30mm_Plane_CAS_01_F;

    class OPT_Gatling_30mm_Plane_CAS_01_F : Gatling_30mm_Plane_CAS_01_F
    {
        showAimCursorInternal = 0;
        magazines[] = {"OPT_1000Rnd_Gatling_30mm_Plane_CAS_01_F"};
        displayName = "Minigun 30 mm";
    };

    class Cannon_30mm_Plane_CAS_02_F;

    class OPT_Cannon_30mm_Plane_CAS_02_F : Cannon_30mm_Plane_CAS_02_F
    {
        showAimCursorInternal = 0;
        magazines[] = {"OPT_500Rnd_Cannon_30mm_Plane_CAS_02_F"};
        displayName = "Geschütz 30 mm";
    };

    class weapon_Fighter_Gun20mm_AA;

    class OPT_weapon_Fighter_Gun20mm_AA : weapon_Fighter_Gun20mm_AA
    {
        magazines[] = {"OPT_magazine_Fighter01_Gun20mm_AA_x450"};
    };

    class weapon_Fighter_Gun_30mm;

    class OPT_weapon_Fighter_Gun_30mm : weapon_Fighter_Gun_30mm
    {
        magazines[] = {"OPT_magazine_Fighter02_Gun30mm_AA_x180"};
    };

    class autocannon_35mm;

    class OPT_autocannon_35mm : autocannon_35mm
    {
        magazines[] = {"OPT_680Rnd_35mm_AA_shells_Tracer_Red", "OPT_680Rnd_35mm_AA_shells_Tracer_Green"};
    };

    class autocannon_Base_F;

    class autocannon_40mm_CTWS : autocannon_Base_F
    {
        class HE;
        class AP;
    };

    class OPT_autocannon_40mm_CTWS : autocannon_40mm_CTWS
    {

        class HE : HE
        {
            canLock = 0;
        };

        class AP : AP
        {
        };
    };

    class OPT_autocannon_40mm_CTWS_HE : autocannon_40mm_CTWS
    {
        muzzles[] = {"HE"};

        class HE : HE
        {
            canLock = 0;
        };
    };

    class autocannon_30mm_CTWS : autocannon_Base_F
    {
        class HE;
        class AP;
    };

    class OPT_autocannon_30mm_CTWS : autocannon_30mm_CTWS
    {

        class HE : HE
        {
            canLock = 0;
        };

        class AP : AP
        {
        };
    };

    class autocannon_30mm : autocannon_30mm_CTWS
    {
        class HE;
        class AP;
    };

    class OPT_autocannon_30mm : autocannon_30mm
    {

        class HE : HE
        {
            canLock = 0;
        };

        class AP : AP
        {
        };
    };

    class missiles_titan;

    class OPT_missiles_titan : missiles_titan
    {
        canLock = 0; // Disabled
    };

    class OPT_missiles_titan_AA : missiles_titan
    {
        canLock = 2; 
    };

    class missiles_titan_static : missiles_titan
    {
    };

    class OPT_missiles_titan_static : missiles_titan_static
    {
        canLock = 0; // Disabled
    };

    class OPT_missiles_titan_static_AA : missiles_titan_static
    {
        canLock = 2; 
    };

    class missiles_Vorona;

    class OPT_missiles_Vorona : missiles_Vorona
    {
    };

    class missiles_Firefist;

    class OPT_missiles_Firefist : missiles_Firefist
    {
        canLock = 0; // Disabled
    };

    class M134_minigun;

    class OPT_M134_minigun : M134_minigun
    {
        showAimCursorInternal = 0;
        displayName = "2x M134 Minigun 7,62 mm";
    };

    class Laserdesignator_mounted;

    class OPT_Laserdesignator_mounted : Laserdesignator_mounted
    {
        showAimCursorInternal = 0;
    };

    class missiles_ASRAAM;

    class OPT_missiles_ASRAAM : missiles_ASRAAM
    {
        magazines[] = {"OPT_PylonRack_1Rnd_AAA_missiles", "OPT_PylonMissile_1Rnd_AAA_missiles"};
        displayName = "ASRAAM";
    };

    class missiles_Zephyr;

    class OPT_missiles_Zephyr : missiles_Zephyr
    {
        magazines[] = {"OPT_PylonRack_1Rnd_GAA_missiles"};
        displayName = "Zephyr";
    };

    class Missile_AA_03_Plane_CAS_02_F;

    class OPT_Missile_AA_03_Plane_CAS_02_F : Missile_AA_03_Plane_CAS_02_F
    {
        magazines[] = {"2Rnd_Missile_AA_03_F", "OPT_PylonRack_1Rnd_Missile_AA_03_F", "PylonMissile_1Rnd_Missile_AA_03_F"};
        displayName = "Sahr-3";
    };

    class Missile_AA_04_Plane_CAS_01_F;

    class OPT_Missile_AA_04_Plane_CAS_01_F : Missile_AA_04_Plane_CAS_01_F
    {
        magazines[] = {"2Rnd_Missile_AA_04_F", "OPT_PylonRack_1Rnd_Missile_AA_04_F", "PylonMissile_1Rnd_Missile_AA_04_F"};
        displayName = "Falchion-22";
    };

    class Missile_AGM_02_Plane_CAS_01_F;

    class OPT_Missile_AGM_02_Plane_CAS_01_F : Missile_AGM_02_Plane_CAS_01_F
    {
        showAimCursorInternal = 0;
        magazines[] = {"OPT_6Rnd_Missile_AGM_02_F", "OPT_PylonRack_1Rnd_Missile_AGM_02_F", "PylonRack_3Rnd_Missile_AGM_02_F"};
        displayName = "Macer";
    };

    class Missile_AGM_01_Plane_CAS_02_F;

    class OPT_Missile_AGM_01_Plane_CAS_02_F : Missile_AGM_01_Plane_CAS_02_F
    {
        magazines[] = {"OPT_4Rnd_Missile_AGM_01_F", "OPT_PylonRack_1Rnd_Missile_AGM_01_F"};
        showAimCursorInternal = 0;
        displayName = "Sharur";
    };

    class Rocket_04_HE_Plane_CAS_01_F;

    class OPT_Rocket_04_HE_Plane_CAS_01_F : Rocket_04_HE_Plane_CAS_01_F
    {
        showAimCursorInternal = 0;
        displayName = "Shrieker";
        magazines[] = {"7Rnd_Rocket_04_HE_F", "PylonRack_7Rnd_Rocket_04_HE_F", "OPT_PylonRack_7Rnd_Rocket_04_HE_F"};
        
    };

    class Rocket_04_AP_Plane_CAS_01_F;

    class OPT_Rocket_04_AP_Plane_CAS_01_F : Rocket_04_AP_Plane_CAS_01_F
    {
        showAimCursorInternal = 0;
        displayName = "Shrieker";
        magazines[] = {"7Rnd_Rocket_04_AP_F", "PylonRack_7Rnd_Rocket_04_AP_F", "OPT_PylonRack_7Rnd_Rocket_04_AP_F"};
    };

    class Rocket_03_HE_Plane_CAS_02_F;

    class OPT_Rocket_03_HE_Plane_CAS_02_F : Rocket_03_HE_Plane_CAS_02_F
    {
        showAimCursorInternal = 0;
        displayName = "Tratnyr";
        magazines[] = {"20Rnd_Rocket_03_HE_F", "PylonRack_20Rnd_Rocket_03_HE_F", "OPT_PylonRack_20Rnd_Rocket_03_HE_F"};
    };

    class Rocket_03_AP_Plane_CAS_02_F;

    class OPT_Rocket_03_AP_Plane_CAS_02_F : Rocket_03_AP_Plane_CAS_02_F
    {
        showAimCursorInternal = 0;
        displayName = "Tratnyr";
        magazines[] = {"20Rnd_Rocket_03_AP_F", "PylonRack_20Rnd_Rocket_03_AP_F" , "OPT_PylonRack_20Rnd_Rocket_03_AP_F"};
    };

    class Bomb_03_Plane_CAS_02_F;

    class OPT_Bomb_03_Plane_CAS_02_F : Bomb_03_Plane_CAS_02_F
    {
        showAimCursorInternal = 0;
        lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.5};
        lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
        magazines[] = {"OPT_2Rnd_Bomb_03_F", "OPT_PylonMissile_1Rnd_Bomb_03_F"};
        displayName = "LOM-250G";
    };

    class Bomb_04_Plane_CAS_01_F;

    class OPT_Bomb_04_Plane_CAS_01_F : Bomb_04_Plane_CAS_01_F
    {
        showAimCursorInternal = 0;
        lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.5};
        lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
        magazines[] = {"OPT_4Rnd_Bomb_04_F", "OPT_PylonMissile_1Rnd_Bomb_04_F"};
        displayName = "GBU-12";
    };

    class mortar_82mm;

    class OPT_mortar_82mm : mortar_82mm
    {
        magazines[] = {"OPT_8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_Flare_white", "8Rnd_82mm_Mo_Smoke_white"};
    };

    class mortar_155mm_AMOS;

    class OPT_mortar_155mm_AMOS : mortar_155mm_AMOS
    {
        magazines[] = {"OPT_32Rnd_155mm_Mo_shells", "OPT_2Rnd_155mm_Mo_Cluster", "6Rnd_155mm_Mo_smoke"};
    };

    class rockets_230mm_GAT;

    class OPT_rockets_230mm_GAT : rockets_230mm_GAT
    {
        magazines[] = {"OPT_12Rnd_230mm_rockets"};
    };

    class weapon_AGM_65Launcher;

    class OPT_weapon_AGM_65Launcher : weapon_AGM_65Launcher
    {
        magazines[] = {"OPT_PylonRack_Missile_AGM_02_x1", "OPT_PylonRack_Missile_AGM_02_x2"};
        displayName = "Macer II";
    };

    class weapon_AMRAAMLauncher;

    class OPT_weapon_AMRAAMLauncher : weapon_AMRAAMLauncher
    {
        magazines[] = {"OPT_PylonMissile_Missile_AMRAAM_D_INT_x1", "OPT_PylonMissile_Missile_AMRAAM_D_x1"};
        weaponLockSystem = 8;
        displayName = "AMRAAM";
    };

    class weapon_BIM9xLauncher;

    class OPT_weapon_BIM9xLauncher : weapon_BIM9xLauncher
    {
        magazines[] = {"OPT_PylonMissile_Missile_BIM9X_x1", "OPT_PylonRack_Missile_BIM9X_x2"};
        displayName = "BIM 9x";
    };

    class weapon_GBU12Launcher;

    class OPT_weapon_GBU12Launcher : weapon_GBU12Launcher
    {
        magazines[] = {"OPT_PylonMissile_Bomb_GBU12_x1"};
        displayName = "GBU 12";
    };

    class weapon_R73Launcher;

    class OPT_weapon_R73Launcher : weapon_R73Launcher
    {
        magazines[] = {"OPT_PylonMissile_Missile_AA_R73_x1"};
    };

    class weapon_R77Launcher;

    class OPT_weapon_R77Launcher : weapon_R77Launcher
    {
        magazines[] = {"OPT_PylonMissile_Missile_AA_R77_INT_x1", "OPT_PylonMissile_Missile_AA_R77_x1"};
        weaponLockSystem = 8;
    };

    class weapon_AGM_KH25Launcher;

    class OPT_weapon_AGM_KH25Launcher : weapon_AGM_KH25Launcher
    {
        magazines[] = {"OPT_PylonMissile_Missile_AGM_KH25_x1", "OPT_PylonMissile_Missile_AGM_KH25_INT_x1"};
    };

    class weapon_KAB250Launcher;

    class OPT_weapon_KAB250Launcher : weapon_KAB250Launcher
    {
        magazines[] = {"OPT_PylonMissile_Bomb_KAB250_x1"};
    };

    class CUP_Vacannon_M168_M163VADS;

    class OPT_CUP_Vacannon_M168_M163VADS : CUP_Vacannon_M168_M163VADS
    {
        magazineReloadTime=5;
        magazines[] = {"CUP_1100Rnd_TE1_Red_Tracer_20mm_M168_M", "OPT_CUP_50Rnd_TE1_Red_Tracer_20mm_M168_M", "OPT_CUP_80Rnd_TE1_Red_Tracer_20mm_M168_M"};
    };

    class CUP_Vacannon_AZP23_veh;

    class OPT_CUP_Vacannon_AZP23_veh : CUP_Vacannon_AZP23_veh
    {
        magazineReloadTime=5;
        magazines[] = {"CUP_2000Rnd_23mm_AZP23_M", "CUP_2000Rnd_23mm_AZP23_M","OPT_CUP_50Rnd_23mm_AZP23_M","OPT_CUP_80Rnd_23mm_AZP23_M"};
    };

    class CUP_Vmlauncher_GRAD_ACR_veh;

    class OPT_CUP_Vmlauncher_GRAD_ACR_veh : CUP_Vmlauncher_GRAD_ACR_veh
    {
        magazines[] = {"CUP_40Rnd_GRAD_HE","OPT_CUP_40Rnd_GRAD_HE"};
    };

    class CUP_Vmlauncher_AT5_single_veh;

    class OPT_CUP_Vmlauncher_AT5_single_veh : CUP_Vmlauncher_AT5_single_veh
    {
        magazines[] = {"CUP_8Rnd_AT5_BMP2_M","OPT_CUP_5Rnd_AT5_BMP2_M"};
    };

    class CUP_Vmlauncher_TOW_veh;

    class OPT_CUP_Vmlauncher_TOW_veh : CUP_Vmlauncher_TOW_veh
    {
        magazines[] = {"CUP_2Rnd_TOW2_M","OPT_CUP_1Rnd_TOW2_M"};
    };

    class CUP_Vacannon_GSh302K_veh;

    class OPT_CUP_Vacannon_GSh302K_veh : CUP_Vacannon_GSh302K_veh
    {
        magazines[] = {"CUP_250Rnd_TE1_30mm_GSh302K_HE_M","OPT_CUP_50Rnd_TE1_30mm_GSh302K_HE_M"};
    };

};

class CfgVehicles
{
    class Logic;

    class opt_weapons_require : Logic
    {
        displayName = "Benoetigt OPT A3 Weapons";
        vehicleClass = "Modules";
    };

    class Land_Pod_Heli_Transport_04_ammo_F;

    class OPT_Land_Pod_Heli_Transport_04_ammo_F : Land_Pod_Heli_Transport_04_ammo_F
    {
        transportAmmo = 30000;
        disableInventory = 1;
    };

    class Land_Pod_Heli_Transport_04_ammo_black_F;

    class OPT_Land_Pod_Heli_Transport_04_ammo_black_F : Land_Pod_Heli_Transport_04_ammo_black_F
    {
        transportAmmo = 30000;
        disableInventory = 1;
        scope = 2;
        scopeCurator = 2;
    };

    class Land_Pod_Heli_Transport_04_fuel_F;

    class OPT_Land_Pod_Heli_Transport_04_fuel_F : Land_Pod_Heli_Transport_04_fuel_F
    {
        transportFuel = 3000;
        disableInventory = 1;
    };

    class Land_Pod_Heli_Transport_04_fuel_black_F;

    class OPT_Land_Pod_Heli_Transport_04_fuel_black_F : Land_Pod_Heli_Transport_04_fuel_black_F
    {
        transportFuel = 3000;
        disableInventory = 1;
        scope = 2;
        scopeCurator = 2;
    };

    class Land_Pod_Heli_Transport_04_medevac_F;

    class OPT_Land_Pod_Heli_Transport_04_medevac_F : Land_Pod_Heli_Transport_04_medevac_F
    {
        transportSoldier = 0;
        disableInventory = 1;
    };

    class Land_Pod_Heli_Transport_04_medevac_black_F;

    class OPT_Land_Pod_Heli_Transport_04_medevac_black_F : Land_Pod_Heli_Transport_04_medevac_black_F
    {
        transportSoldier = 0;
        disableInventory = 1;
    };

    class Land_Pod_Heli_Transport_04_repair_F;

    class OPT_Land_Pod_Heli_Transport_04_repair_F : Land_Pod_Heli_Transport_04_repair_F
    {
        transportRepair = 0;
        disableInventory = 1;
    };

    class OPT_Land_Pod_Heli_Transport_04_repair_radar_F : Land_Pod_Heli_Transport_04_repair_F
    {
        transportRepair = 0;
        disableInventory = 1;
        displayName = "Taru-Radarcontainer";
    };

    class Land_Pod_Heli_Transport_04_repair_black_F;

    class OPT_Land_Pod_Heli_Transport_04_repair_black_F : Land_Pod_Heli_Transport_04_repair_black_F
    {
        transportRepair = 0;
        disableInventory = 1;
    };

    class OPT_Land_Pod_Heli_Transport_04_repair_black_radar_F : OPT_Land_Pod_Heli_Transport_04_repair_black_F
    {
        transportRepair = 0;
        supplyRadius = 0;
        displayName = "Taru-Radarcontainer";
    };

    class B_Slingload_01_Repair_F;

    class OPT_B_Slingload_01_Repair_F : B_Slingload_01_Repair_F
    {
        transportRepair = 0;
        disableInventory = 1;
    };

    class OPT_B_Slingload_01_Repair_Radar_F : B_Slingload_01_Repair_F
    {
        transportRepair = 0;
        disableInventory = 1;
        displayName = "Huron-Radarcontainer";
    };

    class B_Slingload_01_Ammo_F;

    class OPT_B_Slingload_01_Ammo_F : B_Slingload_01_Ammo_F
    {
        transportAmmo = 30000;
        disableInventory = 1;
    };

    class B_Slingload_01_Fuel_F;

    class OPT_B_Slingload_01_Fuel_F : B_Slingload_01_Fuel_F
    {
        transportFuel = 3000;
        disableInventory = 1;
    };

    class B_Slingload_01_Medevac_F;

    class OPT_B_Slingload_01_Medevac_F : B_Slingload_01_Medevac_F
    {
        disableInventory = 1;
    };

    class FlexibleTank_01_sand_F;

    class OPT_FlexibleTank_01_sand_F : FlexibleTank_01_sand_F
    {
        transportFuel = 300;
        disableInventory = 1;
    };

    class FlexibleTank_01_forest_F;

    class OPT_FlexibleTank_01_forest_F : FlexibleTank_01_forest_F
    {
        transportFuel = 300;
        disableInventory = 1;
    };

    class HMG_01_base_F;

    class B_HMG_01_F : HMG_01_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_B_HMG_01_F : B_HMG_01_F
    {
        faction = "OPT_NATO";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_B_HMG_01_weapon_F", "B_HMG_01_support_F"};
            displayName = "";
        };
    };

    class I_HMG_01_F : HMG_01_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_I_HMG_01_F : I_HMG_01_F
    {
        faction = "OPT_AAF";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_I_HMG_01_weapon_F", "I_HMG_01_support_F"};
            displayName = "";
        };
    };

    class O_HMG_01_F : HMG_01_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_O_HMG_01_F : O_HMG_01_F
    {
        faction = "OPT_CSAT";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_O_HMG_01_weapon_F", "O_HMG_01_support_F"};
            displayName = "";
        };
    };

    class HMG_01_high_base_F : HMG_01_base_F
    {
    };

    class B_HMG_01_high_F : HMG_01_high_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_B_HMG_01_high_F : B_HMG_01_high_F
    {
        faction = "OPT_NATO";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_B_HMG_01_high_weapon_F", "B_HMG_01_support_high_F"};
            displayName = "";
        };
    };

    class I_HMG_01_high_F : HMG_01_high_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_I_HMG_01_high_F : I_HMG_01_high_F
    {
        faction = "OPT_AAF";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_I_HMG_01_high_weapon_F", "I_HMG_01_support_high_F"};
            displayName = "";
        };
    };

    class O_HMG_01_high_F : HMG_01_high_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_O_HMG_01_high_F : O_HMG_01_high_F
    {
        faction = "OPT_CSAT";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_O_HMG_01_high_weapon_F", "O_HMG_01_support_high_F"};
            displayName = "";
        };
    };

    class StaticGrenadeLauncher;

    class GMG_TriPod : StaticGrenadeLauncher
    {
    };

    class GMG_01_base_F : GMG_TriPod
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class OpticsIn;
    };

    class B_GMG_01_F : GMG_01_base_F
    {
    };

    class OPT_B_GMG_01_F : B_GMG_01_F
    {
        faction = "OPT_NATO";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt"};

                class OpticsIn : OpticsIn
                {
                    class ViewOptics : ViewOptics
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_B_GMG_01_weapon_F", "B_HMG_01_support_F"};
            displayName = "";
        };
    };

    class I_GMG_01_F : GMG_01_base_F
    {
    };

    class OPT_I_GMG_01_F : I_GMG_01_F
    {
        faction = "OPT_AAF";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt"};

                class OpticsIn : OpticsIn
                {
                    class ViewOptics : ViewOptics
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_I_GMG_01_weapon_F", "I_HMG_01_support_F"};
            displayName = "";
        };
    };


    class O_GMG_01_F : GMG_01_base_F
    {
    };

    class OPT_O_GMG_01_F : O_GMG_01_F
    {
        faction = "OPT_CSAT";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt"};

                class OpticsIn : OpticsIn
                {
                    class ViewOptics : ViewOptics
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_O_GMG_01_weapon_F", "O_HMG_01_support_F"};
            displayName = "";
        };
    };

    class GMG_01_high_base_F : GMG_01_base_F
    {
    };

    class B_GMG_01_high_F : GMG_01_high_base_F
    {
    };

    class OPT_B_GMG_01_high_F : B_GMG_01_high_F
    {
        faction = "OPT_NATO";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt"};

                class OpticsIn : OpticsIn
                {
                    class ViewOptics : ViewOptics
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_B_GMG_01_high_weapon_F", "B_HMG_01_support_high_F"};
            displayName = "";
        };
    };

    class I_GMG_01_high_F : GMG_01_high_base_F
    {
    };

    class OPT_I_GMG_01_high_F : I_GMG_01_high_F
    {
        faction = "OPT_AAF";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt"};

                class OpticsIn : OpticsIn
                {
                    class ViewOptics : ViewOptics
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_I_GMG_01_high_weapon_F", "I_HMG_01_support_high_F"};
            displayName = "";
        };
    };

    class O_GMG_01_high_F : GMG_01_high_base_F
    {
    };

    class OPT_O_GMG_01_high_F : O_GMG_01_high_F
    {
        faction = "OPT_CSAT";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt"};

                class OpticsIn : OpticsIn
                {
                    class ViewOptics : ViewOptics
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"OPT_O_GMG_01_high_weapon_F", "O_HMG_01_support_high_F"};
            displayName = "";
        };
    };

    class StaticMGWeapon;

    class AA_01_base_F : StaticMGWeapon
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class assembleInfo;
    };

    class B_static_AA_F : AA_01_base_F
    {
    };

    class OPT_B_static_AA_F : B_static_AA_F
    {
        faction = "OPT_NATO";
        displayName = "Statischer AA Titan-Werfer (Nato)";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_missiles_titan_static_AA"};
                magazines[] = {"1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_B_AA_01_weapon_F", "B_HMG_01_support_F"};
        };
    };

    class I_static_AA_F : AA_01_base_F
    {
    };

    class OPT_I_static_AA_F : I_static_AA_F
    {
        faction = "OPT_AAF";
        displayName = "Statischer AA Titan-Werfer (AAF)";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_missiles_titan_static_AA"};
                magazines[] = {"1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_I_AA_01_weapon_F", "I_HMG_01_support_F"};
        };
    };

    class O_static_AA_F : AA_01_base_F
    {
    };

    class OPT_O_static_AA_F : O_static_AA_F
    {
        faction = "OPT_CSAT";
        displayName = "Statischer AA Titan-Werfer (CSAT)";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_missiles_titan_static_AA"};
                magazines[] = {"1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_O_AA_01_weapon_F", "O_HMG_01_support_F"};
        };
    };

    class AT_01_base_F : StaticMGWeapon
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class assembleInfo;
    };

    class B_static_AT_F : AT_01_base_F
    {
    };

    class OPT_B_static_AT_F : B_static_AT_F
    {
        faction = "OPT_NATO";
        displayName = "Statischer AT Titan-Werfer (Nato)";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_missiles_titan_static"};
                magazines[] = {"1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_B_AT_01_weapon_F", "B_HMG_01_support_F"};
        };
    };

    class I_static_AT_F : AT_01_base_F
    {
    };

    class OPT_I_static_AT_F : I_static_AT_F
    {
        faction = "OPT_AAF";
        displayName = "Statischer AT Titan-Werfer (AAF)";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_missiles_titan_static"};
                magazines[] = {"1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_I_AT_01_weapon_F", "I_HMG_01_support_F"};
        };
    };

    class O_static_AT_F : AT_01_base_F
    {
    };

    class OPT_O_static_AT_F : O_static_AT_F
    {
        faction = "OPT_CSAT";
        displayName = "Statischer AT Titan-Werfer (CSAT)";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_missiles_titan_static"};
                magazines[] = {"1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_O_AT_01_weapon_F", "O_HMG_01_support_F"};
        };
    };

    class StaticWeapon;

    class Static_Designator_01_base_F : StaticWeapon
    {
    };

    class B_Static_Designator_01_F : Static_Designator_01_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class assembleInfo;
    };

    class OPT_B_Static_Designator_01_F : B_Static_Designator_01_F
    {
        faction = "OPT_NATO";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_B_Static_Designator_01_weapon_F"};
        };
    };

    class OPT_I_Static_Designator_01_F : B_Static_Designator_01_F
    {
        faction = "OPT_AAF";
        Side = 2;
    };

    class Static_Designator_02_base_F : StaticWeapon
    {
    };

    class O_Static_Designator_02_F : Static_Designator_02_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class assembleInfo;
    };

    class OPT_O_Static_Designator_02_F : O_Static_Designator_02_F
    {
        faction = "OPT_CSAT";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_O_Static_Designator_02_weapon_F"};
        };
    };

    class StaticMortar : StaticWeapon
    {
    };

    class Mortar_01_base_F : StaticMortar
    {
    };

    class B_Mortar_01_F : Mortar_01_base_F
    {
        class assembleInfo;
        class Turrets;
        class MainTurret;
    };

    class OPT_B_Mortar_01_F : B_Mortar_01_F
    {
        faction = "OPT_NATO";

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_B_Mortar_01_weapon_F", "B_Mortar_01_support_F"};
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_82mm"};
                magazines[] = {"OPT_8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_Flare_white", "8Rnd_82mm_Mo_Smoke_white"};
            };
        };
    };

    class I_Mortar_01_F : Mortar_01_base_F
    {
        class assembleInfo;
        class Turrets;
        class MainTurret;
    };

    class OPT_I_Mortar_01_F : I_Mortar_01_F
    {
        faction = "OPT_AAF";

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_I_Mortar_01_weapon_F", "I_Mortar_01_support_F"};
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_82mm"};
                magazines[] = {"OPT_8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_Flare_white", "8Rnd_82mm_Mo_Smoke_white"};
            };
        };
    };

    class O_Mortar_01_F : Mortar_01_base_F
    {
        class assembleInfo;
        class Turrets;
        class MainTurret;
    };

    class OPT_O_Mortar_01_F : O_Mortar_01_F
    {
        faction = "OPT_CSAT";

        class assembleInfo : assembleInfo
        {
            dissasembleTo[] = {"OPT_O_Mortar_01_weapon_F", "O_Mortar_01_support_F"};
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_82mm"};
                magazines[] = {"OPT_8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_Flare_white", "8Rnd_82mm_Mo_Smoke_white"};
            };
        };
    };

    class CUP_M119_base;

    class CUP_B_M119_USMC : CUP_M119_base
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_CUP_B_M119_USMC : CUP_B_M119_USMC
    {
        faction = "OPT_NATO_CUP";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"CUP_Vcannon_M119_veh"};
                magazines[] = {"CUP_30Rnd_105mmHE_M119_M", "CUP_30Rnd_105mmWP_M119_M", "CUP_30Rnd_105mmSMOKE_M119_M", "CUP_30Rnd_105mmILLUM_M119_M"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class CUP_D30_base;

    class CUP_O_D30_RU : CUP_D30_base
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_CUP_O_D30_RU : CUP_O_D30_RU
    {
        faction = "OPT_WP";
        
        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"CUP_Vcannon_D30_veh"};
                magazines[] = {"CUP_30Rnd_122mmHE_D30_M", "CUP_30Rnd_122mmWP_D30_M", "CUP_30Rnd_122mmSMOKE_D30_M", "CUP_30Rnd_122mmILLUM_D30_M"};
               
                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class CUP_D30_AT_base;

    class CUP_O_D30_AT_RU : CUP_D30_AT_base
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
    };

    class OPT_CUP_B_M119_AT_USMC : CUP_O_D30_AT_RU
    {
        faction = "OPT_NATO_CUP";
        displayName = "M119-AT";
        side = 1;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\d30\d30.paa"};
        
        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {              
                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class ThingX;

    class ReammoBox_F : ThingX
    {
    };

    class Slingload_base_F : ReammoBox_F
    {
    };

    class CargoNet_01_base_F : Slingload_base_F
    {
    };

    class CargoNet_01_ammo_base_F : CargoNet_01_base_F
    {
    };

    class B_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
    {
    };

    class OPT_B_CargoNet_01_ammo_F : B_CargoNet_01_ammo_F
    {
        displayName = "Ausrüstungskiste";
        maximumLoad = 30000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa","\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_b4.paa"};
 
        class TransportWeapons
        {
            class _xx_OPT_Laserdesignator
            {
                weapon = "OPT_Laserdesignator";
                count = 5;
            };

            class _xx_OPT_Laserdesignator_01_khk_F
            {
                weapon = "OPT_Laserdesignator_01_khk_F";
                count = 5;
            };

            class _xx_OPT_hgun_P07_F
            {
                weapon = "CUP_hgun_M9";
                count = 70;
            };
        };

        class TransportItems
        {
            class _xx_optic_ACO_grn
            {
                name = "optic_ACO_grn";
                count = 50;
            };

            class _xx_optic_Aco
            {
                name = "optic_Aco";
                count = 50;
            };

            class _xx_optic_Holosight
            {
                name = "optic_Holosight";
                count = 0;
            };

            class _xx_optic_Holosight_blk_F
            {
                name = "optic_Holosight_blk_F";
                count = 50;
            };

            class _xx_optic_Arco
            {
                name = "optic_Arco";
                count = 0;
            };

            class _xx_optic_Arco_blk_F
            {
                name = "optic_Arco_blk_F";
                count = 50;
            };

            class _xx_optic_Hamr
            {
                name = "optic_Hamr";
                count = 50;
            };

            class _xx_optic_MRCO
            {
                name = "optic_MRCO";
                count = 50;
            };

            class _xx_optic_ERCO_blk_F
            {
                name = "optic_ERCO_blk_F";
                count = 50;
            };

            class _xx_acc_flashlight
            {
                name = "acc_flashlight";
                count = 0;
            };

            class _xx_acc_pointer_IR
            {
                name = "acc_pointer_IR";
                count = 0;
            };

            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 0;
            };

            class _xx_ACE_DefusalKitirstAidKit
            {
                name = "ACE_DefusalKit";
                count = 20;
            };

            class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 0;
            };

            class _xx_ACE_wirecutter
            {
                name = "ACE_wirecutter";
                count = 10;
            };

            class _xx_NVGoggles
            {
                name = "NVGoggles_tna_F";
                count = 70;
            };
        };

        class TransportBackpacks
        {
            class _xx_B_AssaultPack_rgr
            {
                backpack = "OPT_B_AssaultPack_mccuu";
                count = 25;
            };

            class _xx_B_Parachute
            {
                backpack = "B_Parachute";
                count = 0;
            };

            class _xx_TFAR_rt1523g_big_bwmod
            {
                backpack = "TFAR_rt1523g_big_bwmod";
                count = 25;
            };

            class _xx_ACE_TacticalLadder_Pack
            {
                backpack = "ACE_TacticalLadder_Pack";
                count = 10;
            };
        };

        class TransportMagazines
        {

            class _xx_Laserbatteries
            {
                magazine = "Laserbatteries";
                count = 50;
            };
        };
    };

    class I_E_CargoNet_01_ammo_F;

    class OPT_I_CargoNet_01_ammo_F : I_E_CargoNet_01_ammo_F
    {
        displayName = "AAF Ausrüstungskiste";
        maximumLoad = 30000;
        supplyRadius = 8;

        class TransportWeapons
        {
            class _xx_OPT_Laserdesignator
            {
                weapon = "OPT_Laserdesignator";
                count = 5;
            };

            class _xx_OPT_Laserdesignator_01_khk_F
            {
                weapon = "OPT_Laserdesignator_01_khk_F";
                count = 5;
            };

            class _xx_OPT_hgun_ACPC2_F
            {
                weapon = "OPT_hgun_ACPC2_F";
                count = 70;
            };
        };

        class TransportItems
        {
            class _xx_optic_ACO_grn_smg
            {
                name = "optic_ACO_grn_smg";
                count = 50;
            };

            class _xx_optic_Aco_smg
            {
                name = "optic_Aco_smg";
                count = 50;
            };

            class _xx_optic_Holosight_smg
            {
                name = "optic_Holosight_smg";
                count = 0;
            };

            class _xx_optic_Holosight_smg_blk_F
            {
                name = "optic_Holosight_smg_blk_F";
                count = 50;
            };

            class _xx_optic_ACO_grn
            {
                name = "optic_ACO_grn";
                count = 50;
            };

            class _xx_optic_Aco
            {
                name = "optic_Aco";
                count = 50;
            };

            class _xx_optic_Holosight
            {
                name = "optic_Holosight";
                count = 0;
            };

            class _xx_optic_Holosight_blk_F
            {
                name = "optic_Holosight_blk_F";
                count = 50;
            };

            class _xx_optic_Arco
            {
                name = "optic_Arco";
                count = 0;
            };

            class _xx_optic_Arco_blk_F
            {
                name = "optic_Arco_blk_F";
                count = 50;
            };

            class _xx_optic_Hamr
            {
                name = "optic_Hamr";
                count = 50;
            };

            class _xx_optic_MRCO
            {
                name = "optic_MRCO";
                count = 50;
            };

            class _xx_optic_ERCO_blk_F
            {
                name = "optic_ERCO_blk_F";
                count = 50;
            };

            class _xx_acc_flashlight
            {
                name = "acc_flashlight";
                count = 50;
            };

            class _xx_acc_pointer_IR
            {
                name = "acc_pointer_IR";
                count = 50;
            };

            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 0;
            };

            class _xx_ACE_DefusalKitirstAidKit
            {
                name = "ACE_DefusalKit";
                count = 20;
            };

            class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 0;
            };

            class _xx_ACE_wirecutter
            {
                name = "ACE_wirecutter";
                count = 10;
            };

            class _xx_NVGoggles
            {
                name = "NVGoggles";
                count = 70;
            };
        };

        class TransportBackpacks
        {
            class _xx_B_AssaultPack_rgr
            {
                backpack = "B_AssaultPack_rgr";
                count = 25;
            };

            class _xx_B_I_Parachute_02_F
            {
                backpack = "B_I_Parachute_02_F";
                count = 0;
            };

            class _xx_TFAR_rt1523g_big_bwmod
            {
                backpack = "TFAR_rt1523g_big_bwmod";
                count = 25;
            };

            class _xx_ACE_TacticalLadder_Pack
            {
                backpack = "ACE_TacticalLadder_Pack";
                count = 10;
            };
        };

        class TransportMagazines
        {

            class _xx_Laserbatteries
            {
                magazine = "Laserbatteries";
                count = 50;
            };
        };
    };

    class B_supplyCrate_F : ReammoBox_F
    {
    };

    class OPT_B_supplyCrate_F : B_supplyCrate_F
    {
        displayName = "Transportkiste";
        maximumLoad = 15000;
        supplyRadius = 8;

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportWeapons
        {
        };

        class TransportMagazines
        {
        };
    };

    class I_supplyCrate_F;

    class OPT_I_supplyCrate_F : I_supplyCrate_F
    {
        displayName = "AAF Transportkiste";
        maximumLoad = 15000;
        supplyRadius = 8;

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportWeapons
        {
        };

        class TransportMagazines
        {
        };
    };

    class NATO_Box_Base : ReammoBox_F
    {
    };

    class Box_NATO_Ammo_F : NATO_Box_Base
    {
    };

    class OPT_Box_NATO_Ammo_F : Box_NATO_Ammo_F
    {
        displayName = "Munitionskiste";
        maximumLoad = 14000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_b1.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportWeapons
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_15Rnd_9x19_M9
            {
                magazine = "CUP_15Rnd_9x19_M9";
                count = 10;
            };

            class _xx_CUP_30Rnd_556x45_Stanag
            {
                magazine = "CUP_30Rnd_556x45_Stanag";
                count = 80;
            };

            class _xx_CUP_30Rnd_45ACP_MAC10_M
            {
                magazine = "CUP_30Rnd_45ACP_MAC10_M";
                count = 80;
            };

            class _xx_CUP_100Rnd_TE4_Green_Tracer_556x45_M249
            {
                magazine = "CUP_100Rnd_TE4_Green_Tracer_556x45_M249";
                count = 40;
            };

            class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
            {
                magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
                count = 40;
            };
        };
    };
    
    class Box_EAF_Ammo_F;

    class OPT_Box_EFA_Ammo_F : Box_EAF_Ammo_F
    {
        displayName = "AAF Munitionskiste";
        maximumLoad = 14000;
        supplyRadius = 8;

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportWeapons
        {
        };

        class TransportMagazines
        {
            class _xx_9Rnd_45ACP_Mag
            {
                magazine = "9Rnd_45ACP_Mag";
                count = 80;
            };

            class _xx_30Rnd_9x21_Mag
            {
                magazine = "30Rnd_9x21_Mag";
                count = 80;
            };

            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 180;
            };

            class _xx_OPT_150Rnd_556x45_Drum_Mag_Tracer_F
            {
                magazine = "OPT_150Rnd_556x45_Drum_Mag_Tracer_F";
                count = 40;
            };

            class _xx_200Rnd_65x39_cased_Box
            {
                magazine = "200Rnd_65x39_cased_Box";
                count = 40;
            };
        };
    };

    class Items_base_F : ThingX
    {
    };

    class PlasticCase_01_base_F : Items_base_F
    {
    };

    class Land_PlasticCase_01_small_F : PlasticCase_01_base_F
    {
    };

    class Land_PlasticCase_01_small_olive_F : Land_PlasticCase_01_small_F
    {
    };

    class OPT_Box_NATO_WpsSpecial_F : Land_PlasticCase_01_small_olive_F
    {
        displayName = "Scharfschützenkiste";
        maximumLoad = 15000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\plasticbox_b_0.paa","\opt\opt_client\addons\weapons\textures\ammobox\sniper_b_1.paa"};
        editorPreview = "\opt\opt_client\addons\weapons\Vorschaubilder_Shop\sniper_b_preview.jpg";

        class TransportWeapons
        {
        };

        class TransportItems
        {
            class _xx_optic_NVS
            {
                name = "optic_NVS";
                count = 50;
            };

            class _xx_optic_DMS
            {
                name = "optic_DMS";
                count = 50;
            };

            class _xx_optic_SOS
            {
                name = "optic_SOS";
                count = 50;
            };

            class _xx_optic_KHS_blk
            {
                name = "optic_KHS_blk";
                count = 50;
            };

            class _xx_optic_AMS
            {
                name = "optic_AMS";
                count = 50;
            };

            class _xx_optic_LRPS
            {
                name = "optic_LRPS";
                count = 50;
            };

            class _xx_ACE_Tripod
            {
                name = "ACE_Tripod";
                count = 20;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_20Rnd_762x51_HK417
            {
                magazine = "CUP_20Rnd_762x51_HK417";
                count = 60;
            };

            class _xx_CUP_5Rnd_127x99_as50_M
            {
                magazine = "CUP_5Rnd_127x99_as50_M";
                count = 40;
            };       
        };
    };

    class Land_PlasticCase_01_small_black_F : Land_PlasticCase_01_small_F
    {
    };

    class OPT_Box_EAF_WpsSpecial_F : Land_PlasticCase_01_small_black_F
    {
        displayName = "AAF Scharfschützenkiste";
        maximumLoad = 15000;
        supplyRadius = 8;

        class TransportWeapons
        {
        };

        class TransportItems
        {
            class _xx_optic_NVS
            {
                name = "optic_NVS";
                count = 50;
            };

            class _xx_optic_DMS
            {
                name = "optic_DMS";
                count = 50;
            };

            class _xx_optic_SOS
            {
                name = "optic_SOS";
                count = 50;
            };

            class _xx_optic_KHS_blk
            {
                name = "optic_KHS_blk";
                count = 50;
            };

            class _xx_optic_AMS
            {
                name = "optic_AMS";
                count = 50;
            };

            class _xx_optic_LRPS_tna_F
            {
                name = "optic_LRPS_tna_F";
                count = 50;
            };

            class _xx_ACE_Tripod
            {
                name = "ACE_Tripod";
                count = 20;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_20Rnd_762x51_Mag
            {
                magazine = "20Rnd_762x51_Mag";
                count = 60;
            };

            class _xx_5Rnd_127x108_APDS_Mag
            {
                magazine = "5Rnd_127x108_APDS_Mag";
                count = 60;
            };

            class _xx_5Rnd_127x108_Mag
            {
                magazine = "5Rnd_127x108_Mag";
                count = 60;
            };
        };
    };

    class Box_NATO_WpsSpecial_F : NATO_Box_Base
    {
    };

    class OPT_Box_NATO_WpsSpecial_AT_L1 : Box_NATO_WpsSpecial_F
    {
        displayName = "MAAWS Raketenkiste";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_b3.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportWeapons
        {
            class _xx_CUP_launch_MAAWS
            {
                weapon = "CUP_launch_MAAWS";
                count = 1;
            };
        };

        class TransportItems
        {
            class _xx_CUP_optic_MAAWS_Scope
            {
                name = "CUP_optic_MAAWS_Scope";
                count = 1;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_MAAWS_HEAT_M
            {
                magazine = "CUP_MAAWS_HEAT_M";
                count = 5;
            };
        };
    };

    class OPT_Box_NATO_WpsSpecial_AT_L1A : OPT_Box_NATO_WpsSpecial_AT_L1
    {
        displayName = "M72A6 Raketenkiste";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_b2.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportWeapons
        {
            class _xx_CUP_launch_M72A6
            {
                weapon = "CUP_launch_M72A6";
                count = 5;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
        };
    };

    

    class OPT_Box_NATO_WpsSpecial_AT_L2 : Box_NATO_WpsSpecial_F
    {
        displayName = "PCML-M Raketenkiste (NATO)";
        maximumLoad = 2000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\PCML.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_NLAW_F
            {
                weapon = "OPT_launch_NLAW_F";
                count = 1;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_NLAW_F
            {
                magazine = "NLAW_F";
                count = 10;
            };
        };
    };

    class OPT_Box_NATO_WpsSpecial_AT_H1 : Box_NATO_WpsSpecial_F
    {
        displayName = "Titan Raketenkiste (NATO)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\Titan.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_B_Titan_short_tna_F
            {
                weapon = "OPT_launch_B_Titan_short_tna_F";
                count = 1;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_OPT_Titan_AT
            {
                magazine = "OPT_Titan_AT";
                count = 10;
            };
        };
    };

    class OPT_Box_NATO_WpsSpecial_AA_F : Box_NATO_WpsSpecial_F
    {
        displayName = "AA Raketenkiste (NATO)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_b1.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_Stinger_M
            {
                magazine = "OPT_CUP_Stinger_M";
                count = 10;
            };
        };
    };

    class Box_EAF_WpsSpecial_F;

    class OPT_Box_EAF_WpsSpecial_AA_F : Box_EAF_WpsSpecial_F
    {
        displayName = "AA Raketenkiste (AAF)";
        maximumLoad = 2000;
        supplyRadius = 8;

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_Titan_AA
            {
                magazine = "Titan_AA";
                count = 5;
            };
        };
    };

    class Box_NATO_Uniforms_F : ReammoBox_F
    {
    };

    class OPT_Box_NATO_WpsSpecial_Diver_F : Box_NATO_Uniforms_F
    {
        displayName = "Taucherkiste";
        maximumLoad = 2000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa","\opt\opt_client\addons\weapons\textures\ammobox\equipment_blufor_taucher.paa"};

        class TransportWeapons
        {
            class _xx_OPT_arifle_SDAR_F
            {
                weapon = "OPT_arifle_SDAR_F";
                count = 5;
            };
        };

        class TransportItems
        {
            class _xx_U_B_Wetsuit
            {
                name = "U_B_Wetsuit";
                count = 5;
            };

            class _xx_G_B_Diving
            {
                name = "G_B_Diving";
                count = 5;
            };

            class _xx_V_RebreatherB
            {
                name = "V_RebreatherB";
                count = 5;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_20Rnd_556x45_UW_mag
            {
                magazine = "20Rnd_556x45_UW_mag";
                count = 25;
            };

            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 25;
            };
        };
    };

    class OPT_Box_EAF_WpsSpecial_Diver_F : Box_NATO_Uniforms_F
    {
        displayName = "AAF Taucherkiste";
        maximumLoad = 2000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Ammoboxes\Data\uniforms_box_EAF_co.paa","\a3\Supplies_F_Enoch\Ammoboxes\Data\uniforms_box_EAF_ca.paa"};

        class TransportWeapons
        {
            class _xx_OPT_arifle_SDAR_F
            {
                weapon = "OPT_arifle_SDAR_F";
                count = 5;
            };
        };

        class TransportItems
        {
            class _xx_U_I_Wetsuit
            {
                name = "U_I_Wetsuit";
                count = 5;
            };

            class _xx_G_I_Diving
            {
                name = "G_I_Diving";
                count = 5;
            };

            class _xx_V_RebreatherIA
            {
                name = "V_RebreatherIA";
                count = 5;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_20Rnd_556x45_UW_mag
            {
                magazine = "20Rnd_556x45_UW_mag";
                count = 25;
            };

            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 25;
            };
        };
    };

    class Box_NATO_WpsLaunch_F : NATO_Box_Base
    {
    };

    class OPT_Box_NATO_WpsLaunch_F : Box_NATO_WpsLaunch_F
    {
        displayName = "HAT Raketenkiste (Nato)";
        maximumLoad = 1000;
        supplyRadius = 8;

        class TransportWeapons
        {
            class _xx_OPT_launch_B_Titan_short_F
            {
                weapon = "OPT_launch_B_Titan_short_F";
                count = 1;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_Titan_AP
            {
                magazine = "Titan_AP";
                count = 5;
            };

            class _xx_OPT_Titan_AT
            {
                magazine = "OPT_Titan_AT";
                count = 5;
            };
        };
    };

    class Box_NATO_Grenades_F : NATO_Box_Base
    {
    };

    class OPT_Box_NATO_UGL_F : Box_NATO_Grenades_F
    {
        displayName = "Unterlaufgranatenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_b2.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_1Rnd_Smoke_M203
            {
                magazine = "CUP_1Rnd_Smoke_M203";
                count = 30;
            };

            class _xx_CUP_1Rnd_SmokeRed_M203
            {
                magazine = "CUP_1Rnd_SmokeRed_M203";
                count = 30;
            };

            class _xx_CUP_1Rnd_SmokeGreen_M203
            {
                magazine = "CUP_1Rnd_SmokeGreen_M203";
                count = 30;
            };

            class _xx_CUP_1Rnd_SmokeYellow_M203
            {
                magazine = "CUP_1Rnd_SmokeYellow_M203";
                count = 30;
            };

            class _xx_CUP_1Rnd_StarFlare_White_M203
            {
                magazine = "CUP_1Rnd_StarFlare_White_M203";
                count = 30;
            };

            class _xx_CUP_1Rnd_StarFlare_Red_M203
            {
                magazine = "CUP_1Rnd_StarFlare_Red_M203";
                count = 30;
            };

            class _xx_CUP_1Rnd_StarFlare_Green_M203
            {
                magazine = "CUP_1Rnd_StarFlare_Green_M203";
                count = 30;
            };

            class _xx_CUP_FlareWhite_M203
            {
                magazine = "CUP_FlareWhite_M203";
                count = 30;
            };

            class _xx_CUP_FlareGreen_M203
            {
                magazine = "CUP_FlareGreen_M203";
                count = 30;
            };

            class _xx_CUP_FlareRed_M203
            {
                magazine = "CUP_FlareRed_M203";
                count = 30;
            };

            class _xx_CUP_FlareYellow_M203
            {
                magazine = "CUP_FlareYellow_M203";
                count = 30;
            };
            class _xx_CUP_1Rnd_HEDP_M203
            {
                magazine = "CUP_1Rnd_HEDP_M203";
                count = 0;
            };

            class _xx_CUP_1Rnd_HE_M203
            {
                magazine = "CUP_1Rnd_HE_M203";
                count = 20;
            };

            class _xx_ACE_HuntIR_M203
            {
                magazine = "ACE_HuntIR_M203";
                count = 40;
            };
        };
    };

    class OPT_Box_NATO_Grenades_F : Box_NATO_Grenades_F
    {
        displayName = "Granatenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_b1.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SmokeShell
            {
                magazine = "SmokeShell";
                count = 30;
            };

            class _xx_SmokeShellRed
            {
                magazine = "SmokeShellRed";
                count = 30;
            };

            class _xx_SmokeShellGreen
            {
                magazine = "SmokeShellGreen";
                count = 30;
            };

            class _xx_SmokeShellPurple
            {
                magazine = "SmokeShellPurple";
                count = 30;
            };

            class _xx_SmokeShellYellow
            {
                magazine = "SmokeShellYellow";
                count = 30;
            };

            class _xx_SmokeShellBlue
            {
                magazine = "SmokeShellBlue";
                count = 30;
            };

            class _xx_SmokeShellOrange
            {
                magazine = "SmokeShellOrange";
                count = 30;
            };

            class _xx_chemlight_green
            {
                magazine = "chemlight_green";
                count = 30;
            };

            class _xx_Chemlight_red
            {
                magazine = "Chemlight_red";
                count = 30;
            };

            class _xx_Chemlight_yellow
            {
                magazine = "Chemlight_yellow";
                count = 30;
            };

            class _xx_Chemlight_blue
            {
                magazine = "Chemlight_blue";
                count = 30;
            };

            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 60;
            };

            class _xx_ACE_M14
            {
                magazine = "ACE_M14";
                count = 40;
            };

            class _xx_ACE_M84
            {
                magazine = "ACE_M84";
                count = 40;
            };
        };
    };

    class Land_PlasticCase_01_medium_F : PlasticCase_01_base_F
    {
    };

    class Land_PlasticCase_01_medium_olive_F : Land_PlasticCase_01_medium_F
    {
    };

    class OPT_NATO_Sprengstoffkiste : Land_PlasticCase_01_medium_olive_F
    {
        displayName = "Sprengstoffkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\plasticbox_b_0.paa","\opt\opt_client\addons\weapons\textures\ammobox\sprengstoff_b_1.paa"};
        editorPreview = "\opt\opt_client\addons\weapons\Vorschaubilder_Shop\sprengstoff_b_preview.jpg";

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SatchelCharge_Remote_Mag
            {
                magazine = "SatchelCharge_Remote_Mag";
                count = 10;
            };

            class _xx_DemoCharge_Remote_Mag
            {
                magazine = "DemoCharge_Remote_Mag";
                count = 10;
            };

            class _xx_ClaymoreDirectionalMine_Remote_Mag
            {
                magazine = "ClaymoreDirectionalMine_Remote_Mag";
                count = 10;
            };
        };
    };

    class OPT_NATO_Minenkiste : Land_PlasticCase_01_medium_olive_F
    {
        displayName = "Minenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\plasticbox_b_0.paa","\opt\opt_client\addons\weapons\textures\ammobox\minen_b_1.paa"};
        editorPreview = "\opt\opt_client\addons\weapons\Vorschaubilder_Shop\minen_b_preview.jpg";

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SLAMDirectionalMine_Wire_Mag
            {
                magazine = "SLAMDirectionalMine_Wire_Mag";
                count = 3;
            };

            class _xx_ATMine_Range_Mag
            {
                magazine = "ATMine_Range_Mag";
                count = 5;
            };
        };
    };

    class Land_PlasticCase_01_medium_black_F : Land_PlasticCase_01_medium_F
    {
    };

    class OPT_EAF_Sprengstoffkiste : Land_PlasticCase_01_medium_black_F
    {
        displayName = "AAF Sprengstoffkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa","a3\Props_F_Enoch\Military\Supplies\data\PlasticCase_01_Logo_01_CA"};
    
        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SatchelCharge_Remote_Mag
            {
                magazine = "SatchelCharge_Remote_Mag";
                count = 10;
            };

            class _xx_DemoCharge_Remote_Mag
            {
                magazine = "DemoCharge_Remote_Mag";
                count = 10;
            };

            class _xx_ClaymoreDirectionalMine_Remote_Mag
            {
                magazine = "ClaymoreDirectionalMine_Remote_Mag";
                count = 10;
            };
        };
    };

    class OPT_EAF_Minenkiste : Land_PlasticCase_01_medium_black_F
    {
        displayName = "AAF Minenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SLAMDirectionalMine_Wire_Mag
            {
                magazine = "SLAMDirectionalMine_Wire_Mag";
                count = 3;
            };

            class _xx_ATMine_Range_Mag
            {
                magazine = "ATMine_Range_Mag";
                count = 5;
            };
        };
    };

    class O_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
    {
    };

    class OPT_O_CargoNet_01_ammo_F : O_CargoNet_01_ammo_F
    {
        displayName = "Ausrüstungskiste";
        maximumLoad = 30000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_OPFOR_CO.paa","\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_o4.paa"};

        class TransportWeapons
        {
            class _xx_OPT_Laserdesignator_02
            {
                weapon = "OPT_Laserdesignator_02";
                count = 5;
            };

            class _xx_OPT_Laserdesignator_02_ghex_F
            {
                weapon = "OPT_Laserdesignator_02_ghex_F";
                count = 5;
            };

            class _xx_CUP_hgun_CZ75
            {
                weapon = "CUP_hgun_CZ75";
                count = 70;
            };
        };

        class TransportItems
        {
            class _xx_optic_ACO_grn
            {
                name = "optic_ACO_grn";
                count = 50;
            };

            class _xx_optic_Aco
            {
                name = "optic_Aco";
                count = 50;
            };

            class _xx_optic_Holosight
            {
                name = "optic_Holosight";
                count = 0;
            };

            class _xx_optic_Holosight_blk_F
            {
                name = "optic_Holosight_blk_F";
                count = 50;
            };

            class _xx_optic_Arco
            {
                name = "optic_Arco";
                count = 0;
            };

            class _xx_optic_Arco_blk_F
            {
                name = "optic_Arco_blk_F";
                count = 50;
            };

            class _xx_optic_Hamr
            {
                name = "optic_Hamr";
                count = 50;
            };

            class _xx_optic_MRCO
            {
                name = "optic_MRCO";
                count = 50;
            };

            class _xx_optic_ERCO_blk_F
            {
                name = "optic_ERCO_blk_F";
                count = 50;
            };

            class _xx_acc_flashlight
            {
                name = "acc_flashlight";
                count = 0;
            };

            class _xx_acc_pointer_IR
            {
                name = "acc_pointer_IR";
                count = 0;
            };

            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 0;
            };

            class _xx_ACE_DefusalKitirstAidKit
            {
                name = "ACE_DefusalKit";
                count = 20;
            };

            class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 0;
            };

            class _xx_ACE_wirecutter
            {
                name = "ACE_wirecutter";
                count = 10;
            };

            class _xx_NVGoggles
            {
                name = "NVGoggles_INDEP";
                count = 70;
            };
        };

        class TransportBackpacks
        {
            class _xx_B_FieldPack_ocamo
            {
                backpack = "OPT_B_AssaultPack_VSR98Worm";
                count = 25;
            };

            class _xx_B_Parachute
            {
                backpack = "B_Parachute";
                count = 25;
            };

            class _xx_TFAR_mr3000
            {
                backpack = "TFAR_mr3000";
                count = 25;
            };

            class _xx_ACE_TacticalLadder_Pack
            {
                backpack = "ACE_TacticalLadder_Pack";
                count = 10;
            };
        };

        class TransportMagazines
        {
            class _xx_Laserbatteries
            {
                magazine = "Laserbatteries";
                count = 50;
            };
        };
    };

    class O_supplyCrate_F : B_supplyCrate_F
    {
    };

    class OPT_O_supplyCrate_F : O_supplyCrate_F
    {
        displayName = "Transportkiste";
        maximumLoad = 15000;
        supplyRadius = 8;

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportWeapons
        {
        };

        class TransportMagazines
        {
        };
    };

    class EAST_Box_Base : ReammoBox_F
    {
    };

    class Box_East_Ammo_F : EAST_Box_Base
    {
    };

    class OPT_Box_East_Ammo_F : Box_East_Ammo_F
    {
        displayName = "Munitionskiste";
        maximumLoad = 14000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_o1.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};


        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {

            class _xx_16Rnd_9x21_Mag
            {
                magazine = "CUP_16Rnd_9x19_cz75";
                count = 80;
            };

            class _xx_CUP_30Rnd_556x45_AK
            {
                magazine = "CUP_30Rnd_556x45_AK";
                count = 80;
            };

            class _xx_CUP_20Rnd_B_765x17_Ball_M
            {
                magazine = "CUP_20Rnd_B_765x17_Ball_M";
                count = 180;
            };

            class _xx_CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M
            {
                magazine = "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M";
                count = 80;
            };

            class _xx_OPT_100Rnd_580x42_Mag_Tracer_F
            {
                magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
                count = 40;
            };
        };
    };

    class OPT_Box_East_WpsSpecial_F : Land_PlasticCase_01_small_olive_F
    {
        displayName = "Scharfschützenkiste";
        maximumLoad = 15000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\plasticbox_o_0.paa","\opt\opt_client\addons\weapons\textures\ammobox\sniper_o_1.paa"};
        editorPreview = "\opt\opt_client\addons\weapons\Vorschaubilder_Shop\sniper_o_preview.jpg";

        class TransportWeapons
        {
        };

        class TransportItems
        {
            class _xx_optic_NVS
            {
                name = "optic_NVS";
                count = 50;
            };

            class _xx_optic_DMS
            {
                name = "optic_DMS";
                count = 50;
            };

            class _xx_optic_SOS
            {
                name = "optic_SOS";
                count = 50;
            };

            class _xx_optic_KHS_blk
            {
                name = "optic_KHS_blk";
                count = 50;
            };

            class _xx_optic_AMS
            {
                name = "optic_AMS";
                count = 50;
            };
            
            class _xx_optic_LRPS
            {
                name = "optic_LRPS";
                count = 50;
            };

            class _xx_ACE_Tripod
            {
                name = "ACE_Tripod";
                count = 20;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_20Rnd_762x51_FNFAL_M
            {
                magazine = "CUP_20Rnd_762x51_FNFAL_M";
                count = 60;
            };
            
            class _xx_CUP_5Rnd_127x99_as50_M
            {
                magazine = "CUP_5Rnd_127x99_as50_M";
                count = 60;
            };
        };
    };

    class Box_East_WpsSpecial_F : EAST_Box_Base
    {
    };

    class OPT_Box_East_WpsSpecial_AT_L1 : Box_East_WpsSpecial_F
    {
        displayName = "Mk153 Mod 0 SMAW Raketenkiste";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_o3.paa",  "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};

        class TransportWeapons
        {
            class _xx_CUP_launch_Mk153Mod0
            {
                weapon = "CUP_launch_Mk153Mod0";
                count = 1;
            };
        };

        class TransportItems
        {
            class _xx_CUP_optic_SMAW_Scope
            {
                name = "CUP_optic_SMAW_Scope";
                count = 1;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_SMAW_HEAA_M
            {
                magazine = "CUP_SMAW_HEAA_M";
                count = 5;
            };

        };
    };

    class OPT_Box_EAF_WpsSpecial_AT_L3 : Box_EAF_WpsSpecial_F
    {
        displayName = "RPG-42 Alamut Raketenkiste (AAF)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\RGP-42.paa",  "\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_RPG32_F
            {
                weapon = "OPT_launch_RPG32_F";
                count = 2;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_RPG32_HE_F
            {
                magazine = "RPG32_HE_F";
                count = 0;
            };

            class _xx_RPG32_F
            {
                magazine = "RPG32_F";
                count = 5;
            };
        };
    };

    class OPT_Box_EAF_WpsSpecial_AT_L1 : Box_EAF_WpsSpecial_F
    {
        displayName = "MAAWS Mk4 Mod 0 Raketenkiste (AAF)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\MAAWS2.paa", "\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_MRAWS_green_rail_F
            {
                weapon = "OPT_launch_MRAWS_green_rail_F";
                count = 2;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_MRAWS_HEAT_F
            {
                magazine = "MRAWS_HEAT_F";
                count = 5;
            };

            class _xx_MRAWS_HE_F
            {
                magazine = "MRAWS_HE_F";
                count = 0;
            };
        };
    };

    class OPT_Box_EAF_WpsSpecial_AT_L1A : OPT_Box_EAF_WpsSpecial_AT_L1
    {
        displayName = "MAAWS Mk4 Mod 1 Raketenkiste (AAF)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\MAAWS3.paa", "\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_MRAWS_green_F
            {
                weapon = "OPT_launch_MRAWS_green_F";
                count = 2;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_MRAWS_HEAT_F
            {
                magazine = "MRAWS_HEAT_F";
                count = 5;
            };

            class _xx_MRAWS_HE_F
            {
                magazine = "MRAWS_HE_F";
                count = 0;
            };
        };
    };

    class OPT_Box_East_WpsSpecial_AT_L3 : Box_East_WpsSpecial_F
    {
        displayName = "MAAWS Mk4 Mod 0 Raketenkiste (CSAT)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\MAAWS2.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_MRAWS_green_rail_F
            {
                weapon = "OPT_launch_MRAWS_green_rail_F";
                count = 2;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_MRAWS_HEAT_F
            {
                magazine = "MRAWS_HEAT_F";
                count = 5;
            };

            class _xx_MRAWS_HE_F
            {
                magazine = "MRAWS_HE_F";
                count = 0;
            };
        };
    };

    class OPT_Box_East_WpsSpecial_AT_L3A : Box_East_WpsSpecial_F
    {
        displayName = "MAAWS Mk4 Mod 1 Raketenkiste (CSAT)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\MAAWS3.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_MRAWS_green_F
            {
                weapon = "OPT_launch_MRAWS_green_F";
                count = 2;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_MRAWS_HEAT_F
            {
                magazine = "MRAWS_HEAT_F";
                count = 5;
            };

            class _xx_MRAWS_HE_F
            {
                magazine = "MRAWS_HE_F";
                count = 0;
            };
        };
    };

    class OPT_Box_East_WpsSpecial_AT_L2 : Box_East_WpsSpecial_F
    {
        displayName = "RPG-18 Raketenkiste";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_o2.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};

        class TransportWeapons
        {
            class _xx_CUP_launch_RPG18
            {
                weapon = "CUP_launch_RPG18";
                count = 5;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
        };
    };

    class OPT_Box_EAF_WpsSpecial_AT_L2 : Box_EAF_WpsSpecial_F
    {
        displayName = "RPG-7 Raketenkiste (AAF)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\RGP-7.paa", "\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa"};

        class TransportWeapons
        {
            class _xx_launch_RPG7_F
            {
                weapon = "launch_RPG7_F";
                count = 2;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_RPG7_F
            {
                magazine = "RPG7_F";
                count = 5;
            };
        };
    };

    class OPT_Box_East_WpsSpecial_AT_H1 : Box_East_WpsSpecial_F
    {
        displayName = "9M135 Vorona Raketenkiste (CSAT)";
        maximumLoad = 5000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\Vorona.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};

        class TransportWeapons
        {
            class _xx_OPT_launch_O_Vorona_green_F    
            {
                weapon = "OPT_launch_O_Vorona_green_F";
                count = 1;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_Vorona_HEAT
            {
                magazine = "Vorona_HEAT";
                count = 10;
            };
        };
    };

    class OPT_Box_East_WpsSpecial_AA_F : Box_East_WpsSpecial_F
    {
        displayName = "AA Raketenkiste";
        maximumLoad = 2000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_o1.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};


        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_OPT_CUP_Igla_M
            {
                magazine = "OPT_CUP_Igla_M";
                count = 10;
            };
        };
    };

    class Box__Uniforms_F : Box_NATO_Uniforms_F
    {
    };

    class OPT_Box_East_WpsSpecial_Diver_F : Box__Uniforms_F
    {
        displayName = "Taucherkiste";
        maximumLoad = 2000;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_opfor_co.paa","\opt\opt_client\addons\weapons\textures\ammobox\equipment_opfor_taucher.paa"};

        class TransportWeapons
        {
            class _xx_OPT_arifle_SDAR_F
            {
                weapon = "OPT_arifle_SDAR_F";
                count = 5;
            };
        };

        class TransportItems
        {
            class _xx_U_O_Wetsuit
            {
                name = "U_O_Wetsuit";
                count = 5;
            };

            class _xx_G_O_Diving
            {
                name = "G_O_Diving";
                count = 5;
            };

            class _xx_V_RebreatherIR
            {
                name = "V_RebreatherIR";
                count = 5;
            };
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_20Rnd_556x45_UW_mag
            {
                magazine = "20Rnd_556x45_UW_mag";
                count = 25;
            };

            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 25;
            };
        };
    };

    class Box_East_WpsLaunch_F : EAST_Box_Base
    {
    };

    class OPT_Box_East_WpsLaunch_F : Box_East_WpsLaunch_F
    {
        displayName = "HAT Raketenkiste (CSAT)";
        maximumLoad = 1000;
        supplyRadius = 8;

        class TransportWeapons
        {
            class _xx_OPT_launch_O_Titan_short_F
            {
                weapon = "OPT_launch_O_Titan_short_F";
                count = 1;
            };
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_Titan_AP
            {
                magazine = "Titan_AP";
                count = 5;
            };

            class _xx_Titan_AT
            {
                magazine = "OPT_Titan_AT";
                count = 5;
            };
        };
    };

    class Box_East_Grenades_F : EAST_Box_Base
    {
    };

    class OPT_Box_CSAT_UGL_F : Box_East_Grenades_F
    {
        displayName = "Unterlaufgranatenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_o2.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_CUP_1Rnd_Smoke_GP25_M
            {
                magazine = "CUP_1Rnd_Smoke_GP25_M";
                count = 30;
            };

            class _xx_CUP_1Rnd_SmokeRed_GP25_M
            {
                magazine = "CUP_1Rnd_SmokeRed_GP25_M";
                count = 30;
            };

            class _xx_CUP_1Rnd_SmokeGreen_GP25_M
            {
                magazine = "CUP_1Rnd_SmokeGreen_GP25_M";
                count = 30;
            };

            class _xx_CUP_1Rnd_SmokeYellow_GP25_M
            {
                magazine = "CUP_1Rnd_SmokeYellow_GP25_M";
                count = 30;
            };

            class _xx_CUP_IlumFlareWhite_GP25_M
            {
                magazine = "CUP_IlumFlareWhite_GP25_M";
                count = 30;
            };

            class _xx_CUP_IlumFlareRed_GP25_M
            {
                magazine = "CUP_IlumFlareRed_GP25_M";
                count = 30;
            };

            class _xx_CUP_IlumFlareGreen_GP25_M
            {
                magazine = "CUP_IlumFlareGreen_GP25_M";
                count = 30;
            };

            class _xx_CUP_FlareWhite_GP25_M
            {
                magazine = "CUP_FlareWhite_GP25_M";
                count = 30;
            };

            class _xx_CUP_FlareGreen_GP25_M
            {
                magazine = "CUP_FlareGreen_GP25_M";
                count = 30;
            };

            class _xx_CUP_FlareRed_GP25_M
            {
                magazine = "CUP_FlareRed_GP25_M";
                count = 30;
            };

            class _xx_CUP_FlareYellow_GP25_M
            {
                magazine = "CUP_FlareYellow_GP25_M";
                count = 30;
            };

            class _xx_CUP_1Rnd_HE_GP25_M
            {
                magazine = "CUP_1Rnd_HE_GP25_M";
                count = 20;
            };

            class _xx_ACE_HuntIR_M203
            {
                magazine = "ACE_HuntIR_M203";
                count = 40;
            };
        };
    };

    class OPT_Box_East_Grenades_F : Box_East_Grenades_F
    {
        displayName = "Granatenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\ammobox_signs_o1.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_OPFOR_CO.paa"};

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SmokeShell
            {
                magazine = "SmokeShell";
                count = 30;
            };

            class _xx_SmokeShellRed
            {
                magazine = "SmokeShellRed";
                count = 30;
            };

            class _xx_SmokeShellGreen
            {
                magazine = "SmokeShellGreen";
                count = 30;
            };

            class _xx_SmokeShellPurple
            {
                magazine = "SmokeShellPurple";
                count = 30;
            };

            class _xx_SmokeShellYellow
            {
                magazine = "SmokeShellYellow";
                count = 30;
            };

            class _xx_SmokeShellBlue
            {
                magazine = "SmokeShellBlue";
                count = 30;
            };

            class _xx_SmokeShellOrange
            {
                magazine = "SmokeShellOrange";
                count = 30;
            };

            class _xx_chemlight_green
            {
                magazine = "chemlight_green";
                count = 30;
            };

            class _xx_Chemlight_red
            {
                magazine = "Chemlight_red";
                count = 30;
            };

            class _xx_Chemlight_yellow
            {
                magazine = "Chemlight_yellow";
                count = 30;
            };

            class _xx_Chemlight_blue
            {
                magazine = "Chemlight_blue";
                count = 30;
            };

            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 60;
            };

            class _xx_ACE_M14
            {
                magazine = "ACE_M14";
                count = 40;
            };

            class _xx_ACE_M84
            {
                magazine = "ACE_M84";
                count = 40;
            };
        };
    };

    class Box_EAF_Grenades_F;

    class OPT_Box_EAF_UGL_F : Box_EAF_Grenades_F
    {
        displayName = "AAF Unterlaufgranatenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_3Rnd_Smoke_Grenade_shell
            {
                magazine = "3Rnd_Smoke_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_Smoke_Grenade_shell
            {
                magazine = "1Rnd_Smoke_Grenade_shell";
                count = 30;
            };

            class _xx_3Rnd_SmokeRed_Grenade_shell
            {
                magazine = "3Rnd_SmokeRed_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_SmokeRed_Grenade_shell
            {
                magazine = "1Rnd_SmokeRed_Grenade_shell";
                count = 30;
            };

            class _xx_3Rnd_SmokeGreen_Grenade_shell
            {
                magazine = "3Rnd_SmokeGreen_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_SmokeGreen_Grenade_shell
            {
                magazine = "1Rnd_SmokeGreen_Grenade_shell";
                count = 30;
            };

            class _xx_3Rnd_SmokeYellow_Grenade_shell
            {
                magazine = "3Rnd_SmokeYellow_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_SmokeYellow_Grenade_shell
            {
                magazine = "1Rnd_SmokeYellow_Grenade_shell";
                count = 30;
            };

            class _xx_3Rnd_SmokePurple_Grenade_shell
            {
                magazine = "3Rnd_SmokePurple_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_SmokePurple_Grenade_shell
            {
                magazine = "1Rnd_SmokePurple_Grenade_shell";
                count = 30;
            };

            class _xx_3Rnd_SmokeBlue_Grenade_shell
            {
                magazine = "3Rnd_SmokeBlue_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_SmokeBlue_Grenade_shell
            {
                magazine = "1Rnd_SmokeBlue_Grenade_shell";
                count = 30;
            };

            class _xx_3Rnd_SmokeOrange_Grenade_shell
            {
                magazine = "3Rnd_SmokeOrange_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_SmokeOrange_Grenade_shell
            {
                magazine = "1Rnd_SmokeOrange_Grenade_shell";
                count = 30;
            };

            class _xx_3Rnd_UGL_FlareWhite_F
            {
                magazine = "3Rnd_UGL_FlareWhite_F";
                count = 0;
            };

            class _xx_UGL_FlareWhite_F
            {
                magazine = "UGL_FlareWhite_F";
                count = 30;
            };

            class _xx_3Rnd_UGL_FlareGreen_F
            {
                magazine = "3Rnd_UGL_FlareGreen_F";
                count = 0;
            };

            class _xx_UGL_FlareGreen_F
            {
                magazine = "UGL_FlareGreen_F";
                count = 30;
            };

            class _xx_3Rnd_UGL_FlareRed_F
            {
                magazine = "3Rnd_UGL_FlareRed_F";
                count = 0;
            };

            class _xx_UGL_FlareRed_F
            {
                magazine = "UGL_FlareRed_F";
                count = 30;
            };

            class _xx_3Rnd_UGL_FlareYellow_F
            {
                magazine = "3Rnd_UGL_FlareYellow_F";
                count = 0;
            };

            class _xx_UGL_FlareYellow_F
            {
                magazine = "UGL_FlareYellow_F";
                count = 30;
            };

            class _xx_3Rnd_UGL_FlareCIR_F
            {
                magazine = "3Rnd_UGL_FlareCIR_F";
                count = 0;
            };

            class _xx_UGL_FlareCIR_F
            {
                magazine = "UGL_FlareCIR_F";
                count = 30;
            };

            class _xx_3Rnd_HE_Grenade_shell
            {
                magazine = "3Rnd_HE_Grenade_shell";
                count = 0;
            };

            class _xx_1Rnd_HE_Grenade_shell
            {
                magazine = "1Rnd_HE_Grenade_shell";
                count = 20;
            };

            class _xx_ACE_HuntIR_M203
            {
                magazine = "ACE_HuntIR_M203";
                count = 40;
            };
        };
    };

    class OPT_Box_EAF_Grenades_F : Box_EAF_Grenades_F
    {
        displayName = "AAF Granatenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SmokeShell
            {
                magazine = "SmokeShell";
                count = 30;
            };

            class _xx_SmokeShellRed
            {
                magazine = "SmokeShellRed";
                count = 30;
            };

            class _xx_SmokeShellGreen
            {
                magazine = "SmokeShellGreen";
                count = 30;
            };

            class _xx_SmokeShellPurple
            {
                magazine = "SmokeShellPurple";
                count = 30;
            };

            class _xx_SmokeShellYellow
            {
                magazine = "SmokeShellYellow";
                count = 30;
            };

            class _xx_SmokeShellBlue
            {
                magazine = "SmokeShellBlue";
                count = 30;
            };

            class _xx_SmokeShellOrange
            {
                magazine = "SmokeShellOrange";
                count = 30;
            };

            class _xx_chemlight_green
            {
                magazine = "chemlight_green";
                count = 30;
            };

            class _xx_Chemlight_red
            {
                magazine = "Chemlight_red";
                count = 30;
            };

            class _xx_Chemlight_yellow
            {
                magazine = "Chemlight_yellow";
                count = 30;
            };

            class _xx_Chemlight_blue
            {
                magazine = "Chemlight_blue";
                count = 30;
            };

            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 60;
            };

            class _xx_ACE_M14
            {
                magazine = "ACE_M14";
                count = 40;
            };

            class _xx_ACE_M84
            {
                magazine = "ACE_M84";
                count = 40;
            };
        };
    };

    class OPT_CSAT_Sprengstoffkiste : Land_PlasticCase_01_medium_black_F
    {
        displayName = "Sprengstoffkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\plasticbox_o_0.paa","\opt\opt_client\addons\weapons\textures\ammobox\sprengstoff_o_1.paa"};
        editorPreview = "\opt\opt_client\addons\weapons\Vorschaubilder_Shop\sprengstoff_o_preview.jpg";

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SatchelCharge_Remote_Mag
            {
                magazine = "SatchelCharge_Remote_Mag";
                count = 10;
            };

            class _xx_DemoCharge_Remote_Mag
            {
                magazine = "DemoCharge_Remote_Mag";
                count = 10;
            };

            class _xx_ClaymoreDirectionalMine_Remote_Mag
            {
                magazine = "ClaymoreDirectionalMine_Remote_Mag";
                count = 10;
            };
        };
    };

    class OPT_CSAT_Minenkiste : Land_PlasticCase_01_medium_black_F
    {
        displayName = "Minenkiste";
        maximumLoad = 8500;
        supplyRadius = 8;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\ammobox\plasticbox_o_0.paa","\opt\opt_client\addons\weapons\textures\ammobox\minen_o_1.paa"};
        editorPreview = "\opt\opt_client\addons\weapons\Vorschaubilder_Shop\minen_o_preview.jpg";

        class TransportWeapons
        {
        };

        class TransportItems
        {
        };

        class TransportBackpacks
        {
        };

        class TransportMagazines
        {
            class _xx_SLAMDirectionalMine_Wire_Mag
            {
                magazine = "SLAMDirectionalMine_Wire_Mag";
                count = 3;
            };

            class _xx_ATMine_Range_Mag
            {
                magazine = "ATMine_Range_Mag";
                count = 5;
            };
        };
    };

    //TFAR CSAT Funke 
    class TFAR_mr3000;

    class OPT_TFAR_mr3000 : TFAR_mr3000
    {
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\funk\tfar_mr3000.paa"};
    };


    class Weapon_Bag_Base;

    class B_HMG_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_B_HMG_01_weapon_F : B_HMG_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_HMG_01_F";
        };
    };

    class I_HMG_01_weapon_F : B_HMG_01_weapon_F
    {
    };

    class OPT_I_HMG_01_weapon_F : I_HMG_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_HMG_01_F";
        };
    };

    class B_HMG_01_high_weapon_F : B_HMG_01_weapon_F
    {
    };

    class OPT_B_HMG_01_high_weapon_F : B_HMG_01_high_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_HMG_01_high_F";
        };
    };

    class I_HMG_01_high_weapon_F : B_HMG_01_high_weapon_F
    {
    };

    class OPT_I_HMG_01_high_weapon_F : I_HMG_01_high_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_HMG_01_high_F";
        };
    };

    class O_HMG_01_weapon_F : B_HMG_01_weapon_F
    {
        class assembleInfo;
    };

    class OPT_O_HMG_01_weapon_F : O_HMG_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_O_HMG_01_F";
        };
    };

    class O_HMG_01_high_weapon_F : B_HMG_01_high_weapon_F
    {
    };

    class OPT_O_HMG_01_high_weapon_F : O_HMG_01_high_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_HMG_01_high_F";
        };
    };

    class B_UAV_01_backpack_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_B_UAV_01_backpack_F : B_UAV_01_backpack_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_UAV_01_F";
        };
    };

    
    class I_UAV_01_backpack_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_I_UAV_01_backpack_F : I_UAV_01_backpack_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_UAV_01_F";
        };
    };

    class O_UAV_01_backpack_F : B_UAV_01_backpack_F
    {
    };

    class OPT_O_UAV_01_backpack_F : O_UAV_01_backpack_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_O_UAV_01_F";
        };
    };

    class B_Static_Designator_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_B_Static_Designator_01_weapon_F : B_Static_Designator_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_Static_Designator_01_F";
        };
    };

    class OPT_I_Static_Designator_01_weapon_F : B_Static_Designator_01_weapon_F
    {
        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_Static_Designator_01_F";
        };
    };

    class O_Static_Designator_02_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_O_Static_Designator_02_weapon_F : O_Static_Designator_02_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_O_Static_Designator_02_F";
        };
    };

    class B_GMG_01_high_weapon_F : B_HMG_01_high_weapon_F
    {
    };

    class OPT_B_GMG_01_high_weapon_F : B_GMG_01_high_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_GMG_01_high_F";
        };
    };

    class I_GMG_01_high_weapon_F : B_HMG_01_high_weapon_F
    {
    };

    class OPT_I_GMG_01_high_weapon_F : I_GMG_01_high_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_GMG_01_high_F";
        };
    };

    class O_GMG_01_high_weapon_F : B_GMG_01_high_weapon_F
    {
    };

    class OPT_O_GMG_01_high_weapon_F : O_GMG_01_high_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_GMG_01_high_F";
        };
    };

    class B_GMG_01_weapon_F : B_HMG_01_weapon_F
    {
    };

    class OPT_B_GMG_01_weapon_F : B_GMG_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_GMG_01_F";
        };
    };

    class I_GMG_01_weapon_F : B_HMG_01_weapon_F
    {
    };

    class OPT_I_GMG_01_weapon_F : I_GMG_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_GMG_01_F";
        };
    };

    class O_GMG_01_weapon_F : B_GMG_01_weapon_F
    {
    };

    class OPT_O_GMG_01_weapon_F : O_GMG_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_O_GMG_01_F";
        };
    };

    class B_AA_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_B_AA_01_weapon_F : B_AA_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_static_AA_F";
        };
    };

    class I_AA_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_I_AA_01_weapon_F : I_AA_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_static_AA_F";
        };
    };

    class O_AA_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_O_AA_01_weapon_F : O_AA_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_O_static_AA_F";
        };
    };

    class B_AT_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_B_AT_01_weapon_F : B_AT_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_static_AT_F";
        };
    };

    class I_AT_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_I_AT_01_weapon_F : I_AT_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_static_AT_F";
        };
    };

    class O_AT_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_O_AT_01_weapon_F : O_AT_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_O_static_AT_F";
        };
    };

    class B_Mortar_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_B_Mortar_01_weapon_F : B_Mortar_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_B_Mortar_01_F";
        };
    };

    class I_Mortar_01_weapon_F : Weapon_Bag_Base
    {
        class assembleInfo;
    };

    class OPT_I_Mortar_01_weapon_F : I_Mortar_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_I_Mortar_01_F";
        };
    };

    class O_Mortar_01_weapon_F : B_Mortar_01_weapon_F
    {
        class assembleInfo;
    };

    class OPT_O_Mortar_01_weapon_F : O_Mortar_01_weapon_F
    {

        class assembleInfo : assembleInfo
        {
            assembleTo = "OPT_O_Mortar_01_F";
        };
    };

    class B_Kitbag_rgr;

    class OPT_B_Kitbag_rgr_Eng : B_Kitbag_rgr
    {
        displayName = "Seesack Eng. (grün)";
        maximumLoad = 280;
        scope = 2;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 1;
            };
        };
    };

    class B_Carryall_ocamo;

    class OPT_B_Carryall_ocamo_Eng : B_Carryall_ocamo
    {
        displayName = "Grosser Rucksack Eng. (Hex-Camo)";
        maximumLoad = 320;
        scope = 2;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 1;
            };
        };
    };

    class B_Carryall_ghex_F;

    class OPT_B_Carryall_ghex_Eng : B_Carryall_ghex_F
    {
        displayName = "Grosser Rucksack Eng. (Ghex-Camo)";
        maximumLoad = 320;
        scope = 2;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 1;
            };
        };
    };

    class OPT_B_Carryall_emr : B_Carryall_ghex_F
    {
        displayName = "Grosser Rucksack Eng. (EMR)";
        maximumLoad = 320;
        scope = 2;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\großerucksack_emr.paa"};

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class OPT_B_Carryall_m81 : B_Carryall_ghex_F
    {
        displayName = "Grosser Rucksack Eng. (M81)";
        maximumLoad = 320;
        scope = 2;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\großerucksack_m81.paa"};


        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class OPT_B_Carryall_mccuu : B_Carryall_ghex_F
    {
        displayName = "Grosser Rucksack Eng. (MCCUU)";
        maximumLoad = 320;
        scope = 2;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\großerucksack_mccuu.paa"};
        picture = "\opt\opt_client\addons\weapons\textures\rucksack\icon_großerucksack_mccuu.paa";

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class OPT_B_Carryall_VSR98Worm : B_Carryall_ghex_F
    {
        displayName = "Grosser Rucksack Eng. (VSR98Worm)";
        maximumLoad = 320;
        scope = 2;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\großerucksack_VSR98Worm.paa"};
        picture = "\opt\opt_client\addons\weapons\textures\rucksack\icon_großerucksack_VSR98Worm.paa";

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class B_FieldPack_ocamo;

    class OPT_B_FieldPack_ocamo_AT : B_FieldPack_ocamo
    {
        displayName = "Feldpack HAT (Hex-Camo)";
        maximumLoad = 200;

        class TransportMagazines
        {
            class _xx_OPT_Titan_AT
            {
                magazine = "OPT_Titan_AT";
                count = 2;
            };
        };

        class TransportItems
        {
        };
    };

    class OPT_B_FieldPack_ocamo_AA : OPT_B_FieldPack_ocamo_AT
    {
        displayName = "Feldpack AA (Hex-Camo)";

        class TransportMagazines
        {
            class _xx_Titan_AA
            {
                magazine = "Titan_AA";
                count = 2;
            };
        };
    };

    class OPT_B_FieldPack_ocamo_LAT : OPT_B_FieldPack_ocamo_AT
    {
        displayName = "Feldpack AT (Hex-Camo)";

        class TransportMagazines
        {
            class _xx_RPG32_F
            {
                magazine = "RPG32_F";
                count = 2;
            };

            class _xx_RPG32_HE_F
            {
                magazine = "RPG32_HE_F";
                count = 1;
            };
        };
    };

    class B_FieldPack_ghex_F;

    class OPT_B_FieldPack_ghex_AT : B_FieldPack_ghex_F
    {
        displayName = "Feldpack HAT (Ghex-Camo)";
        maximumLoad = 200;

        class TransportMagazines
        {
            class _xx_OPT_Titan_AT
            {
                magazine = "OPT_Titan_AT";
                count = 2;
            };
        };

        class TransportItems
        {
        };
    };

    class OPT_B_FieldPack_ghex_AA : OPT_B_FieldPack_ghex_AT
    {
        displayName = "Feldpack AA (Ghex-Camo)";

        class TransportMagazines
        {
            class _xx_Titan_AA
            {
                magazine = "Titan_AA";
                count = 2;
            };
        };
    };

    class OPT_B_FieldPack_ghex_LAT : OPT_B_FieldPack_ghex_AT
    {
        displayName = "Feldpack AT (Ghex-Camo)";

        class TransportMagazines
        {
            class _xx_RPG32_F
            {
                magazine = "RPG32_F";
                count = 2;
            };

            class _xx_RPG32_HE_F
            {
                magazine = "RPG32_HE_F";
                count = 1;
            };
        };
    };

    class B_TacticalPack_rgr;

    class OPT_B_TacticalPack_rgr : B_TacticalPack_rgr
    {
        displayName = "Taktischer Rucksack (grün)";
        maximumLoad = 240;
    };

    class B_TacticalPack_blk;

    class OPT_B_TacticalPack_blk : B_TacticalPack_blk
    {
        displayName = "Taktischer Rucksack (schwarz)";
        maximumLoad = 240;
    };

    class OPT_B_TacticalPack_blk_AA : OPT_B_TacticalPack_blk
    {
        displayName = "Taktischer Rucksack AA (schwarz)";

        class TransportMagazines
        {
            class _xx_Titan_AA
            {
                magazine = "Titan_AA";
                count = 2;
            };
        };
    };

    class OPT_B_TacticalPack_blk_LAT : OPT_B_TacticalPack_blk
    {
        displayName = "Taktischer Rucksack AT (schwarz)";

        class TransportMagazines
        {
            class _xx_NLAW_F
            {
                magazine = "NLAW_F";
                count = 2;
            };
        };
    };

    class OPT_B_TacticalPack_blk_AT : OPT_B_TacticalPack_blk
    {
        displayName = "OPT Taktischer Rucksack HAT (schwarz)";

        class TransportMagazines
        {
            class _xx_OPT_Titan_AT
            {
                magazine = "OPT_Titan_AT";
                count = 2;
            };
        };
    };

    class B_AssaultPack_rgr;

    class OPT_B_AssaultPack_rgr_Medic : B_AssaultPack_rgr
    {
        displayName = "Angriffspack Med. (grün)";
        maximumLoad = 160;
        scope = 2;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 8;
            };
        };
    };

    class B_AssaultPack_blk;

    class OPT_B_AssaultPack_blk_Medic : B_AssaultPack_blk
    {
        displayName = "Angriffspack Med. (schwarz)";
        maximumLoad = 160;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 8;
            };
        };
    };

    class B_AssaultPack_tna_F;

    class OPT_B_AssaultPack_tna_Medic : B_AssaultPack_tna_F
    {
        displayName = "Angriffspack Med. (tropisch)";
        maximumLoad = 160;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 8;
            };
        };
    };

    class OPT_B_AssaultPack_emr : B_AssaultPack_tna_F
    {
        displayName = "Angriffspack (EMR)";
        maximumLoad = 160;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\angriffsrucksack_emr.paa"};

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class OPT_B_AssaultPack_m81: B_AssaultPack_tna_F
    {
        displayName = "Angriffspack (M81)";
        maximumLoad = 160;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\angriffsrucksack_m81.paa"};

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class OPT_B_AssaultPack_mccuu : B_AssaultPack_tna_F
    {
        displayName = "Angriffspack (MCCUU)";
        maximumLoad = 160;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\angriffsrucksack_mccuu.paa"};
        picture = "\opt\opt_client\addons\weapons\textures\rucksack\icon_angriffsrucksack_mccuu.paa";

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class OPT_B_AssaultPack_VSR98Worm : B_AssaultPack_tna_F
    {
        displayName = "Angriffspack (VSR98Worm)";
        maximumLoad = 160;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\weapons\textures\rucksack\angriffsrucksack_VSR98Worm.paa"};
        picture = "\opt\opt_client\addons\weapons\textures\rucksack\icon_angriffsrucksack_vsr98worm.paa";

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };
    };

    class B_FieldPack_ocamo_ReconMedic;

    class OPT_B_FieldPack_ocamo_ReconMedic : B_FieldPack_ocamo_ReconMedic
    {
        displayName = "Feldpack Med. (Hex-Camo)";
        maximumLoad = 200;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };

            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 8;
            };
        };
    };

    class OPT_B_FieldPack_ghex_ReconMedic : B_FieldPack_ghex_F
    {
        displayName = "Feldpack Med. (Ghex-Camo)";
        maximumLoad = 200;

        class TransportMagazines
        {
        };

        class TransportItems
        {
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };

            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 8;
            };
        };
    };

    class tf_mr3000_bwmod;

    class OPT_tf_mr3000_bwmod : tf_mr3000_bwmod
    {
        maximumLoad = 40; // 160 //
        tf_range = 40000; // 20000 //
        _generalMacro = "OPT_tf_mr3000_bwmod ";
        displayName = "OPT RT-1523G (ASIP) Big BWMOD [Flecktarn]";
        descriptionShort = "Mit 40km Reichweite";
    };

    class tf_rt1523g_big_bwmod;

    class OPT_tf_rt1523g_big_bwmod : tf_rt1523g_big_bwmod
    {
        maximumLoad = 40; // 160 //
        tf_range = 40000; // 20000 //
        _generalMacro = "OPT_tf_rt1523g_big_bwmod";
        displayName = "OPT MR3000 BWMOD [Flecktarn]";
        descriptionShort = "Mit 40km Reichweite";
    };

    class ACE_Box_82mm_Mo_HE;

    class OPT_ACE_Box_82mm_Mo_HE : ACE_Box_82mm_Mo_HE
    {
        maximumLoad = 4000; // 400 //

        class TransportMagazines
        {
            class _xx_ACE_1Rnd_82mm_Mo_HE
            {
                count = 32; // 8 //
                magazine = "ACE_1Rnd_82mm_Mo_HE";
            };
        };
    };
};
