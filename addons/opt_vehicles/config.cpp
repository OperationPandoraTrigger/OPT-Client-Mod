#include "\opt\opt_client\addons\core\macros.hpp"

class CfgPatches
{
	class opt_vehicles
	{
		units[] = {"OPT_B_MRAP_01_F", "OPT_B_MRAP_01_gmg_F", "OPT_B_MRAP_01_hmg_F", "OPT_O_MRAP_02_F", "OPT_O_T_MRAP_02_ghex_F", "OPT_O_MRAP_02_hmg_F", "OPT_O_T_MRAP_02_hmg_ghex_F",
				   "OPT_O_MRAP_02_gmg_F", "OPT_O_T_MRAP_02_gmg_ghex_F", "OPT_B_MRAP_03_F", "OPT_B_MRAP_03_hmg_F", "OPT_B_MRAP_03_gmg_F", "OPT_B_T_LSV_01_unarmed_F", "OPT_B_T_LSV_01_armed_F",
				   "OPT_O_T_LSV_02_unarmed_F", "OPT_O_T_LSV_02_armed_F", "OPT_B_Quadbike_01_F", "OPT_O_Quadbike_01_F", "OPT_O_T_Quadbike_01_ghex_F", "OPT_B_G_Offroad_01_F",
				   "OPT_O_G_Offroad_01_F", "OPT_B_G_Offroad_01_armed_F", "OPT_O_G_Offroad_01_armed_F", "OPT_B_Truck_01_transport_F", "OPT_B_Truck_01_covered_F", "OPT_B_Truck_01_medical_F",
				   "OPT_B_Truck_01_ammo_F", "OPT_B_Truck_01_Repair_F", "OPT_B_Truck_01_fuel_F", "OPT_O_Truck_03_transport_F", "OPT_O_T_Truck_03_transport_ghex_F", "OPT_O_Truck_03_covered_F",
				   "OPT_O_T_Truck_03_covered_ghex_F", "OPT_O_Truck_03_ammo_F", "OPT_O_T_Truck_03_ammo_ghex_F", "OPT_O_Truck_03_repair_F", "OPT_O_T_Truck_03_repair_ghex_F", "OPT_O_Truck_03_fuel_F",
				   "OPT_O_T_Truck_03_fuel_ghex_F", "OPT_O_Truck_03_medical_F", "OPT_O_T_Truck_03_medical_ghex_F", "OPT_O_Truck_02_MRL_F", "OPT_B_UGV_01_F", "OPT_O_UGV_01_F", "OPT_O_T_UGV_01_ghex_F"};
		weapons[] = {};
		requiredVersion = 0.100000;
		version = VERSION;
		requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_armor_f", "a3_soft_f", "a3_soft_f_mrap_01", "a3_soft_f_mrap_02", "a3_soft_f_mrap_03", "a3_armor_f_panther",
							"a3_armor_f_beta_apc_tracked_02", "a3_armor_f_slammer", "a3_armor_f_t100k", "a3_armor_f_amv", "a3_armor_f_epb_apc_tracked_03", "a3_armor_f_apc_wheeled_03",
							"a3_soft_f_hemtt", "a3_soft_f_gamma_hemtt", "a3_armor_f_epb_mbt_03", "a3_air_f_gamma_plane_fighter_03",
							"a3_soft_f_gamma_offroad", "a3_soft_f_gamma_quadbike", "a3_soft_f_truck", "a3_soft_f_car", "a3_soft_f_offroad_01", "a3_soft_f_quadbike",
							"a3_soft_f_beta_quadbike", "a3_soft_f_suv", "a3_soft_f_epc_truck_03",
							"a3_air_f_epc_plane_cas_02", "a3_air_f_epc_plane_cas_01", "a3_armor_f_epc_mbt_01", "a3_soft_f_bootcamp_offroad_01", "a3_air_f_gamma_uav_01", "A3_Air_F_Exp", "A3_Soft_F_Exp", "A3_Soft_F_Exp_LSV_01", "A3_Soft_F_Exp_LSV_02",
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
};