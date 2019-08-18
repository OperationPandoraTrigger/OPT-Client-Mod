class CfgPatches
{
	class opt_vehicles_boat
	{
		units[] = {"OPT_B_Boat_Armed_01_minigun_F", "OPT_O_Boat_Armed_01_hmg_F", "OPT_B_Boat_Transport_01_F", "OPT_O_Boat_Transport_01_F", "OPT_B_SDV_01_F", "OPT_O_SDV_01_F"};
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
		displayName = "Benötigt OPT Vehicles";
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
		faction = "OPT_NATO";
		displayName = "Schnellboot-Minigun";
		maximumLoad = 2500;

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
		faction = "OPT_CSAT";
		displayName = "Schnellboot HMG";
		maximumLoad = 2500;

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

	class Rubber_duck_base_F : Boat_F
	{
	};

	class B_Boat_Transport_01_F : Rubber_duck_base_F
	{
	};

	//// Assault Boat ////
	class OPT_B_Boat_Transport_01_F : B_Boat_Transport_01_F
	{
		faction = "OPT_NATO";
		displayName = "Kampfboot";
		maximumLoad = 800;

		class TransportItems
		{
		};
	};

	class O_Boat_Transport_01_F : Rubber_duck_base_F
	{
	};

	class OPT_O_Boat_Transport_01_F : O_Boat_Transport_01_F
	{
		faction = "OPT_CSAT";
		displayName = "Kampfboot";
		maximumLoad = 800;

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
		faction = "OPT_NATO";
		displayName = "RHIB";
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
		faction = "OPT_CSAT";
		displayName = "RHIB";
		hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\rhib\csat\rhib_csat_0.paa", "\opt\opt_client\addons\vehicles\textures\rhib\csat\rhib_csat_1.paa"};
		textureList[] = {};
		side = 0;
		crew = "O_T_Soldier_F";
		typicalCargo[] = {"O_T_Soldier_F", "O_T_Soldier_F"};
		maximumLoad = 2500;

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
		faction = "OPT_NATO";
		displayName = "SDV";
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
		faction = "OPT_CSAT";
		displayName = "SDV";
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
};