class CfgPatches
{
	class opt_vehicles_apc
	{
		units[] = {"OPT_B_APC_Wheeled_01_cannon_F", "OPT_B_APC_Wheeled_01_cannon_light_F", "OPT_B_APC_Tracked_01_rcws_F", "OPT_B_APC_Tracked_01_AA_F", "OPT_O_APC_Wheeled_02_rcws_F", "OPT_O_T_APC_Wheeled_02_rcws_ghex_F", "OPT_B_APC_tracked_03_cannon_F",
				   "OPT_O_APC_Tracked_02_cannon_F", "OPT_O_APC_Tracked_02_cannon_light_F", "OPT_O_APC_Tracked_02_AA_F", "OPT_O_T_APC_Tracked_02_AA_ghex_F", "OPT_O_APC_Wheeled_03_cannon_F", "OPT_O_APC_Wheeled_03_cannon_light_F",
				   "OPT_O_T_APC_Tracked_02_cannon_ghex_F", "OPT_O_T_APC_Tracked_02_cannon_ghex_light_F"};
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

	class LandVehicle;

	class Tank : LandVehicle
	{
	};

	class Tank_F : Tank
	{
	};

	class Car : LandVehicle
	{
		class ACE_SelfActions;
	};

	class Car_F : Car
	{
	};

	class Wheeled_APC_F : Car_F
	{
	};

	class APC_Wheeled_01_base_F : Wheeled_APC_F
	{
	};

	class B_APC_Wheeled_01_base_F : APC_Wheeled_01_base_F
	{
	};

	class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F
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
		class muzzle_hide;
	};

