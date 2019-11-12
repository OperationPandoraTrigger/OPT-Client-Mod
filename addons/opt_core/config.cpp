#include "macros.hpp"


class CfgPatches
{
	class opt_core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
        version = VERSION;
        versionStr = QUOTE(VERSION);
        versionAr[] = {VERSION_AR};
		requiredAddons[] = {"A3_Ui_F", "A3_Ui_F_Data", "A3_Functions_F", "A3_UIFonts_F", "A3_Data_F"};
	};
};

class CfgFactionClasses
{
	class BLU_F;
	class OPF_F;
	class IND_F;

	class OPT_NATO : BLU_F
	{
		displayName = "OPT NATO";
		priority = 3;
	};

	class OPT_NATO_T : OPT_NATO
	{
		displayName = "OPT NATO (Pazifik)";
	};

	class OPT_CSAT : OPF_F
	{
		displayName = "OPT CSAT";
		priority = 3;
	};

	class OPT_CSAT_T : OPT_CSAT
	{
		displayName = "OPT CSAT (Pazifik)";
	};

	class OPT_AAF : IND_F
	{
		displayName = "OPT AAF";
		priority = 3;
	};

	class OPT_Maintainer : IND_F
	{
		displayName = "Maintainer";
		priority = 4;
	};
};

//class CfgFontFamilies
//{
//class OPT_nullfont
//{
//fonts[] = {};
//};
//};

class CfgInGameUI
{
	class Cursor
	{
		//select_target = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
		//lock_target = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
		//font = "OPT_nullfont";

		class Targeting
		{
			class Seeker
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class SeekerLocked : Seeker
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class SeekerNoLOS : Seeker
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class HitConfirm : Seeker
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class HitPrediction : Seeker
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class ImpactPoint : Seeker
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class ImpactPointNoLOS : ImpactPoint
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class KnownTarget : Seeker
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class LaserTarget : KnownTarget
			{
				//texture = "\A3\ui_f\data\igui\cfg\targeting\LaserTarget_ca.paa"; deaktiviert mit 1.73
			};

			class MarkedTarget
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
				//textureFriendly = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
				//textureLockable = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};

			class MarkedTargetNoLos : MarkedTarget
			{
				//texture = "\A3\ui_f\data\igui\cfg\Actions\clear_empty_ca.paa"; deaktiviert mit 1.73
			};
		};
	};

	class PeripheralVision
	{
		//cueColor[] = { 0, 0, 0, 0 };	deaktiviert mit 1.73
		//cueEnemyColor[] = { 0, 0, 0, 0 };	deaktiviert mit 1.73
		//cueFriendlyColor[] = { 0, 0, 0, 0 }; deaktiviert mit 1.73
	};
};