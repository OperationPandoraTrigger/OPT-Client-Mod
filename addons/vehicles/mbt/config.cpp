class CfgPatches
{
    class opt_vehicles_mbt
    {
        units[] = {"OPT_B_MBT_01_cannon_F","OPT_B_MBT_01_cannon_ghex_F", "OPT_B_MBT_01_TUSK_F","OPT_B_MBT_01_TUSK_ghex_F", "OPT_B_MBT_01_arty_F","OPT_B_MBT_01_arty_ghex_F", "OPT_B_MBT_01_mlrs_F","OPT_B_MBT_01_mlrs_ghex_F",
                   "OPT_O_MBT_02_cannon_F", "OPT_O_T_MBT_02_cannon_ghex_F", "OPT_O_MBT_02_arty_F", "OPT_O_T_MBT_02_arty_ghex_F", "OPT_B_MBT_03_cannon_F","OPT_B_MBT_03_cannon_ghex_F","OPT_O_MBT_04_cannon_F","OPT_I_MBT_01_arty_ghex_F",
                   "OPT_O_MBT_02_cannon_F_INF","OPT_O_T_MBT_02_cannon_ghex_F_INF","OPT_O_MBT_02_cannon_F_AT","OPT_O_T_MBT_02_cannon_ghex_F_AT","OPT_I_MBT_03_cannon_F_INF","OPT_I_MBT_03_cannon_F_AT"};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_armor_f", "a3_armor_f_slammer", "a3_armor_f_t100k", "a3_armor_f_amv"};
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
        faction = "OPT_BLUFOR";
        fuelCapacity = 12; // 100 //
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\M4Scorcher\opt_scorcher_fin_1.paa","\opt\opt_client\addons\vehicles\textures\M4Scorcher\opt_scorcher_fin_2.paa","\opt\opt_client\addons\vehicles\textures\Hunter\opt_rcws_fin.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_scorcher_fin.jpg";

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
    class OPT_B_MBT_01_mlrs_F2 : B_MBT_01_mlrs_F
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
        faction = "OPT_OPFOR";
        fuelCapacity = 12; // 75 //
        textureList = ["Hex",0];
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\T100\opt_t100_rus_1.paa","\opt\opt_client\addons\vehicles\textures\T100\opt_t100_rus_2.paa","\opt\opt_client\addons\vehicles\textures\T100\opt_t100_rus_3.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_t100_rus.jpg";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"LMG_coax","cannon_125mm"};
                magazines[] = {"2000Rnd_762x51_Belt","12Rnd_125mm_HE","20Rnd_125mm_APFSDS"};

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
        faction = "OPT_OPFOR";
        fuelCapacity = 12; // 75 //
        textureList = ["Hex",0];
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\T100\opt_t100_rus_1.paa","\opt\opt_client\addons\vehicles\textures\Sochor\opt_sochor_rus_2.paa","\opt\opt_client\addons\vehicles\textures\T100\opt_t100_rus_3.paa","\opt\opt_client\addons\vehicles\textures\Ifrit\opt_rcws_rus.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_sochor_rus.jpg";

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
                weapons[] = {"LMG_coax","cannon_120mm"};
                magazines[] = {"2000Rnd_762x51_Belt","12Rnd_120mm_HE_shells","20Rnd_120mm_APFSDS_shells"};

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
        faction = "OPT_BLUFOR";
        crew = "OPT_NATO_Besatzungsmitglied";
        typicalCargo[] = {"OPT_NATO_Besatzungsmitglied"};
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\kuma\opt_kuma_fin_1.paa", "\opt\opt_client\addons\vehicles\textures\kuma\opt_kuma_fin_2.paa", "\opt\opt_client\addons\vehicles\textures\kuma\opt_kuma_fin_3.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_kuma_fin.jpg";
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
};
