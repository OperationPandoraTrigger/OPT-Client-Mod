#include "\opt\opt_client\addons\core\macros.hpp"

class CfgPatches
{
	class opt_revive
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
        version = VERSION;
        versionStr = QUOTE(VERSION);
        versionAr[] = {VERSION_AR};
		requiredAddons[] = {"A3_Ui_F", "A3_Ui_F_Data", "A3_Functions_F", "A3_UIFonts_F", "A3_Data_F", "opt_core"};
	};
};