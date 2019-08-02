class CfgPatches
{
	class opt_modcheck_282
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Ui_F", "A3_Ui_F_Data", "A3_Functions_F", "A3_UIFonts_F", "A3_Data_F"};
	};
};

class CfgVehicles
{
	class Logic;

	class OPT_Mod_Check : Logic
	{
		displayName = "OPT Mod Check";
		vehicleClass = "Modules";
	};
};