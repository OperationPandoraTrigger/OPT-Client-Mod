class CfgPatches
{
	class opt_vehicles_vtol
	{
		units[] = {"OPT_B_T_VTOL_01_infantry_F", "OPT_B_T_VTOL_01_vehicle_F", "OPT_O_T_VTOL_01_vehicle_F", "OPT_B_T_VTOL_01_armed_F", "OPT_O_T_VTOL_02_infantry_F", "OPT_O_T_VTOL_02_infantry_unarmed_F", "OPT_B_T_VTOL_02_infantry_unarmed_F", "OPT_O_T_VTOL_02_vehicle_F",
				   "OPT_O_T_VTOL_02_vehicle_unarmed_F"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "A3_Air_F_Exp_VTOL_01", "A3_Air_F_Exp_VTOL_02"};
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

	class Plane_Base_F : Plane
	{
	};

	class VTOL_Base_F : Plane_Base_F
	{
	};

	class VTOL_01_base_F : VTOL_Base_F
	{
	};

	class VTOL_01_unarmed_base_F : VTOL_01_base_F
	{
	};

	class VTOL_01_infantry_base_F : VTOL_01_unarmed_base_F
	{
	};

	class B_T_VTOL_01_infantry_F : VTOL_01_infantry_base_F
	{
		class Turrets;
		class CopilotTurret;
		class OpticsIn;
		class Medium;
		class Narrow;
		class Wide;
	};

	//////////////// V44 X Blackfish (Infantrie)/////////////////////
	class OPT_B_T_VTOL_01_infantry_F : B_T_VTOL_01_infantry_F
	{
		faction = "OPT_NATO_T";
		fuelCapacity = 500; //1000//
		weapons[] = {"OPT_CMFlareLauncher_Triples"};
		magazines[] = {"OPT_72Rnd_CMFlare_Chaff_Magazine"};

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

	class VTOL_01_vehicle_base_F : VTOL_01_unarmed_base_F
	{
	};

	class B_T_VTOL_01_vehicle_F : VTOL_01_vehicle_base_F
	{
		class Turrets;
		class CopilotTurret;
		class OpticsIn;
		class Medium;
		class Narrow;
		class Wide;
	};

	//////////////// V44 X Blackfish (Fahrzeug)/////////////////////
	class OPT_B_T_VTOL_01_vehicle_F : B_T_VTOL_01_vehicle_F
	{
		faction = "OPT_NATO_T";
		fuelCapacity = 500; //1000//
		weapons[] = {"OPT_CMFlareLauncher_Triples"};
		magazines[] = {"OPT_72Rnd_CMFlare_Chaff_Magazine"};

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

	class OPT_O_T_VTOL_01_vehicle_F : OPT_B_T_VTOL_01_vehicle_F
	{
		side = 0;
		faction = "OPT_CSAT_T";
		crew = "OPT_CSAT_Pilot";
		typicalCargo[] = {"OPT_CSAT_Pilot"};
		hiddenSelectionsTextures[] = {"opt_vehicles\textures\blackfish\csat\VTOL_01_EXT01_SandNL_CO.paa", "opt_vehicles\textures\blackfish\csat\VTOL_01_EXT02_SandNL_CO.paa", "opt_vehicles\textures\blackfish\csat\VTOL_01_EXT03_SandNL_CO.paa", "opt_vehicles\textures\blackfish\csat\VTOL_01_EXT04_SandNL_CO.paa"};
	};

	class VTOL_01_armed_base_F : VTOL_01_base_F
	{
	};

	class B_T_VTOL_01_armed_F : VTOL_01_armed_base_F
	{
		class Turrets;
		class CopilotTurret;
		class OpticsIn;
		class Medium;
		class Wide;
		class Narrow;
		class GunnerTurret_01;
		class GunnerTurret_02;
	};

	//////////////// V44 X Blackfish (Bewaffnet)/////////////////////
	class OPT_B_T_VTOL_01_armed_F : B_T_VTOL_01_armed_F
	{
		faction = "OPT_NATO_T";
		fuelCapacity = 500; //1000//
		weapons[] = {"OPT_CMFlareLauncher_Triples"};
		magazines[] = {"OPT_72Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelectionsTextures[] = {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa", "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa", "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa", "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};

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

			class GunnerTurret_01 : GunnerTurret_01
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
				};
			};

			class GunnerTurret_02 : GunnerTurret_02
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
				};
			};
		};
	};

	class VTOL_02_base_F : VTOL_Base_F
	{
	};

	class VTOL_02_infantry_base_F : VTOL_02_base_F
	{
	};

	class VTOL_02_infantry_dynamicLoadout_base_F : VTOL_02_infantry_base_F
	{
	};

	class O_T_VTOL_02_infantry_dynamicLoadout_F : VTOL_02_infantry_dynamicLoadout_base_F
	{
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonLeft2;
		class PylonRight1;
		class PylonRight2;
		class Turrets;
		class GunnerTurret;
		class OpticsIn;
		class Medium;
		class Narrow;
		class Wide;
		class AnimationSources;
		class SensorsManagerComponent;
		class ActiveRadarSensorComponent;
	};

	//////////////// Y-32 Xi'an (Infantrie)/////////////////////
	class OPT_O_T_VTOL_02_infantry_F : O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		faction = "OPT_CSAT_T";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlare_Chaff_Magazine"};
		fuelCapacity = 500; //1000//

		class Components : Components
		{
			//#include "\opt_vehicles\kein_aktivradar.hpp"

			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonRack_4Rnd_LG_scalpel";
					};

					class PylonLeft2
					{
						attachment = "OPT_PylonRack_19Rnd_Rocket_Skyfire";
						hardpoints[] = {"O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						priority = 4;
						//turret[] = {0};
						UIposition[] = {0.33, 0.21};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_4Rnd_LG_scalpel";
					};

					class PylonRight2
					{
						attachment = "OPT_PylonRack_19Rnd_Rocket_Skyfire";
						hardpoints[] = {"O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						mirroredMissilePos = 2;
						priority = 4;
						//turret[] = {0};
						UIposition[] = {0.33, 0.34};
					};
				};
			};
		};

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

		class RenderTargets
		{
			class Gunner01_pip
			{
				renderTarget = "rendertarget0";

				class CameraView1
				{
					fov = 0.4;
					pointDirection = "Cannon_pip_dir";
					pointPosition = "Cannon_pip_pos";
					renderQuality = 2;
					renderVisionMode = 0; // 2 //
				};
			};
		};

		class Turrets : Turrets
		{
			class GunnerTurret : GunnerTurret
			{
				magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green", "250Rnd_30mm_APDS_shells_Tracer_Green", "Laserbatteries"};
				weapons[] = {"OPT_gatling_30mm_VTOL_02", "Laserdesignator_mounted"};

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
			class Cannon_muzzleflash_source
			{
				source = "reload";
				weapon = "OPT_gatling_30mm_VTOL_02";
			};

			class Cannon_revolving_source
			{
				source = "revolving";
				weapon = "OPT_gatling_30mm_VTOL_02";
			};

			class Missiles_revolving_source
			{
				source = "revolving";
				weapon = "OPT_missiles_SCALPEL";
			};

			class Rockets_revolving_source
			{
				source = "revolving";
				weapon = "OPT_rockets_Skyfire";
			};
		};
	};

	class OPT_O_T_VTOL_02_infantry_unarmed_F : O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		faction = "OPT_CSAT_T";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlare_Chaff_Magazine"};
		displayName = "Y-32 Xi'an (Unbewaffnet)[Infanterie]";
		fuelCapacity = 500; //1000//

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

		class RenderTargets
		{
			class Gunner01_pip
			{
				renderTarget = "rendertarget0";

				class CameraView1
				{
					fov = 0.4;
					pointDirection = "Cannon_pip_dir";
					pointPosition = "Cannon_pip_pos";
					renderQuality = 2;
					renderVisionMode = 0; // 2 //
				};
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons
				{
				};
			};
		};

		class Turrets : Turrets
		{
			class GunnerTurret : GunnerTurret
			{
				magazines[] = {"Laserbatteries"};
				weapons[] = {"Laserdesignator_mounted"};

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

	class OPT_B_T_VTOL_02_infantry_unarmed_F : OPT_O_T_VTOL_02_infantry_unarmed_F
	{
		faction = "OPT_NATO_T";
		side = 1;
		crew = "OPT_NATO_Pilot";
		typicalCargo[] = {"OPT_NATO_Pilot"};

		class TextureSources
		{

			class Green
			{
				displayName = "Green";
				factions[] = {"OPT_NATO"};
				textures[] = {"\opt_vehicles\textures\xian\nato\VTOL_02_EXT01_green_CO.paa", "\opt_vehicles\textures\xian\nato\VTOL_02_EXT02_green_CO.paa", "\opt_vehicles\textures\xian\nato\VTOL_02_EXT03_L_green_CO.paa", "\opt_vehicles\textures\xian\nato\VTOL_02_EXT03_R_green_CO.paa"};
			};
		};

		textureList[] = {"Green", 1};
	};

	class VTOL_02_vehicle_base_F : VTOL_02_base_F
	{
	};

	class VTOL_02_vehicle_dynamicLoadout_base_F : VTOL_02_vehicle_base_F
	{
	};

	class O_T_VTOL_02_vehicle_dynamicLoadout_F : VTOL_02_vehicle_dynamicLoadout_base_F
	{
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonLeft2;
		class PylonRight1;
		class PylonRight2;
		class Turrets;
		class GunnerTurret;
		class OpticsIn;
		class Medium;
		class Narrow;
		class Wide;
		class AnimationSources;
		class SensorsManagerComponent;
		class ActiveRadarSensorComponent;
	};

	//////////////// Y-32 Xi'an (Fahrzeug)/////////////////////
	class OPT_O_T_VTOL_02_vehicle_F : O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		faction = "OPT_CSAT_T";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlare_Chaff_Magazine"};
		fuelCapacity = 500; //1000//

		class Components : Components
		{
			//#include "\opt_vehicles\kein_aktivradar.hpp"

			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "OPT_PylonRack_4Rnd_LG_scalpel";
					};

					class PylonLeft2
					{
						attachment = "OPT_PylonRack_19Rnd_Rocket_Skyfire";
						hardpoints[] = {"O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						priority = 4;
						//turret[] = {0};
						UIposition[] = {0.33, 0.21};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "OPT_PylonRack_4Rnd_LG_scalpel";
					};

					class PylonRight2
					{
						attachment = "OPT_PylonRack_19Rnd_Rocket_Skyfire";
						hardpoints[] = {"O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						mirroredMissilePos = 2;
						priority = 4;
						//turret[] = {0};
						UIposition[] = {0.33, 0.34};
					};
				};
			};
		};

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

		class RenderTargets
		{
			class Gunner01_pip
			{
				renderTarget = "rendertarget0";

				class CameraView1
				{
					fov = 0.4;
					pointDirection = "Cannon_pip_dir";
					pointPosition = "Cannon_pip_pos";
					renderQuality = 2;
					renderVisionMode = 0; // 2 //
				};
			};
		};

		class Turrets : Turrets
		{
			class GunnerTurret : GunnerTurret
			{
				magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green", "250Rnd_30mm_APDS_shells_Tracer_Green", "Laserbatteries"};
				weapons[] = {"OPT_gatling_30mm_VTOL_02", "Laserdesignator_mounted"};

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
			class Cannon_muzzleflash_source
			{
				source = "reload";
				weapon = "OPT_gatling_30mm_VTOL_02";
			};

			class Cannon_revolving_source
			{
				source = "revolving";
				weapon = "OPT_gatling_30mm_VTOL_02";
			};

			class Missiles_revolving_source
			{
				source = "revolving";
				weapon = "OPT_missiles_SCALPEL";
			};

			class Rockets_revolving_source
			{
				source = "revolving";
				weapon = "OPT_rockets_Skyfire";
			};
		};
	};

	class OPT_O_T_VTOL_02_vehicle_unarmed_F : O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		faction = "OPT_CSAT_T";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlare_Chaff_Magazine"};
		displayName = "Y-32 Xi'an (Unbewaffnet)[Fahrzeug]";
		fuelCapacity = 500; //1000//

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

		class RenderTargets
		{
			class Gunner01_pip
			{
				renderTarget = "rendertarget0";

				class CameraView1
				{
					fov = 0.4;
					pointDirection = "Cannon_pip_dir";
					pointPosition = "Cannon_pip_pos";
					renderQuality = 2;
					renderVisionMode = 0; // 2 //
				};
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons
				{
				};
			};
		};

		class Turrets : Turrets
		{
			class GunnerTurret : GunnerTurret
			{
				magazines[] = {"Laserbatteries"};
				weapons[] = {"Laserdesignator_mounted"};

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