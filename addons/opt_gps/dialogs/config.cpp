#include "\opt\opt_client\addons\core\dialogs\OPTDef.hpp"

class CfgPatches {
	class opt_gpsDialog {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Ui_F", "A3_Ui_F_Data", "A3_Functions_F", "A3_UIFonts_F", "A3_Data_F", "opt_core"};
	};
};

//Refernce stuff at top, and you can use the classes below
class RscPicture;
class RscFrame;
class RscText;
class RscListbox;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscCombo;
class RscButton;
class RscStructuredText;
class RscButtonMenu;
class RscMapControl;
class RscButtonMenuOK;
class RscButtonMenuCancel;



class RscTitles
{
	class DIALOG_GPS_GROUPHOVER
	{
		idd = -1;
		duration = 1e+007;
		fadein = 0;
		fadeout = 0;
		onLoad = "uiNamespace setVariable ['opt_ui_gps_grouphover', _this select 0]";
		onUnload = "";

		class controls
		{ 
			class GPS_Hover_Group : RscControlsGroupNoScrollbars
			{
				idc = IDC_GPS_SQUADGROUP;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				colorBackground[] = {0,0,0,1};
				colorText[] = {1,1,1,1};

				class Controls
				{
					class GPS_Hover_Background : RscText
					{
						idc = IDC_GPS_BACKGROUND;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
						colorBackground[] = {0,0,0,0.8};
						text = "";
						
					};
					class GPS_Hover_Members : RscStructuredText
					{
						idc = IDC_GPS_SQUADMEMBERS;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
						font = "PuristaMedium";
						colorText[] = {1,1,1,1};
						text = "MEMBERS";
						sizeEx = PY(4);
					};
				};
			};
		};
	};

	class DIALOG_GPS_VEHICLEHOVER
	{
		idd = IDD_GPS_VEHICLEHOVER;
		duration = 1e+007;
		fadein = 0;
		fadeout = 0;

		class ControlsBackground
		{
			class GPS_VehicleHover_Background : RscPicture
			{
				idc = -1;
				x = 0;
				y = 0;
				w = PX(25);
				h = PY(4);
				colorBackground[] = COLOR_BACK;
			};
			class GPS_VehicleHover_BackgroundBottom : RscPicture
			{
				idc = -1;
				x = 0;
				y = PX(4.1);
				w = PX(25);
				h = PY(12);
				colorBackground[] = COLOR_MAP_BACK;
			};
		};
		class Controls
		{
			class GPS_Hover_VehicleName : RscText
			{
				idc = IDC_GPS_VEHICLENAME;
				x = 0;
				y = 0;
				w = PX(11);
				h = PY(2);
				font = "PuristaMedium";
				colorText[] = {0.5,0.5,0.5,1};
			};
			class GPS_Hover_SeatCount : RscText
			{
				idc = IDC_GPS_SEATCOUNT;
				x = PX(16);
				y = PY(1.8);
				w = PX(5.5);
				h = PY(2);
				font = "PuristaMedium";
				colorText[] = {0.5,0.5,0.5,1};
			};
			class GPS_Hover_Passengers : RscStructuredText
			{
				idc = IDC_GPS_PASSENGERS;
				x = 0;
				y = PY(4.4);
				w = PX(25);
				h = PY(11.9);
				font = "PuristaMedium";
				colorText[] = {1,1,1,1};
			};
		};
	};

	class DIALOG_GPS_MINIMAP
	{
		idd = IDD_GPS_MINIMAP;
		duration = 1e+007;
		fadein = 0;
		fadeout = 0;
		onLoad = "uiNamespace setVariable ['opt_ui_gps_minimap', _this select 0]";
		onUnload = "";

		objects[] = { };
		controls[] = {GPS_Minimap};

		class GPS_Minimap : RscMapControl
		{
			idc = IDC_GPS_MINIMAP_BOX;
			type = 101;
			style = 48;
			x = "SafeZoneX + 0.0 * SafezoneW";
			y = "SafeZoneY + 0.44 * SafeZoneH";
			w = "0.18 * SafeZoneW";
			h = "0.25 * SafeZoneH";
			sizeEx = "0.07 * SafeZoneH";
			size = "0.07 * SafeZoneH";

			colorBackground[] = { 1.00, 1.00, 1.00, 0.40 };


			class LineMarker
			{
				lineDistanceMin = 3e-005;
				lineLengthMin = 5;
				lineWidthThick = 0.014;
				lineWidthThin = 0.008;
				textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
			};
		};	
	};

};	

