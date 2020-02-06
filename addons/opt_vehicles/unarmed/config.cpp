class CfgPatches
{
	class opt_vehicles_unarmed
	{
		units[] = {"OPT4_B_MRAP_01_gmg_F","OPT4_B_MRAP_01_gmg_ghex_F", "OPT4_B_MRAP_01_hmg_F","OPT4_B_MRAP_01_hmg_ghex_F", "OPT4_O_MRAP_02_hmg_F", "OPT4_O_T_MRAP_02_hmg_ghex_F", "OPT4_O_MRAP_02_gmg_F", "OPT4_O_T_MRAP_02_gmg_ghex_F", "OPT4_B_MRAP_03_hmg_F", "OPT4_B_MRAP_03_gmg_F",
				   "OPT4_O_Heli_Attack_02_F", "OPT4_O_Heli_Attack_02_black_F", "OPT4_B_Heli_Attack_01_F", "OPT4_B_Heli_Attack_01_F", "OPT4_B_Heli_Light_01_armed_F", "OPT4_O_Heli_Light_01_armed_F",
				   "OPT4_O_Heli_light_03_F", " OPT4_O_Heli_light_03_green_F", "OPT4_O_Heli_Light_02_F", "OPT4_O_Heli_Light_02_black_F",
				   "OPT4_B_APC_Wheeled_01_cannon_F", "OPT4_B_APC_Wheeled_01_cannon_ghex_F", "OPT4_B_APC_Tracked_01_rcws_F","OPT4_B_APC_Tracked_01_rcws_ghex_F", "OPT4_B_APC_Tracked_01_AA_F","OPT_B_APC_Tracked_01_AA_ghex_F","OPT_B_APC_Tracked_01_AA_ghex_F2", "OPT4_B_MBT_01_cannon_F","OPT4_B_MBT_01_cannon_ghex_F",
				   "OPT4_B_MBT_01_TUSK_F","OPT_B_MBT_01_TUSK_ghex_F", "OPT4_B_MBT_01_arty_F","OPT4_B_MBT_01_arty_ghex_F", "OPT4_B_MBT_01_mlrs_F","OPT4_B_MBT_01_mlrs_ghex_F", "OPT4_O_APC_Wheeled_02_rcws_F", "OPT4_O_T_APC_Wheeled_02_rcws_ghex_F", "OPT4_B_APC_tracked_03_cannon_F","OPT4_B_APC_tracked_03_cannon_ghex_F", "OPT4_O_APC_Tracked_02_cannon_F",
				   "OPT4_O_T_APC_Tracked_02_cannon_ghex_F", "OPT4_O_APC_Tracked_02_AA_F", "OPT4_O_T_APC_Tracked_02_AA_ghex_F","OPT4_O_T_APC_Tracked_02_AA_ghex_F2", "OPT4_O_MBT_02_cannon_F", "OPT4_O_T_MBT_02_cannon_ghex_F", "OPT4_O_MBT_02_arty_F", "OPT4_O_T_MBT_02_arty_ghex_F",
				   "OPT4_O_APC_Wheeled_03_cannon_F","OPT4_O_APC_Wheeled_03_cannon_ghex_F", "OPT4_B_MBT_03_cannon_F","OPT4_B_MBT_03_cannon_ghex_F", "OPT4_B_LSV_01_AT_F","OPT4_B_LSV_01_AT_ghex_F", "OPT4_O_LSV_02_AT_F", "OPT4_O_Truck_02_MRL_F","OPT4_O_LSV_02_AT_GHEX_F"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_armor_f", "a3_soft_f", "a3_soft_f_mrap_01", "a3_soft_f_mrap_02", "a3_soft_f_mrap_03", "a3_armor_f_panther",
							"a3_armor_f_beta_apc_tracked_02", "a3_armor_f_slammer", "a3_armor_f_t100k", "a3_armor_f_amv", "a3_armor_f_epb_apc_tracked_03", "a3_armor_f_apc_wheeled_03",
							"a3_soft_f_hemtt", "a3_soft_f_gamma_hemtt", "a3_armor_f_epb_mbt_03", "a3_air_f_gamma_plane_fighter_03", "a3_air_f_beta_heli_transport_02", "a3_air_f_epb_heli_light_03",
							"a3_soft_f_gamma_offroad", "a3_soft_f_gamma_quadbike", "a3_soft_f_truck", "a3_boat_f_boat_armed_01", "a3_soft_f_car", "a3_soft_f_offroad_01", "a3_soft_f_quadbike",
							"a3_soft_f_beta_quadbike", "a3_soft_f_suv", "a3_boat_f_civilian_boat", "a3_boat_f_boat_transport_01", "a3_boat_f_gamma_boat_transport_01", "a3_soft_f_epc_truck_03",
							"a3_air_f_epc_plane_cas_02", "a3_air_f_epc_plane_cas_01", "a3_armor_f_epc_mbt_01", "a3_soft_f_bootcamp_offroad_01", "a3_air_f_heli_heli_transport_04",
							"a3_air_f_heli_heli_transport_03", "a3_air_f_beta_heli_attack_02", "a3_air_f_heli_light_01", "a3_air_f_beta_heli_attack_01", "a3_air_f_beta_heli_transport_01",
							"a3_air_f_heli_light_02", "a3_air_f_heli_heli_light_02", "a3_air_f_gamma_uav_01", "A3_Air_F_Exp", "A3_Air_F_Exp_VTOL_01", "A3_Air_F_Exp_VTOL_02", "A3_Soft_F_Exp", "A3_Soft_F_Exp_LSV_01", "A3_Soft_F_Exp_LSV_02",
							"A3_Soft_F_Exp_MRAP_02", "A3_Soft_F_Exp_Truck_03", "A3_Air_F_Jets", "A3_Air_F_Jets_Plane_Fighter_01", "A3_Air_F_Jets_Plane_Fighter_02"};
	};
};

