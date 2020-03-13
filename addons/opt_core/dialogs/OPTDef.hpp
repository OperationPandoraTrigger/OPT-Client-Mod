// General UI Grid to use. Just use PX and PY for consistent x,y,width, height parameters
#define PYN     108
#define PX(X)   ((X)/PYN*safeZoneH/(4/3))
#define PY(Y)   ((Y)/PYN*safeZoneH)

// General color definitions to be used in dialogs
#define COLOR_BACK                      {0.1,0.1,0.1,1}
#define COLOR_LIST_BACK                 {0.2,0.2,0.2,1}
#define COLOR_LIST_TEXT                 {0.2,0.2,0.2,1}
#define COLOR_MAP_BACK                  {0.506,0.569,0.675,1}

#define ReadAndWrite 0
#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"
#define ProcTextEmpty "#(argb,8,8,3)color(1,1,1,0)"
#define ProcTextBlack "#(argb,8,8,3)color(0,0,0,1)"
#define ProcTextGray "#(argb,8,8,3)color(0.3,0.3,0.3,1)"
#define ProcTextRed "#(argb,8,8,3)color(1,0,0,1)"
#define ProcTextGreen "#(argb,8,8,3)color(0,1,0,1)"
#define ProcTextBlue "#(argb,8,8,3)color(0,0,1,1)"


//Colors
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
#define Color_TextBI				{0.543, 0.5742, 0.4102, 1}
#define Color_TextHud				{0.543, 0.5742, 0.4102, 0.9}
#define Color_MainCapt			{0.543, 0.5742, 0.4102, 1.0}
#define Color_Bleedout 			{0.66, 0, 0, 0.8}
#define Color_Black_Alpha		{0, 0, 0, 0.85}
#define Color_Scrollbar         {0, 0.65, 0.96, 0.65}

//Colors background
#define CA_UI_background_2 				{0.6, 0.6, 0.6, 0.4}			// hellgrau transparent
#define CA_UI_background          {0.023529, 0, 0.0313725, 1}		// fast schwarz
#define Color_MainBack 						{1, 1, 1, 0.9}					// vergilbtes weiss
#define CA_UI_element_background	{1, 1, 1, 0.7}					// dunkel weiss
#define CA_UI_help_background 		{0.2, 0.1, 0.1, 0.7}			// rost rotbraun
#define CA_UI_title_background		{0.24, 0.47, 0.07, 1.0}			// grn
#define CA_UI_green								{0.84,1,0.55,1}					// gelb-grn gift
#define OA_header_dark						{0,0,0,0.5}						// oa schwarz transparent

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