	////// AMV-7 Marshall //////
	class OPT_B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F
	{
		faction = "OPT_NATO";
		displayName = "AMV-7 Marshall";
		maximumLoad = 2500;
		fuelCapacity = 8; // 60 //

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_40mm_CTWS", "LMG_M200_body"};
				magazines[] = {"60Rnd_40mm_GPR_Tracer_Red_shells", "60Rnd_40mm_GPR_Tracer_Red_shells", "60Rnd_40mm_GPR_Tracer_Red_shells", "60Rnd_40mm_GPR_Tracer_Red_shells", "40Rnd_40mm_APFSDS_Tracer_Red_shells", "40Rnd_40mm_APFSDS_Tracer_Red_shells", "2000Rnd_65x39_belt"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_rot : muzzle_rot
			{
				weapon = "OPT_autocannon_40mm_CTWS";
			};

			class muzzle_hide : muzzle_hide
			{
				weapon = "OPT_autocannon_40mm_CTWS";
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

	class OPT_B_APC_Wheeled_01_cannon_light_F : OPT_B_APC_Wheeled_01_cannon_F
	{
		faction = "OPT_NATO";
		displayname = "AMV-7 Marshall (Leicht)";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_40mm_CTWS_HE", "LMG_M200_body"};
				magazines[] = {"60Rnd_40mm_GPR_Tracer_Red_shells", "60Rnd_40mm_GPR_Tracer_Red_shells", "60Rnd_40mm_GPR_Tracer_Red_shells", "2000Rnd_65x39_belt"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_rot : muzzle_rot
			{
				weapon = "OPT_autocannon_40mm_CTWS_HE";
			};

			class muzzle_hide : muzzle_hide
			{
				weapon = "OPT_autocannon_40mm_CTWS_HE";
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

	class APC_Tracked_01_base_F : Tank_F
	{
		class Turrets;
		class MainTurret;
		class CommanderOptics;
		class ViewOptics;
		class ViewGunner;
	};

	class B_APC_Tracked_01_base_F : APC_Tracked_01_base_F
	{
	};

	class B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_base_F
	{
	};

	//// IFV-6c Panther ////
	class OPT_B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F
	{
		faction = "OPT_NATO";
		displayName = "IFV-6c Panther";
		maximumLoad = 2500;
		fuelCapacity = 12; // 45 //
		//#include "\opt_vehicles\berggang.hpp"

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics : ViewOptics
				{
					visionMode[] = {"Normal", "NVG"};
				};
			};

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

	class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F
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

	//// IFV-6a Cheetah ////
	class OPT_B_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F
	{
		faction = "OPT_NATO";
		displayName = "IFV-6a Cheetah";
		maximumLoad = 800;
		fuelCapacity = 12; // 45 //
		//#include "\opt_vehicles\berggang.hpp"

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_35mm", "OPT_missiles_titan"};
				magazines[] = {"OPT_680Rnd_35mm_AA_shells_Tracer_Red", "OPT_680Rnd_35mm_AA_shells_Tracer_Red", "4Rnd_Titan_long_missiles", "4Rnd_Titan_long_missiles"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_rot : muzzle_rot
			{
				weapon = "OPT_autocannon_35mm";
			};

			class Missiles_revolving : Missiles_revolving
			{
				weapon = "OPT_missiles_titan";
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

	class APC_Wheeled_02_base_F : Wheeled_APC_F
	{
	};

	class APC_Wheeled_02_base_v2_F : APC_Wheeled_02_base_F
	{
	};

	class O_APC_Wheeled_02_rcws_v2_F : APC_Wheeled_02_base_v2_F
	{
		class Turrets;
		class MainTurret;
		class ViewOptics;
	};

	//// MSE-3 Marid ////
	class OPT_O_APC_Wheeled_02_rcws_F : O_APC_Wheeled_02_rcws_v2_F
	{
		faction = "OPT_CSAT";
		displayName = "MSE-3 Marid";
		maximumLoad = 2500;
		fuelCapacity = 9; // 45 //
#include "\opt_vehicles\Fahrzeug-Transport.hpp"

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

	class O_T_APC_Wheeled_02_rcws_v2_ghex_F : APC_Wheeled_02_base_v2_F
	{
		class Turrets;
		class MainTurret;
		class ViewOptics;
	};

	class OPT_O_T_APC_Wheeled_02_rcws_ghex_F : O_T_APC_Wheeled_02_rcws_v2_ghex_F
	{
		faction = "OPT_CSAT_T";
		displayName = "MSE-3 Marid";
		maximumLoad = 2500;
		fuelCapacity = 9; // 60 //
		//#include "\opt_vehicles\Fahrzeug-Transport.hpp"

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

	class APC_Tracked_03_base_F : Tank_F
	{
	};

	class I_APC_tracked_03_base_F : APC_Tracked_03_base_F
	{
	};

	class I_APC_tracked_03_cannon_F : I_APC_tracked_03_base_F
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
	};

	class OPT_I_APC_tracked_03_cannon_F : I_APC_tracked_03_cannon_F
	{
		faction = "OPT_AAF";
		displayName = "FV-720 Mora";
		maximumLoad = 2500;
		fuelCapacity = 5; // 60 //
		//#include "\opt_vehicles\berggang.hpp"

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
				weapons[] = {"OPT_autocannon_30mm", "LMG_coax"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Yellow", "60Rnd_30mm_APFSDS_shells_Tracer_Yellow", "1000Rnd_762x51_Belt_Yellow", "1000Rnd_762x51_Belt_Yellow"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_hide
			{
				source = "reload";
				weapon = "OPT_autocannon_30mm";
			};

			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "OPT_autocannon_30mm";
			};
		};
	};

	class OPT_B_APC_tracked_03_cannon_F : OPT_I_APC_tracked_03_cannon_F
	{
		side = 1;
		faction = "OPT_NATO";
		crew = "OPT_NATO_Besatzungsmitglied";
		typicalCargo[] = {"OPT_NATO_Besatzungsmitglied"};
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\mora\nato\TurretTexture.paa", "opt_vehicles\textures\mora\nato\BodyTexture.paa"};
	};

	class APC_Tracked_02_base_F : Tank_F
	{
	};

	class O_APC_Tracked_02_base_F : APC_Tracked_02_base_F
	{
	};

	class O_APC_Tracked_02_cannon_F : O_APC_Tracked_02_base_F
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
		class UserActions;
		class AnimationSources;
	};

	//// BTR-K Kamysh ////
	class OPT_O_APC_Tracked_02_cannon_F : O_APC_Tracked_02_cannon_F
	{
		faction = "OPT_CSAT";
		displayname = "BTR-K Kamysh (Titan)";
		maximumLoad = 2500;
		fuelCapacity = 12; // 45 //
		//#include "\opt_vehicles\berggang.hpp"

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_30mm_CTWS", "LMG_M200", "OPT_missiles_titan"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Green", "60Rnd_30mm_APFSDS_shells_Tracer_Green", "1000Rnd_65x39_Belt_Green", "2Rnd_GAT_missiles", "2Rnd_GAT_missiles"};

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

		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPT_missiles_titan";
			};

			class muzzle_hide
			{
				source = "reload";
				weapon = "OPT_autocannon_30mm_CTWS";
			};

			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "OPT_autocannon_30mm_CTWS";
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

	class OPT_O_APC_Tracked_02_cannon_light_F : OPT_O_APC_Tracked_02_cannon_F
	{
		displayname = "BTR-K Kamysh";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_30mm_CTWS", "LMG_M200"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Green", "60Rnd_30mm_APFSDS_shells_Tracer_Green", "1000Rnd_65x39_Belt_Green"};
			};
		};
	};

	class O_T_APC_Tracked_02_cannon_ghex_F : O_APC_Tracked_02_cannon_F
	{
	};

	class OPT_O_T_APC_Tracked_02_cannon_ghex_F : O_T_APC_Tracked_02_cannon_ghex_F
	{
		faction = "OPT_CSAT_T";
		displayname = "BTR-K Kamysh (Titan)";
		maximumLoad = 2500;
		fuelCapacity = 12; // 45 //
		//#include "\opt_vehicles\berggang.hpp"

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_30mm_CTWS", "LMG_M200", "OPT_missiles_titan"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Green", "60Rnd_30mm_APFSDS_shells_Tracer_Green", "1000Rnd_65x39_Belt_Green", "2Rnd_GAT_missiles", "2Rnd_GAT_missiles"};

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

		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPT_missiles_titan";
			};

			class muzzle_hide
			{
				source = "reload";
				weapon = "OPT_autocannon_30mm_CTWS";
			};

			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "OPT_autocannon_30mm_CTWS";
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

	class OPT_O_T_APC_Tracked_02_cannon_ghex_light_F : OPT_O_T_APC_Tracked_02_cannon_ghex_F
	{
		displayname = "BTR-K Kamysh";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_30mm_CTWS", "LMG_M200"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Green", "60Rnd_30mm_APFSDS_shells_Tracer_Green", "1000Rnd_65x39_Belt_Green"};
			};
		};
	};

