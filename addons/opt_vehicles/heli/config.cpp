class CfgPatches
{
	class opt_vehicles_heli
	{
		units[] = {
			"OPT_O_Heli_Attack_02_F",
			"OPT_O_Heli_Attack_02_black_F",
			"OPT_O_Heli_Light_02_F",
			"OPT_O_Heli_Light_02_black_F",
			"OPT_O_Heli_Light_02_v2_F",
			"OPT_O_Heli_Light_02_v2_black_F",
			"OPT_O_Heli_Light_02_unarmed_F",
			"OPT_O_Heli_Light_02_unarmed_black_F",
			"OPT_O_Heli_Transport_04_F",
			"OPT_O_Heli_Transport_04_black_F",
			"OPT_O_Heli_Transport_04_bench_F",
			"OPT_O_Heli_Transport_04_bench_black_F",
			"OPT_O_Heli_Transport_04_covered_F",
			"OPT_O_Heli_Transport_04_covered_black_F",
			"OPT_O_Heli_Transport_02_F",
			"OPT_O_Heli_light_03_F",
			"OPT_O_Heli_light_03_green_F",
			"OPT_O_Heli_light_03_armed_F",
			"OPT_O_Heli_light_03_unarmed_F",
			"OPT_O_Heli_light_03_unarmed_green_F",
			"OPT_B_Heli_Transport_01_F",
			"OPT_B_Heli_Transport_03_unarmed_F",
			"OPT_B_Heli_Transport_03_F",
			"OPT_B_Heli_Attack_01_F",
			"OPT_B_Heli_Light_01_F",
			"OPT_B_Heli_Light_01_armed_F",
			"OPT_O_Heli_Light_01_F",
			"OPT_O_Heli_Light_01_armed_F",
			"OPT_B_Heli_Light_01_armed_2_F",
			"OPT_B_Heli_Transport_02_F",
		};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {
			"opt_weapons", "opt_characters", "opt_core", "a3_air_f_beta_heli_transport_02", "a3_air_f_epb_heli_light_03", "a3_air_f_heli_heli_transport_04",
			"a3_air_f_heli_heli_transport_03", "a3_air_f_beta_heli_attack_02", "a3_air_f_heli_light_01", "a3_air_f_beta_heli_attack_01", "a3_air_f_beta_heli_transport_01",
			"a3_air_f_heli_light_02", "a3_air_f_heli_heli_light_02"};
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

	class Helicopter : Air
	{
	};

	class Helicopter_Base_F : Helicopter
	{
	};

	class Helicopter_Base_H : Helicopter_Base_F
	{
	};

	//// Mi-48 Kajman ////
	class Heli_Attack_02_base_F : Helicopter_Base_F
	{
	};

	class Heli_Attack_02_dynamicLoadout_base_F : Heli_Attack_02_base_F
	{
	};

	class O_Heli_Attack_02_dynamicLoadout_F : Heli_Attack_02_dynamicLoadout_base_F
	{
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonLeft2;
		class PylonRight1;
		class PylonRight2;
		class Turrets;
		class MainTurret;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
		class AnimationSources;
	};

	class OPT_O_Heli_Attack_02_F : O_Heli_Attack_02_dynamicLoadout_F
	{
		faction = "OPT_CSAT";
		displayName = "Mi-48 Kajman";
		maximumLoad = 2500;
		driverCanEject = 1;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"192Rnd_CMFlare_Chaff_Magazine"};
		fuelCapacity = 330; // 2500 //

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};

					class PylonLeft2
					{
						attachment = "OPT_PylonRack_19Rnd_Rocket_Skyfire";
						hardpoints[] = {"O_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						priority = 4;
						//turret[] = {0};
						UIposition[] = {0.08, 0.35};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_3Rnd_LG_scalpel";
					};

					class PylonRight2
					{
						attachment = "OPT_PylonRack_19Rnd_Rocket_Skyfire";
						hardpoints[] = {"O_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						mirroredMissilePos = 2;
						priority = 4;
						//turret[] = {0};
						UIposition[] = {0.57, 0.35};
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

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				canEject = 1;
				weapons[] = {"OPT_gatling_30mm"};
				magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green", "250Rnd_30mm_APDS_shells_Tracer_Green"};

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

		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPT_rockets_Skyfire";
			};

			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "OPT_gatling_30mm";
			};

			class Gatling
			{
				source = "revolving";
				weapon = "OPT_gatling_30mm";
			};
		};
	};

	class OPT_O_Heli_Attack_02_black_F : OPT_O_Heli_Attack_02_F
	{
		displayName = "Mi-48 Kajman (schwarz)";
		hiddenSelectionsTextures[] = {"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa", "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"};
	};

	//// PO-30 Orca ////
	class Heli_Light_02_base_F : Helicopter_Base_H
	{
	};

	class Heli_Light_02_dynamicLoadout_base_F : Heli_Light_02_base_F
	{
	};

	class O_Heli_Light_02_dynamicLoadout_F : Heli_Light_02_dynamicLoadout_base_F
	{
		class AnimationSources;
		class Turrets;
		class CopilotTurret;
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonRight1;
	};

	class OPT_O_Heli_Light_02_F : O_Heli_Light_02_dynamicLoadout_F
	{
		faction = "OPT_CSAT";
		maximumLoad = 2500;
		radarType = 8; // 4 //
		driverCanEject = 1;
		displayName = "PO-30 Orca (Scalpel)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		fuelCapacity = 210; // 800 //
		scope = 2;

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonWeapon_300Rnd_20mm_shells";
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_1Rnd_LG_scalpel";
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

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPT_missiles_DAGR";
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};
		};
	};

	class OPT_O_Heli_Light_02_Minigun_F : OPT_O_Heli_Light_02_F
	{
		displayName = "PO-30 Orca (Minigun)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		fuelCapacity = 210; // 800 //
		scope = 2;

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "PylonWeapon_2000Rnd_65x39_belt";
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "";
					};
				};
			};
		};
	};

	class OPT_O_Heli_Light_02_black_F : OPT_O_Heli_Light_02_F
	{
		displayName = "PO-30 Orca (Scalpel) [Schwarz]";
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	};

	class OPT_O_Heli_Light_02_Minigun_black_F : OPT_O_Heli_Light_02_Minigun_F
	{
		displayName = "PO-30 Orca (Minigun) [Schwarz]";
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	};

	class OPT_O_Heli_Light_02_v2_F : OPT_O_Heli_Light_02_F
	{
		displayName = "PO-30 Orca (Skyfire)";
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO", "\A3\Air_F_Heli\Heli_Light_02\Data\Rockets_CO.paa"};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonWeapon_300Rnd_20mm_shells"; //PylonWeapon_2000Rnd_65x39_belt//
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_19Rnd_Rocket_Skyfire"; //OPT_PylonRack_12Rnd_missiles//
					};
				};
			};
		};

		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPT_rockets_Skyfire";
			};
		};
	};

	class OPT_O_Heli_Light_02_v2_black_F : OPT_O_Heli_Light_02_v2_F
	{
		displayName = "PO-30 Orca (Skyfire) [Schwarz]";
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa", "\A3\Air_F_Heli\Heli_Light_02\Data\Rockets_CO.paa"};
	};

	class Heli_Light_02_unarmed_base_F : Heli_Light_02_base_F
	{
	};

	class O_Heli_Light_02_unarmed_F : Heli_Light_02_unarmed_base_F
	{
		class Turrets;
		class CopilotTurret;
	};

	//// PO-30 Orca (Unbewaffnet) ////
	class OPT_O_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F
	{
		faction = "OPT_CSAT";
		displayName = "PO-30 Orca (Unbewaffnet)";
		maximumLoad = 2500;
		driverCanEject = 1;
		radarType = 4;		// 8 //
		fuelCapacity = 210; // 800 //
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO"};

		class TransportItems
		{
		};

		class TransportMagazines
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};
		};
	};

	class OPT_O_Heli_Light_02_unarmed_black_F : OPT_O_Heli_Light_02_unarmed_F
	{
		displayName = "PO-30 Orca (Unbewaffnet) [Schwarz]";
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	};

	class Heli_Transport_04_base_F : Helicopter_Base_H
	{
	};

	class O_Heli_Transport_04_F : Heli_Transport_04_base_F
	{
		class Turrets;
		class CopilotTurret;
		class LoadMasterTurret;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
		class OpticsOut;
		class Monocular;
	};

	//// Mi-290 Taru ////
	class OPT_O_Heli_Transport_04_F : O_Heli_Transport_04_F
	{
		faction = "OPT_CSAT";
		displayName = "Mi-290 Taru";
		maximumLoad = 2500;
		driverCanEject = 1;
		radarType = 4;		// 8 //
		fuelCapacity = 330; // 2500 //

		class TransportItems
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;

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

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class LoadMasterTurret : LoadMasterTurret
			{
				canEject = 1;
			};
		};
	};

	class O_Heli_Transport_04_black_F : O_Heli_Transport_04_F
	{
	};

	class OPT_O_Heli_Transport_04_black_F : O_Heli_Transport_04_black_F
	{
		faction = "OPT_CSAT";
		displayName = "Mi-290 Taru (schwarz)";
		maximumLoad = 2500;
		driverCanEject = 1;
		radarType = 4;		// 8 //
		fuelCapacity = 330; // 2500 //
		scope = 2;
		scopeCurator = 2;

		class TransportItems
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;

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

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class LoadMasterTurret : LoadMasterTurret
			{
				canEject = 1;
			};
		};
	};

	class O_Heli_Transport_04_bench_F : Heli_Transport_04_base_F
	{
		class Turrets;
		class CopilotTurret;
		class LoadMasterTurret;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
		class OpticsOut;
		class Monocular;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CargoTurret_07;
		class CargoTurret_08;
	};

	//// Mi-290 Taru (Bench) ////
	class OPT_O_Heli_Transport_04_bench_F : O_Heli_Transport_04_bench_F
	{
		faction = "OPT_CSAT";
		displayName = "Mi-290 Taru (Bank)";
		maximumLoad = 2500;
		driverCanEject = 1;
		radarType = 4;		// 8 //
		fuelCapacity = 330; // 2500 //

		class TransportItems
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;

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

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class LoadMasterTurret : LoadMasterTurret
			{
				canEject = 1;
			};

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

			class CargoTurret_06 : CargoTurret_06
			{
			};

			class CargoTurret_07 : CargoTurret_07
			{
			};

			class CargoTurret_08 : CargoTurret_08
			{
			};
		};
	};

	class O_Heli_Transport_04_bench_black_F : O_Heli_Transport_04_bench_F
	{
	};

	class OPT_O_Heli_Transport_04_bench_black_F : O_Heli_Transport_04_bench_black_F
	{
		faction = "OPT_CSAT";
		displayName = "Mi-290 Taru (Bank)";
		maximumLoad = 2500;
		driverCanEject = 1;
		radarType = 4;		// 8 //
		fuelCapacity = 330; // 2500 //
		scope = 2;
		scopeCurator = 2;

		class TransportItems
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;

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

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class LoadMasterTurret : LoadMasterTurret
			{
				canEject = 1;
			};

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

			class CargoTurret_06 : CargoTurret_06
			{
			};

			class CargoTurret_07 : CargoTurret_07
			{
			};

			class CargoTurret_08 : CargoTurret_08
			{
			};
		};
	};

	class O_Heli_Transport_04_covered_F : Heli_Transport_04_base_F
	{
		class Turrets;
		class CopilotTurret;
		class LoadMasterTurret;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
		class OpticsOut;
		class Monocular;
		class CargoTurret_01;
		class CargoTurret_02;
	};

	//// Mi-290 Taru (Transport) ////
	class OPT_O_Heli_Transport_04_covered_F : O_Heli_Transport_04_covered_F
	{
		faction = "OPT_CSAT";
		displayName = "Mi-290 Taru (Transport)";
		driverCanEject = 1;
		radarType = 4;		// 8 //
		fuelCapacity = 330; // 2500 //
		slingLoadMaxCargoMass = 13500; // 0 //

		class TransportItems
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;

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

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class LoadMasterTurret : LoadMasterTurret
			{
				canEject = 1;
			};

			class CargoTurret_01 : CargoTurret_01
			{
			};

			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
	};

	class O_Heli_Transport_04_covered_black_F : O_Heli_Transport_04_covered_F
	{
	};

	class OPT_O_Heli_Transport_04_covered_black_F : O_Heli_Transport_04_covered_black_F
	{
		faction = "OPT_CSAT";
		displayName = "Mi-290 Taru (Transport)";
		driverCanEject = 1;
		radarType = 4;		// 8 //
		fuelCapacity = 330; // 2500 //
		scope = 2;
		scopeCurator = 2;
		slingLoadMaxCargoMass = 13500; // 0 //

		class TransportItems
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;

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

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class LoadMasterTurret : LoadMasterTurret
			{
				canEject = 1;
			};

			class CargoTurret_01 : CargoTurret_01
			{
			};

			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
	};

	class Heli_Transport_01_base_F : Helicopter_Base_H
	{
	};

	class B_Heli_Transport_01_F : Heli_Transport_01_base_F
	{
		class Turrets;
		class CopilotTurret;
		class MainTurret;
		class RightDoorGun;
	};

	//// UH-80 Ghost Hawk ////
	class OPT_B_Heli_Transport_01_F : B_Heli_Transport_01_F
	{
		faction = "OPT_NATO";
		displayName = "UH-80 Ghost Hawk";
		maximumLoad = 2500;
		driverCanEject = 1;
		fuelCapacity = 300; // 1360 //
		radarType = 4;		// 8 //

		class TransportItems
		{
		};

		class TransportMagazines
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};

			class MainTurret : MainTurret
			{
			};

			class RightDoorGun : RightDoorGun
			{
			};
		};
	};

	class Heli_Transport_03_base_F : Helicopter_Base_H
	{
	};

	class Heli_Transport_03_unarmed_base_F : Heli_Transport_03_base_F
	{
	};

	class B_Heli_Transport_03_unarmed_F : Heli_Transport_03_unarmed_base_F
	{
		class Turrets;
		class CopilotTurret;
		class MainTurret;
		class RightDoorGun;
		class CargoTurret_01;
		class CargoTurret_02;
	};

	//// CH-67 Huron (Unarmed) ////
	class OPT_B_Heli_Transport_03_unarmed_F : B_Heli_Transport_03_unarmed_F
	{
		faction = "OPT_NATO";
		displayName = "CH-67 Huron (Unbewaffnet)";
		liftForceCoef = 1.6; // 1.5 //
		maximumLoad = 2500;
		driverCanEject = 1;
		fuelCapacity = 300; // 1360 //
		radarType = 4;		// 8 //

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
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

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};

			class MainTurret : MainTurret
			{
			};

			class RightDoorGun : RightDoorGun
			{
			};

			class CargoTurret_01 : CargoTurret_01
			{
			};

			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
	};

	class B_Heli_Transport_03_F : Heli_Transport_03_base_F
	{
		class Turrets;
		class CopilotTurret;
		class MainTurret;
		class RightDoorGun;
		class CargoTurret_01;
		class CargoTurret_02;
	};

	//// CH-67 Huron ////
	class OPT_B_Heli_Transport_03_F : B_Heli_Transport_03_F
	{
		faction = "OPT_NATO";
		displayName = "CH-67 Huron";
		liftForceCoef = 1.6; // 1.5 //
		maximumLoad = 2500;
		driverCanEject = 1;
		fuelCapacity = 300; // 1360 //
		radarType = 4;		// 8 //

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
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

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};

			class MainTurret : MainTurret
			{
			};

			class RightDoorGun : RightDoorGun
			{
			};

			class CargoTurret_01 : CargoTurret_01
			{
			};

			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
	};

	class Heli_Attack_01_base_F : Helicopter_Base_F
	{
	};

	class Heli_Attack_01_dynamicLoadout_base_F : Heli_Attack_01_base_F
	{
	};

	class B_Heli_Attack_01_dynamicLoadout_F : Heli_Attack_01_dynamicLoadout_base_F
	{
		class Turrets;
		class MainTurret;
		class AnimationSources;
		class OpticsIn;
		class Wide;
		class Medium;
		class Narrow;
		class Gatling;
		class Missiles;
		class Muzzle_flash;
		class Components;
		class TransportPylonsComponent;
	};

	//// AH-99 Blackfoot ////
	class OPT_B_Heli_Attack_01_F : B_Heli_Attack_01_dynamicLoadout_F
	{
		faction = "OPT_NATO";
		displayName = "AH-99 Blackfoot";
		driverCanEject = 1;
		fuelCapacity = 130; // 500 //
		scope = 2;

		class TransportItems
		{
		};

		class TransportMagazines
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Presets
				{
					class Default
					{
						attachment[] = {"OPT_PylonMissile_1Rnd_AAA_missiles", "OPT_PylonMissile_1Rnd_LG_scalpel", "OPT_PylonRack_12Rnd_missiles", "OPT_PylonMissile_1Rnd_AAA_missiles", "OPT_PylonMissile_1Rnd_LG_scalpel", "OPT_PylonRack_12Rnd_missiles"};
						displayName = "Voreinst. (OPT)";
					};
				};

				class Pylons
				{
					class PylonLeft1
					{
						attachment = "OPT_PylonMissile_1Rnd_LG_scalpel";
						bay = 1;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR"};
						priority = 5;
						turret[] = {0};
						UIposition[] = {0.06, 0.4};
					};

					class PylonLeft2
					{
						attachment = "OPT_PylonMissile_1Rnd_AAA_missiles";
						bay = 1;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM"};
						priority = 4;
						turret[] = {0};
						UIposition[] = {0.08, 0.35};
					};

					class PylonLeft3
					{
						attachment = "OPT_PylonRack_12Rnd_missiles";
						bay = 1;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR"};
						priority = 3;
						//turret[] = {0};
						UIposition[] = {0.1, 0.3};
					};

					class PylonRight1 : PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.59, 0.4};
					};

					class PylonRight2 : PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.57, 0.35};
					};

					class PylonRight3 : PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.55, 0.3};
					};
				};
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				canEject = 1;
				weapons[] = {"OPT_gatling_20mm"};
				magazines[] = {"1000Rnd_20mm_shells"};

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

		class AnimationSources : AnimationSources
		{
			class Gatling : Gatling
			{
				weapon = "OPT_gatling_20mm";
			};

			class Missiles : Missiles
			{
				weapon = "OPT_missiles_DAGR";
			};

			class Muzzle_flash : Muzzle_flash
			{
				weapon = "OPT_gatling_20mm";
			};
		};

		class RenderTargets
		{
			class mfd
			{
				renderTarget = "rendertarget0";

				class CameraView1
				{
					fov = 0.1;
					pointDirection = "PIP0_dir";
					pointPosition = "PIP0_pos";
					renderQuality = 2;
					renderVisionMode = 0; // 2 //
				};
			};
		};
	};

	class Heli_Light_01_base_F : Helicopter_Base_H
	{
	};

	class Heli_Light_01_unarmed_base_F : Heli_Light_01_base_F
	{
	};

	class B_Heli_Light_01_F : Heli_Light_01_unarmed_base_F
	{
		class Turrets;
		class CopilotTurret;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class Components;
		class VehicleSystemsDisplayManagerComponentLeft;
		class VehicleSystemsDisplayManagerComponentRight;
	};

	//// MH-9 Hummingbird ////
	class OPT_B_Heli_Light_01_F : B_Heli_Light_01_F
	{
		faction = "OPT_NATO";
		displayName = "MH-9 Hummingbird";
		maximumLoad = 800;
		driverCanEject = 1;
		fuelCapacity = 60; // 242 //
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		unitInfoType = "RscUnitInfoAir";
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		incomingMissileDetectionSystem = "8 + 16";
		lockDetectionSystem = "8 + 4";

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5, 1, 0.5, 0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = "1e+010";
						maxTrackableSpeed = "1e+010";
						minSpeedThreshold = 0;
						minTrackableATL = "-1e+010";
						minTrackableSpeed = "-1e+010";
						typeRecognitionDistance = 12000;

						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};

						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsDisplayManagerComponentLeft
			{
				class Components : Components
				{
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};

					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsDisplayManagerComponentRight
			{
				defaultDisplay = "SensorDisplay";

				class Components : Components
				{

					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};

					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
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

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};

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
		};
	};

	class OPT_O_Heli_Light_01_F : OPT_B_Heli_Light_01_F
	{
		faction = "OPT_CSAT";
		side = 0;
		crew = "OPT_CSAT_Pilot";
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\mh9\csat\heli_light_01_csat.paa"};
	};

	class Heli_Light_01_armed_base_F : Heli_Light_01_base_F
	{
	};

	class Heli_Light_01_dynamicLoadout_base_F : Heli_Light_01_armed_base_F
	{
	};

	class B_Heli_Light_01_dynamicLoadout_F : Heli_Light_01_dynamicLoadout_base_F
	{
		class AnimationSources;
		class Turrets;
		class CopilotTurret;
		class GunL_Revolving;
		class GunR_Revolving;
		class Muzzle_flash;
		class Missiles_revolving;
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonRight1;
		class VehicleSystemsDisplayManagerComponentLeft;
		class VehicleSystemsDisplayManagerComponentRight;
	};

	//// AH-9 Pawnee ////
	class OPT_B_Heli_Light_01_armed_F : B_Heli_Light_01_dynamicLoadout_F
	{
		faction = "OPT_NATO";
		displayName = "AH-9 Pawnee (DAR)";
		maximumLoad = 800;
		weapons[] = {"OPT_M134_minigun", "OPT_CMFlareLauncher"};
		magazines[] = {"5000Rnd_762x51_Belt", "96Rnd_CMFlare_Chaff_Magazine"};
		driverCanEject = 1;
		fuelCapacity = 60; // 242 //
#include "\opt_vehicles\Hellcat_MFD.hpp"
		incomingMissileDetectionSystem = "8 + 16";
		lockDetectionSystem = "8 + 4";

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonRack_12Rnd_missiles";
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_12Rnd_missiles";
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
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5, 1, 0.5, 0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = "1e+010";
						maxTrackableSpeed = "1e+010";
						minSpeedThreshold = 0;
						minTrackableATL = "-1e+010";
						minTrackableSpeed = "-1e+010";
						typeRecognitionDistance = 12000;

						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};

						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsDisplayManagerComponentLeft
			{
				class Components : Components
				{
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};

					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsDisplayManagerComponentRight
			{
				defaultDisplay = "SensorDisplay";

				class Components : Components
				{
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};

					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
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

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class AnimationSources : AnimationSources
		{
			class GunL_Revolving : GunL_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class GunR_Revolving : GunR_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class Muzzle_flash : Muzzle_flash
			{
				weapon = "OPT_M134_minigun";
			};

			class Missiles_revolving : Missiles_revolving
			{
				weapon = "OPT_missiles_DAR";
			};
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};
		};
	};

	class OPT_O_Heli_Light_01_armed_F : OPT_B_Heli_Light_01_armed_F
	{
		faction = "OPT_CSAT";
		side = 0;
		crew = "OPT_CSAT_Pilot";
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\mh9\csat\heli_light_01_csat.paa"};
	};

	class OPT_B_Heli_Light_01_armed_2_F : OPT_B_Heli_Light_01_armed_F
	{
		displayName = "AH-9 Pawnee (Scalpel)";
		weapons[] = {"OPT_M134_minigun", "OPT_CMFlareLauncher"};
		magazines[] = {"5000Rnd_762x51_Belt", "96Rnd_CMFlare_Chaff_Magazine"};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonRack_1Rnd_LG_scalpel";
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_1Rnd_LG_scalpel";
					};
				};
			};
		};

		class AnimationSources : AnimationSources
		{
			class GunL_Revolving : GunL_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class GunR_Revolving : GunR_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class Muzzle_flash : Muzzle_flash
			{
				weapon = "OPT_M134_minigun";
			};

			class Missiles_revolving : Missiles_revolving
			{
				weapon = "OPT_missiles_SCALPEL";
			};
		};
	};

	class Heli_Transport_02_base_F : Helicopter_Base_H
	{
	};

	class I_Heli_Transport_02_F : Heli_Transport_02_base_F
	{
		class Turrets;
		class CopilotTurret;
		class CargoTurret_01;
		class CargoTurret_02;
	};

	//// CH-49 Mohawk ////
	class OPT_I_Heli_Transport_02_F : I_Heli_Transport_02_F
	{
		_generalMacro = "OPT_I_Heli_Transport_02_F";
		faction = "OPT_AAF";
		displayName = "CH-49 Mohawk";
		maximumLoad = 2500;
		driverCanEject = 1;
		fuelCapacity = 330; // 2500 //
		radarType = 4;		// 8 //

		class TransportItems
		{
		};

		class TransportMagazines
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				canEject = 1;
			};

			class CargoTurret_01 : CargoTurret_01
			{
			};

			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
	};

	class OPT_B_Heli_Transport_02_F : OPT_I_Heli_Transport_02_F
	{
		_generalMacro = "OPT_B_Heli_Transport_02_F";
		faction = "OPT_NATO";
		side = 1;
		crew = "OPT_NATO_Pilot";
		slingLoadMaxCargoMass = 10000; // 4000 //
		liftForceCoef = 1.4;		   // 1 //
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\mohawk\nato\blufor_mohawk_1.paa", "opt_vehicles\textures\mohawk\nato\blufor_mohawk_2.paa", "opt_vehicles\textures\mohawk\nato\blufor_mohawk_3.paa", "A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
	};

	class OPT_O_Heli_Transport_02_F : OPT_I_Heli_Transport_02_F
	{
		_generalMacro = "OPT_O_Heli_Transport_02_F";
		faction = "OPT_CSAT";
		side = 0;
		crew = "OPT_CSAT_Pilot";
		slingLoadMaxCargoMass = 10000; // 4000 //
		liftForceCoef = 1.4;		   // 1 //
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\mohawk\csat\Heli_Transport1_02_CSAT.paa", "opt_vehicles\textures\mohawk\csat\Heli_Transport2_02_CSAT.paa", "opt_vehicles\textures\mohawk\csat\Heli_Transport3_02_CSAT.paa", "A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
	};

	class Heli_light_03_base_F : Helicopter_Base_F
	{
	};

	class Heli_light_03_dynamicLoadout_base_F : Heli_light_03_base_F
	{
	};

	class I_Heli_light_03_dynamicLoadout_F : Heli_light_03_dynamicLoadout_base_F
	{
		class RenderTargets;
		class Copilot_display;
		class CameraView1;
		class Turrets;
		class MainTurret;
		class OpticsIn;
		class OpticsOut;
		class Monocular;
		class CargoTurret_01;
		class CargoTurret_02;
		class Wide;
		class Medium;
		class Narrow;
		class AnimationSources;
		class GunL_Revolving;
		class GunR_Revolving;
		class Missiles_revolving;
		class Muzzle_flash;
		class muzzle_hide;
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonRight1;
	};
	//// WY-55 Hellcat ////
	class OPT_I_Heli_light_03_F : I_Heli_light_03_dynamicLoadout_F
	{
		faction = "OPT_AAF";
		displayname = "WY-55 Hellcat";
		maximumLoad = 2500;
		driverCanEject = 1;
		weapons[] = {"OPT_M134_minigun", "CMFlareLauncher"};
		magazines[] = {"5000Rnd_762x51_Yellow_Belt", "168Rnd_CMFlare_Chaff_Magazine"};
		fuelCapacity = 190;			  // 742 //
		slingLoadMaxCargoMass = 1000; // 2000 //

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonRack_12Rnd_missiles";
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_12Rnd_missiles";
					};
				};
			};
		};

		class RenderTargets : RenderTargets
		{
			class Copilot_display : Copilot_display
			{
				renderTarget = "rendertarget0";

				class CameraView1 : CameraView1
				{
					renderVisionMode = 0;
				};
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				canEject = 1;
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
						visionMode[] = {"Normal", "NVG"};
					};
				};

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class CargoTurret_01 : CargoTurret_01
			{
			};

			class CargoTurret_02 : CargoTurret_02
			{
			};
		};

		class AnimationSources : AnimationSources
		{
			class GunL_Revolving : GunL_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class GunR_Revolving : GunR_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class Missiles_revolving : Missiles_revolving
			{
				weapon = "OPT_missiles_DAR";
			};

			class Muzzle_flash : Muzzle_flash
			{
				weapon = "OPT_M134_minigun";
			};

			class muzzle_hide : muzzle_hide
			{
				weapon = "OPT_M134_minigun";
			};
		};

		class TransportItems
		{
		};

		class TransportMagazines
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};
	};

	class OPT_O_Heli_light_03_F : OPT_I_Heli_light_03_F
	{
		side = 0;
		displayName = "WY-55 Hellcat (DAR)";
		faction = "OPT_CSAT";
		crew = "OPT_CSAT_Pilot";
		typicalCargo[] = {"OPT_CSAT_Pilot"};
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\hellcat\csat\Heli_light_03_CSAT.paa"};
		scope = 2;
	};

	class OPT_O_Heli_light_03_green_F : OPT_O_Heli_light_03_F
	{
		displayName = "WY-55 Hellcat (DAR) [Grün]";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	};

	class OPT_I_Heli_light_03_Scalpel_F : I_Heli_light_03_dynamicLoadout_F
	{
		faction = "OPT_AAF";
		displayname = "WY-55 Hellcat (Scalpel)";
		maximumLoad = 2500;
		driverCanEject = 1;
		weapons[] = {"OPT_M134_minigun", "CMFlareLauncher"};
		magazines[] = {"5000Rnd_762x51_Yellow_Belt", "168Rnd_CMFlare_Chaff_Magazine"};
		fuelCapacity = 190;			  // 742 //
		slingLoadMaxCargoMass = 1000; // 2000 //

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonMissile_1Rnd_LG_scalpel";
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonMissile_1Rnd_LG_scalpel";
					};
				};
			};
		};

		class RenderTargets : RenderTargets
		{
			class Copilot_display : Copilot_display
			{
				renderTarget = "rendertarget0";

				class CameraView1 : CameraView1
				{
					renderVisionMode = 0;
				};
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				canEject = 1;
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
						visionMode[] = {"Normal", "NVG"};
					};
				};

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
					{
						visionMode[] = {"Normal", "NVG"};
					};
				};
			};

			class CargoTurret_01 : CargoTurret_01
			{
			};

			class CargoTurret_02 : CargoTurret_02
			{
			};
		};

		class AnimationSources : AnimationSources
		{
			class GunL_Revolving : GunL_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class GunR_Revolving : GunR_Revolving
			{
				weapon = "OPT_M134_minigun";
			};

			class Missiles_revolving : Missiles_revolving
			{
				weapon = "OPT_missiles_SCALPEL";
			};

			class Muzzle_flash : Muzzle_flash
			{
				weapon = "OPT_M134_minigun";
			};

			class muzzle_hide : muzzle_hide
			{
				weapon = "OPT_M134_minigun";
			};
		};

		class TransportItems
		{
		};

		class TransportMagazines
		{
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};
	};

	class OPT_O_Heli_light_03_Scalpel_F : OPT_I_Heli_light_03_Scalpel_F
	{
		side = 0;
		displayName = "WY-55 Hellcat (Scalpel)";
		faction = "OPT_CSAT";
		crew = "OPT_CSAT_Pilot";
		typicalCargo[] = {"OPT_CSAT_Pilot"};
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\hellcat\csat\Heli_light_03_CSAT.paa"};
		scope = 2;
	};

	class OPT_O_Heli_light_03_Scalpel_green_F : OPT_O_Heli_light_03_Scalpel_F
	{
		displayName = "WY-55 Hellcat (Scalpel) [Grün]";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	};

	class Heli_light_03_unarmed_base_F : Heli_light_03_base_F
	{
	};

	class I_Heli_light_03_unarmed_F : Heli_light_03_unarmed_base_F
	{
		class RenderTargets;
		class Copilot_display;
		class CameraView1;
		class Turrets;
		class MainTurret;
		class OpticsIn;
		class OpticsOut;
		class Monocular;
		class Wide;
		class Medium;
		class Narrow;
	};

	//// WY-55 Hellcat (Green) ////
	class OPT_I_Heli_light_03_unarmed_F : I_Heli_light_03_unarmed_F
	{
		faction = "OPT_AAF";
		displayname = "WY-55 Hellcat (Unbewaffnet)";
		maximumLoad = 2500;
		driverCanEject = 1;
		fuelCapacity = 190; // 742 //
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		slingLoadMaxCargoMass = 1000; // 2000 //

		class RenderTargets : RenderTargets
		{
			class Copilot_display : Copilot_display
			{
				renderTarget = "rendertarget0";

				class CameraView1 : CameraView1
				{
					renderVisionMode = 0;
				};
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				canEject = 1;
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
						visionMode[] = {"Normal", "NVG"};
					};
				};

				class OpticsOut : OpticsOut
				{
					class Monocular : Monocular
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

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};

		class TransportWeapons
		{
		};
	};

	class OPT_O_Heli_light_03_unarmed_F : OPT_I_Heli_light_03_unarmed_F
	{
		side = 0;
		faction = "OPT_CSAT";
		crew = "OPT_CSAT_Pilot";
		typicalCargo[] = {"OPT_CSAT_Pilot"};
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\hellcat\csat\Heli_light_03_CSAT.paa"};
	};

	class OPT_O_Heli_light_03_unarmed_green_F : OPT_O_Heli_light_03_unarmed_F
	{
		displayname = "WY-55 Hellcat (Unbewaffnet) [Grün]";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	};

	class OPT_B_Heli_light_03_unarmed_green_F : OPT_O_Heli_light_03_unarmed_green_F
	{
		faction = "OPT_NATO";
		side = 1;
		crew = "OPT_NATO_Pilot";
	};
};