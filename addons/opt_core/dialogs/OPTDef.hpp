// General UI Grid to use. Just use PX and PY for consistent x,y,width, height parameters
#define PYN     108
#define PX(X)   ((X)/PYN*safeZoneH/(4/3))
#define PY(Y)   ((Y)/PYN*safeZoneH)

// General color definitions to be used in dialogs
#define COLOR_BACK						{0.1,0.1,0.1,1}
#define COLOR_LIST_BACK					{0.2,0.2,0.2,1}
#define COLOR_LIST_TEXT					{0.2,0.2,0.2,1}
#define COLOR_MAP_BACK  				{0.506,0.569,0.675,1}

#define DIALOG_GPS_GROUPHOVER			opt_gps_grouphover
#define IDC_GPS_SQUADGROUP				901
#define IDC_GPS_SQUADMEMBERS			902
#define IDC_GPS_BACKGROUND				903

#define DIALOG_GPS_VEHICLEHOVER			opt_gps_vehiclehover
#define IDD_GPS_VEHICLEHOVER			911
#define IDC_GPS_VEHICLENAME				912
#define IDC_GPS_SEATCOUNT				913
#define IDC_GPS_PASSENGERS				914
