#include "\opt\opt_client\addons\core\dialogs\OPTDef.hpp"

class CfgPatches 
{
    class opt_logpositionDialog 
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
class RscEdit;
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

class DialogLogPosition
{
    idd = 8000;
    onload = "";
    movingEnable = true;
    controlsBackground[] = {BACKGROUND3};

    class BACKGROUND3 : RSCText
    {
        colorBackground[] = {0.2,0.2,0.2,0.5};
        text = ;
        x = 0.0;
        y = 0.0;
        w = 1.0;
        h = 0.5;
    };

    objects[] = {};
    controls[] = {Name0,textbox1,buttonwm,buttonwp};

    class Name0 : RSCText
    {
        idc = 8001;
        style = ST_CENTER;
        sizeEx = 0.035;
        colorText[] = {1.0,1.0,1.0,1};
        x = 0.05;
        y = 0.00;
        w = 0.8;
        h = 0.15;
        text = "Die eigene Position wird zusammen mit diesem optionalen Kommentar ins Server-Log geschrieben:";
    };

    class textbox1 : RscEdit
    {
        idc = 8002;
        style = ST_LEFT+ST_UP;
        x = 0.04;
        y = 0.12;
        w = 0.92;
        h = 0.3;
        colorText[] = {1.0, 1.0, 1.0, 1};
        colorBackground[] = {0, 0, 0, 0.7};
    };

    class buttonwm : RSCButton
    {
        idc = 8004;
        style = ST_CENTER;
        sizeEx = 0.03;
        x = 0.2;
        y = 0.43;
        w = 0.1;
        h = 0.05;
        text = "OK";
        action = "";
        default = true;
    };

    class buttonwp : RSCButton
    {
        idc = 8006;
        style = ST_CENTER;
        sizeEx = 0.03;
        x = 0.73;
        y = 0.43;
        w = 0.1;
        h = 0.05;
        text = "ABORT";
        action = "closeDialog 0";
    };
};
