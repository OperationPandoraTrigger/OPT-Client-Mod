class CfgPatches
{
	class opt_vehicles_uav
	{
		units[] = {"OPT_B_UAV_02_F", "OPT_B_UAV_02_light_F", "OPT_B_UAV_02_CAS_F", "OPT_O_UAV_02_F", "OPT_O_UAV_02_light_F", "OPT_O_UAV_02_CAS_F", "OPT_B_UAV_01_F", "OPT_O_UAV_01_F"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_armor_f", "a3_soft_f", "a3_soft_f_mrap_01", "a3_soft_f_mrap_02", "a3_soft_f_mrap_03", "a3_armor_f_panther",
							"a3_armor_f_beta_apc_tracked_02", "a3_armor_f_slammer", "a3_armor_f_t100k", "a3_armor_f_amv", "a3_armor_f_epb_apc_tracked_03", "a3_armor_f_apc_wheeled_03",
							"a3_soft_f_hemtt", "a3_soft_f_gamma_hemtt", "a3_armor_f_epb_mbt_03", "a3_air_f_gamma_plane_fighter_03",
							"a3_soft_f_gamma_offroad", "a3_soft_f_gamma_quadbike", "a3_soft_f_truck", "a3_soft_f_car", "a3_soft_f_offroad_01", "a3_soft_f_quadbike",
							"a3_soft_f_beta_quadbike", "a3_soft_f_suv", "a3_soft_f_epc_truck_03",
							"a3_air_f_epc_plane_cas_02", "a3_air_f_epc_plane_cas_01", "a3_armor_f_epc_mbt_01", "a3_soft_f_bootcamp_offroad_01", "a3_air_f_gamma_uav_01", "A3_Air_F_Exp", "A3_Air_F_Exp_VTOL_01", "A3_Air_F_Exp_VTOL_02", "A3_Soft_F_Exp", "A3_Soft_F_Exp_LSV_01", "A3_Soft_F_Exp_LSV_02",
							"A3_Soft_F_Exp_MRAP_02", "A3_Soft_F_Exp_Truck_03", "A3_Air_F_Jets", "A3_Air_F_Jets_Plane_Fighter_01", "A3_Air_F_Jets_Plane_Fighter_02"};
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

	class Air;
	class Plane : Air
	{
	};
	class Helicopter : Air
	{
	};

	class Helicopter_Base_F : Helicopter
	{
	};

	class UAV : Plane
	{
	};

	class UAV_02_base_F : UAV
	{
	};

	class UAV_02_dynamicLoadout_base_F : UAV_02_base_F
	{
	};

	class B_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F
	{
		class Viewoptics;
		class Turrets;
		class MainTurret;
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class Pylons1;
		class Pylons2;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
	};

	//// MQ4A Greyhawk ////
	class OPT_B_UAV_02_F : B_UAV_02_dynamicLoadout_F
	{
		displayName = "MQ-4A Greyhawk (Scarpel)";
		faction = "OPT_NATO";
		fuelCapacity = 500; // 1000 //
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};

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

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class Pylons1 : Pylons1
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};

					class Pylons2 : Pylons2
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};
				};
			};
		};
	};

	class OPT_B_UAV_02_light_F : OPT_B_UAV_02_F
	{
		displayName = "MQ-4A Greyhawk (Unbewaffnet)";
		fuelCapacity = 1000;

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Components : Components
		{
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
				};
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
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
	};

	class OPT_B_UAV_02_CAS_F : OPT_B_UAV_02_F
	{
		displayName = "MQ-4A Greyhawk (GBU-12)";

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class Pylons1 : Pylons1
					{
						attachment = "OPT_PylonMissile_1Rnd_Bomb_04_F";
					};

					class Pylons2 : Pylons2
					{
						attachment = "OPT_PylonMissile_1Rnd_Bomb_04_F";
					};
				};
			};
		};
	};

	class OPT_B_UAV_02_AA_F : OPT_B_UAV_02_F
	{
		displayName = "MQ-4A Greyhawk (Falchion-22)";

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class Pylons1 : Pylons1
					{
						attachment = "OPT_PylonRack_1Rnd_Missile_AA_04_F";
					};

					class Pylons2 : Pylons2
					{
						attachment = "OPT_PylonRack_1Rnd_Missile_AA_04_F";
					};
				};
			};
		};
	};

	class O_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F
	{
		class Viewoptics;
		class Turrets;
		class MainTurret;
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class Pylons1;
		class Pylons2;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
	};

	//// K40 Ababil-3 ////
	class OPT_O_UAV_02_F : O_UAV_02_dynamicLoadout_F
	{
		displayName = "K40 Ababil-3 (Scarpel)";
		faction = "OPT_CSAT";
		fuelCapacity = 500; // 1000 //
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};

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

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class Pylons1 : Pylons1
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};

					class Pylons2 : Pylons2
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};
				};
			};
		};
	};

	class OPT_O_UAV_02_light_F : OPT_O_UAV_02_F
	{
		displayName = "K40 Ababil-3 (Unbewaffnet)";
		fuelCapacity = 1000;

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Components : Components
		{
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
				};
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
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
	};

	class OPT_O_UAV_02_CAS_F : OPT_O_UAV_02_F
	{
		displayName = "K40 Ababil-3 (LOM-250G)";

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class Pylons1 : Pylons1
					{
						attachment = "OPT_PylonMissile_1Rnd_Bomb_03_F";
					};

					class Pylons2 : Pylons2
					{
						attachment = "OPT_PylonMissile_1Rnd_Bomb_03_F";
					};
				};
			};
		};
	};

	class OPT_O_UAV_02_AA_F : OPT_O_UAV_02_F
	{
		displayName = "K40 Ababil-3 (Sahr-3)";

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class Pylons1 : Pylons1
					{
						attachment = "OPT_PylonRack_1Rnd_Missile_AA_03_F";
					};

					class Pylons2 : Pylons2
					{
						attachment = "OPT_PylonRack_1Rnd_Missile_AA_03_F";
					};
				};
			};
		};
	};

	class UAV_01_base_F : Helicopter_Base_F
	{
	};

	class B_UAV_01_F : UAV_01_base_F
	{
		class assembleInfo;
		class Turrets;
		class MainTurret;
		class Viewoptics;
		class Wide;
		class Medium;
		class Narrow;
		class OpticsIn;
		class Components;
	};

	//// AR-2 Darter ////
	class OPT_B_UAV_01_F : B_UAV_01_F
	{
		faction = "OPT_NATO";
		fuelCapacity = 30; // 100 //

		class Components : Components
		{
			class SensorsManagerComponent
			{
			};
		};

		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"OPT_B_UAV_01_backpack_F"};
		};

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};

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
						initFov = 0.057200;
						minFov = 0.057200;
						maxFov = 0.057200;
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};
		};
	};

	class O_UAV_01_F : UAV_01_base_F
	{
		class assembleInfo;
		class Turrets;
		class MainTurret;
		class Viewoptics;
		class Wide;
		class Medium;
		class Narrow;
		class OpticsIn;
		class Components;
	};

	//// Tayran AR-2 ////
	class OPT_O_UAV_01_F : O_UAV_01_F
	{
		faction = "OPT_CSAT";
		fuelCapacity = 30; // 100 //

		class Components : Components
		{
			class SensorsManagerComponent
			{
			};
		};

		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"OPT_O_UAV_01_backpack_F"};
		};

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};

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
						initFov = 0.057200;
						minFov = 0.057200;
						maxFov = 0.057200;
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};
		};
	};

	class UAV_03_base_F : Helicopter_Base_F
	{
	};

	class UAV_03_dynamicLoadout_base_F : UAV_03_base_F
	{
	};

	class B_T_UAV_03_dynamicLoadout_F : UAV_03_dynamicLoadout_base_F
	{
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class Pylons1;
		class Pylons2;
		class Pylons3;
		class Pylons4;
		class Turrets;
		class MainTurret;
		class Viewoptics;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
	};

	class OPT_B_T_UAV_03_dynamicLoadout_F : B_T_UAV_03_dynamicLoadout_F
	{
		faction = "OPT_NATO";
		displayName = "MQ-12 Falcon";
		fuelCapacity = 500; // 1000

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class Pylons1 : Pylons1
					{
						attachment = "OPT_PylonRack_12Rnd_missiles";
					};

					class Pylons2 : Pylons2
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};

					class Pylons3 : Pylons3
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};

					class Pylons4 : Pylons4
					{
						attachment = "OPT_PylonRack_12Rnd_missiles";
					};
				};
			};
		};

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
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
	};

	class UAV_04_base_F : UAV
	{
	};

	class O_T_UAV_04_CAS_F : UAV_04_base_F
	{
		class Viewoptics;
		class Turrets;
		class MainTurret;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
	};

	class OPT_O_T_UAV_04_CAS_F : O_T_UAV_04_CAS_F
	{
		faction = "OPT_CSAT";
		displayName = "KH-3A Fenghuang";
		fuelCapacity = 500; //1000

		class Viewoptics : Viewoptics
		{
			visionMode[] = {"Normal", "NVG"};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_missiles_Jian", "Laserdesignator_mounted"};
				magazines[] = {"OPT_4Rnd_LG_Jian", "Laserbatteries"};

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
	};
};