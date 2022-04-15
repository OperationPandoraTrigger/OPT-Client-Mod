class CfgPatches
{
    class opt_vehicles_truck
    {
        units[] = {"OPT_B_Truck_01_transport_F","OPT_B_Truck_01_transport_ghex_F", "OPT_B_Truck_01_covered_F","OPT_B_Truck_01_covered_ghex_F", "OPT_B_Truck_01_medical_F","OPT_B_Truck_01_medical_ghex_F",
                   "OPT_B_Truck_01_ammo_F","OPT_B_Truck_01_ammo_ghex_F", "OPT_B_Truck_01_Repair_F","OPT_B_Truck_01_Repair_ghex_F", "OPT_B_Truck_01_fuel_F","OPT_B_Truck_01_fuel_ghex_F", "OPT_O_Truck_03_transport_F", "OPT_O_T_Truck_03_transport_ghex_F", "OPT_O_Truck_03_covered_F",
                   "OPT_O_T_Truck_03_covered_ghex_F", "OPT_O_Truck_03_ammo_F", "OPT_O_T_Truck_03_ammo_ghex_F", "OPT_O_Truck_03_repair_F", "OPT_O_T_Truck_03_repair_ghex_F", "OPT_O_Truck_03_fuel_F",
                   "OPT_O_T_Truck_03_fuel_ghex_F", "OPT_O_Truck_03_medical_F", "OPT_O_T_Truck_03_medical_ghex_F", "OPT_O_Truck_02_MRL_F","OPT_O_Truck_02_MRL_ghex_F", "OPT_B_UGV_01_F", "OPT_O_UGV_01_F", "OPT_O_T_UGV_01_ghex_F",
                   "OPT_I_Truck_02_covered_F","OPT_I_Truck_02_transport_F","OPT_I_Truck_02_fuel_F","OPT_I_Truck_02_ammo_F","OPT_I_Truck_02_box_F","OPT_O_Truck_02_covered_F","OPT_O_Truck_02_transport_F","OPT_O_Truck_02_fuel_F","OPT_O_Truck_02_ammo_F","OPT_O_Truck_02_box_F",
                   "OPT_O_T_Truck_02_F","OPT_O_T_Truck_02_transport_F","OPT_O_T_Truck_02_fuel_F","OPT_O_T_Truck_02_ammo_F","OPT_O_T_Truck_02_box_F","OPT_O_Truck_02_medical_F","OPT_O_T_Truck_02_Medical_F","OPT_I_Truck_02_medical_F"};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_soft_f_hemtt", "a3_soft_f_gamma_hemtt", "a3_soft_f_truck", "a3_soft_f_epc_truck_03"};
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

    class Car;

    class Car_F : Car
    {
    };

    class Truck_F : Car_F
    {
    };

    class Truck_01_base_F : Truck_F
    {
    };

    class B_Truck_01_transport_F : Truck_01_base_F
    {
    };

    class B_Truck_01_covered_F : B_Truck_01_transport_F
    {
    };

    //// HEMTT Transport ////
    class OPT_B_Truck_01_transport_F : B_Truck_01_transport_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4;     // 45 //
        transportSoldier = 1; // 15 //
        displayName = "HEMTT Logistik";

        class TransportItems
        {
        };

        class Turrets
        {
        };
    };

    class OPT_B_Truck_01_transport_ghex_F : OPT_B_Truck_01_transport_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4;     // 45 //
        transportSoldier = 1; // 15 //
        hiddenSelections[] = {"Camo1","Camo2","Camo3"};
        hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};
        textureList[] = {"Olive",1};
        displayName = "HEMTT Logistik";

        class TransportItems
        {
        };

        class Turrets
        {
        };
    };

    //// HEMTT Transport (Covered) ////
    class OPT_B_Truck_01_covered_F : B_Truck_01_covered_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4; // 45 //
        displayName = "HEMTT Infanterie";

        class TransportItems
        {
        };
    };

    class OPT_B_Truck_01_covered_ghex_F : OPT_B_Truck_01_covered_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4; // 45 //
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
        hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};
        textureList[] = {"Olive",1};
        displayName = "HEMTT Infanterie";

        class TransportItems
        {
        };
    };

    class B_Truck_01_medical_F : B_Truck_01_transport_F
    {
    };

    //// HEMTT Medical ////
    class OPT_B_Truck_01_medical_F : B_Truck_01_medical_F
    {
        faction = "OPT_NATO";
        class TransportItems
        {
        };
    };

    class OPT_B_Truck_01_medical_ghex_F : OPT_B_Truck_01_medical_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4; // 45 //
        textureList[] = {"Olive",1};
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
        hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};

        class TransportItems
        {
        };
    };

    class B_Truck_01_mover_F : B_Truck_01_transport_F
    {
    };

    class B_Truck_01_ammo_F : B_Truck_01_mover_F
    {
    };

    /// HEMTT Ammo ///
    class OPT_B_Truck_01_ammo_F : B_Truck_01_ammo_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4; // 45 //
        transportAmmo = 30000;

        class TransportItems
        {
        };
    };

    class OPT_B_Truck_01_ammo_ghex_F : OPT_B_Truck_01_ammo_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4; // 45 //
        transportAmmo = 30000;
        textureList[] = {"Olive",1};
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
        hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};

        class TransportItems
        {
        };
    };

    class B_Truck_01_Repair_F : B_Truck_01_mover_F
    {
    };

    //// HEMTT Repair ////
    class OPT_B_Truck_01_Repair_F : B_Truck_01_Repair_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 4; // 45 //
        transportRepair = 0; // 200000000;

        class TransportItems
        {
        };
    };

    class OPT_B_Truck_01_Repair_ghex_F : OPT_B_Truck_01_Repair_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 4; // 45 //
        transportRepair = 0; // 200000000;
        textureList[] = {"Olive",1};
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
        hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa","\a3\structures_f\data\metal\containers\containers_02_set_co.paa"};

        class TransportItems
        {
        };
    };

    class B_Truck_01_fuel_F : B_Truck_01_mover_F
    {
    };

    /// HEMTT Fuel ////
    class OPT_B_Truck_01_fuel_F : B_Truck_01_fuel_F
    {
        faction = "OPT_NATO";
        fuelCapacity = 10; // 45 //
        transportFuel = 3000;

        class TransportItems
        {
        };
    };

    class B_T_Truck_01_fuel_F : B_Truck_01_fuel_F
    {
    };

    class OPT_B_Truck_01_fuel_ghex_F : B_T_Truck_01_fuel_F
    {
        faction = "OPT_NATO_T";
        fuelCapacity = 10; // 45 //
        transportFuel = 3000;
        textureList[] = {"Olive",1};

        class TransportItems
        {
        };
    };

    class Truck_03_base_F : Truck_F
    {
    };

    class O_Truck_03_transport_F : Truck_03_base_F
    {
    };

    //// Tempest Transport ////
    class OPT_O_Truck_03_transport_F : O_Truck_03_transport_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 6;     // 250 //
        transportSoldier = 1; // 11 //
        displayName = "Tempest Logistik";

        class TransportItems
        {
        };

        class Turrets
        {
        };
    };

    class O_T_Truck_03_transport_ghex_F : O_Truck_03_transport_F
    {
    };

    class OPT_O_T_Truck_03_transport_ghex_F : O_T_Truck_03_transport_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6;     // 250 //
        transportSoldier = 1; // 11 //
        displayName = "Tempest Logistik";

        class TransportItems
        {
        };

        class Turrets
        {
        };
    };

    class O_Truck_03_covered_F : Truck_03_base_F
    {
    };

    //// Tempest Transport (Covered) ////
    class OPT_O_Truck_03_covered_F : O_Truck_03_covered_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 6; // 250 //
        displayName = "Tempest Infanterie";

        class TransportItems
        {
        };
    };

    class O_T_Truck_03_covered_ghex_F : O_Truck_03_covered_F
    {
    };

    class OPT_O_T_Truck_03_covered_ghex_F : O_T_Truck_03_covered_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //
        displayName = "Tempest Infanterie";

        class TransportItems
        {
        };
    };

    class O_Truck_03_ammo_F : Truck_03_base_F
    {
    };

    //// Tempest Ammo ////
    class OPT_O_Truck_03_ammo_F : O_Truck_03_ammo_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 6; // 250 //
        transportAmmo = 30000;

        class TransportItems
        {
        };
    };

    class O_T_Truck_03_ammo_ghex_F : O_Truck_03_ammo_F
    {
    };

    class OPT_O_T_Truck_03_ammo_ghex_F : O_T_Truck_03_ammo_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //
        transportAmmo = 30000;

        class TransportItems
        {
        };
    };

    class O_Truck_03_repair_F : Truck_03_base_F
    {
    };

    //// Tempest Repair ////
    class OPT_O_Truck_03_repair_F : O_Truck_03_repair_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 6; // 250 //
        transportRepair = 0; // 200000000;

        class TransportItems
        {
        };
    };

    class O_T_Truck_03_repair_ghex_F : O_Truck_03_repair_F
    {
    };

    class OPT_O_T_Truck_03_repair_ghex_F : O_T_Truck_03_repair_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //
        transportRepair = 0; // 200000000;

        class TransportItems
        {
        };
    };

    class O_Truck_03_fuel_F : Truck_03_base_F
    {
    };

    //// Tempest Fuel ////
    class OPT_O_Truck_03_fuel_F : O_Truck_03_fuel_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 200; // 250 //
        transportFuel = 3000;

        class TransportItems
        {
        };
    };

    class O_T_Truck_03_fuel_ghex_F : O_Truck_03_fuel_F
    {
    };

    class OPT_O_T_Truck_03_fuel_ghex_F : O_T_Truck_03_fuel_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 200; // 250 //
        transportFuel = 3000;

        class TransportItems
        {
        };
    };

    class O_Truck_03_medical_F : Truck_03_base_F
    {
    };

    //// Tempest Medical ////
    class OPT_O_Truck_03_medical_F : O_Truck_03_medical_F
    {
        faction = "OPT_CSAT";
        fuelCapacity = 6; // 250 //

        class TransportItems
        {
        };
    };

    class O_T_Truck_03_medical_ghex_F : O_Truck_03_medical_F
    {
    };

    class OPT_O_T_Truck_03_medical_ghex_F : O_T_Truck_03_medical_ghex_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //

        class TransportItems
        {
        };
    };

    //// Zamak Transport (Covered) ////
    class I_Truck_02_covered_F;

    class OPT_I_Truck_02_covered_F : I_Truck_02_covered_F
    {

        faction = "OPT_AAF";
        fuelCapacity = 6; // 250 //
        displayName = "Zamak Infanterie";

        class TransportItems
        {
        };

    };

    //// Zamak Transport ////
    class I_Truck_02_transport_F;

    class OPT_I_Truck_02_transport_F : I_Truck_02_transport_F
    {

        faction = "OPT_AAF";
        fuelCapacity = 6; // 250 //
        transportSoldier = 1; // 11 //
        displayName = "Zamak Logistik";

        class TransportItems
        {
        };

    };

    //// Zamak Fuel ////
    class I_Truck_02_fuel_F;

    class OPT_I_Truck_02_fuel_F : I_Truck_02_fuel_F
    {

        faction = "OPT_AAF";
        fuelCapacity = 200; // 250 //
        transportFuel = 3000;

        class TransportItems
        {
        };

    };

    //// Zamak Ammo ////
    class I_Truck_02_ammo_F;

    class OPT_I_Truck_02_ammo_F : I_Truck_02_ammo_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 6; // 250 //
        transportAmmo = 30000;

        class TransportItems
        {
        };
    };

    //// Zamak Repair ////
    class I_Truck_02_box_F;

    class OPT_I_Truck_02_box_F : I_Truck_02_box_F
    {
        faction = "OPT_AAF";
        fuelCapacity = 6; // 250 //
        transportRepair = 0; // 200000000;

        class TransportItems
        {
        };
    };

    //// Zamak Medical ////
    class I_Truck_02_medical_F;

    class OPT_I_Truck_02_medical_F : I_Truck_02_medical_F
    {

        faction = "OPT_AAF";
        fuelCapacity = 6; // 250 //

        class TransportItems
        {
        };

    };

    //// Zamak Transport (Covered) ////
    class O_Truck_02_covered_F;

    class OPT_O_Truck_02_covered_F : O_Truck_02_covered_F
    {

        faction = "OPT_OPFOR";
        fuelCapacity = 6; // 250 //
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_inf.jpg";

        class TransportItems
        {
        };

    };

    //// Zamak Transport ////
    class O_Truck_02_transport_F;

    class OPT_O_Truck_02_transport_F : O_Truck_02_transport_F
    {

        faction = "OPT_CSAT";
        fuelCapacity = 6; // 250 //
        transportSoldier = 1; // 11 //

        class TransportItems
        {
        };

    };

    //// Zamak Fuel ////
    class O_Truck_02_fuel_F;

    class OPT_O_Truck_02_fuel_F : O_Truck_02_fuel_F
    {

        faction = "OPT_OPFOR";
        fuelCapacity = 200; // 250 //
        transportFuel = 3000;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fuel_rus_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_fuel.jpg";

        class TransportItems
        {
        };

    };

    //// Zamak Ammo ////
    class O_Truck_02_ammo_F;

    class OPT_O_Truck_02_ammo_F : O_Truck_02_ammo_F
    {
        faction = "OPT_OPFOR";
        fuelCapacity = 6; // 250 //
        transportAmmo = 30000;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_ammo_rus_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_muni.jpg";

        class TransportItems
        {
        };
    };

    //// Zamak Repair ////
    class O_Truck_02_box_F;

    class OPT_O_Truck_02_box_F : O_Truck_02_box_F
    {
        faction = "OPT_OPFOR";
        fuelCapacity = 6; // 250 //
        transportRepair = 0; // 200000000;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_repair_rus_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_repair.jpg";

        class TransportItems
        {
        };
    };

    //// Zamak Medical ////
    class O_Truck_02_medical_F;

    class OPT_O_Truck_02_medical_F : O_Truck_02_medical_F
    {
        faction = "OPT_OPFOR";
        fuelCapacity = 6; // 250 //
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_sani.jpg";

        class TransportItems
        {
        };
    };

    //// Zamak Transport (Covered) ////
    class O_T_Truck_02_F;

    class OPT_O_T_Truck_02_F : O_T_Truck_02_F
    {

        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //

        class TransportItems
        {
        };

    };

    //// Zamak Transport ////
    class O_T_Truck_02_transport_F;

    class OPT_O_T_Truck_02_transport_F : O_T_Truck_02_transport_F
    {

        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //
        transportSoldier = 1; // 11 //
        displayName = "Zamak Logistik";

        class TransportItems
        {
        };

    };

    //// Zamak Fuel ////
    class O_T_Truck_02_fuel_F;

    class OPT_O_T_Truck_02_fuel_F : O_T_Truck_02_fuel_F
    {

        faction = "OPT_CSAT_T";
        fuelCapacity = 200; // 250 //
        transportFuel = 3000;

        class TransportItems
        {
        };

    };

    //// Zamak Ammo ////
    class O_T_Truck_02_ammo_F;

    class OPT_O_T_Truck_02_ammo_F : O_T_Truck_02_ammo_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //
        transportAmmo = 30000;

        class TransportItems
        {
        };
    };

    //// Zamak Repair ////
    class O_T_Truck_02_box_F;

    class OPT_O_T_Truck_02_box_F : O_T_Truck_02_box_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //
        transportRepair = 0; // 200000000;

        class TransportItems
        {
        };
    };

    //// Zamak Medical ////
    class O_T_Truck_02_Medical_F;

    class OPT_O_T_Truck_02_Medical_F : O_T_Truck_02_Medical_F
    {
        faction = "OPT_CSAT_T";
        fuelCapacity = 6; // 250 //

        class TransportItems
        {
        };
    };

    //// Zamak Transport (Covered) ////
    class OPT_B_Truck_02_covered_F : I_Truck_02_covered_F
    {

        faction = "OPT_BLUFOR";
        side = 1;
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        fuelCapacity = 6; // 250 //
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_inf_fin.jpg";

        class TransportItems
        {
        };

    };

    //// Zamak Transport ////
    class OPT_B_Truck_02_transport_F : I_Truck_02_transport_F
    {

        faction = "OPT_NATO";
        side = 1;
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        fuelCapacity = 6; // 250 //
        transportSoldier = 1; // 11 //

        class TransportItems
        {
        };

    };

    //// Zamak Fuel ////
    class OPT_B_Truck_02_fuel_F : I_Truck_02_fuel_F
    {

        faction = "OPT_BLUFOR";
        side = 1;
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        fuelCapacity = 200; // 250 //
        transportFuel = 3000;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fuel_fin_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_fuel_fin.jpg";

        class TransportItems
        {
        };

    };

    //// Zamak Ammo ////
    class OPT_B_Truck_02_ammo_F : I_Truck_02_ammo_F
    {
        faction = "OPT_BLUFOR";
        side = 1;
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        fuelCapacity = 6; // 250 //
        transportAmmo = 30000;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_ammo_fin_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_muni_fin.jpg";

        class TransportItems
        {
        };
    };

    //// Zamak Repair ////
    class OPT_B_Truck_02_box_F : I_Truck_02_box_F
    {
        faction = "OPT_BLUFOR";
        side = 1;
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        fuelCapacity = 6; // 250 //
        transportRepair = 0; // 200000000;
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_repair_fin_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_repair_fin.jpg";

        class TransportItems
        {
        };
    };

    //// Zamak Medical ////
    class OPT_B_Truck_02_medical_F : I_Truck_02_medical_F
    {

        faction = "OPT_BLUFOR";
        side = 1;
        crew = "B_soldier_F";
        typicalCargo[] = {"B_Soldier_lite_F"};
        fuelCapacity = 6; // 250 //
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_1.paa", "\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_san_fin.jpg";

        class TransportItems
        {
        };

    };

    //// Zamak MRL ////
    class Truck_02_MRL_base_F;

    class I_Truck_02_MRL_F : Truck_02_MRL_base_F
    {
        class Turrets;
        class MainTurret;
        class OpticsIn;
        class Medium;
        class Narrow;
        class Wide;
    };

    class OPT_I_Truck_02_MRL_F : I_Truck_02_MRL_F
    {
        faction = "OPT_AAF";

        class TransportItems
        {
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = {"OPT_rockets_230mm_GAT"};
                magazines[] = {"OPT_12Rnd_230mm_rockets"};

                class OpticsIn : OpticsIn
                {
                    class Medium : Medium
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Narrow : Narrow
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };

                    class Wide : Wide
                    {
                        visionMode[] = {"Normal", "NVG"};
                    };
                };
            };
        };
    };

    class OPT_O_Truck_02_MRL_F : OPT_I_Truck_02_MRL_F
    {
        maximumLoad = 2500;
        side = 0;
        faction = "OPT_OPFOR";
        crew = "OPT_CSAT_Soldat";
        typicalCargo[] = {"OPT_CSAT_Soldat"};
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_rus_1.paa", "\opt\opt_client\addons\vehicles\textures\ZamakMRL\opt_zamak_mrl_rus_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_mrl.jpg";

    };

    class OPT_O_Truck_02_MRL_ghex_F : OPT_I_Truck_02_MRL_F
    {
        maximumLoad = 2500;
        side = 0;
        faction = "OPT_CSAT_T";
        crew = "OPT_CSAT_Soldat";
        typicalCargo[] = {"OPT_CSAT_Soldat"};
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\ZamakMRL\opt_zamak_02_kab_hex_pazifik.paa","\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa","\opt\opt_client\addons\vehicles\textures\ZamakMRL\opt_zamak_02_mrl_hex_pazifik.paa","\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa"};
    };

    class OPT_B_Truck_02_MRL_F : OPT_I_Truck_02_MRL_F
    {
        maximumLoad = 2500;
        side = 1;
        faction = "OPT_BLUFOR";
        crew = "OPT_NATO_Besatzungsmitglied";
        typicalCargo[] = {"OPT_NATO_Besatzungsmitglied"};
        hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\Zamak\opt_zamak_fin_1.paa", "\opt\opt_client\addons\vehicles\textures\ZamakMRL\opt_zamak_mrl_fin_2.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        editorPreview = "\opt\opt_client\addons\vehicles\Vorschaubilder_Shop\opt_zamak_mrl_fin.jpg";
    };
};