	class O_APC_Tracked_02_AA_F : O_APC_Tracked_02_base_F
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

	//// ZSU-39 Tigris ////
	class OPT_O_APC_Tracked_02_AA_F : O_APC_Tracked_02_AA_F
	{
		faction = "OPT_CSAT";
		displayName = "ZSU-39 Tigris";
		maximumLoad = 800;
		fuelCapacity = 12; // 45 //
		//#include "\opt_vehicles\berggang.hpp"

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_35mm", "OPT_missiles_titan"};
				magazines[] = {"OPT_680Rnd_35mm_AA_shells_Tracer_Green", "OPT_680Rnd_35mm_AA_shells_Tracer_Green", "4Rnd_Titan_long_missiles", "4Rnd_Titan_long_missiles"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_rot : muzzle_rot
			{
				weapon = "OPT_autocannon_35mm";
			};

			class Missiles_revolving : Missiles_revolving
			{
				weapon = "OPT_missiles_titan";
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

	class O_T_APC_Tracked_02_AA_ghex_F : O_APC_Tracked_02_AA_F
	{
	};

	class OPT_O_T_APC_Tracked_02_AA_ghex_F : O_T_APC_Tracked_02_AA_ghex_F
	{
		faction = "OPT_CSAT_T";
		displayName = "ZSU-39 Tigris";
		maximumLoad = 800;
		fuelCapacity = 12; // 45 //
		//#include "\opt_vehicles\berggang.hpp"

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_35mm", "OPT_missiles_titan"};
				magazines[] = {"OPT_680Rnd_35mm_AA_shells_Tracer_Green", "4Rnd_Titan_long_missiles", "4Rnd_Titan_long_missiles"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_rot : muzzle_rot
			{
				weapon = "OPT_autocannon_35mm";
			};

			class Missiles_revolving : Missiles_revolving
			{
				weapon = "OPT_missiles_titan";
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

	class APC_Wheeled_03_base_F : Wheeled_APC_F
	{
	};

	class I_APC_Wheeled_03_base_F : APC_Wheeled_03_base_F
	{
	};

	class I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_base_F
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
		class muzzle_hide;
	};

	//// AFV-4 Gorgon ////
	class OPT_I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_cannon_F
	{
		faction = "OPT_AAF";
		displayName = "AFV-4 Gorgon";
		maximumLoad = 2500;
		fuelCapacity = 9; // 60 //

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"autocannon_30mm_CTWS", "LMG_M200", "missiles_titan"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Yellow", "60Rnd_30mm_APFSDS_shells_Tracer_Yellow", "1000Rnd_65x39_Belt_Yellow", "2Rnd_GAT_missiles"};

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

	class OPT_O_APC_Wheeled_03_cannon_F : OPT_I_APC_Wheeled_03_cannon_F
	{
		crew = "OPT_CSAT_Besatzungsmitglied";
		typicalCargo[] = {"OPT_CSAT_Besatzungsmitglied"};
		side = 0;
		faction = "OPT_CSAT";
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\gorgon\csat\apc_wheeled_03_ext_coCSAT.paa", "opt_vehicles\textures\gorgon\csat\apc_wheeled_03_ext2_coCSAT.paa", "opt_vehicles\textures\gorgon\csat\rcws30_coCSAT.paa", "opt_vehicles\textures\gorgon\csat\apc_wheeled_03_ext_alpha_coCSAT.paa"};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_40mm_CTWS", "LMG_M200"};
				magazines[] = {"60Rnd_40mm_GPR_Tracer_Green_shells", "60Rnd_40mm_GPR_Tracer_Green_shells", "60Rnd_40mm_GPR_Tracer_Green_shells", "60Rnd_40mm_GPR_Tracer_Green_shells", "40Rnd_40mm_APFSDS_Tracer_Green_shells", "40Rnd_40mm_APFSDS_Tracer_Green_shells", "2000Rnd_65x39_belt"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_rot : muzzle_rot
			{
				weapon = "OPT_autocannon_40mm_CTWS";
			};

			class muzzle_hide : muzzle_hide
			{
				weapon = "OPT_autocannon_40mm_CTWS";
			};
		};
	};

	class OPT_O_APC_Wheeled_03_cannon_light_F : OPT_O_APC_Wheeled_03_cannon_F
	{
		displayName = "AFV-4 Gorgon (Leicht)";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"OPT_autocannon_40mm_CTWS_HE", "LMG_M200"};
				magazines[] = {"60Rnd_40mm_GPR_Tracer_Green_shells", "60Rnd_40mm_GPR_Tracer_Green_shells", "60Rnd_40mm_GPR_Tracer_Green_shells", "2000Rnd_65x39_belt"};

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

		class AnimationSources : AnimationSources
		{
			class muzzle_rot : muzzle_rot
			{
				weapon = "OPT_autocannon_40mm_CTWS_HE";
			};

			class muzzle_hide : muzzle_hide
			{
				weapon = "OPT_autocannon_40mm_CTWS_HE";
			};
		};
	};
};