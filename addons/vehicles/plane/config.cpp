class CfgPatches
{
    class opt_vehicles_plane
    {
        units[] = {"OPT_O_Plane_Fighter_03_CAS_F", "OPT_O_Plane_Fighter_03_AA_F", "OPT_B_Plane_CAS_01_F", "OPT_B_Plane_CAS_01_AA_F", "OPT_O_Plane_CAS_02_F",
                   "OPT_O_Plane_CAS_02_AA_F","OPT_O_Plane_Fighter_01_Stealth_F"};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_air_f_gamma_plane_fighter_03", "a3_air_f_epc_plane_cas_02", "a3_air_f_epc_plane_cas_01", "A3_Air_F_Exp", "A3_Air_F_Exp_VTOL_01", "A3_Air_F_Exp_VTOL_02", "A3_Soft_F_Exp", "A3_Soft_F_Exp_LSV_01", "A3_Soft_F_Exp_LSV_02",
                            "A3_Air_F_Jets", "A3_Air_F_Jets_Plane_Fighter_01", "A3_Air_F_Jets_Plane_Fighter_02"};
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

    class Air;

    class Plane : Air
    {
    };

    class Plane_Base_F : Plane
    {
    };

    class Plane_Fighter_03_base_F : Plane_Base_F
    {
    };

    class Plane_Fighter_03_dynamicLoadout_base_F : Plane_Fighter_03_base_F
    {
    };

    class I_Plane_Fighter_03_dynamicLoadout_F : Plane_Fighter_03_dynamicLoadout_base_F
    {
        class pilotCamera;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
        class AnimationSources;
        class Components;
        class TransportPylonsComponent;
        class Pylons;
        class Pylons1;
        class Pylons2;
        class Pylons3;
        class Pylons4;
        class Pylons5;
        class Pylons6;
        class Pylons7;
    };

    //// A-143 Buzzard (CAS) ////
    class OPT_I_Plane_Fighter_03_CAS_F : I_Plane_Fighter_03_dynamicLoadout_F
    {
        faction = "OPT_AAF";
        displayName = "A-143 Buzzard (CAS)";
        weapons[] = {"OPT_CMFlareLauncher"};
        magazines[] = {"OPT_30Rnd_CMFlare_Chaff_Magazine"};
        fuelCapacity = 500; // 1000 //
        driverCanEject = 1;

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class Pylons1 : Pylons1
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_HE_F";
                    };

                    class Pylons2 : Pylons2
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_HE_F";
                    };

                    class Pylons3 : Pylons3
                    {
                        attachment = "OPT_PylonWeapon_25Rnd_20mm_shells";
                    };

                    class Pylons4 : Pylons4
                    {
                        attachment = "";
                    };

                    class Pylons5 : Pylons5
                    {
                        attachment = "OPT_PylonWeapon_25Rnd_20mm_shells";
                    };

                    class Pylons6 : Pylons6
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_AP_F";
                    };

                    class Pylons7 : Pylons7
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_AP_F";
                    };
                };
            };

            class SensorsManagerComponent 
            {
                class Components 
                {                   
                    class PassiveRadarSensorComponent
                    {
                        aimDown = 0;
                        class AirTarget 
                        {
                            maxRange = 16000;
                            minRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        allowsMarking = 0;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 360;
                        animDirection = "";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "PassiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        class GroundTarget 
                        {
                            maxRange = 16000;
                            minRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };                  
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+10;
                        maxTrackableSpeed = 1e+10;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+10;
                        minTrackableSpeed = -1e+10;
                        typeRecognitionDistance = 12000;
                    };
                    class VisualSensorComponent
                    {
                        aimdown = -0.25;
                        class AirTarget 
                        {
                            maxRange = 2000;
                            minRange = 500;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        allowsMarking = 1;
                        angleRangeHorizontal = 46;
                        angleRangeVertical = 34;
                        animDirection = "mainGun";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "VisualSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        class GroundTarget 
                        {
                            maxRange = 1500;
                            minRange = 500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxFogSeeThrough = 0.94;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+10;
                        maxTrackableSpeed = 70;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+10;
                        minTrackableSpeed = -1e+10;
                        nightRangeCoef = 0;
                        typeRecognitionDistance = 2000;
                    };
                };
            };
        };

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_O
            {
                name = "H_PilotHelmetFighter_O";
                count = 1;
            };
        };

        class AnimationSources : AnimationSources
        {
            class Muzzle_flash
            {
                source = "ammorandom";
                weapon = "OPT_Twin_Cannon_20mm";
            };
        };

        class pilotCamera : pilotCamera
        {
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

    class OPT_O_Plane_Fighter_03_dynamicLoadout_F : OPT_I_Plane_Fighter_03_CAS_F
    {
        faction = "OPT_Sowjet";
        side = 0;
        crew = "OPT_CSAT_Pilot";
        hiddenSelectionsTextures[]= {"\opt\opt_client\addons\vehicles\textures\buzzard\opt_Buzzard_rus_1.paa","\opt\opt_client\addons\vehicles\textures\buzzard\opt_Buzzard_rus_2.paa"};
        typicalCargo[] = {"OPT_CSAT_Pilot"};
        //editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_hunter_hmg_fin.jpg";
    };

    class OPT_B_Plane_Fighter_03_dynamicLoadout_F : OPT_I_Plane_Fighter_03_CAS_F
    {
        faction = "OPT_FIN";
        side = 1;
        crew = "OPT_NATO_Pilot";
        hiddenSelectionsTextures[]= {"\opt\opt_client\addons\vehicles\textures\buzzard\opt_buzzard_fin_1.paa","\opt\opt_client\addons\vehicles\textures\buzzard\opt_buzzard_fin_2.paa"};
        typicalCargo[] = {"OPT_NATO_Pilot"};
        //editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_hunter_hmg_fin.jpg";
    };

    //// A-143 Buzzard (AA) ////
    class OPT_O_Plane_Fighter_03_AA_F : OPT_O_Plane_Fighter_03_dynamicLoadout_F
    {
        displayName = "A-143 Buzzard (AA)";
        faction = "OPT_CSAT";

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class Pylons1 : Pylons1
                    {
                        attachment = "OPT_PylonRack_1Rnd_AAA_missiles";
                    };

                    class Pylons2 : Pylons2
                    {
                        attachment = "";
                    };

                    class Pylons3 : Pylons3
                    {
                        attachment = "OPT_PylonRack_1Rnd_GAA_missiles";
                    };

                    class Pylons4 : Pylons4
                    {
                        attachment = "OPT_PylonWeapon_300Rnd_20mm_shells";
                    };

                    class Pylons5 : Pylons5
                    {
                        attachment = "OPT_PylonRack_1Rnd_GAA_missiles";
                    };

                    class Pylons6 : Pylons6
                    {
                        attachment = "";
                    };

                    class Pylons7 : Pylons7
                    {
                        attachment = "OPT_PylonRack_1Rnd_AAA_missiles";
                    };
                };
            };
        };
    };

    class Plane_CAS_01_base_F : Plane_Base_F
    {
    };

    class Plane_CAS_01_dynamicLoadout_base_F : Plane_CAS_01_base_F
    {
    };

    class B_Plane_CAS_01_dynamicLoadout_F : Plane_CAS_01_dynamicLoadout_base_F
    {
        class pilotCamera;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
        class AnimationSources;
        class Components;
        class SensorsManagerComponent;
        class AntiRadiationSensorComponent;
        class TransportPylonsComponent;
        class Pylons;
        class Pylons1;
        class Pylons2;
        class Pylons3;
        class Pylons4;
        class Pylons5;
        class Pylons6;
        class Pylons7;
        class Pylons8;
        class Pylons9;
        class Pylons10;
    };

    //// A-164 Wipeout (CAS) ////
    class OPT_B_Plane_CAS_01_F : B_Plane_CAS_01_dynamicLoadout_F
    {
        faction = "OPT_NATO";
        displayName = "A-164 Wipeout";
        weapons[] = {"OPT_Cannon_30mm_Plane_CAS_02_F", "OPT_CMFlareLauncher"};
        magazines[] = {"OPT_500Rnd_Cannon_30mm_Plane_CAS_02_F", "OPT_30Rnd_CMFlare_Chaff_Magazine"};
        fuelCapacity = 150; // 1000 //

        class Components : Components
        {
            //#include "\opt_vehicles\aktivradar.hpp"

            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class Pylons1 : Pylons1
                    {
                        attachment = "";
                    };

                    class Pylons2 : Pylons2
                    {
                        attachment = "";
                    };

                    class Pylons3 : Pylons3
                    {
                        attachment = "";
                    };

                    class Pylons4 : Pylons4
                    {
                        attachment = "";
                    };

                    class Pylons5 : Pylons5
                    {
                        attachment = "";
                    };

                    class Pylons6 : Pylons6
                    {
                        attachment = "";
                    };

                    class Pylons7 : Pylons7
                    {
                        attachment = "";
                    };

                    class Pylons8 : Pylons8
                    {
                        attachment = "";
                    };

                    class Pylons9 : Pylons9
                    {
                        attachment = "";
                    };

                    class Pylons10 : Pylons10
                    {
                        attachment = "";
                    };
                };
            };
        };

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_B
            {
                name = "H_PilotHelmetFighter_B";
                count = 1;
            };
        };

        class pilotCamera : pilotCamera
        {
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

        class AnimationSources : AnimationSources
        {
            class Gatling_30mm_ammorandom
            {
                source = "ammorandom";
                weapon = "OPT_Gatling_30mm_Plane_CAS_01_F";
            };

            class Gatling_30mm_reload
            {
                source = "reload";
                weapon = "OPT_Gatling_30mm_Plane_CAS_01_F";
            };

            class Gatling_30mm_revolving
            {
                source = "revolving";
                weapon = "OPT_Gatling_30mm_Plane_CAS_01_F";
            };
        };
    };

    class Plane_Fighter_01_Base_F : Plane_Base_F
    {
    };

    class B_Plane_Fighter_01_F : Plane_Fighter_01_Base_F
    {
        class Components;
        class TransportPylonsComponent;
        class Pylons;
        class Pylon1;
        class Pylon2;
        class Pylon3;
        class Pylon4;
        class pylonBayCenter1;
        class pylonBayCenter2;
        class pylonBayCenter3;
        class pylonBayCenter4;
        class pylonBayCenter5;
        class pylonBayCenter6;
        class pylonBayLeft1;
        class pylonBayRight1;
        class pilotCamera;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
    };

    class OPT_B_Plane_Fighter_01_F : B_Plane_Fighter_01_F
    {
        faction = "OPT_NATO";
        displayName = "F/A-181 Black Wasp II";
        weapons[] = {"OPT_weapon_Fighter_Gun20mm_AA", "Laserdesignator_pilotCamera", "CMFlareLauncher_Singles"};
        magazines[] = {"OPT_magazine_Fighter01_Gun20mm_AA_x450", "Laserbatteries", "60Rnd_CMFlare_Chaff_Magazine"};
        fuelCapacity = 500; //1550 //
        hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_Camo_co.paa", "a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_Camo_co.paa", "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa", "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa", "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa", "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa", "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"};
        disableInventory = 0;

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class Pylon1 : Pylon1
                    {
                        attachment = "OPT_PylonRack_Missile_BIM9X_x2";
                    };

                    class Pylon2 : Pylon2
                    {
                        attachment = "OPT_PylonRack_Missile_BIM9X_x2";
                    };

                    class Pylon3 : Pylon3
                    {
                        attachment = "OPT_PylonRack_Missile_AGM_02_x2";
                    };

                    class Pylon4 : Pylon4
                    {
                        attachment = "OPT_PylonRack_Missile_AGM_02_x2";
                    };

                    class pylonBayCenter1 : pylonBayCenter1
                    {
                        attachment = "OPT_PylonMissile_Missile_AMRAAM_D_INT_x1";
                    };

                    class pylonBayCenter2 : pylonBayCenter2
                    {
                        attachment = "OPT_PylonMissile_Missile_AMRAAM_D_INT_x1";
                    };

                    class pylonBayCenter3 : pylonBayCenter3
                    {
                        attachment = "OPT_PylonMissile_Missile_AMRAAM_D_INT_x1";
                    };

                    class pylonBayCenter4 : pylonBayCenter4
                    {
                        attachment = "OPT_PylonMissile_Missile_AMRAAM_D_INT_x1";
                    };

                    class pylonBayCenter5 : pylonBayCenter5
                    {
                        attachment = "OPT_PylonMissile_Bomb_GBU12_x1";
                    };

                    class pylonBayCenter6 : pylonBayCenter6
                    {
                        attachment = "";
                    };

                    class pylonBayLeft1 : pylonBayLeft1
                    {
                        attachment = "";
                    };

                    class pylonBayRight1 : pylonBayRight1
                    {
                        attachment = "";
                    };
                };
            };
        };

        class pilotCamera : pilotCamera
        {
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

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_B
            {
                name = "H_PilotHelmetFighter_B";
                count = 1;
            };
        };
    };

    class OPT_B_Plane_Fighter_AA_01_F : OPT_B_Plane_Fighter_01_F
    {
        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class Pylon1 : Pylon1
                    {
                        attachment = "OPT_PylonMissile_Missile_BIM9X_x1";
                    };

                    class Pylon2 : Pylon2
                    {
                        attachment = "OPT_PylonMissile_Missile_BIM9X_x1";
                    };

                    class Pylon3 : Pylon3
                    {
                        attachment = "OPT_PylonMissile_Missile_AMRAAM_D_INT_x1";
                    };

                    class Pylon4 : Pylon4
                    {
                        attachment = "OPT_PylonMissile_Missile_AMRAAM_D_INT_x1";
                    };

                    class pylonBayCenter1 : pylonBayCenter1
                    {
                        attachment = "OPT_PylonMissile_Missile_BIM9X_x1";
                    };

                    class pylonBayCenter2 : pylonBayCenter2
                    {
                        attachment = "OPT_PylonMissile_Missile_BIM9X_x1";
                    };

                    class pylonBayCenter3 : pylonBayCenter3
                    {
                        attachment = "OPT_PylonMissile_Missile_BIM9X_x1";
                    };

                    class pylonBayCenter4 : pylonBayCenter4
                    {
                        attachment = "OPT_PylonMissile_Missile_BIM9X_x1";
                    };

                    class pylonBayCenter5 : pylonBayCenter5
                    {
                        attachment = "";
                    };

                    class pylonBayCenter6 : pylonBayCenter6
                    {
                        attachment = "";
                    };

                    class pylonBayLeft1 : pylonBayLeft1
                    {
                        attachment = "";
                    };

                    class pylonBayRight1 : pylonBayRight1
                    {
                        attachment = "";
                    };
                };
            };
        };
    };

    class B_Plane_Fighter_01_Stealth_F : Plane_Fighter_01_Base_F
    {
        class Components;
        class TransportPylonsComponent;
        class Pylons;
        class pylonBayCenter1;
        class pylonBayCenter2;
        class pylonBayCenter3;
        class pylonBayCenter4;
        class pylonBayCenter5;
        class pylonBayCenter6;
        class pylonBayLeft1;
        class pylonBayRight1;
        class pilotCamera;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
    };

    class OPT_B_Plane_Fighter_01_Stealth_F : B_Plane_Fighter_01_Stealth_F
    {
        faction = "OPT_NATO";
        displayName = "F/A-181 Black Wasp II (Tarn)";
        weapons[] = {"OPT_weapon_Fighter_Gun20mm_AA", "OPT_CMFlareLauncher"};
        magazines[] = {"OPT_magazine_Fighter01_Gun20mm_AA_x450", "OPT_30Rnd_CMFlare_Chaff_Magazine"};
        fuelCapacity = 150; //1550 //
        //hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_Camo_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_Camo_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"};
        disableInventory = 0;

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class pylonBayCenter1 : pylonBayCenter1
                    {
                        attachment = "";
                    };

                    class pylonBayCenter2 : pylonBayCenter2
                    {
                        attachment = "";
                    };

                    class pylonBayCenter3 : pylonBayCenter3
                    {
                        attachment = "";
                    };

                    class pylonBayCenter4 : pylonBayCenter4
                    {
                        attachment = "";
                    };

                    class pylonBayCenter5 : pylonBayCenter5
                    {
                        attachment = "";
                    };

                    class pylonBayCenter6 : pylonBayCenter6
                    {
                        attachment = "";
                    };

                    class pylonBayLeft1 : pylonBayLeft1
                    {
                        attachment = "";
                    };

                    class pylonBayRight1 : pylonBayRight1
                    {
                        attachment = "";
                    };
                };
            };
        };

        class pilotCamera : pilotCamera
        {
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

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_B
            {
                name = "H_PilotHelmetFighter_B";
                count = 1;
            };
        };
    };

    class OPT_O_Plane_Fighter_01_Stealth_F : B_Plane_Fighter_01_Stealth_F
    {
        faction = "OPT_CSAT";
        side = 0;
        crew = "OPT_CSAT_Pilot";
        typicalCargo[] = {"OPT_CSAT_Pilot"};
        displayName = "F/A-181 Black Wasp II (Tarn)";
        weapons[] = {"OPT_weapon_Fighter_Gun20mm_AA", "OPT_CMFlareLauncher"};
        magazines[] = {"OPT_magazine_Fighter01_Gun20mm_AA_x450", "OPT_30Rnd_CMFlare_Chaff_Magazine"};
        fuelCapacity = 150; //1550 //

        hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
        hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
        disableInventory = 0;
        textureList[] = {"DarkGrey",0,"DarkGreyCamo",1};

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class pylonBayCenter1 : pylonBayCenter1
                    {
                        attachment = "";
                    };

                    class pylonBayCenter2 : pylonBayCenter2
                    {
                        attachment = "";
                    };

                    class pylonBayCenter3 : pylonBayCenter3
                    {
                        attachment = "";
                    };

                    class pylonBayCenter4 : pylonBayCenter4
                    {
                        attachment = "";
                    };

                    class pylonBayCenter5 : pylonBayCenter5
                    {
                        attachment = "";
                    };

                    class pylonBayCenter6 : pylonBayCenter6
                    {
                        attachment = "";
                    };

                    class pylonBayLeft1 : pylonBayLeft1
                    {
                        attachment = "";
                    };

                    class pylonBayRight1 : pylonBayRight1
                    {
                        attachment = "";
                    };
                };
            };
        };

        class pilotCamera : pilotCamera
        {
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

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_B
            {
                name = "H_PilotHelmetFighter_B";
                count = 1;
            };
        };
    };

    class Plane_CAS_02_base_F : Plane_Base_F
    {
    };

    class Plane_CAS_02_dynamicLoadout_base_F : Plane_CAS_02_base_F
    {
    };

    class O_Plane_CAS_02_dynamicLoadout_F : Plane_CAS_02_dynamicLoadout_base_F
    {
        class pilotCamera;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
        class AnimationSources;
        class Components;
        class SensorsManagerComponent;
        class ActiveRadarSensorComponent;
        class TransportPylonsComponent;
        class Pylons;
        class Pylons1;
        class Pylons2;
        class Pylons3;
        class Pylons4;
        class Pylons5;
        class Pylons6;
        class Pylons7;
        class Pylons8;
        class Pylons9;
        class Pylons10;
    };

    //// To-199 Neophron (CAS) ////
    class OPT_O_Plane_CAS_02_F : O_Plane_CAS_02_dynamicLoadout_F
    {
        faction = "OPT_Sowjet";
        displayName = "To-199 Neophron";
        weapons[] = {"OPT_CMFlareLauncher"};
        magazines[] = {"OPT_30Rnd_CMFlare_Chaff_Magazine"};
        fuelCapacity = 150; // 1000 //
        hiddenSelectionsTextures[]= {"\opt\opt_client\addons\vehicles\textures\Neophon\opt_neophon_rus_1.paa","\opt\opt_client\addons\vehicles\textures\Neophon\opt_neophon_rus_2.paa"};
        //editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_hunter_hmg_fin.jpg";

        class Components : Components
        {

            class TransportPylonsComponent : TransportPylonsComponent
            {
                class Pylons : Pylons
                {
                    class Pylons1 : Pylons1
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_HE_F";
                    };

                    class Pylons2 : Pylons2
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_HE_F";
                    };

                    class Pylons3 : Pylons3
                    {
                        attachment = "";
                    };

                    class Pylons4 : Pylons4
                    {
                        attachment = "";
                    };

                    class Pylons5 : Pylons5
                    {
                        attachment = "OPT_PylonWeapon_25Rnd_20mm_shells";
                    };

                    class Pylons6 : Pylons6
                    {
                        attachment = "OPT_PylonWeapon_25Rnd_20mm_shells";
                    };

                    class Pylons7 : Pylons7
                    {
                        attachment = "";
                    };

                    class Pylons8 : Pylons8
                    {
                        attachment = "";
                    };

                    class Pylons9 : Pylons9
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_AP_F";
                    };

                    class Pylons10 : Pylons10
                    {
                        attachment = "OPT_PylonRack_7Rnd_Rocket_04_AP_F";
                    };
                };
            };

            class SensorsManagerComponent 
            {
                class Components 
                {                   
                    class PassiveRadarSensorComponent
                    {
                        aimDown = 0;
                        class AirTarget 
                        {
                            maxRange = 16000;
                            minRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        allowsMarking = 0;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 360;
                        animDirection = "";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "PassiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        class GroundTarget 
                        {
                            maxRange = 16000;
                            minRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };                  
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+10;
                        maxTrackableSpeed = 1e+10;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+10;
                        minTrackableSpeed = -1e+10;
                        typeRecognitionDistance = 12000;
                    };
                    class VisualSensorComponent
                    {
                        aimdown = -0.25;
                        class AirTarget 
                        {
                            maxRange = 2000;
                            minRange = 500;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        allowsMarking = 1;
                        angleRangeHorizontal = 46;
                        angleRangeVertical = 34;
                        animDirection = "mainGun";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "VisualSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        class GroundTarget 
                        {
                            maxRange = 1500;
                            minRange = 500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxFogSeeThrough = 0.94;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+10;
                        maxTrackableSpeed = 70;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+10;
                        minTrackableSpeed = -1e+10;
                        nightRangeCoef = 0;
                        typeRecognitionDistance = 2000;
                    };
                };
            };
        };

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_O
            {
                name = "H_PilotHelmetFighter_O";
                count = 0;
            };
        };

        class pilotCamera : pilotCamera
        {
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

        class AnimationSources : AnimationSources
        {
            class Muzzle_flash
            {
                source = "ammorandom";
                weapon = "OPT_Twin_Cannon_20mm";
            };
        };
    };

    class OPT_B_Plane_CAS_02_F : OPT_O_Plane_CAS_02_F
    {
        faction = "OPT_FIN";
        side = 1;
        crew = "OPT_NATO_Pilot";
        hiddenSelectionsTextures[]= {"\opt\opt_client\addons\vehicles\textures\Neophon\opt_neophon_fin_1.paa","\opt\opt_client\addons\vehicles\textures\Neophon\opt_neophon_fin_2.paa"};
        typicalCargo[] = {"OPT_NATO_Pilot"};
        //editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_hunter_hmg_fin.jpg";
    };

    class Plane_Fighter_02_Base_F : Plane_Base_F
    {
    };

    class O_Plane_Fighter_02_F : Plane_Fighter_02_Base_F
    {
        class Components;
        class TransportPylonsComponent;
        class pylons;
        class pylonBayCenter1;
        class pylonBayCenter2;
        class pylonBayCenter3;
        class pylonBayLeft1;
        class pylonBayLeft2;
        class pylonBayRight1;
        class pylonBayRight2;
        class pylons1;
        class pylons2;
        class pylons3;
        class pylons4;
        class pylons5;
        class pylons6;
        class pilotCamera;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
    };

    class OPT_O_Plane_Fighter_02_F : O_Plane_Fighter_02_F
    {
        faction = "OPT_CSAT";
        displayName = "To-201 Shikra";
        fuelCapacity = 500; //2540 //
        weapons[] = {"OPT_weapon_Fighter_Gun_30mm", "Laserdesignator_pilotCamera", "OPT_CMFlareLauncher"};
        magazines[] = {"OPT_magazine_Fighter02_Gun30mm_AA_x180", "Laserbatteries", "60Rnd_CMFlare_Chaff_Magazine"};
        //hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa","a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Blue_co.paa","a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
        disableInventory = 0;

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class pylons : pylons
                {
                    class pylonBayCenter1 : pylonBayCenter1
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R77_INT_x1";
                    };

                    class pylonBayCenter2 : pylonBayCenter2
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R77_INT_x1";
                    };

                    class pylonBayCenter3 : pylonBayCenter3
                    {
                        attachment = "OPT_PylonMissile_Bomb_KAB250_x1";
                    };

                    class pylonBayLeft1 : pylonBayLeft1
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylonBayLeft2 : pylonBayLeft2
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R77_x1";
                    };

                    class pylonBayRight1 : pylonBayRight1
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylonBayRight2 : pylonBayRight2
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R77_x1";
                    };

                    class pylons1 : pylons1
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylons2 : pylons2
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylons3 : pylons3
                    {
                        attachment = "OPT_PylonMissile_Missile_AGM_KH25_x1";
                    };

                    class pylons4 : pylons4
                    {
                        attachment = "OPT_PylonMissile_Missile_AGM_KH25_x1";
                    };

                    class pylons5 : pylons5
                    {
                        attachment = "OPT_PylonMissile_Missile_AGM_KH25_x1";
                    };

                    class pylons6 : pylons6
                    {
                        attachment = "OPT_PylonMissile_Missile_AGM_KH25_x1";
                    };
                };
            };
        };

        class pilotCamera : pilotCamera
        {
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

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_O
            {
                name = "H_PilotHelmetFighter_O";
                count = 1;
            };
        };
    };

    class OPT_O_Plane_Fighter_AA_02_F : OPT_O_Plane_Fighter_02_F
    {
        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class pylons : pylons
                {
                    class pylonBayCenter1 : pylonBayCenter1
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R77_INT_x1";
                    };

                    class pylonBayCenter2 : pylonBayCenter2
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R77_INT_x1";
                    };

                    class pylonBayCenter3 : pylonBayCenter3
                    {
                        attachment = "";
                    };

                    class pylonBayLeft1 : pylonBayLeft1
                    {
                        attachment = "";
                    };

                    class pylonBayLeft2 : pylonBayLeft2
                    {
                        attachment = "";
                    };

                    class pylonBayRight1 : pylonBayRight1
                    {
                        attachment = "";
                    };

                    class pylonBayRight2 : pylonBayRight2
                    {
                        attachment = "";
                    };

                    class pylons1 : pylons1
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylons2 : pylons2
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylons3 : pylons3
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylons4 : pylons4
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylons5 : pylons5
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };

                    class pylons6 : pylons6
                    {
                        attachment = "OPT_PylonMissile_Missile_AA_R73_x1";
                    };
                };
            };
        };
    };

    class O_Plane_Fighter_02_Stealth_F : Plane_Fighter_02_Base_F
    {
        class Components;
        class TransportPylonsComponent;
        class pylons;
        class pylonBayCenter1;
        class pylonBayCenter2;
        class pylonBayCenter3;
        class pylonBayLeft1;
        class pylonBayLeft2;
        class pylonBayRight1;
        class pylonBayRight2;
        class pilotCamera;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
    };

    class OPT_O_Plane_Fighter_02_Stealth_F : O_Plane_Fighter_02_Stealth_F
    {
        faction = "OPT_CSAT";
        displayName = "To-201 Shikra (Tarn)";
        fuelCapacity = 150; //2540 //
        weapons[] = {"OPT_weapon_Fighter_Gun20mm_AA", "OPT_CMFlareLauncher"};
        magazines[] = {"OPT_magazine_Fighter01_Gun20mm_AA_x450",  "OPT_30Rnd_CMFlare_Chaff_Magazine"};
        //hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa", "a3\data_f\clear_empty.paa"};
        disableInventory = 0;

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class pylons : pylons
                {
                    class pylonBayCenter1 : pylonBayCenter1
                    {
                        attachment = "";
                    };

                    class pylonBayCenter2 : pylonBayCenter2
                    {
                        attachment = "";
                    };

                    class pylonBayCenter3 : pylonBayCenter3
                    {
                        attachment = "";
                    };

                    class pylonBayLeft1 : pylonBayLeft1
                    {
                        attachment = "";
                    };

                    class pylonBayLeft2 : pylonBayLeft2
                    {
                        attachment = "";
                    };

                    class pylonBayRight1 : pylonBayRight1
                    {
                        attachment = "";
                    };

                    class pylonBayRight2 : pylonBayRight2
                    {
                        attachment = "";
                    };
                };
            };
        };

        class pilotCamera : pilotCamera
        {
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

        class TransportItems
        {
            class _xx_H_PilotHelmetFighter_O
            {
                name = "H_PilotHelmetFighter_O";
                count = 1;
            };
        };
    };
     
};

