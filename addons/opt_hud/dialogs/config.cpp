#include "\opt\opt_client\addons\core\dialogs\OPTDef.hpp"

class CfgPatches 
{
	class opt_hudDialog 
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

class opt_DefaultMenu
{ 
    idd = 5000;
    objects[] = {};

    class BackgroundBar: IGUIBack 
    {
        idc = 2200;
        x = safezoneX;
        y = safezoneY + safezoneH - 0.025 * safezoneH;
        w = safezoneW;
        h = 0.025 * safezoneH;
    }

    // 1. Feld
    class PlayersDisplay : RSCText
    {
        idc = 5101;
        x = safezoneX + 0/6 * safezoneW;
        y = safezoneY + safezoneH - 0.025 * safezoneH;
        w = 1/6 * 0.9 * safezoneW;
        h = 0.025 * safezoneH;
        sizeEx = FONTSIZE;
        shadow = 1;
        colorText[] = Color_GrayLight;
        text = "Spieler:";
    };	

    // 2. Feld
    class BudgetDisplay : RSCText 
    {
        idc = 5103;
        x = safezoneX + 2/6 * 0.9 * safezoneW;
        y = safezoneY + safezoneH - 0.025 * safezoneH;
        w = 1/6 * 0.9 * safezoneW;
        h = 0.025 * safezoneH;
        sizeEx = FONTSIZE;
        shadow = 1;
        colorText[] = Color_GrayLight;
        text = "Budget:";
    };

    // 3. Feld
    class ScoreDisplay : RSCText 
    {
        idc = 5104;
        x = safezoneX + 0.1 * safezoneW +  3/6 * 0.9 * safezoneW;
        y = safezoneY + safezoneH - 0.025 * safezoneH;
        w = 1/6 * 0.9 * safezoneW;
        h = 0.025 * safezoneH;
        sizeEx = FONTSIZE;
        colorText[] = Color_GrayLight;
        shadow = 1;
        text = "Punkte:";
    };
    
    // 4. Feld
    class TimerDisplay : RSCText 
    {
        idc = 5105;
        x = safezoneX + 0.1 * safezoneW +  4/6 * 0.9 * safezoneW;
        y = safezoneY + safezoneH - 0.025 * safezoneH;
        w = 1/6 * 0.9 * safezoneW;
        h = 0.025 * safezoneH;
        sizeEx = FONTSIZE;
        colorText[] = Color_GrayLight;
        shadow = 1;
        text = "Spielzeit:";
    };		
    
};

//--------------------------------------------------------------------------------------------------
//                                        HUD DISPLAY
//--------------------------------------------------------------------------------------------------

 class RscTitles
{   
    class opt_hud_DefaultMenu : opt_DefaultMenu 
    {
        duration = 15000;
        name = "";
        idd = 4999;			
        onLoad = "uiNamespace setVariable ['opt_hud_anzeige', _this select 0]";	
        movingEnable = false;
        moving = false;
        enableSimulation = true;
        objects[] = {};

        controls[] = {};
        
        //NB: the order of the listing of controls is important. The first control listed goes on the
        //    bottom, the last goes on top
        // add BackgroundBar to have a nicer background
        controlsBackground[] = 
        {
            BackgroundBar, ScoreDisplay, PlayersDisplay, TimerDisplay, BudgetDisplay
        };			
    };
};	