class CfgVehicles
{
	//// Hunter GMG ////
	class B_MRAP_01_gmg_F;

	class OPT_B_MRAP_01_gmg_F : B_MRAP_01_gmg_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MRAP_01_gmg_F : OPT_B_MRAP_01_gmg_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	class B_T_MRAP_01_gmg_F;

	class OPT_B_MRAP_01_gmg_ghex_F : B_T_MRAP_01_gmg_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MRAP_01_gmg_ghex_F : OPT_B_MRAP_01_gmg_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	//// Hunter HMG ////
	class B_MRAP_01_hmg_F;

	class OPT_B_MRAP_01_hmg_F : B_MRAP_01_hmg_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MRAP_01_hmg_F : OPT_B_MRAP_01_hmg_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	class B_T_MRAP_01_hmg_F;

	class OPT_B_MRAP_01_hmg_ghex_F : B_T_MRAP_01_hmg_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MRAP_01_hmg_ghex_F : OPT_B_MRAP_01_hmg_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	//// Ifrit HMG ////
	class O_MRAP_02_hmg_F;

	class OPT_O_MRAP_02_hmg_F : O_MRAP_02_hmg_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_MRAP_02_hmg_F : OPT_O_MRAP_02_hmg_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	class O_T_MRAP_02_hmg_ghex_F;

	class OPT_O_T_MRAP_02_hmg_ghex_F : O_T_MRAP_02_hmg_ghex_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_T_MRAP_02_hmg_ghex_F : OPT_O_T_MRAP_02_hmg_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	class O_MRAP_02_gmg_F;

	class OPT_O_MRAP_02_gmg_F : O_MRAP_02_gmg_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_MRAP_02_gmg_F : OPT_O_MRAP_02_gmg_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	class O_T_MRAP_02_gmg_ghex_F;

