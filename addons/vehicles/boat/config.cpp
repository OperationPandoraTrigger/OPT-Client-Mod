class CfgPatches
{
    class opt_vehicles_boat
    {
        units[] = {"OPT_B_Boat_Armed_01_minigun_F", "OPT_O_Boat_Armed_01_hmg_F", "OPT_B_Boat_Transport_01_F", "OPT_O_Boat_Transport_01_F","OPT_I_Boat_Armed_01_minigun_F","OPT_I_Boat_Transport_01_F","OPT_I_C_Boat_Transport_02_F", "OPT_B_SDV_01_F", "OPT_O_SDV_01_F","OPT_I_SDV_01_F"};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_boat_f_boat_armed_01", "a3_boat_f_civilian_boat", "a3_boat_f_boat_transport_01", "a3_boat_f_gamma_boat_transport_01"};
    };
};

class CfgVehicles
{
    class Logic;

    class OPT_Vehicles_require : Logic
    {
        displayName = "Benoetigt OPT Vehicles";
        vehicleClass = "Modules";
    };

    class Boat_F;

    class Boat_Armed_01_base_F : Boat_F
    {
    };

    class Boat_Armed_01_minigun_base_F : Boat_Armed_01_base_F
    {
    };

    class B_Boat_Armed_01_minigun_F : Boat_Armed_01_minigun_base_F
    {
        class RenderTargets;
        class driver_display_1;
        class CameraView1;
        class Gunner_1;
        class Gunner_TV;
        class Turrets;
        class FrontTurret;
        class RearTurret;
        class ViewOptics;
        class ViewGunner;
    };

    //// Speedboat Minigun ////
    class OPT_B_Boat_Armed_01_minigun_F : B_Boat_Armed_01_minigun_F
    {
        faction = "OPT_BLUFOR";

        class TransportItems
        {
        };

        class RenderTargets : RenderTargets
        {
            class driver_display_1 : driver_display_1
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };

            class Gunner_1 : Gunner_1
            {
                renderTarget = "rendertarget3";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class Gunner_TV : Gunner_TV
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };
        };

        class Turrets : Turrets
        {
            class FrontTurret : FrontTurret
            {
                weapons[] = {"GMG_40mm"};
                magazines[] = {"96Rnd_40mm_G_belt"};

                class ViewOptics : ViewOptics
                {
                    visionmode[] = {"Normal", "NVG"};
                };

                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };

