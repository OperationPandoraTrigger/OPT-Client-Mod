#include "\opt\opt_client\addons\core\dialogs\OPTDef.hpp"

class CfgPatches 
{
    class opt_beamDialog 
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

class DialogBeam
{
    idd = 444001;
    onload = "[] spawn OPT_BEAM_fnc_onLoadDialog;";
    movingEnable = true;
    controlsBackground[] = {BACKGROUND3};

    class BACKGROUND3 : RSCText
    {
        colorBackground[] = {0.2,0.2,0.2,0.5};
        text = ;
        x = 0.0;
        y = 0.0;
        w = 1.0;
        h = 1.0;
    };

    objects[] = {};
    controls[] = {Name0,box1,buttonwm,buttonwp,Beammap};

    class Name0 : RSCText
    {
        style = ST_CENTER;
        sizeEx = 0.06;
        colorText[] = {1.0,1.0,1.0,1};
        x = 0.4;
        y = 0.00;
        w = 0.5;
        h = 0.15;
        text = "Ortswahl";
        default = true;
    };

    class box1 : RSCListBox
    {
        idc = 10002;
        sizeEx = 0.04;
        rowHeight = 0.023;
        colorText[] = {1.0, 1.0, 1.0, 1};
        colorBackground[] = {0, 0, 0, 0.7};
        x = 0.56;
        y = 0.12;
        w = 0.40;
        h = 0.8;
        onLBSelChanged = "[lbCurSel 10002] spawn OPT_BEAM_fnc_beamMapmove;";
        default = true;
    };

    class buttonwm : RSCButton
    {
        idc = 10004;
        style = ST_CENTER;
        sizeEx = 0.03;
        x = 0.2;
        y = 0.93;
        w = 0.1;
        h = 0.05;
        text = "OK";
        action = "[lbCurSel 10002] spawn OPT_BEAM_fnc_beam2;";
        default = true;
    };

    class buttonwp : RSCButton
    {
        idc = 10006;
        style = ST_CENTER;
        sizeEx = 0.03;
        x = 0.33;
        y = 0.93;
        w = 0.1;
        h = 0.05;
        text = "Abbrechen";
        action = "closeDialog 0";
        default = true;
    };

    class Beammap : RscMapControl
    {
        idc = 10007;
        type = 101;
        style = 48;
        x = 0.04;
        y = 0.12;
        w = 0.5;
        h = 0.8;
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