	class OPT_O_T_MRAP_02_gmg_ghex_F : O_T_MRAP_02_gmg_ghex_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_T_MRAP_02_gmg_ghex_F : OPT_O_T_MRAP_02_gmg_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};

	class OPT_I_MRAP_03_hmg_F;

	class OPT_B_MRAP_03_hmg_F : OPT_I_MRAP_03_hmg_F
	{
		class Turrets;
		class MainTurret;
		class CommanderTurret;
	};

	class OPT4_B_MRAP_03_hmg_F : OPT_B_MRAP_03_hmg_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};

			class CommanderTurret : CommanderTurret
			{
			};
		};
	};

	class OPT_I_MRAP_03_gmg_F;

	class OPT_B_MRAP_03_gmg_F : OPT_I_MRAP_03_gmg_F
	{
		class Turrets;
		class MainTurret;
		class CommanderTurret;
	};

	class OPT4_B_MRAP_03_gmg_F : OPT_B_MRAP_03_gmg_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};

			class CommanderTurret : CommanderTurret
			{
			};
		};
	};

	//// Mi-48 Kajman ////
	class O_Heli_Attack_02_dynamicLoadout_F;

	class OPT_O_Heli_Attack_02_F : O_Heli_Attack_02_dynamicLoadout_F
	{
		class Turrets;
		class MainTurret;
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonLeft2;
		class PylonRight1;
		class PylonRight2;
	};

	class OPT4_O_Heli_Attack_02_F : OPT_O_Heli_Attack_02_F
	{
		weapons[] = {"OPT_CMFlareLauncher_Triples"};
		magazines[] = {"OPT_30Rnd_CMFlare_Chaff_Magazine"};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonLeft2 : PylonLeft2
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonRight2 : PylonRight2
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};
				};
			};
		};
	};

	class OPT_O_Heli_Attack_02_black_F : OPT_O_Heli_Attack_02_F
	{
	};

	class OPT4_O_Heli_Attack_02_black_F : OPT_O_Heli_Attack_02_black_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonLeft2 : PylonLeft2
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonRight2 : PylonRight2
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};
				};
			};
		};
	};

	//// AH-99 Blackfoot ////
	class B_Heli_Attack_01_dynamicLoadout_F;

	class OPT_B_Heli_Attack_01_F : B_Heli_Attack_01_dynamicLoadout_F
	{
		class Turrets;
		class MainTurret;
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonLeft2;
		class PylonLeft3;
		class PylonRight1;
		class PylonRight2;
		class PylonRight3;
	};

	class OPT4_B_Heli_Attack_01_F : OPT_B_Heli_Attack_01_F
	{
		weapons[] = {"OPT_CMFlareLauncher_Triples"};
		magazines[] = {"OPT_30Rnd_CMFlare_Chaff_Magazine"};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "";
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						maxweight = 1000;
					};

					class PylonLeft2 : PylonLeft2
					{
						attachment = "";
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						maxweight = 1000;
					};

					class PylonLeft3 : PylonLeft3
					{
						attachment = "";
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						maxweight = 1000;
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "";
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						maxweight = 1000;
					};

					class PylonRight2 : PylonRight2
					{
						attachment = "";
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						maxweight = 1000;
					};

					class PylonRight3 : PylonRight3
					{
						attachment = "";
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
						maxweight = 1000;
					};
				};
			};
		};
	};

	//// AH-9 Pawnee ////
	class B_Heli_Light_01_dynamicLoadout_F;

	class OPT_B_Heli_Light_01_armed_F : B_Heli_Light_01_dynamicLoadout_F
	{
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonRight1;
	};

	class OPT4_B_Heli_Light_01_armed_F : OPT_B_Heli_Light_01_armed_F
	{
		displayName = "AH-9 Pawnee";
		weapons[] = {"OPT_CMFlareLauncher"};
		magazines[] = {"96Rnd_CMFlare_Chaff_Magazine"};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};
				};
			};
		};
	};

	class OPT4_O_Heli_Light_01_armed_F : OPT4_B_Heli_Light_01_armed_F
	{
		displayName = "AH-9 Pawnee";
		faction = "OPT_CSAT";
		side = 0;
		crew = "OPT_CSAT_Pilot";
		hiddenSelectionsTextures[] = {"\opt\opt_client\addons\vehicles\textures\mh9\csat\heli_light_01_csat.paa"};
	};

	//// WY-55 Hellcat ////
	class OPT_I_Heli_light_03_F;

	class OPT_O_Heli_light_03_F : OPT_I_Heli_light_03_F
	{
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonRight1;
	};

	class OPT4_O_Heli_light_03_F : OPT_O_Heli_light_03_F
	{
		weapons[] = {"OPT_CMFlareLauncher_Triples"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};
				};
			};
		};
	};

	class OPT4_O_Heli_light_03_green_F : OPT4_O_Heli_light_03_F
	{
		displayName = "WY-55 Hellcat (Grün)";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	};

	class OPT4_B_Heli_light_03_green_F : OPT4_O_Heli_light_03_green_F
	{
		faction = "OPT_NATO";
		side = 1;
		crew = "OPT_NATO_Pilot";
	};

	class O_Heli_Light_02_dynamicLoadout_F;

	class OPT_O_Heli_Light_02_F : O_Heli_Light_02_dynamicLoadout_F
	{
		class Components;
		class TransportPylonsComponent;
		class Pylons;
		class PylonLeft1;
		class PylonRight1;
	};

	class OPT4_O_Heli_Light_02_F : OPT_O_Heli_Light_02_F
	{
		displayName = "PO-30 Orca";
		weapons[] = {"OPT_CMFlareLauncher_Triples"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};

		class Components : Components
		{
			class TransportPylonsComponent : TransportPylonsComponent
			{
				class Pylons : Pylons
				{
					class PylonLeft1 : PylonLeft1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};

					class PylonRight1 : PylonRight1
					{
						attachment = "";
						maxweight = 1000;
						hardpoints[] = {"B_AMRAAM", "O_AMRAAM", "B_ASRAAM", "O_ASRAAM", "DAR", "DAGR", "O_MISSILE_PYLON", "B_MISSILE_PYLON", "O_BOMB_PYLON_HELI", "B_BOMB_PYLON_HELI", "UNI_SCALPEL", "20MM_TWIN_CANNON"};
					};
				};
			};
		};
	};

	class OPT4_O_Heli_Light_02_black_F : OPT4_O_Heli_Light_02_F
	{
		displayName = "PO-30 Orca (Schwarz)";
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	};

	////// AMV-7 Marshall //////
	class B_APC_Wheeled_01_cannon_F;

	class OPT_B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_APC_Wheeled_01_cannon_F : OPT_B_APC_Wheeled_01_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_APC_Wheeled_01_cannon_ghex_F : B_APC_Wheeled_01_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_APC_Wheeled_01_cannon_ghex_F : OPT_B_APC_Wheeled_01_cannon_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};


	//// IFV-6c Panther ////
	class B_APC_Tracked_01_rcws_F;

	class OPT_B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_APC_Tracked_01_rcws_F : OPT_B_APC_Tracked_01_rcws_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_APC_Tracked_01_rcws_ghex_F : B_APC_Tracked_01_rcws_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_APC_Tracked_01_rcws_ghex_F : OPT_B_APC_Tracked_01_rcws_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// IFV-6a Cheetah ////
	class B_APC_Tracked_01_AA_F;

	class OPT_B_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_APC_Tracked_01_AA_F : OPT_B_APC_Tracked_01_AA_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_APC_Tracked_01_AA_ghex_F : B_APC_Tracked_01_AA_F
	{
		class Turrets;
		class MainTurret;
		class Components;
		class SensorTemplateActiveRadar;
		class SensorTemplateDataLink;
		class SensorTemplateMan;
	};

	class OPT4_B_APC_Tracked_01_AA_ghex_F : OPT_B_APC_Tracked_01_AA_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	// Sonderfahrzeug als Radarersatz
	class OPT4_B_APC_Tracked_01_AA_ghex_F2 : OPT_B_APC_Tracked_01_AA_ghex_F
	{
		displayName = "SonderFahrzeug Radarersatz";
		fuelCapacity = 0; 
		editorPreview = "\A3\EditorPreviews_F_Sams\Data\Cfgvehicles\B_Radar_System_01_F.jpg";
		icon = "\A3\Static_F_Sams\Radar_System_01\Data\UI\Radar_System_01_icon_CA.paa";
		model = "\A3\Static_F_Sams\Radar_System_01\Radar_System_01_F.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_01_CO.paa","A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_02_CO.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};

		class Components: Components 
		{
			class SensorsManagerComponent 
			{
				class Components 
				{
					class ManSensorComponent : SensorTemplateMan 
					{
						class AirTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 3000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						nightRangeCoef = 1;
						maxFogSeeThrough= -1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						animDirection = "cannon_barrel";
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar 
					{
						aimDown = -45;
						class AirTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						class GroundTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 27.7778;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 694.444;
						minSpeedThreshold = 20.8333;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 6000;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink 
					{
						aimDown = 0;
						class AirTarget 
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						class GroundTarget 
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
					};
				};
			};
		};
				
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// M2A1 Slammer ////
	class B_MBT_01_cannon_F;

	class OPT_B_MBT_01_cannon_F : B_MBT_01_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_cannon_F : OPT_B_MBT_01_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_MBT_01_cannon_ghex_F : B_MBT_01_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_cannon_ghex_F : OPT_B_MBT_01_cannon_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// M2A4 Slammer UP ////
	class B_MBT_01_TUSK_F;

	class OPT_B_MBT_01_TUSK_F : B_MBT_01_TUSK_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_TUSK_F : OPT_B_MBT_01_TUSK_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_MBT_01_TUSK_ghex_F : B_MBT_01_TUSK_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_TUSK_ghex_F : OPT_B_MBT_01_TUSK_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// M4 Scorcher ////
	class B_MBT_01_arty_F;

	class OPT_B_MBT_01_arty_F : B_MBT_01_arty_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_arty_F : OPT_B_MBT_01_arty_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_MBT_01_arty_ghex_F : B_MBT_01_arty_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_arty_ghex_F : OPT_B_MBT_01_arty_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// M5 Sandstorm MLRS ////
	class B_MBT_01_mlrs_F;

	class OPT_B_MBT_01_mlrs_F : B_MBT_01_mlrs_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_mlrs_F : OPT_B_MBT_01_mlrs_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_MBT_01_mlrs_ghex_F : B_MBT_01_mlrs_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_01_mlrs_ghex_F : OPT_B_MBT_01_mlrs_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// MSE-3 Marid ////

	class O_APC_Wheeled_02_rcws_v2_F;

	class OPT_O_APC_Wheeled_02_rcws_F : O_APC_Wheeled_02_rcws_v2_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_APC_Wheeled_02_rcws_F : OPT_O_APC_Wheeled_02_rcws_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class O_T_APC_Wheeled_02_rcws_v2_ghex_F;

	class OPT_O_T_APC_Wheeled_02_rcws_ghex_F : O_T_APC_Wheeled_02_rcws_v2_ghex_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_T_APC_Wheeled_02_rcws_ghex_F : OPT_O_T_APC_Wheeled_02_rcws_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// FV-720 Mora ////
	class OPT_I_APC_tracked_03_cannon_F;

	class OPT_B_APC_tracked_03_cannon_F : OPT_I_APC_tracked_03_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_APC_tracked_03_cannon_F : OPT_B_APC_tracked_03_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_APC_tracked_03_cannon_ghex_F : OPT_I_APC_tracked_03_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_APC_tracked_03_cannon_ghex_F : OPT_B_APC_tracked_03_cannon_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// BTR-K Kamysh ////
	class O_APC_Tracked_02_cannon_F;

	class OPT_O_APC_Tracked_02_cannon_F : O_APC_Tracked_02_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_APC_Tracked_02_cannon_F : OPT_O_APC_Tracked_02_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class O_T_APC_Tracked_02_cannon_ghex_F;

	class OPT_O_T_APC_Tracked_02_cannon_ghex_F : O_T_APC_Tracked_02_cannon_ghex_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_T_APC_Tracked_02_cannon_ghex_F : OPT_O_T_APC_Tracked_02_cannon_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// ZSU-39 Tigris ////
	class O_APC_Tracked_02_AA_F;

	class OPT_O_APC_Tracked_02_AA_F : O_APC_Tracked_02_AA_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_APC_Tracked_02_AA_F : OPT_O_APC_Tracked_02_AA_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class O_T_APC_Tracked_02_AA_ghex_F;

	class OPT_O_T_APC_Tracked_02_AA_ghex_F : O_T_APC_Tracked_02_AA_ghex_F
	{
		class Turrets;
		class MainTurret;
		class Components;
		class SensorTemplateActiveRadar;
		class SensorTemplateDataLink;
		class SensorTemplateMan;
		
	};

	class OPT4_O_T_APC_Tracked_02_AA_ghex_F : OPT_O_T_APC_Tracked_02_AA_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//Sonderfahrzeug als Radarersatz
	class OPT4_O_T_APC_Tracked_02_AA_ghex_F2 : OPT_O_T_APC_Tracked_02_AA_ghex_F
	{
		displayName = "SonderFahrzeug Radarersatz";
		fuelCapacity = 0; 
		faction = "OPT_CSAT_T";
		editorPreview = "\A3\EditorPreviews_F_Sams\Data\Cfgvehicles\O_Radar_System_02_F.jpg";
		icon = "\A3\Static_F_Sams\Radar_System_02\Data\UI\Radar_System_02_icon_CA.paa";
		model = "\A3\Static_F_Sams\Radar_System_02\Radar_System_02_F.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"A3\Static_F_Sams\Radar_System_02\Data\Radar_system_02_mat_01_CO.paa","A3\Static_F_Sams\Radar_System_02\Data\Radar_system_02_mat_02_CO.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};

		class Components: Components 
		{
			class SensorsManagerComponent 
			{
				class Components 
				{
					class ManSensorComponent : SensorTemplateMan 
					{
						class AirTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 3000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						nightRangeCoef = 1;
						maxFogSeeThrough= -1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						animDirection = "cannon_barrel";
					};

					class ActiveRadarSensorComponent: SensorTemplateActiveRadar 
					{
						aimDown = -45;
						class AirTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						class GroundTarget 
						{
							maxRange = 2500;
							minRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 27.7778;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 694.444;
						minSpeedThreshold = 20.8333;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 6000;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink 
					{
						aimDown = 0;
						class AirTarget 
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						class GroundTarget 
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
					};
				};
			};
		};
		
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// T-100 Varsuk ////
	class O_MBT_02_cannon_F;

	class OPT_O_MBT_02_cannon_F : O_MBT_02_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_MBT_02_cannon_F : OPT_O_MBT_02_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class O_T_MBT_02_cannon_ghex_F;

	class OPT_O_T_MBT_02_cannon_ghex_F : O_T_MBT_02_cannon_ghex_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_T_MBT_02_cannon_ghex_F : OPT_O_T_MBT_02_cannon_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class O_MBT_02_arty_F;

	class OPT_O_MBT_02_arty_F : O_MBT_02_arty_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_MBT_02_arty_F : OPT_O_MBT_02_arty_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class O_T_MBT_02_arty_ghex_F;

	class OPT_O_T_MBT_02_arty_ghex_F : O_T_MBT_02_arty_ghex_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_T_MBT_02_arty_ghex_F : OPT_O_T_MBT_02_arty_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_I_APC_Wheeled_03_cannon_F;

	class OPT_O_APC_Wheeled_03_cannon_F : OPT_I_APC_Wheeled_03_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_APC_Wheeled_03_cannon_F : OPT_O_APC_Wheeled_03_cannon_F
	{
		textureList[] = {"Guerilla_01",0,"Guerilla_02",0,"Guerilla_03",1};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_O_APC_Wheeled_03_cannon_ghex_F : OPT_I_APC_Wheeled_03_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_APC_Wheeled_03_cannon_ghex_F : OPT_O_APC_Wheeled_03_cannon_ghex_F 
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	//// MBT-52 Kuma ////
	class OPT_I_MBT_03_cannon_F;

	class OPT_B_MBT_03_cannon_F : OPT_I_MBT_03_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_03_cannon_F : OPT_B_MBT_03_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

	class OPT_B_MBT_03_cannon_ghex_F : OPT_I_MBT_03_cannon_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_B_MBT_03_cannon_ghex_F : OPT_B_MBT_03_cannon_ghex_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {};
				magazines[] = {};
			};
		};
	};

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

	class OPT4_B_LSV_01_AT_F : B_LSV_01_AT_F
	{
		faction = "OPT_NATO";
		displayName = "Prowler (AT)";
		fuelCapacity = 3; // 20 //
		maximumLoad = 2500;
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
				magazines[] = {};
				weapons[] = {};

				class ViewOptics : ViewOptics
				{
					visionMode[] = {"Normal", "NVG"};
				};
			};
		};
	};

	class OPT4_B_LSV_01_AT_ghex_F : B_LSV_01_AT_F
	{
		faction = "OPT_NATO_T";
		displayName = "Prowler (AT)";
		fuelCapacity = 3; // 20 //
		maximumLoad = 2500;
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
				magazines[] = {};
				weapons[] = {};

				class ViewOptics : ViewOptics
				{
					visionMode[] = {"Normal", "NVG"};
				};
			};
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

	class OPT4_O_LSV_02_AT_F : O_LSV_02_AT_F
	{
		faction = "OPT_CSAT";
		displayName = "Qilin (AT)";
		fuelCapacity = 4; // 20 //
		maximumLoad = 2500;

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
				magazines[] = {};
				weapons[] = {};

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

	class OPT4_O_LSV_02_AT_GHEX_F : O_LSV_02_AT_F
	{
		faction = "OPT_CSAT_T";
		displayName = "Qilin (AT)";
		fuelCapacity = 4; // 20 //
		maximumLoad = 2500;

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
				magazines[] = {};
				weapons[] = {};

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

	class OPT_I_Truck_02_MRL_F;

	class OPT_O_Truck_02_MRL_F : OPT_I_Truck_02_MRL_F
	{
		class Turrets;
		class MainTurret;
	};

	class OPT4_O_Truck_02_MRL_F : OPT_O_Truck_02_MRL_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {};
				weapons[] = {};
			};
		};
	};
};