            class RearTurret : RearTurret
            {
            };
        };
    };

    class O_Boat_Armed_01_hmg_F : Boat_Armed_01_base_F
    {
        class RenderTargets;
        class driver_display_1;
        class CameraView1;
        class Gunner_1;
        class Gunner_TV;
        class Turrets;
        class FrontTurret;
        class ViewOptics;
        class ViewGunner;
        class RearTurret;
    };

    //// Speedboat HMG ////
    class OPT_O_Boat_Armed_01_hmg_F : O_Boat_Armed_01_hmg_F
    {
        faction = "OPT_OPFOR";

        class TransportItems
        {
        };

        class RenderTargets : RenderTargets
        {
            class driver_display_1 : driver_display_1
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };

            class Gunner_1 : Gunner_1
            {
                renderTarget = "rendertarget3";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class Gunner_TV : Gunner_TV
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };
        };

        class Turrets : Turrets
        {
            class FrontTurret : FrontTurret
            {
                weapons[] = {"GMG_40mm"};
                magazines[] = {"96Rnd_40mm_G_belt"};

                class ViewOptics : ViewOptics
                {
                    visionmode[] = {"Normal", "NVG"};
                };

                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };

            class RearTurret : RearTurret
            {
                magazines[] = {"200Rnd_127x99_mag_Tracer_Green", "200Rnd_127x99_mag_Tracer_Green"};

                class ViewOptics : ViewOptics
                {
                    visionmode[] = {"Normal", "NVG"};
                };

                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class I_Boat_Armed_01_minigun_F : Boat_Armed_01_minigun_base_F
    {
        class RenderTargets;
        class driver_display_1;
        class CameraView1;
        class Gunner_1;
        class Gunner_TV;
        class Turrets;
        class FrontTurret;
        class RearTurret;
        class ViewOptics;
        class ViewGunner;
    };

    //// Speedboat Minigun ////
    class OPT_I_Boat_Armed_01_minigun_F : I_Boat_Armed_01_minigun_F
    {
        faction = "OPT_AAF";

        class TransportItems
        {
        };

        class RenderTargets : RenderTargets
        {
            class driver_display_1 : driver_display_1
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };

            class Gunner_1 : Gunner_1
            {
                renderTarget = "rendertarget3";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class Gunner_TV : Gunner_TV
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };
        };

        class Turrets : Turrets
        {
            class FrontTurret : FrontTurret
            {
                weapons[] = {"GMG_40mm"};
                magazines[] = {"96Rnd_40mm_G_belt"};

                class ViewOptics : ViewOptics
                {
                    visionmode[] = {"Normal", "NVG"};
                };

                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };

            class RearTurret : RearTurret
            {
            };
        };
    };

    class Rubber_duck_base_F : Boat_F
    {
    };

    class B_Boat_Transport_01_F : Rubber_duck_base_F
    {
    };

    //// Assault Boat ////
    class OPT_B_Boat_Transport_01_F : B_Boat_Transport_01_F
    {
        faction = "OPT_BLUFOR";

        class TransportItems
        {
        };
    };

    class O_Boat_Transport_01_F : Rubber_duck_base_F
    {
    };

    class OPT_O_Boat_Transport_01_F : O_Boat_Transport_01_F
    {
        faction = "OPT_OPFOR";

        class TransportItems
        {
        };
    };

    class I_Boat_Transport_01_F : Rubber_duck_base_F
    {
    };

    class OPT_I_Boat_Transport_01_F : I_Boat_Transport_01_F
    {
        faction = "OPT_AAF";

        class TransportItems
        {
        };
    };


    class Boat_Transport_02_base_F : Boat_F
    {
    };

    class I_C_Boat_Transport_02_F : Boat_Transport_02_base_F
    {
    };

    class OPT_B_C_Boat_Transport_02_F : I_C_Boat_Transport_02_F
    {
        _generalMacro = "B_C_Boat_Transport_02_F";
        faction = "OPT_BLUFOR";
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\rhib\nato\rhib_nato_0.paa", "\opt\opt_client\addons\vehicles\textures\rhib\nato\rhib_nato_1.paa"};
        textureList[] = {};
        side = 1;
        crew = "B_T_Soldier_F";
        typicalCargo[] = {"B_T_Soldier_F", "B_T_Soldier_F"};
        maximumLoad = 2500;

        class TransportItems
        {
        };
    };

    class OPT_O_C_Boat_Transport_02_F : I_C_Boat_Transport_02_F
    {
        _generalMacro = "O_C_Boat_Transport_02_F";
        faction = "OPT_OPFOR";
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\rhib\csat\rhib_csat_0.paa", "\opt\opt_client\addons\vehicles\textures\rhib\csat\rhib_csat_1.paa"};
        textureList[] = {};
        side = 0;
        crew = "O_T_Soldier_F";
        typicalCargo[] = {"O_T_Soldier_F", "O_T_Soldier_F"};

        class TransportItems
        {
        };
    };

    class OPT_I_C_Boat_Transport_02_F : I_C_Boat_Transport_02_F
    {
        faction = "OPT_AAF";

        class TransportItems
        {
        };
    };


    class SDV_01_base_F : Boat_F
    {
    };

    class B_SDV_01_F : SDV_01_base_F
    {
        class Turrets;
        class CommanderTurret;
        class ViewGunner;
        class ViewOptics;
    };

    class OPT_B_SDV_01_F : B_SDV_01_F
    {
        faction = "OPT_BLUFOR";
        maximumLoad = 800;

        class TransportItems
        {
        };

        class Turrets : Turrets
        {
            class CommanderTurret : CommanderTurret
            {
                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class O_SDV_01_F : SDV_01_base_F
    {
        class Turrets;
        class CommanderTurret;
        class ViewGunner;
        class ViewOptics;
    };

    class OPT_O_SDV_01_F : O_SDV_01_F
    {
        faction = "OPT_OPFOR";

        class TransportItems
        {
        };

        class Turrets : Turrets
        {
            class CommanderTurret : CommanderTurret
            {
                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class I_SDV_01_F : SDV_01_base_F
    {
        class Turrets;
        class CommanderTurret;
        class ViewGunner;
        class ViewOptics;
    };

    class OPT_I_SDV_01_F : I_SDV_01_F
    {
        faction = "OPT_AAF";

        class TransportItems
        {
        };

        class Turrets : Turrets
        {
            class CommanderTurret : CommanderTurret
            {
                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class rksla3_lcvpmk5_base;

    class rksla3_lcvpmk5_1 : rksla3_lcvpmk5_base
    {
        class RenderTargets;
        class Monitor_1;
        class CameraView1;
        class Monitor_4;
        class Gunner_TV;
        class Turrets;
        class FrontTurret;
        class RearTurret;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class CmdrTurret;
        class NewTurret;
    };

    class rksla3_lcvpmk5_1_opfor_camo : rksla3_lcvpmk5_1
    {
    };

    //// Landungsboot LCVP MK5  ////
    class OPT_rksla3_lcvpmk5_viv : rksla3_lcvpmk5_1
    {
        faction = "OPT_BLUFOR";
        maxSpeed = 96;
        enginePower = 1500; //800
        idleRpm = 500; // 550
        redRpm = 2000; // 2200
        transportSoldier = 10; // 2 //
        rudderForceCoefAtMaxSpeed = 0.005;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\LCVP\rksl_lcvp_blufor_0.paa", "\opt\opt_client\addons\vehicles\textures\LCVP\rksl_lcvp_blufor_1.paa","\rksla3\rksla3-ship-lcvp\data\rksl_lcvp_cabin_co.paa","\opt\opt_client\addons\vehicles\textures\LCVP\Logo_opt_3.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\OPT_rksla3_lcvpmk5_viv.jpg";
      
        class TransportItems
        {
        };

        class RenderTargets : RenderTargets
        {
            class Monitor_1 : Monitor_1
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };

            class Monitor_4 : Monitor_4
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };
        };

        class Components
        {
        };    

        class Turrets
        {
        };
        
    };

    //// Landungsboot LCVP MK5  ////
    class OPT_rksla3_lcvpmk5_viv_opfor_camo : rksla3_lcvpmk5_1_opfor_camo
    {
        faction = "OPT_OPFOR";
        maxSpeed = 96;
        enginePower = 1500; //800
        idleRpm = 500; // 550
        redRpm = 2000; // 2200
        transportSoldier = 10; // 2 //
        rudderForceCoefAtMaxSpeed = 0.005;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\LCVP\rksl_lcvp_opfor_0.paa", "\opt\opt_client\addons\vehicles\textures\LCVP\rksl_lcvp_opfor_1.paa","\rksla3\rksla3-ship-lcvp\data\rksl_lcvp_cabin_co.paa","\opt\opt_client\addons\vehicles\textures\LCVP\Logo_opt_3.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\OPT_rksla3_lcvpmk5_viv_opfor_camo.jpg";

        class TransportItems
        {
        };

        class RenderTargets : RenderTargets
        {
            class Monitor_1 : Monitor_1
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 1;
                };
            };

            class Monitor_4 : Monitor_4
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };
        };

        class Components
        {
        };

        class Turrets
        {
        };     
    };
};
