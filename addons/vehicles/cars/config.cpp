class CfgPatches
{
    class opt_vehicles_cars
    {
        units[] = {"OPT_B_MRAP_01_F","OPT_B_MRAP_01_ghex_F", "OPT_B_MRAP_01_gmg_F","OPT_B_MRAP_01_gmg_ghex_F", "OPT_B_MRAP_01_hmg_F","OPT_B_MRAP_01_hmg_ghex_F", "OPT_O_MRAP_02_F", "OPT_O_T_MRAP_02_ghex_F", "OPT_O_MRAP_02_hmg_F", "OPT_O_T_MRAP_02_hmg_ghex_F",
                   "OPT_O_MRAP_02_gmg_F", "OPT_O_T_MRAP_02_gmg_ghex_F", "OPT_B_MRAP_03_F", "OPT_B_MRAP_03_hmg_F", "OPT_B_MRAP_03_gmg_F", "OPT_B_T_LSV_01_unarmed_F","OPT_B_T_LSV_01_unarmed_ghex_F", "OPT_B_T_LSV_01_armed_F","OPT_B_T_LSV_01_armed_ghex_F",
                   "OPT_O_T_LSV_02_unarmed_F","OPT_O_T_LSV_02_unarmed_ghex_F", "OPT_O_T_LSV_02_armed_F","OPT_O_T_LSV_02_armed_ghex_F","OPT_O_LSV_02_AT_F", "OPT_B_Quadbike_01_F","OPT_I_Quadbike_01_F", "OPT_O_Quadbike_01_F", "OPT_O_T_Quadbike_01_ghex_F", "OPT_B_G_Offroad_01_F","OPT_B_G_Offroad_01_ghex_F",
                   "OPT_O_G_Offroad_01_F","OPT_O_G_Offroad_01_ghex_F", "OPT_B_G_Offroad_01_armed_F","OPT_B_G_Offroad_01_armed_ghex_F", "OPT_O_G_Offroad_01_armed_F","OPT_I_C_Offroad_02_unarmed_F","OPT_I_C_Offroad_02_LMG_F","OPT_I_C_Offroad_02_AT_F", "OPT_B_UGV_01_F","OPT_B_UGV_01_ghex_F", "OPT_O_UGV_01_F", "OPT_O_T_UGV_01_ghex_F","OPT_I_UGV_01_F"};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_soft_f", "a3_soft_f_mrap_01", "a3_soft_f_mrap_02", "a3_soft_f_mrap_03",
                            "a3_soft_f_gamma_offroad", "a3_soft_f_gamma_quadbike", "a3_soft_f_car", "a3_soft_f_offroad_01", "a3_soft_f_quadbike",
                            "a3_soft_f_beta_quadbike", "a3_soft_f_suv",
                            "a3_soft_f_bootcamp_offroad_01", "A3_Soft_F_Exp", "A3_Soft_F_Exp_LSV_01", "A3_Soft_F_Exp_LSV_02",
                            "A3_Soft_F_Exp_MRAP_02"};
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

    class Car : LandVehicle
    {
        class ACE_SelfActions;
    };

    class Car_F : Car
    {
        TFAR_hasIntercom = 1;

        class ACE_SelfActions : ACE_SelfActions 
        {
            class TFAR_IntercomChannel 
            {
                displayName = "$STR_tfar_core_Intercom_ACESelfAction_Name";
                condition = "true";
                statement = "";
                icon = "";
                
                class TFAR_IntercomChannel_disabled 
                {
                    displayName = "Disabled";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                
                class TFAR_IntercomChannel_1 
                {
                    displayName = "$STR_tfar_core_Intercom_ACESelfAction_Channel1";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                
                class TFAR_IntercomChannel_2 
                {
                    displayName = "$STR_tfar_core_Intercom_ACESelfAction_Channel2";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                
                class TFAR_IntercomChannel_Misc_1 
                {
                    displayName = "Misc channel 1";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                
                class TFAR_IntercomChannel_Misc_2 
                {
                    displayName = "Misc channel 2";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                
                class TFAR_IntercomChannel_Misc_3 
                {
                    displayName = "Misc channel 3";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };

    class MRAP_01_base_F : Car_F
    {
    };

    class MRAP_01_gmg_base_F : MRAP_01_base_F
    {
    };

    class MRAP_01_hmg_base_F : MRAP_01_gmg_base_F
    {
    };

    class B_MRAP_01_F : MRAP_01_base_F
    {
    };

    //// Hunter ////
    class OPT_B_MRAP_01_F : B_MRAP_01_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4; // 94 //

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

    class B_T_MRAP_01_F : MRAP_01_base_F
    {
    };

    class OPT_B_MRAP_01_ghex_F : B_T_MRAP_01_F 
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4;                     // 94 //

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

    class B_MRAP_01_gmg_F : MRAP_01_gmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Driver_display;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Right;
    };

    //// Hunter GMG ////
    class OPT_B_MRAP_01_gmg_F : B_MRAP_01_gmg_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4;                     // 94 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
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

        class RenderTargets : RenderTargets
        {
            class Driver_display : Driver_display
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                };
            };

            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
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

    class B_T_MRAP_01_gmg_F : MRAP_01_gmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Driver_display;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Right;
    };

    class OPT_B_MRAP_01_gmg_ghex_F : B_T_MRAP_01_gmg_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4;// 94 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
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

        class RenderTargets : RenderTargets
        {
            class Driver_display : Driver_display
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                };
            };

            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
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

    class B_MRAP_01_hmg_F : MRAP_01_hmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Driver_display;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Right;
    };

    //// Hunter HMG ////
    class OPT_B_MRAP_01_hmg_F : B_MRAP_01_hmg_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4;// 94 //

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"HMG_127"};
                magazines[] = {"500Rnd_127x99_mag_Tracer_Red"};

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

        class RenderTargets : RenderTargets
        {
            class Driver_display : Driver_display
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                };
            };

            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
                };
            };
        };
    };

    class B_T_MRAP_01_hmg_F : MRAP_01_hmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Driver_display;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Right;
    };

    class OPT_B_MRAP_01_hmg_ghex_F : B_T_MRAP_01_hmg_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4;// 94 //

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"HMG_127"};
                magazines[] = {"500Rnd_127x99_mag_Tracer_Red"};

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

        class RenderTargets : RenderTargets
        {
            class Driver_display : Driver_display
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                };
            };

            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
                };
            };
        };
    };

    class MRAP_02_base_F : Car_F
    {
    };

    class MRAP_02_hmg_base_F : MRAP_02_base_F
    {
    };

    class MRAP_02_gmg_base_F : MRAP_02_hmg_base_F
    {
    };

    class O_MRAP_02_F : MRAP_02_base_F
    {
    };

    //// Ifrit ////
    class OPT_O_MRAP_02_F : O_MRAP_02_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4;                     // 94 //

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

    class O_T_MRAP_02_ghex_F : MRAP_02_base_F
    {
    };

    class OPT_O_T_MRAP_02_ghex_F : O_T_MRAP_02_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4;                     // 94 //

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

    class O_MRAP_02_hmg_F : MRAP_02_hmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Left_2;
        class mirrors_Right;
        class mirrors_Right_2;
    };

    //// Ifrit HMG ////
    class OPT_O_MRAP_02_hmg_F : O_MRAP_02_hmg_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4;                     // 94 //

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"HMG_127"};
                magazines[] = {"500Rnd_127x99_mag_Tracer_Green"};

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

        class RenderTargets : RenderTargets
        {
            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Left_2 : mirrors_Left_2
            {
                renderTarget = "rendertarget6";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right_2 : mirrors_Right_2
            {
                renderTarget = "rendertarget7";

                class CameraView1 : CameraView1
                {
                };
            };
        };
    };

    class O_T_MRAP_02_hmg_ghex_F : MRAP_02_hmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Left_2;
        class mirrors_Right;
        class mirrors_Right_2;
    };

    class OPT_O_T_MRAP_02_hmg_ghex_F : O_T_MRAP_02_hmg_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4;// 94 //

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"HMG_127"};
                magazines[] = {"500Rnd_127x99_mag_Tracer_Green"};

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

        class RenderTargets : RenderTargets
        {
            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Left_2 : mirrors_Left_2
            {
                renderTarget = "rendertarget6";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right_2 : mirrors_Right_2
            {
                renderTarget = "rendertarget7";

                class CameraView1 : CameraView1
                {
                };
            };
        };
    };

    class O_MRAP_02_gmg_F : MRAP_02_gmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Left_2;
        class mirrors_Right;
        class mirrors_Right_2;
    };

    //// Ifrit GMG ////
    class OPT_O_MRAP_02_gmg_F : O_MRAP_02_gmg_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4;// 94 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
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

        class RenderTargets : RenderTargets
        {
            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Left_2 : mirrors_Left_2
            {
                renderTarget = "rendertarget6";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right_2 : mirrors_Right_2
            {
                renderTarget = "rendertarget7";

                class CameraView1 : CameraView1
                {
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

    class O_T_MRAP_02_gmg_ghex_F : MRAP_02_gmg_base_F
    {
        class Turrets;
        class MainTurret;
        class ViewOptics;
        class ViewGunner;
        class RenderTargets;
        class Gunner_display;
        class CameraView1;
        class mirrors_Left;
        class mirrors_Left_2;
        class mirrors_Right;
        class mirrors_Right_2;
    };

    class OPT_O_T_MRAP_02_gmg_ghex_F : O_T_MRAP_02_gmg_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4;                     // 94 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
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

        class RenderTargets : RenderTargets
        {
            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrors_Left : mirrors_Left
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Left_2 : mirrors_Left_2
            {
                renderTarget = "rendertarget6";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right : mirrors_Right
            {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrors_Right_2 : mirrors_Right_2
            {
                renderTarget = "rendertarget7";

                class CameraView1 : CameraView1
                {
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

    class MRAP_03_base_F : Car_F
    {
    };

    class MRAP_03_hmg_base_F : MRAP_03_base_F
    {
    };

    class MRAP_03_gmg_base_F : MRAP_03_hmg_base_F
    {
    };

    class I_MRAP_03_F : MRAP_03_base_F
    {
        class Turrets;
        class CommanderTurret;
        class RenderTargets;
        class commander_display;
        class CameraView1;
        class mirrorL;
        class mirrorR;
        class reverseCam;
        class ViewOptics;
        class ViewGunner;
    };

    //// Strider ////
    class OPT_I_MRAP_03_F : I_MRAP_03_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 4;// 94 //

        class Turrets : Turrets
        {
            class CommanderTurret : CommanderTurret
            {
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

        class RenderTargets : RenderTargets
        {
            class commander_display : commander_display
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrorL : mirrorL
            {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrorR : mirrorR
            {
                renderTarget = "rendertarget3";

                class CameraView1 : CameraView1
                {
                };
            };

            class reverseCam : reverseCam
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
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

    class OPT_B_MRAP_03_F : OPT_I_MRAP_03_F
    {
        crew = "B_Soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        side = 1;
        faction = "OPT_NATO";
        hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
    };

    class I_MRAP_03_hmg_F : MRAP_03_hmg_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderTurret;
        class RenderTargets;
        class commander_display;
        class gunner_display;
        class CameraView1;
        class mirrorL;
        class mirrorR;
        class reverseCam;
        class ViewOptics;
        class ViewGunner;
    };

    //// Strider HMG ////
    class OPT_I_MRAP_03_hmg_F : I_MRAP_03_hmg_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 4;// 94 //

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"HMG_127"};
                magazines[] = {"500Rnd_127x99_mag_Tracer_Yellow"};

                class ViewOptics : ViewOptics
                {
                    visionmode[] = {"Normal", "NVG"};
                };

                class ViewGunner : ViewGunner
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };

            class CommanderTurret : CommanderTurret
            {
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

        class RenderTargets : RenderTargets
        {
            class commander_display : commander_display
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrorL : mirrorL
            {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrorR : mirrorR
            {
                renderTarget = "rendertarget3";

                class CameraView1 : CameraView1
                {
                };
            };

            class reverseCam : reverseCam
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
                };
            };
        };
    };

    class OPT_B_MRAP_03_hmg_F : OPT_I_MRAP_03_hmg_F
    {
        side = 1;
        faction = "OPT_NATO";
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
    };

    class I_MRAP_03_gmg_F : MRAP_03_gmg_base_F
    {
        class Turrets;
        class MainTurret;
        class CommanderTurret;
        class RenderTargets;
        class commander_display;
        class gunner_display;
        class CameraView1;
        class mirrorL;
        class mirrorR;
        class reverseCam;
        class ViewOptics;
        class ViewGunner;
    };

    //// Strider GMG ////
    class OPT_I_MRAP_03_gmg_F : I_MRAP_03_gmg_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 4;                     // 94 //

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
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

            class CommanderTurret : CommanderTurret
            {
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

        class RenderTargets : RenderTargets
        {
            class commander_display : commander_display
            {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class Gunner_display : Gunner_display
            {
                renderTarget = "rendertarget1";

                class CameraView1 : CameraView1
                {
                    renderVisionMode = 0;
                };
            };

            class mirrorL : mirrorL
            {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1
                {
                };
            };

            class mirrorR : mirrorR
            {
                renderTarget = "rendertarget3";

                class CameraView1 : CameraView1
                {
                };
            };

            class reverseCam : reverseCam
            {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1
                {
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

    class OPT_B_MRAP_03_gmg_F : OPT_I_MRAP_03_gmg_F
    {
        faction = "OPT_NATO";
        side = 1;
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
    };

    //Prowler unbewaffnet
    class LSV_01_unarmed_base_F;

    class B_T_LSV_01_unarmed_F : LSV_01_unarmed_base_F
    {
    };

    class OPT_B_T_LSV_01_unarmed_F : B_T_LSV_01_unarmed_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 3; // 45 //
        textureList[] = {"Black",0,"Olive",0,"Sand",1};

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

    class OPT_B_T_LSV_01_unarmed_ghex_F : B_T_LSV_01_unarmed_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 3; // 45 //
        textureList[] = {"Black",0,"Olive",1,"Sand",0};

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

    // Prowler Bewaffnet
    class LSV_01_armed_base_F;

    class B_T_LSV_01_armed_F : LSV_01_armed_base_F
    {
    };

    class OPT_B_T_LSV_01_armed_F : B_T_LSV_01_armed_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 3; // 45 //
        textureList[] = {"Black",0,"Olive",0,"Sand",1};

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

    class OPT_B_T_LSV_01_armed_ghex_F : B_T_LSV_01_armed_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 3; // 45 //
        textureList[] = {"Black",0,"Olive",1,"Sand",0};

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

    // Prowler AT
    class LSV_01_AT_base_F;

    class B_LSV_01_AT_F : LSV_01_AT_base_F
    {
        class Turrets;
        class CargoTurret_02;
        class CargoTurret_03;
        class CodRiverTurret;
        class TopTurret;
        class ViewOptics;
    };

    class OPT_B_LSV_01_AT_F : B_LSV_01_AT_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 3; // 20 //
        textureList[] = {"Black",0,"Olive",0,"Sand",1};

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class CargoTurret_02 : CargoTurret_02
            {
            };

            class CargoTurret_03 : CargoTurret_03
            {
            };

            class CodRiverTurret : CodRiverTurret
            {
            };

            class TopTurret : TopTurret
            {
                magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
                weapons[] = {"OPT_missiles_titan_static"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class OPT_B_LSV_01_AT_ghex_F : B_LSV_01_AT_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 3; // 20 //
        textureList[] = {"Black",0,"Olive",1,"Sand",0};

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class CargoTurret_02 : CargoTurret_02
            {
            };

            class CargoTurret_03 : CargoTurret_03
            {
            };

            class CodRiverTurret : CodRiverTurret
            {
            };

            class TopTurret : TopTurret
            {
                magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
                weapons[] = {"OPT_missiles_titan_static"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    //// AAF Prowler AT 
    class OPT_I_LSV_01_AT_ghex_F : B_LSV_01_AT_F
    {
        faction = "OPT_AAF";
        side = 2;
        fuelCapacity = 3; // 20 //
        textureList[] = {"Black",0,"Olive",0,"Sand",0};

        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Prowler\opt_prowler_0_base.paa","\opt\opt_client\addons\vehicles\textures\Prowler\opt_prowler_1_ext.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"};
    
        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class CargoTurret_02 : CargoTurret_02
            {
            };

            class CargoTurret_03 : CargoTurret_03
            {
            };

            class CodRiverTurret : CodRiverTurret
            {
            };

            class TopTurret : TopTurret
            {
                magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
                weapons[] = {"OPT_missiles_titan_static"};

                class ViewOptics : ViewOptics
                {
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    ////// Qilin (Unbewaffnet) /////////////

    class LSV_02_base_F : Car_F
    {
    };

    class LSV_02_unarmed_base_F : LSV_02_base_F
    {
    };

    class O_T_LSV_02_unarmed_F : LSV_02_unarmed_base_F
    {
    };

    class OPT_O_T_LSV_02_unarmed_F : O_T_LSV_02_unarmed_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4; // 55 //
        textureList[] = {"Black",0,"GreenHex",0,"Arid",1};

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

    class OPT_O_T_LSV_02_unarmed_ghex_F : O_T_LSV_02_unarmed_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4; // 55 //
        textureList[] = {"Black",0,"GreenHex",1,"Arid",0};

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

    ////////  Qilin (Bewaffnet) //////////////

    class LSV_02_armed_base_F : LSV_02_base_F
    {
    };

    class O_T_LSV_02_armed_F : LSV_02_armed_base_F
    {
    };

    class OPT_O_T_LSV_02_armed_ghex_F : O_T_LSV_02_armed_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4; // 55 //
        textureList[] = {"Black",0,"GreenHex",1,"Arid",0};

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

    class OPT_O_T_LSV_02_armed_F : O_T_LSV_02_armed_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4; // 55 //
        textureList[] = {"Black",0,"GreenHex",0,"Arid",1};

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

    class LSV_02_AT_base_F;

    class O_LSV_02_AT_F : LSV_02_AT_base_F
    {
        class Turrets;
        class CargoTurret_01;
        class CargoTurret_02;
        class CargoTurret_03;
        class CargoTurret_04;
        class CargoTurret_05;
        class MainTurret;
        class ViewOptics;
        class OpticsIn;
        class Narrow;
        class Wide;
    };

    class OPT_O_LSV_02_AT_F : O_LSV_02_AT_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4; // 20 //

        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class CargoTurret_01 : CargoTurret_01
            {
            };

            class CargoTurret_02 : CargoTurret_02
            {
            };

            class CargoTurret_03 : CargoTurret_03
            {
            };

            class CargoTurret_04 : CargoTurret_04
            {
            };

            class CargoTurret_05 : CargoTurret_05
            {
            };

            class MainTurret : MainTurret
            {
                magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
                weapons[] = {"OPT_missiles_titan_static"};

                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
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
    };

    class OPT_O_LSV_02_AT_GHEX_F : O_LSV_02_AT_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4; // 20 //

        textureList[] = {"Black",0,"GreenHex",1,"Arid",0};
        hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};
    
        class TransportMagazines
        {
        };

        class TransportItems
        {
        };

        class TransportWeapons
        {
        };

        class Turrets : Turrets
        {
            class CargoTurret_01 : CargoTurret_01
            {
            };

            class CargoTurret_02 : CargoTurret_02
            {
            };

            class CargoTurret_03 : CargoTurret_03
            {
            };

            class CargoTurret_04 : CargoTurret_04
            {
            };

            class CargoTurret_05 : CargoTurret_05
            {
            };

            class MainTurret : MainTurret
            {
                magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
                weapons[] = {"OPT_missiles_titan_static"};
                
                class OpticsIn : OpticsIn
                {
                    class Wide : Wide
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
    };

    class Quadbike_01_base_F : Car_F
    {
    };

    class B_Quadbike_01_F : Quadbike_01_base_F
    {
    };

    //// Quadbike ////
    class OPT_B_Quadbike_01_F : B_Quadbike_01_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 2; // 30 //

        class TransportItems
        {
        };
    };

    class OPT_B_Quadbike_01_ghex_F : B_Quadbike_01_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 2; // 30 //
        textureList[] = {"Olive",1};

        class TransportItems
        {
        };
    };

    class I_Quadbike_01_F : Quadbike_01_base_F
    {
    };

    class OPT_I_Quadbike_01_F : I_Quadbike_01_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 2; // 30 //

        class TransportItems
        {
        };
    };

    class O_Quadbike_01_F : Quadbike_01_base_F
    {
    };

    class OPT_O_Quadbike_01_F : O_Quadbike_01_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 2; // 30 //

        class TransportItems
        {
        };
    };

    class O_T_Quadbike_01_ghex_F : Quadbike_01_base_F
    {
    };

    class OPT_O_T_Quadbike_01_ghex_F : O_T_Quadbike_01_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 2; // 30 //

        class TransportItems
        {
        };
    };

    class Offroad_01_base_F : Car_F
    {
    };

    class Offroad_01_military_base_F : Offroad_01_base_F
    {
    };

    class I_G_Offroad_01_F : Offroad_01_military_base_F
    {
    };

    class B_G_Offroad_01_F : I_G_Offroad_01_F
    {
    };

    class OPT_B_G_Offroad_01_F : B_G_Offroad_01_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4; // 45 //
        textureList[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"A3\soft_f_bootcamp\Offroad_01\data\offroad_01_ext_IG_03_CO.paa"};
        animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBumper1",0,"HideBumper2",0};

        class TransportItems
        {
        };
    };

    class OPT_B_G_Offroad_01_ghex_F : B_G_Offroad_01_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4; // 45 //
        animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBumper1",0,"HideBumper2",0};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"A3\soft_f_bootcamp\Offroad_01\data\offroad_01_ext_IG_01_CO.paa"};
        
        class TransportItems
        {
        };
    };

    class O_G_Offroad_01_F : I_G_Offroad_01_F
    {
    };

    class OPT_O_G_Offroad_01_F : O_G_Offroad_01_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4; // 45 //
        textureList[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"A3\soft_f_bootcamp\Offroad_01\data\offroad_01_ext_IG_08_CO.paa"};
        animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBumper1",0,"HideBumper2",0};

        class TransportItems
        {
        };
    };

    class OPT_O_G_Offroad_01_ghex_F : O_G_Offroad_01_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4; // 45 //
        textureList[] = {"EAF",1};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_EAF_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_EAF_CO.paa"};
        animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBumper1",0,"HideBumper2",0};

        class TransportItems
        {
        };
    };

    class Offroad_01_armed_base_F : Offroad_01_military_base_F
    {
    };

    class I_G_Offroad_01_armed_F : Offroad_01_armed_base_F
    {
    };

    class B_G_Offroad_01_armed_F : I_G_Offroad_01_armed_F
    {
    };

    class OPT_B_G_Offroad_01_armed_F : B_G_Offroad_01_armed_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4; // 45 //
        textureList[] = {"guerilla_03", 1};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"A3\soft_f_bootcamp\Offroad_01\data\offroad_01_ext_IG_03_CO.paa"};
        

        class TransportItems
        {
        };
    };

    class OPT_B_G_Offroad_01_armed_ghex_F : B_G_Offroad_01_armed_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4; // 45 //
        textureList[] = {"Guerilla_01",1};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"A3\soft_f_bootcamp\Offroad_01\data\offroad_01_ext_IG_01_CO.paa"};
        

        class TransportItems
        {
        };
    };

    class O_G_Offroad_01_armed_F : I_G_Offroad_01_armed_F
    {
    };

    class OPT_O_G_Offroad_01_armed_F : O_G_Offroad_01_armed_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 4; // 45 //
        textureList[] = {"guerilla_08", 1};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"A3\soft_f_bootcamp\Offroad_01\data\offroad_01_ext_IG_08_CO.paa"};
        

        class TransportItems
        {
        };
    };

    class OPT_O_G_Offroad_01_armed_ghex_F : O_G_Offroad_01_armed_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 4; // 45 //
        textureList[] = {"EAF",1};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_EAF_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_EAF_CO.paa"};
        

        class TransportItems
        {
        };
    };

    //// MB 4WD ////
    class I_C_Offroad_02_unarmed_F;

    class OPT_I_C_Offroad_02_unarmed_F : I_C_Offroad_02_unarmed_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 4; // 45 //
        textureList[] = {"Brown",0,"Olive",1};
        hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};
            
        class TransportItems
        {
        };
    };

    //// MB 4WD (LMG) ////
    class I_C_Offroad_02_LMG_F;

    class OPT_I_C_Offroad_02_LMG_F : I_C_Offroad_02_LMG_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 3; // 45 //
        textureList[] = {"Brown",0,"Olive",1};
        hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};

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

    //// MB 4WD (AT) ////
    class I_C_Offroad_02_AT_F;

    class OPT_I_C_Offroad_02_AT_F : I_C_Offroad_02_AT_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 3; // 45 //
        textureList[] = {"Brown",0,"Olive",1};
        hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};

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

    class UGV_01_base_F : Car_F
    {
    };

    class UGV_01_rcws_base_F : UGV_01_base_F
    {
    };

    class B_UGV_01_F : UGV_01_base_F
    {
    };

    //// UGV Stomper ////
    class OPT_B_UGV_01_F : B_UGV_01_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 50; // 4500 //

        class TransportItems
        {
        };
    };

    class B_T_UGV_01_olive_F : UGV_01_base_F
    {
    };

    class OPT_B_UGV_01_ghex_F : B_T_UGV_01_olive_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 50; // 4500 //

        class TransportItems
        {
        };
    };

    class I_UGV_01_F;

    class OPT_I_UGV_01_F : I_UGV_01_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 50; // 4500 //

        class TransportItems
        {
        };
    };


    class O_UGV_01_F : UGV_01_base_F
    {
    };

    //// UGV Saif ////
    class OPT_O_UGV_01_F : O_UGV_01_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 50; // 4500 //

        class TransportItems
        {
        };
    };

    class O_T_UGV_01_ghex_F : UGV_01_base_F
    {
    };

    class OPT_O_T_UGV_01_ghex_F : O_T_UGV_01_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 50; // 4500 //

        class TransportItems
        {
        };
    };

    //Motorrad M1030
    class CUP_B_M1030_USA;

    class OPT_CUP_B_M1030_USA: CUP_B_M1030_USA
    {
        faction = "OPT_NATO_CUP";

        class TransportItems
        {
        };
    };

    //Motorrad TT650
    class CUP_O_TT650_TKA;

    class OPT_CUP_O_TT650_TKA: CUP_O_TT650_TKA
    {
        faction = "OPT_WP";

        class TransportItems
        {
        };
    };

    //Land Rover 110
    class CUP_B_LR_Transport_GB_W;

    class OPT_CUP_B_LR_Transport_GB_W: CUP_B_LR_Transport_GB_W
    {
        faction = "OPT_NATO_CUP";

        class TransportItems
        {
        };
    };

    //Motorrad TT650
    class CUP_O_UAZ_Unarmed_RU;

    class OPT_CUP_O_UAZ_Unarmed_RU: CUP_O_UAZ_Unarmed_RU
    {
        faction = "OPT_WP";

        class TransportItems
        {
        };
    };

    //Land Rover M2
    class CUP_B_LR_MG_GB_W;

    class OPT_CUP_B_LR_MG_GB_W: CUP_B_LR_MG_GB_W
    {
        faction = "OPT_NATO_CUP";

        class TransportItems
        {
        };
    };

    //UAZ 469 DShKM
    class CUP_O_UAZ_MG_RU;

    class OPT_CUP_O_UAZ_MG_RU: CUP_O_UAZ_MG_RU
    {
        faction = "OPT_WP";

        class TransportItems
        {
        };
    };

    //HMMWV
    class CUP_B_HMMWV_Unarmed_USMC;

    class OPT_CUP_B_HMMWV_Unarmed_USMC: CUP_B_HMMWV_Unarmed_USMC
    {
        faction = "OPT_NATO_CUP";

        class TransportItems
        {
        };
    };

    //GAZ 3937 Vodnik
    class CUP_O_GAZ_Vodnik_Unarmed_RU;

    class OPT_CUP_O_GAZ_Vodnik_Unarmed_RU: CUP_O_GAZ_Vodnik_Unarmed_RU
    {
        faction = "OPT_WP";

        class TransportItems
        {
        };
    };

    //HMMWV M2
    class CUP_B_HMMWV_M2_USMC;

    class OPT_CUP_B_HMMWV_M2_USMC: CUP_B_HMMWV_M2_USMC
    {
        faction = "OPT_NATO_CUP";

        class TransportItems
        {
        };
    };

    //GAZ 3937 Vodnik 2xPKM
    class CUP_O_GAZ_Vodnik_PK_RU;

    class OPT_CUP_O_GAZ_Vodnik_PK_RU: CUP_O_GAZ_Vodnik_PK_RU
    {
        faction = "OPT_WP";

        class TransportItems
        {
        };
    };

    //HMMWV TOW
    class CUP_B_HMMWV_TOW_USMC;

    class OPT_CUP_B_HMMWV_TOW_USMC: CUP_B_HMMWV_TOW_USMC
    {
        faction = "OPT_NATO_CUP";

        class TransportItems
        {
        };
    };

    //BRDM-2 ATGM
    class CUP_O_BRDM2_ATGM_RUS;

    class OPT_CUP_O_BRDM2_ATGM_RUS: CUP_O_BRDM2_ATGM_RUS
    {
        faction = "OPT_WP";

        class TransportItems
        {
        };
    };
};
