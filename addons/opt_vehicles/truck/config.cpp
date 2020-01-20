class CfgPatches
{
	class opt_vehicles_truck
	{
		units[] = {"OPT_B_Truck_01_transport_F","OPT_B_Truck_01_transport_ghex_F", "OPT_B_Truck_01_covered_F","OPT_B_Truck_01_covered_ghex_F", "OPT_B_Truck_01_medical_F","OPT_B_Truck_01_medical_ghex_F",
				   "OPT_B_Truck_01_ammo_F","OPT_B_Truck_01_ammo_ghex_F", "OPT_B_Truck_01_Repair_F","OPT_B_Truck_01_Repair_ghex_F", "OPT_B_Truck_01_fuel_F","OPT_B_Truck_01_fuel_ghex_F", "OPT_O_Truck_03_transport_F", "OPT_O_T_Truck_03_transport_ghex_F", "OPT_O_Truck_03_covered_F",
				   "OPT_O_T_Truck_03_covered_ghex_F", "OPT_O_Truck_03_ammo_F", "OPT_O_T_Truck_03_ammo_ghex_F", "OPT_O_Truck_03_repair_F", "OPT_O_T_Truck_03_repair_ghex_F", "OPT_O_Truck_03_fuel_F",
				   "OPT_O_T_Truck_03_fuel_ghex_F", "OPT_O_Truck_03_medical_F", "OPT_O_T_Truck_03_medical_ghex_F", "OPT_O_Truck_02_MRL_F","OPT_O_Truck_02_MRL_ghex_F", "OPT_B_UGV_01_F", "OPT_O_UGV_01_F", "OPT_O_T_UGV_01_ghex_F"};
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
		displayName = "Benötigt OPT A3 Vehicles";
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
		displayName = "HEMTT Transporter";
		maximumLoad = 5000;
		fuelCapacity = 4;	 // 45 //
		transportSoldier = 1; // 15 //

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
		displayName = "HEMTT Transporter";
		maximumLoad = 5000;
		fuelCapacity = 4;	 // 45 //
		transportSoldier = 1; // 15 //
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};
		textureList[] = {"Olive",1};

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
		displayName = "HEMTT Transporter (abgedeckt)";
		maximumLoad = 5000;
		fuelCapacity = 4; // 45 //

		class TransportItems
		{
		};
	};

	class OPT_B_Truck_01_covered_ghex_F : OPT_B_Truck_01_covered_F
	{
		faction = "OPT_NATO_T";
		displayName = "HEMTT Transporter (abgedeckt)";
		maximumLoad = 5000;
		fuelCapacity = 4; // 45 //
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};
		textureList[] = {"Olive",1};

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
		displayName = "HEMTT Sanitätsfahrzeug";
		maximumLoad = 5000;

		class TransportItems
		{
		};
	};

	class OPT_B_Truck_01_medical_ghex_F : OPT_B_Truck_01_medical_F
	{
		faction = "OPT_NATO_T";
		displayName = "HEMTT Sanitätsfahrzeug";
		maximumLoad = 5000;
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
		displayName = "HEMTT Munition";
		maximumLoad = 5000;
		fuelCapacity = 4; // 45 //
		transportAmmo = 30000;

		class TransportItems
		{
		};
	};

	class OPT_B_Truck_01_ammo_ghex_F : OPT_B_Truck_01_ammo_F
	{
		faction = "OPT_NATO_T";
		displayName = "HEMTT Munition";
		maximumLoad = 5000;
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
		displayName = "HEMTT Instandsetzung";
		maximumLoad = 2500;
		fuelCapacity = 4; // 45 //
		transportRepair = 0; // 200000000;
		//#include "\opt_vehicles\reparieren.hpp"

		class TransportItems
		{
		};
	};

	class OPT_B_Truck_01_Repair_ghex_F : OPT_B_Truck_01_Repair_F
	{
		faction = "OPT_NATO_T";
		displayName = "HEMTT Instandsetzung";
		maximumLoad = 2500;
		fuelCapacity = 4; // 45 //
		transportRepair = 0; // 200000000;
		//#include "\opt_vehicles\reparieren.hpp"
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
		displayName = "HEMTT Treibstoff";
		maximumLoad = 2500;
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
		displayName = "HEMTT Treibstoff";
		maximumLoad = 2500;
		fuelCapacity = 10; // 45 //
		transportFuel = 3000;
		textureList[] = {"Olive",1};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\A3\Soft_F_Exp\Truck_01\Data\truck_01_Fuel_olive_CO.paa"};	

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
		displayName = "Tempest-Transporter";
		maximumLoad = 5000;
		fuelCapacity = 6;	 // 250 //
		transportSoldier = 1; // 11 //

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
		displayName = "Tempest-Transporter";
		maximumLoad = 5000;
		fuelCapacity = 6;	 // 250 //
		transportSoldier = 1; // 11 //

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
		displayName = "Tempest-Transporter (abgedeckt)";
		maximumLoad = 5000;
		fuelCapacity = 6; // 250 //

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
		displayName = "Tempest-Transporter (abgedeckt)";
		maximumLoad = 5000;
		fuelCapacity = 6; // 250 //

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
		displayName = "Tempest Munition";
		maximumLoad = 5000;
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
		displayName = "Tempest Munition";
		maximumLoad = 5000;
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
		displayName = "Tempest Reparatur";
		maximumLoad = 2500;
		fuelCapacity = 6; // 250 //
		transportRepair = 0; // 200000000;
		//#include "\opt_vehicles\reparieren.hpp"

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
		displayName = "Tempest Reparatur";
		maximumLoad = 2500;
		fuelCapacity = 6; // 250 //
		transportRepair = 0; // 200000000;
		//#include "\opt_vehicles\reparieren.hpp"

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
		displayName = "Tempest Tanken";
		maximumLoad = 2500;
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
		displayName = "Tempest Tanken";
		maximumLoad = 2500;
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
		displayName = "Tempest Sanitätsfahrzeug";
		maximumLoad = 5000;
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
		displayName = "Tempest Sanitätsfahrzeug";
		maximumLoad = 5000;
		fuelCapacity = 6; // 250 //

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
		displayName = "Zamak MRL";

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
		faction = "OPT_CSAT";
		crew = "OPT_CSAT_Soldat";
		typicalCargo[] = {"OPT_CSAT_Soldat"};
		hiddenSelectionsTextures[] = {"A3\Soft_F_Beta\Truck_02\Data\truck_02_kab_OPFOR_CO.paa", "a3\soft_f_beta\truck_02\data\truck_02_int_co.paa", "a3\soft_f_gamma\truck_02\data\Truck_02_MRL_OPFOR_CO.paa"};
	};

	class OPT_O_Truck_02_MRL_ghex_F : OPT_I_Truck_02_MRL_F
	{
		maximumLoad = 2500;
		side = 0;
		faction = "OPT_CSAT_T";
		crew = "OPT_CSAT_Soldat";
		typicalCargo[] = {"OPT_CSAT_Soldat"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa","\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa","\A3\soft_f_Enoch\Truck_02\Data\Truck_02_MRL_EAF_co.paa","\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa"};
	};
};