#include "\opt\opt_client\addons\core\dialogs\OPTDef.hpp"

class CfgPatches 
{
	class opt_reviveDialog 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"a3_ui_f"};
	};
};

//Refernce stuff at top, and you can use the classes below
class RscPicture;
class RscFrame;
class RscText;
class RscListbox;
class RscControlsGroup;
class RscCombo;
class RscButton;
class RscStructuredText;
class RscButtonMenu;
class RscMapControl;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class IGUIBack;

class RscListBox_OPT 
{
	style = 16;
	idc = -1;
	type = 5;
	w = 0.4;
	h = 0.4;
	font = DEFAULTFONT;
	colorSelect[] = {0, 0, 0, 1};
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {0,0,0,0.3};
	colorSelect2[] = {0, 0, 0, 1};
	colorSelectBackground[] = {0.95, 0.95, 0.95, 1};
	//colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
	colorSelectBackground2[] = {1, 1, 1, 0.5};
	colorScrollbar[] = Color_Scrollbar;
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	wholeHeight = 0.45;
	rowHeight = 0.07;
	color[] = {0.7, 0.7, 0.7, 1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
    colorPicture[] = {1,1,1,0.9};
    colorPictureSelected[] = {1,1,1,1};
    colorPictudeDisabled[] = {1,1,1,0.25};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {1,1,1,0.65};
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	period = 1.2;
	
    class ListScrollBar 
	{
        color[] = Color_Scrollbar;
        autoScrollEnabled = 1;
	};
	class ScrollBar 
	{
		color[] = Color_Scrollbar;
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	};
};

class RscProgress_OPT
{
	type = 8;
	style = 0;
	colorFrame[] = {0,0,0,1};
	colorBar[] = {1,1,1,1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	w = 1;
	h = 0.03;
};

class DIALOG_REVIVE_BLACKSCREEN
{

		idd = IDD_REVIVE_BLACKSCREEN;
		movingEnable = false;

		class controlsBackground
		{
			class opt_revive_OuterBackground: RscFrame
			{
				idc = -1;
				type =  CT_STATIC; 
				style = ST_LEFT;
				colorText[] = Color_Black;
				colorBackground[] = Color_Black;
				font = "PuristaMedium"; 
				sizeEx = 0.023;
				x = -3; y = -3;
				w = 9;  h = 9;
				text = "";
			};
			
			class opt_revive_Skull: RscPicture
			{
				idc = -1;
				type =  CT_STATIC; 
				style = ST_PICTURE;  
				colorText[] = {1,1,1,0.15};
				colorBackground[] = Color_NoColor;
				font = "PuristaMedium";  
				sizeEx = 0.1 * safezoneH;
				x = 0.3 * safezoneW + safezoneX;
				w = 0.4 * safezoneW;
				y = 0.2 * safezoneH + safezoneY;
				h = 0.6 * safezoneH;
				text = "opt_revive\bilder\skull.paa";
			};
			
			class opt_revive_WoundedLabel: RscText
			{
				idc = -1;
				type =  CT_STATIC;
				style = ST_CENTER;
				colorText[] = Color_White;
				colorBackground[] = Color_NoColor;
				font = "PuristaMedium"; 
				sizeEx = 0.07 * safezoneH;
				shadow = 1;
				x = 0.3 * safezoneW + safezoneX; y= 0.25 * safezoneH + safezoneY;
				w = 0.4 * safezoneW; h = 0.07 * safezoneH;
				text = "Sie sind verwundet.";
			};
		};	

	class controls 
	{

		class opt_revive_Respawn: RscButton 
		{
			idc = IDC_REVIVE_BUTTON;
			x = 0.43 * safezoneW + safezoneX; 
			y= 0.75 * safezoneH + safezoneY;
			w = 0.14 * safezoneW; h = 0.04 * safezoneH;
			text = "";
			action = "";
		};
				
		class opt_revive_ReviveLabel: RscText 
		{
			idc = IDC_REVIVE_REVIVELABEL;
			type =  CT_STATIC;
			style = ST_CENTER;
			colorText[] = Color_White;
			colorBackground[] = Color_NoColor;
			font = "PuristaMedium"; 
			sizeEx = 0.018 * safezoneH;
			shadow = 1;
			x = 0.4 * safezoneW + safezoneX; 
			y= 0.7 * safezoneH + safezoneY;
			w = 0.2 * safezoneW; 
			h = 0.025 * safezoneH;
			text = "";
		};

		class opt_revive_MedicNearLabel: RscText  
		{
			idc = IDC_REVIVE_MEDICNEARLABEL;
			type =  CT_STATIC;
			style = ST_CENTER;
			colorText[] = Color_White;
			colorBackground[] = Color_NoColor;
			font = "PuristaMedium"; 
			sizeEx = 0.023 * safezoneH;
			shadow = 1;
			x = 0.4 * safezoneW + safezoneX; 
			y= 0.8 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.04 * safezoneH;
			text = "";
		};
				
		class opt_revive_WoundedLabel: RscText  
		{
			idc = IDC_REVIVE_WOUNDEDLABEL;
			type =  CT_STATIC;
			style = ST_CENTER;
			colorText[] = Color_White;
			colorBackground[] = Color_NoColor;
			font = "PuristaMedium"; 
			sizeEx = 0.07 * safezoneH;
			shadow = 1;
			x = 0.3 * safezoneW + safezoneX; y= 0.25 * safezoneH + safezoneY;
			w = 0.4 * safezoneW; h = 0.07 * safezoneH;
			text = "";
		};
				
		class opt_revive_BleedoutBar: RscProgress_OPT 
		{
			idc = IDC_REVIVE_BLEEDOUTBAR;
			colorText[] = Color_White;
			colorBackground[] = Color_Bleedout;
			x = (0.4 * safezoneW + safezoneX); y= (0.7 * safezoneH + safezoneY);
			w = (0.2 * safezoneW); h = (0.03 * safezoneH);
		};

		class opt_revive_BleedoutBar_Text: RscText
		{
			idc = IDC_REVIVE_BLEEDOUTBAR_TEXT;
			colorText[] = Color_White;
			style = ST_FRAME;
			x = (0.4 * safezoneW + safezoneX) - 0.005; y= (0.7 * safezoneH + safezoneY) - 0.005;
			w = (0.2 * safezoneW) + 0.01; h = (0.03 * safezoneH) + 0.01;
		};
				
	};
};	