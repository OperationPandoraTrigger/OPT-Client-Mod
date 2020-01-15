class CfgPatches
{
	class opt_vehicles_mbt
	{
		units[] = {"OPT_B_MBT_01_cannon_F","OPT_B_MBT_01_cannon_ghex_F", "OPT_B_MBT_01_TUSK_F","OPT_B_MBT_01_TUSK_ghex_F", "OPT_B_MBT_01_arty_F","OPT_B_MBT_01_arty_ghex_F", "OPT_B_MBT_01_mlrs_F","OPT_B_MBT_01_mlrs_ghex_F",
				   "OPT_O_MBT_02_cannon_F", "OPT_O_T_MBT_02_cannon_ghex_F", "OPT_O_MBT_02_arty_F", "OPT_O_T_MBT_02_arty_ghex_F", "OPT_B_MBT_03_cannon_F","OPT_B_MBT_03_cannon_ghex_F"};
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
		displayName = "M2A1 Slammer";
		maximumLoad = 2500;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "M2A1 Slammer";
		maximumLoad = 2500;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"
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
		displayName = "M2A4 Slammer UP";
		maximumLoad = 2500;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "M2A4 Slammer UP";
		maximumLoad = 2500;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"
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
		displayName = "M4 Scorcher";
		maximumLoad = 800;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "M4 Scorcher";
		maximumLoad = 800;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"
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
		displayName = "M5 Sandstorm MLRS";
		maximumLoad = 800;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "M5 Sandstorm MLRS";
		maximumLoad = 800;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"
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
		displayName = "T-100 Varsuk";
		maximumLoad = 800;
		fuelCapacity = 12; // 75 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "T-100 Varsuk";
		maximumLoad = 800;
		fuelCapacity = 12; // 75 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "2S9 Sochor";
		maximumLoad = 800;
		fuelCapacity = 12; // 75 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "2S9 Sochor";
		maximumLoad = 800;
		fuelCapacity = 12; // 75 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		displayName = "MBT-52 Kuma";
		maximumLoad = 800;
		fuelCapacity = 12; // 100 //
		//#include "\opt\opt_client\addons\vehicles\berggang.hpp"

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
		//hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
		//hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\kuma\nato\TankBodyTexture.paa", "\opt\opt_client\addons\vehicles\textures\kuma\nato\TankTurretTexture.paa", "\opt\opt_client\addons\vehicles\textures\kuma\nato\TankTurretMGTexture.paa"};
	};
};