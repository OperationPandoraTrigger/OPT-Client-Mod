#include "\opt\opt_client\addons\core\dialogs\OPTDef.hpp"

class CfgPatches 
{
    class opt_shopDialog 
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
class RscShortcutButton;

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
    colorPictureDisabled[] = {1,1,1,0.25};
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

class Dialogshopkaufen
{
    idd = 20000;
    movingenable = false;
    onload = "";
    
    class controlsBackground
    {
        class BACKGROUND3 : IGUIBack
        {
             text = ;
             x = 0.10;
             y = 0.10;
             w = 0.9;
             h = 0.9;
             colorBackground[] = {0.2, 0.2, 0.2, 0.5};
        };

        class name : RscFrame
        {
            idc = 20101;
            style = ST_CENTER;
            sizeEx = 0.05;
            colorText[] = COLOR_TEXT;
            x = 0.1;
            y = 0.00;
            w = 0.5;
            h = 0.15;
            text = "Shop";
            default = true;
        };    
        class KBB1 : RscPicture
        {
            idc = 20102;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.10;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB2 : RscPicture
        {
            idc = 20103;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.25;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB3 : RscPicture
        {
            idc = 20104;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.40;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB4 : RscPicture
        {
            idc = 20105;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.55;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB5 : RscPicture
        {
            idc = 20106;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.70;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB6 : RscPicture
        {
            idc = 20107;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.85;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB7 : RscPicture
        {
            idc = 20108;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.10;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB8 : RscPicture
        {
            idc = 20109;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.25;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB9 : RscPicture
        {
            idc = 20110;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.40;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB10 : RscPicture
        {
            idc = 20111;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.55;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB11 : RscPicture
        {
            idc = 20112;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.70;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB12 : RscPicture
        {
            idc = 20113;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.85;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB13 : RscPicture
        {
            idc = 20114;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.10;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB14 : RscPicture
        {
            idc = 20115;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.25;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB15 : RscPicture
        {
            idc = 20116;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.40;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB16 : RscPicture
        {
            idc = 20117;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.55;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB17 : RscPicture
        {
            idc = 20118;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.70;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB18 : RscPicture
        {
            idc = 20119;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.85;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB19 : RscPicture
        {
            idc = 20120;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.10;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB20 : RscPicture
        {
            idc = 20121;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.25;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB21 : RscPicture
        {
            idc = 20122;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.40;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB22 : RscPicture
        {
            idc = 20123;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.55;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB23 : RscPicture
        {
            idc = 20124;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.70;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBB24 : RscPicture
        {
            idc = 20125;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.85;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            text = "";
            default = true;
        };
        class KBT1 : RSCText
        {
            idc = 20126;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.10;
            y = 0.41;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT2 : RSCText
        {
            idc = 20127;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.25;
            y = 0.41;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT3 : RSCText
        {
            idc = 20128;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.40;
            y = 0.41;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT4 : RSCText
        {
            idc = 20129;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.55;
            y = 0.41;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT5 : RSCText
        {
            idc = 20130;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.70;
            y = 0.41;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT6 : RSCText
        {
            idc = 20131;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.85;
            y = 0.41;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT7 : RSCText
        {
            idc = 20132;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.10;
            y = 0.56;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT8 : RSCText
        {
            idc = 20133;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.25;
            y = 0.56;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT9 : RSCText
        {
            idc = 20134;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.40;
            y = 0.56;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT10 : RSCText
        {
            idc = 20135;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.55;
            y = 0.56;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT11 : RSCText
        {
            idc = 20136;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.70;
            y = 0.56;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT12 : RSCText
        {
            idc = 20137;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.85;
            y = 0.56;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT13 : RSCText
        {
            idc = 20138;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.10;
            y = 0.71;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT14 : RSCText
        {
            idc = 20139;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.25;
            y = 0.71;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT15 : RSCText
        {
            idc = 20140;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.40;
            y = 0.71;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT16 : RSCText
        {
            idc = 20141;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.55;
            y = 0.71;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT17 : RSCText
        {
            idc = 20142;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.70;
            y = 0.71;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT18 : RSCText
        {
            idc = 20143;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.85;
            y = 0.71;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT19 : RSCText
        {
            idc = 20144;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.10;
            y = 0.86;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT20 : RSCText
        {
            idc = 20145;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.25;
            y = 0.86;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT21 : RSCText
        {
            idc = 20146;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.40;
            y = 0.86;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT22 : RSCText
        {
            idc = 20147;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.55;
            y = 0.86;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT23 : RSCText
        {
            idc = 20148;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.70;
            y = 0.86;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
        class KBT24 : RSCText
        {
            idc = 20149;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = Color_NoColor;
            x = 0.85;
            y = 0.86;
            w = 0.15;
            h = 0.05;
            text = "";
            default = true;
        };
    };        

    class controls 
    {
        class Flagge : RscPicture
        {
            idc = 20001;    // Kauf-Flagge
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.126;
            y = 0.045;
            w = 0.248;
            h = 0.2977;
            text = "";
            default = true;
        };
        class Kosten : RSCText
        {
            idc = 20002;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.71;
            y = 0.92;
            w = 0.2;
            h = 0.05;
            text = "";
            default = true;
        };
        class PadBox : RSCText
        {
            idc = 20003;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.55;
            y = 0.1;
            w = 0.4;
            h = 0.08;
            text = "Box";
        };
        class buttonok : RSCButton
        {
            idc = 20004;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.15;
            y = 0.92;
            w = 0.06;
            h = 0.05;
            text = "Kaufen";
            tooltip = "Fahrzeug kaufen";
            action = "";
            default = true;
        };
        class buttonAB : RSCButton
        {
            idc = 20005;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.22;
            y = 0.92;
            w = 0.08;
            h = 0.05;
            text = "Abbrechen";
            action = "closeDialog 0; OPT_SHOP_LOCK = false;";
            tooltip = "Dialog schliessen";
            default = true;
        };        
        class RscButtonMoveIn: RscButton
        {
            idc = 20006;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.50;
            y = 0.92;
            w = 0.2;
            h = 0.05;
            text = "[X]Fahrzeug besetzen"; 
            tooltip = "Käufer in das Fahrzeug setzen";
            action = "";
        };
        class buttonkonfig : RSCButton
        {
            idc = 20007;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.31;
            y = 0.92;
            w = 0.09;
            h = 0.05;
            colorBackground[] = Color_Green;
            text = "Konfig";
            tooltip = "Fahrzeug konfiguieren";
            action = "";
            default = true;
        };
        class buttonraeumen : RSCButton
        {
            idc = 20008;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.41;
            y = 0.92;
            w = 0.08;
            h = 0.05;
            colorBackground[] = Color_Red;
            text = "Räumen";
            tooltip = "Pad Räumen";
            action = "";
            default = true;
        };
        class Geld : RSCText
        {
            idc = 20009;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.55;
            y = 0.2;
            w = 0.4;
            h = 0.08;
            text = "10000000";
        };
        class KB1 : RSCButton
        {
            idc = 20010;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.10;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB2 : RSCButton
        {
            idc = 20011;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.25;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB3 : RSCButton
        {
            idc = 20012;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.40;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB4 : RSCButton
        {
            idc = 20013;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.55;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB5 : RSCButton
        {
            idc = 20014;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.70;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB6 : RSCButton
        {
            idc = 20015;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.85;
            y = 0.31;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB7 : RSCButton
        {
            idc = 20016;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.10;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB8 : RSCButton
        {
            idc = 20017;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.25;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB9 : RSCButton
        {
            idc = 20018;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.40;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB10 : RSCButton
        {
            idc = 20019;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.55;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB11 : RSCButton
        {
            idc = 20020;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.70;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB12 : RSCButton
        {
            idc = 20021;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.85;
            y = 0.46;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB13 : RSCButton
        {
            idc = 20022;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.10;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB14 : RSCButton
        {
            idc = 20023;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.25;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB15 : RSCButton
        {
            idc = 20024;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.40;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB16 : RSCButton
        {
            idc = 20025;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.55;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB17 : RSCButton
        {
            idc = 20026;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.70;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB18 : RSCButton
        {
            idc = 20027;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.85;
            y = 0.61;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB19 : RSCButton
        {
            idc = 20028;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.10;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB20 : RSCButton
        {
            idc = 20029;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.25;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB21 : RSCButton
        {
            idc = 20030;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.40;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB22 : RSCButton
        {
            idc = 20031;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.55;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB23 : RSCButton
        {
            idc = 20032;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.70;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
        class KB24 : RSCButton
        {
            idc = 20033;
            style = ST_DOWN;
            sizeEx = 0.03;
            x = 0.85;
            y = 0.76;
            w = 0.15;
            h = 0.15;
            colorBackground[] = Color_NoColor;
            colorBackgroundActive[] = Color_Black_Alpha1;
            colorFocused[] = Color_Black_Alpha1;
            colorFocused2[] = Color_Black_Alpha2;
            text = "";
            tooltip = "";
            action = "";
        };
    };
};

class Dialogshopkonfig
{
    idd = 22000;
    onload = "";
    movingEnable = true;
  
    class controlsBackground
    {
        class BACKGROUND3 : IGUIBack
        {
             text = ;
             x = 0.10;
             y = 0.10;
             w = 0.9;
             h = 0.9;
             colorBackground[] = {0.2, 0.2, 0.2, 0.5};
        };

        class name : RscFrame
        {
            idc = 22001;
            style = ST_CENTER;
            sizeEx = 0.05;
            colorText[] = COLOR_TEXT;
            x = 0.05;
            y = 0.00;
            w = 0.5;
            h = 0.15;
            text = "Konfigurieren";
            default = true;
        };    
    };        

    class controls 
    {
        class Fahrzeugname : RSCText
        {
            idc = 22002;
            style = ST_CENTER;
            sizeEx = 0.05;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.15;
            y = 0.1;
            w = 0.39;
            h = 0.1;
            text = "Fahrzeugname";
            default = true;
        };
        class Kosten : RSCText
        {
            idc = 22003;
            style = ST_CENTER;
            sizeEx = 0.04;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.71;
            y = 0.92;
            w = 0.2;
            h = 0.05;
            text = "10000";
            default = true;
        };
        class Bild : RscPicture
        {
            idc = 22004;
            x = 0.40;
            y = 0.25;
            w = 0.3;
            h = 0.3;
            default = true;
        };
        class MuniBild1 : RscPicture
        {
            idc = 22005;
            x = 0.15;
            y = 0.3;
            w = 0.05;
            h = 0.05;
            default = true;
        };
        class MuniBild2 : RscPicture
        {
            idc = 22006;
            x = 0.15;
            y = 0.35;
            w = 0.05;
            h = 0.05;
            default = true;
        };
        class MuniBild3 : RscPicture
        {
            idc = 22007;
            x = 0.15;
            y = 0.4;
            w = 0.05;
            h = 0.05;
            default = true;
        };
        class MuniBild4 : RscPicture
        {
            idc = 22008;
            x = 0.7;
            y = 0.3;
            w = 0.05;
            h = 0.05;
            default = true;
        };
        class MuniBild5 : RscPicture
        {
            idc = 22009;
            x = 0.7;
            y = 0.35;
            w = 0.05;
            h = 0.05;
            default = true;
        };
        class MuniBild6 : RscPicture
        {
            idc = 22010;
            x = 0.7;
            y = 0.4;
            w = 0.05;
            h = 0.05;
            default = true;
        };  
        class boxslot1 : RscCombo
        {
            idc = 22011;
            sizeEx = 0.03;
            rowHeight = 0.023;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.15;
            y = 0.6;
            w = 0.25;
            h = 0.05;
            default = true;
        };
          
        class boxslot2 : RscCombo
        {
            idc = 22012;
            sizeEx = 0.03;
            rowHeight = 0.023;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.15;
            y = 0.7;
            w = 0.25;
            h = 0.05;
            default = true;
        };
          
        class boxslot3 : RscCombo
        {
            idc = 22013;
            sizeEx = 0.03;
            rowHeight = 0.023;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.15;
            y = 0.8;
            w = 0.25;
            h = 0.05;
            default = true;
        };
          
        class boxslot4 : RscCombo
        {
            idc = 22014;
            sizeEx = 0.03;
            rowHeight = 0.023;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.7;
            y = 0.6;
            w = 0.25;
            h = 0.05;
            default = true;
        };
          
        class boxslot5 : RscCombo
        {
            idc = 22015;
            sizeEx = 0.03;
            rowHeight = 0.023;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.7;
            y = 0.7;
            w = 0.25;
            h = 0.05;
            default = true;
        };      
        class boxslot6 : RscCombo
        {
            idc = 22016;
            sizeEx = 0.03;
            rowHeight = 0.023;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.7;
            y = 0.8;
            w = 0.25;
            h = 0.05;
            default = true;
        };
        class boxslot7 : RscCombo
        {
            idc = 22017;
            sizeEx = 0.03;
            rowHeight = 0.023;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.42;
            y = 0.8;
            w = 0.25;
            h = 0.05;
            default = true;
        };
        class PadBox : RSCText
        {
            idc = 22018;
            style = ST_CENTER;
            sizeEx = 0.05;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.55;
            y = 0.1;
            w = 0.38;
            h = 0.1;
            text = "Box";
        };
        class buttonok : RSCButton
        {
            idc = 22020;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.15;
            y = 0.92;
            w = 0.06;
            h = 0.05;
            text = "Kaufen";
            tooltip = "Zusammenstellung kaufen";
            action = "";
            default = true;
        };
        class buttonAB : RSCButton
        {
            idc = 22021;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.22;
            y = 0.92;
            w = 0.08;
            h = 0.05;
            text = "Abbrechen";
            action = "closeDialog 0; OPT_SHOP_LOCK = false;";
            tooltip = "Dialog schliessen";
            default = true;
        };
        class Munitext1 : RSCText
        {
            idc = 22031;
            style = ST_LEFT;
            sizeEx = 0.025;
            colorText[] = COLOR_TEXT;
            x = 0.21;
            y = 0.3;
            w = 0.24;
            h = 0.05;
            text = "Munition";
            default = true;
        };
        class Munitext2 : RSCText
        {
            idc = 22032;
            style = ST_LEFT;
            sizeEx = 0.025;
            colorText[] = COLOR_TEXT;
            x = 0.21;
            y = 0.35;
            w = 0.24;
            h = 0.05;
            text = "Munition";
            default = true;
        };
        class Munitext3 : RSCText
        {
            idc = 22033;
            style = ST_LEFT;
            sizeEx = 0.025;
            colorText[] = {1,1,0,1};
            x = 0.21;
            y = 0.4;
            w = 0.24;
            h = 0.05;
            text = "Munition";
            default = true;
        };
        class Munitext4 : RSCText
        {
            idc = 22034;
            style = ST_LEFT;
            sizeEx = 0.025;
            colorText[] = COLOR_TEXT;
            x = 0.76;
            y = 0.3;
            w = 0.24;
            h = 0.05;
            text = "Munition";
            default = true;
        };
        class Munitext5 : RSCText
        {
            idc = 22035;
            style = ST_LEFT;
            sizeEx = 0.025;
            colorText[] = COLOR_TEXT;
            x = 0.76;
            y = 0.35;
            w = 0.24;
            h = 0.05;
            text = "Munition";
            default = true;
        };
        class Munitext6 : RSCText
        {
            idc = 22036;
            style = ST_LEFT;
            sizeEx = 0.025;
            colorText[] = COLOR_TEXT;
            x = 0.76;
            y = 0.4;
            w = 0.24;
            h = 0.05;
            text = "Munition";
            default = true;
        };
        class boxtext1 : RSCText
        {
            idc = 22037;
            style = ST_LEFT;
            sizeEx = 0.035;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.15;
            y = 0.56;
            w = 0.25;
            h = 0.03;
            text = "";
            default = true;
        };
        class boxtext2 : RSCText
        {
            idc = 22038;
            style = ST_LEFT;
            sizeEx = 0.035;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.15;
            y = 0.66;
            w = 0.25;
            h = 0.03;
            text = "";
            default = true;
        };
        class boxtext3 : RSCText
        {
            idc = 22039;
            style = ST_LEFT;
            sizeEx = 0.035;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.15;
            y = 0.76;
            w = 0.25;
            h = 0.03;
            text = "";
            default = true;
        };
        class boxtext4 : RSCText
        {
            idc = 22040;
            style = ST_LEFT;
            sizeEx = 0.035;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.7;
            y = 0.56;
            w = 0.25;
            h = 0.03;
            text = "";
            default = true;
        };
        class boxtext5 : RSCText
        {
            idc = 22041;
            style = ST_LEFT;
            sizeEx = 0.035;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.7;
            y = 0.66;
            w = 0.25;
            h = 0.03;
            text = "";
            default = true;
        };
        class boxtext6 : RSCText
        {
            idc = 22042;
            style = ST_LEFT;
            sizeEx = 0.035;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.7;
            y = 0.76;
            w = 0.25;
            h = 0.03;
            text = "";
            default = true;
        };
        class boxtext7 : RSCText
        {
            idc = 22043;
            style = ST_LEFT;
            sizeEx = 0.035;
            colorText[] = COLOR_TEXT;
            colorBackground[] = COLOR_BACK;
            x = 0.42;
            y = 0.76;
            w = 0.25;
            h = 0.03;
            text = "";
            default = true;
        };
        class RscButtonMoveIn: RscButton
        {
            idc = 22044;
            style = ST_CENTER;
            sizeEx = 0.03;
            x = 0.50;
            y = 0.92;
            w = 0.2;
            h = 0.05;
            text = "[X]Fahrzeug besetzen"; 
            tooltip = "Käufer in das Fahrzeug setzen";
            action = "";
        };
    };
};
class DialogVerkaufs
{
    idd = 23000;
    onload = "";
    movingEnable = true;
    
    class controlsBackground
    {
        class IGUIBack_Main: IGUIBack
        {
            idc = 23001;
            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 25.1 * GUI_GRID_H;
        };
        class RscFrame_Main: RscFrame
        {
            idc = 23002;
            text = "Bestellsystem"; //--- ToDo: Localize;
            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = -0.83 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 26 * GUI_GRID_H;
            colorText[] = {1,1,1,1};
            sizeEx = 1.5 * FONTSIZE;
        };
        class RscPictureFlag: RscPicture
        {
            idc = 23003;    // Verkaufs-Flagge
            text = "";
            x = 1.5 * GUI_GRID_W + GUI_GRID_X;
            y = 0.1 * GUI_GRID_H + GUI_GRID_Y;
            w = 8.06 * GUI_GRID_W;
            h = 6.04 * GUI_GRID_H;
        };
        class RscFrame_Vehicle: RscFrame
        {
            idc = 23004;
            x = 1 * GUI_GRID_W + GUI_GRID_X;
            y = 5 * GUI_GRID_H + GUI_GRID_Y;
            w = 38 * GUI_GRID_W;
            h = 18 * GUI_GRID_H;
        };
    };

    class controls 
    {
        class RscTextBudget: RscText
        {
            idc = 23100;
            text = "Budget: ";
            x = 10 * GUI_GRID_W + GUI_GRID_X;
            y = 1 * GUI_GRID_H + GUI_GRID_Y;
            w = 29 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
            colorBackground[] = COLOR_BACK;
            sizeEx = FONTSIZE;
        };
        class RscListboxVehicleList: RscListBox_OPT
        {
            idc = 23101;
            x = 1 * GUI_GRID_W + GUI_GRID_X;
            y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 23 * GUI_GRID_W;
            h = 16.5 * GUI_GRID_H;
            sizeEx = FONTSIZE;
            colorBackground[] = COLOR_BACK;
            rowHeight = 0.06;

        };
        class RscTextVehicleInfo: RscStructuredText
        {
            idc = 23102;
            text = "Infobereich...";
            x = 24 * GUI_GRID_W + GUI_GRID_X;
            y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 15 * GUI_GRID_W;
            h = 16.5 * GUI_GRID_H;
            sizeEx = FONTSIZE;
            colorBackground[] = COLOR_BACK;
        };
        class RscButtonSell: RscButton
        {
            idc = 23103;
            text = "Verkaufen"; 
            x = 1.03 * GUI_GRID_W + GUI_GRID_X;
            y = 23.23 * GUI_GRID_H + GUI_GRID_Y;
            w = 7.5 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
            tooltip = "Verkaufe Fahrzeug auf dem Bestell-Pad";
            action = "";
            sizeEx = FONTSIZE;
        };        
        class RscButtonCancel: RscButton
        {
            idc = 23104;
            text = "Schließen";
            x = 32 * GUI_GRID_W + GUI_GRID_X;
            y = 23.2 * GUI_GRID_H + GUI_GRID_Y;
            w = 7 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
            tooltip = "Dialog schliessen";
            action = "closeDialog 0; OPT_SHOP_LOCK = false;";
            sizeEx = FONTSIZE;
        };
    };
};
