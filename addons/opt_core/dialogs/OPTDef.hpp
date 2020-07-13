// General UI Grid to use. Just use PX and PY for consistent x,y,width, height parameters
#define PYN     108
#define PX(X)   ((X)/PYN*safeZoneH/(4/3))
#define PY(Y)   ((Y)/PYN*safeZoneH)

#define COLOR_BACK                      {0.1,0.1,0.1,1}
#define COLOR_LIST_BACK                 {0.2,0.2,0.2,1}
#define COLOR_LIST_TEXT                 {0.2,0.2,0.2,1}
#define COLOR_MAP_BACK                  {0.506,0.569,0.675,1}
#define COLOR_BUTTON_BACKGROUND {0,0,0,0.7}
#define COLOR_BUTTON_ACTIVE {0.2,0.8,0.2,0.7}
#define COLOR_TEXT {1.0,1.0,1.0,1}
#define Color_Scrollbar         {0, 0.65, 0.96, 0.65}
#define Color_TextBI				{0.543, 0.5742, 0.4102, 1}
#define Color_TextHud				{0.543, 0.5742, 0.4102, 0.9}
#define Color_MainCapt			{0.543, 0.5742, 0.4102, 1.0}
#define Color_Bleedout 			{0.66, 0, 0, 0.8}

#define Color_KackG 				{0.36, 0.4, 0.38, 1}		// kaki-grau
#define Color_KackY					{0.8, 0.7, 0.6, 1}			// kaki-gelb
#define Color_KackB 				{0.51, 0.48, 0.46, 1}		// kaki oa-style
#define Color_WhiteDark 		{1, 1, 1, 0.5}
#define Color_White					{1, 1, 1, 1}
#define Color_WhiteLight		{1, 1, 1, 0.9}
#define Color_Black 				{0, 0, 0, 1}
#define Color_Gray 					{1, 1, 1, 0.5}
#define Color_GrayLight 		{0.7, 0.7, 0.7, 1}
#define Color_GrayDark 			{0.2, 0.2, 0.2, 1}
#define Color_DarkRed 			{0.6, 0.1, 0, 1}
#define Color_Green 				{0.8, 0.9, 0.4, 1}
#define Color_Orange 				{0.9, 0.45, 0.1, 1}
#define Color_Red 					{0.9, 0.2, 0.2, 1}
#define Color_Blue 					{0.2, 0.2, 0.9, 1}
#define Color_NoColor				{0, 0, 0, 0}
#define Color_Black_Alpha		{0, 0, 0, 0.85}

#define FONTSIZE GUI_GRID_H 

#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

#define DEFAULTFONT			"PuristaMedium"
#define SECONDARY_FONT		"Bitstream"

#define DIALOG_GPS_GROUPHOVER           opt_gps_grouphover
#define IDC_GPS_SQUADGROUP              901
#define IDC_GPS_SQUADMEMBERS            902
#define IDC_GPS_BACKGROUND              903

#define DIALOG_GPS_VEHICLEHOVER         opt_gps_vehiclehover
#define IDD_GPS_VEHICLEHOVER            911
#define IDC_GPS_VEHICLENAME             912
#define IDC_GPS_SEATCOUNT               913
#define IDC_GPS_PASSENGERS              914

#define DIALOG_GPS_MINIMAP          	opt_gps_minimap
#define IDD_GPS_MINIMAP           		915
#define IDC_GPS_MINIMAP_BOX             916


