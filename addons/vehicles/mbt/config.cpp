class CfgPatches
{
    class opt_vehicles_mbt
    {
        units[] = {"OPT_B_MBT_01_cannon_F","OPT_B_MBT_01_cannon_ghex_F", "OPT_B_MBT_01_TUSK_F","OPT_B_MBT_01_TUSK_ghex_F", "OPT_B_MBT_01_arty_F","OPT_B_MBT_01_arty_ghex_F", "OPT_B_MBT_01_mlrs_F","OPT_B_MBT_01_mlrs_ghex_F",
                   "OPT_O_MBT_02_cannon_F", "OPT_O_T_MBT_02_cannon_ghex_F", "OPT_O_MBT_02_arty_F", "OPT_O_T_MBT_02_arty_ghex_F", "OPT_B_MBT_03_cannon_F","OPT_B_MBT_03_cannon_ghex_F","OPT_O_MBT_04_cannon_F","OPT_I_MBT_01_arty_ghex_F",
                   "OPT_O_MBT_02_cannon_F_INF","OPT_O_T_MBT_02_cannon_ghex_F_INF","OPT_O_MBT_02_cannon_F_AT","OPT_O_T_MBT_02_cannon_ghex_F_AT","OPT_I_MBT_03_cannon_F_INF","OPT_I_MBT_03_cannon_F_AT"};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_armor_f", "a3_armor_f_slammer", "a3_armor_f_t100k", "a3_armor_f_amv","CUP_TrackedVehicles_M60","CUP_TrackedVehicles_T72","CUP_TrackedVehicles_Leopard2","CUP_TrackedVehicles_T90"};
    };
};

class CfgVehicles
{
    class Logic;

    class OPT_Vehicles_require : Logic
    {
        displayName = "Benoetigt OPT A3 Vehicles";
        vehicleClass = "Modules";
    };

    class LandVehicle;

    class Tank : LandVehicle
    {
    };

    class Tank_F : Tank
    {
    };

    class MBT_01_base_F : Tank_F
    {
    };

    class B_MBT_01_base_F : MBT_01_base_F
    {
    };

    class B_MBT_01_cannon_F : B_MBT_01_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
    };

    //// M2A1 Slammer ////
    class OPT_B_MBT_01_cannon_F : B_MBT_01_cannon_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 12; // 100 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class OPT_B_MBT_01_cannon_ghex_F : B_MBT_01_cannon_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 12; // 100 //
        hiddenSelections[] = {"Camo1","Camo2","CamoNet"};
        hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class B_MBT_01_TUSK_F : B_MBT_01_cannon_F
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
    };

    //// M2A4 Slammer UP ////
    class OPT_B_MBT_01_TUSK_F : B_MBT_01_TUSK_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 12; // 100 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class OPT_B_MBT_01_TUSK_ghex_F : B_MBT_01_TUSK_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 12; // 100 //
        hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
        hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa"};

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class MBT_01_arty_base_F : MBT_01_base_F
    {
    };

    class B_MBT_01_arty_base_F : MBT_01_arty_base_F
    {
    };

    class B_MBT_01_arty_F : B_MBT_01_arty_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
    };

    //// M4 Scorcher ////
    class OPT_B_MBT_01_arty_F : B_MBT_01_arty_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 12; // 100 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_155mm_AMOS"};
                magazines[] = {"OPT_32Rnd_155mm_Mo_shells", "6Rnd_155mm_Mo_smoke", "OPT_2Rnd_155mm_Mo_Cluster"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class OPT_B_MBT_01_arty_ghex_F : B_MBT_01_arty_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 12; // 100 //
        hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
        hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa","A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_155mm_AMOS"};
                magazines[] = {"OPT_32Rnd_155mm_Mo_shells", "6Rnd_155mm_Mo_smoke", "OPT_2Rnd_155mm_Mo_Cluster"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    //// AAF M4 Scorcher ////
    class OPT_I_MBT_01_arty_ghex_F : B_MBT_01_arty_F
    {
        faction = "OPT_AAF";
        side = 2;
        crew = "I_crew_F";
        typicalCargo[] = {"I_crew_F"};
        fuelCapacity = 12; // 100 //
        hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\M4Scorcher\opt_scorcher_01_body.paa","\opt\opt_client\addons\vehicles\textures\M4Scorcher\opt_scorcher_01_turret.paa","\opt\opt_client\addons\vehicles\textures\M4Scorcher\opt_scorcher_turret_rcws.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
        

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_155mm_AMOS"};
                magazines[] = {"OPT_32Rnd_155mm_Mo_shells","OPT_32Rnd_155mm_Mo_shells", "6Rnd_155mm_Mo_smoke", "6Rnd_155mm_Mo_smoke"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class MBT_01_mlrs_base_F : MBT_01_base_F
    {
    };

    class B_MBT_01_mlrs_base_F : MBT_01_mlrs_base_F
    {
    };

    class B_MBT_01_mlrs_F : B_MBT_01_mlrs_base_F
    {
        class Turrets;
        class MainTurret;
        class OpticsIn;
        class Wide;
    };

    //// M5 Sandstorm MLRS ////
    class OPT_B_MBT_01_mlrs_F : B_MBT_01_mlrs_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 12; // 100 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_rockets_230mm_GAT"};
                magazines[] = {"OPT_12Rnd_230mm_rockets"};

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class OPT_B_MBT_01_mlrs_ghex_F : B_MBT_01_mlrs_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 12; // 100 //
        hiddenSelections[] = {"Camo1","Camo2","CamoNet"};
        hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_rockets_230mm_GAT"};
                magazines[] = {"OPT_12Rnd_230mm_rockets"};

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class MBT_02_base_F : Tank_F
    {
    };

    class O_MBT_02_base_F : MBT_02_base_F
    {
    };

    class O_MBT_02_cannon_F : O_MBT_02_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
    };

    //// T-100 Varsuk ////
    class OPT_O_MBT_02_cannon_F : O_MBT_02_cannon_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 12; // 75 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class O_T_MBT_02_cannon_ghex_F : O_MBT_02_cannon_F
    {
    };

    class OPT_O_T_MBT_02_cannon_ghex_F : O_T_MBT_02_cannon_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 12; // 75 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    // T-100 Infanterie 
    class OPT_O_MBT_02_cannon_F_INF : O_MBT_02_cannon_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 12; // 75 //
        displayName = "T-100 Infanterie";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"LMG_coax","cannon_125mm"};
                magazines[] = {"2000Rnd_762x51_Belt","12Rnd_125mm_HE","12Rnd_125mm_HE","12Rnd_125mm_HE"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class OPT_O_T_MBT_02_cannon_ghex_F_INF : O_T_MBT_02_cannon_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 12; // 75 //
        displayName = "T-100 Infanterie";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"LMG_coax","cannon_125mm"};
                magazines[] = {"2000Rnd_762x51_Belt","12Rnd_125mm_HE","12Rnd_125mm_HE","12Rnd_125mm_HE"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    // T-100 Fahrzeug 
    class OPT_O_MBT_02_cannon_F_AT : O_MBT_02_cannon_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 12; // 75 //
        displayName = "T-100 Veh";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"LMG_coax","cannon_125mm"};
                magazines[] = {"2000Rnd_762x51_Belt","20Rnd_125mm_APFSDS"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class OPT_O_T_MBT_02_cannon_ghex_F_AT : O_T_MBT_02_cannon_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 12; // 75 //
        displayName = "T-100 Veh";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"LMG_coax","cannon_125mm"};
                magazines[] = {"2000Rnd_762x51_Belt","20Rnd_125mm_APFSDS"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class MBT_04_base_F : Tank_F
    {
    };

    class MBT_04_cannon_base_F : MBT_04_base_F
    {
    };

    class O_MBT_04_cannon_F : MBT_04_cannon_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
    };

    //// T-140 Angara ////
    class OPT_O_MBT_04_cannon_F : O_MBT_04_cannon_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 12; // 75 //
    
        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class MBT_02_arty_base_F : MBT_02_base_F
    {
    };

    class O_MBT_02_arty_base_F : MBT_02_arty_base_F
    {
    };

    class O_MBT_02_arty_F : O_MBT_02_arty_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
    };

    //// 2S9 Sochor ////
    class OPT_O_MBT_02_arty_F : O_MBT_02_arty_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 12; // 75 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_155mm_AMOS"};
                magazines[] = {"OPT_32Rnd_155mm_Mo_shells","OPT_32Rnd_155mm_Mo_shells", "6Rnd_155mm_Mo_smoke", "6Rnd_155mm_Mo_smoke"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };
            };
        };

        class TransportItems
        {
        };

        class TransportMagazines
        {
        };

        class TransportWeapons
        {
        };
    };

    class O_T_MBT_02_arty_ghex_F : O_MBT_02_arty_F
    {
    };

    class OPT_O_T_MBT_02_arty_ghex_F : O_T_MBT_02_arty_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 12; // 75 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_mortar_155mm_AMOS"};
                magazines[] = {"OPT_32Rnd_155mm_Mo_shells","OPT_32Rnd_155mm_Mo_shells", "6Rnd_155mm_Mo_smoke", "6Rnd_155mm_Mo_smoke"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };
            };
        };
    };

    class MBT_03_base_F : Tank_F
    {
    };

    class I_MBT_03_base_F : MBT_03_base_F
    {
    };

    class I_MBT_03_cannon_F : I_MBT_03_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
    };

    //// MBT-52 Kuma ////
    class OPT_I_MBT_03_cannon_F : I_MBT_03_cannon_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 12; // 100 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };
    };

    class OPT_B_MBT_03_cannon_F : OPT_I_MBT_03_cannon_F
    {
        side = 1;
        faction = "OPT_NATO";
        crew = "OPT_NATO_Besatzungsmitglied";
        typicalCargo[] = {"OPT_NATO_Besatzungsmitglied"};
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\kuma\nato\TankBodyTexture.paa", "\opt\opt_client\addons\vehicles\textures\kuma\nato\TankTurretTexture.paa", "\opt\opt_client\addons\vehicles\textures\kuma\nato\TankTurretMGTexture.paa"};
    };

    class OPT_B_MBT_03_cannon_ghex_F : OPT_I_MBT_03_cannon_F
    {
        side = 1;
        faction = "OPT_NATO_T";
        crew = "OPT_NATO_Besatzungsmitglied";
        typicalCargo[] = {"OPT_NATO_Besatzungsmitglied"};
        hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\kuma\nato\TankBodyTexture.paa", "\opt\opt_client\addons\vehicles\textures\kuma\nato\TankTurretTexture.paa", "\opt\opt_client\addons\vehicles\textures\kuma\nato\TankTurretMGTexture.paa"};
    };

    //// MBT-52 Kuma Infanterie ////
    class OPT_I_MBT_03_cannon_F_INF : I_MBT_03_cannon_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 12; // 100 //
        displayName = "Kuma Infanterie";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"LMG_coax","cannon_120mm"};
                magazines[] = {"2000Rnd_762x51_Belt","12Rnd_120mm_HE_shells","12Rnd_120mm_HE_shells","12Rnd_120mm_HE_shells"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };
    };

    //// MBT-52 Kuma Fahrzeug ////
    class OPT_I_MBT_03_cannon_F_AT : I_MBT_03_cannon_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 12; // 100 //
        displayName = "Kuma Veh";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"LMG_coax","cannon_120mm"};
                magazines[] = {"2000Rnd_762x51_Belt","20Rnd_120mm_APFSDS_shells"};

                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewGunner : ViewGunner
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };

                        class OpticsIn : OpticsIn
                        {
                            class Wide : Wide
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Medium : Medium
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };

                            class Narrow : Narrow
                            {
                                visionMode[] = {"Normal", "NVG"};
                            };
                        };
                    };
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };
    };

    //M60A3 TTS
    class CUP_M60A3_TTS_Base;

    class CUP_B_M60A3_TTS_USMC : CUP_M60A3_TTS_Base
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
        class AnimationSources;
        class muzzle_rot;
        class Missiles_revolving;
    };

    class OPT_CUP_B_M60A3_TTS_USMC: CUP_B_M60A3_TTS_USMC
    {
        faction = "OPT_NATO_CUP";
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\M60\m60_0.paa","\opt\opt_client\addons\vehicles\textures\M60\m60_1.paa","\opt\opt_client\addons\vehicles\textures\M60\m60_2.paa","\opt\opt_client\addons\vehicles\textures\M60\m60_3.paa","CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\m60_fuelcan_co.paa","\opt\opt_client\addons\vehicles\textures\M60\m60_5.paa","\opt\opt_client\addons\vehicles\textures\M60\m60_6.paa","CUP\TrackedVehicles\CUP_TrackedVehicles_M1_Abrams\data\m1abrams_02_co.paa","CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\bk_eg_co.paa","CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\m60_alp_uvs_1024s_ca.paa"};
        fuelCapacity = 10.5;// 1885 //

        class Turrets : Turrets 
        {
            class MainTurret : MainTurret 
            {
                class Turrets : Turrets 
                {
                    class CommanderOptics : CommanderOptics 
                    {
                        class ViewOptics : ViewOptics 
                        {
                            visionMode[] = {"Normal", NVG};
                            thermalMode[] = {};
                        };
                    };
                };
            
                class OpticsIn : OpticsIn 
                {
                    class Wide : Wide 
                    {
                        visionMode[] = {"Normal", NVG};
                        thermalMode[] = {};
                    };
                };
            };
        };

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class TransportBackpacks
        {
        };

    };

    //T72
    class CUP_T72_Base;

    class CUP_O_T72_RU : CUP_T72_Base
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
        class AnimationSources;
        class muzzle_rot;
        class Missiles_revolving;
    };

    class OPT_CUP_O_T72_RU: CUP_O_T72_RU
    {
        faction = "OPT_WP";
        fuelCapacity = 2.3;// 672 //

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class TransportBackpacks
        {
        };
    };

    //Leopard2A6
    class CUP_Leopard2_Base;

    class CUP_B_Leopard2A6_GER: CUP_Leopard2_Base
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
        class AnimationSources;
        class muzzle_rot;
        class Missiles_revolving;
    };

    class OPT_CUP_B_Leopard2A6_GER: CUP_B_Leopard2A6_GER
    {
        faction = "OPT_NATO_CUP";
        fuelCapacity = 59.27;// 1885 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                class Turrets : Turrets
                {
                    class CommanderOptics : CommanderOptics
                    {
                        class ViewOptics : ViewOptics
                        {
                            visionMode[] = {"Normal", "NVG"};
                        };
                    };
                };

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class TransportBackpacks
        {
        };
    };

    //T90A
    class CUP_T90_Base;

    class CUP_O_T90_RU : CUP_T90_Base
    {
        class Turrets;
        class MainTurret;
        class CommanderOptics;
        class ViewOptics;
        class OpticsIn;
        class ViewGunner;
        class Wide;
        class Medium;
        class Narrow;
        class AnimationSources;
        class muzzle_rot;
        class Missiles_revolving;
    };

    class OPT_CUP_O_T90_RU: CUP_O_T90_RU
    {
        faction = "OPT_WP";
        fuelCapacity = 3.2;// 672 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"CUP_Vcannon_2A46_Txx", "CUP_Vhmg_PKT_veh_Noeject_FCS"};
                magazines[] = {"CUP_22Rnd_2A46_APFSDS_T_M", "CUP_12Rnd_2A46_HE_T_M", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M"};
 
                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class TransportBackpacks
        {
        };

    };

};
