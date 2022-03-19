#include "\opt\opt_client\addons\core\dialogs\OPTDef.hpp"

class CfgPatches 
{
    class opt_introDialog 
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

class RscTitles
{  
  class opt_intro_anzeige
  {
    idd = 55000;
    duration = 15000;
    name = "";          
    onLoad = "uiNamespace setVariable ['opt_intro_anzeige', _this select 0]";    
    movingEnable = false;
    moving = false;
    enableSimulation = true;

    class controlsBackground
    {
        class Hintergrund : RscText
        {
        colorBackground[] = {0.2, 0.2, 0.2, 0.0};
        text = ;
        x = GUI_GRID_TOPLEFT_X + 1 * GUI_GRID_TOPLEFT_W;
        y = GUI_GRID_TOPLEFT_Y + 1 * GUI_GRID_TOPLEFT_H;
        w = 95 * GUI_GRID_TOPLEFT_W;
        h = 43 * GUI_GRID_TOPLEFT_H;
        };
        
    };
    
    objects[]={};
    
    class controls
      {
        class Bild : RscPicture
        {
            idc = 54000; 
            text= "";
            x = GUI_GRID_TOPLEFT_X + 40 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 2 * GUI_GRID_TOPLEFT_H;
            w = 10 * GUI_GRID_TOPLEFT_W;
            h = 5 * GUI_GRID_TOPLEFT_H;
            sizeEx = 2.4;
            size = 2.4;
        };
        class Titel : RscText 
        {
            idc = 54001;
            style = ST_CENTER;
            colorText[]={1,1,0.45,1};
            font="TahomaB";
            text="MAP_NAME2";
            sizeEx = 0.04;
            x = GUI_GRID_TOPLEFT_X + 40 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 6 * GUI_GRID_TOPLEFT_H;
            w = 10 * GUI_GRID_TOPLEFT_W;
            h = 2 * GUI_GRID_TOPLEFT_H;
        };
        class Titel2 : Titel
        {
            idc = 54002;
            text="MAP_URL";
            sizeEx=0.03;
            y = GUI_GRID_TOPLEFT_Y + 7 * GUI_GRID_TOPLEFT_H;
        };
        class Titel3 : Titel 
        {
            idc = 54003;
            text="MAP_NAME";
            colorText[]={1,1,1,1};
            sizeEx=0.05;
            y = GUI_GRID_TOPLEFT_Y + 8 * GUI_GRID_TOPLEFT_H;
        };
        class Ueberschrift1 : RscText
        {
            idc = 55000;
            style = ST_CENTER;
            colorText[] = {1, 1, 1, 1};
            font = "TahomaB";
            sizeEx = 0.035;
            text = "";
            x = GUI_GRID_TOPLEFT_X + 40 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 8 * GUI_GRID_TOPLEFT_H;
            w = 10 * GUI_GRID_TOPLEFT_W;
            h = 5 * GUI_GRID_TOPLEFT_H;
        };
        class Seite1 : RscPicture
        {
            idc = 55001;
            sizeEx = 0.04;
            x = GUI_GRID_TOPLEFT_X + 28 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 9 * GUI_GRID_TOPLEFT_H;
            w = 10 * GUI_GRID_TOPLEFT_W;
            h = 5 * GUI_GRID_TOPLEFT_H;
        };
    
        class Seite2 : Seite1
        {
            idc = 55003;
            x = GUI_GRID_TOPLEFT_X + 52 * GUI_GRID_TOPLEFT_W;
            text = "";
        };
        class Punkte1 : Ueberschrift1
        {
            idc = 55004;
            colorText[] = {0.071,0.153,0.58,1};
            style = ST_LEFT;
            sizeEx = 0.06;
            x = GUI_GRID_TOPLEFT_X + 32 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 13 * GUI_GRID_TOPLEFT_H;
            w = 10 * GUI_GRID_TOPLEFT_W;
            h = 5 * GUI_GRID_TOPLEFT_H;
            text = "00000";
        };
        class Doppelpunkt2 : Punkte1
        {
            idc = 55005;
            colorText[] = {1, 1, 1, 1};
            sizeEx = 0.04;
            style = ST_CENTER;
            x = 0.47;
            w = 0.06;
            text = "";
        };
        class Punkte2 : Punkte1
        {
            idc = 55006;
            colorText[] = {0.749,0.075,0.075,1};
            style = ST_LEFT;
            x = GUI_GRID_TOPLEFT_X + 56 * GUI_GRID_TOPLEFT_W;
            text = "00000";
        };
        class Ueberschrift2 : Ueberschrift1
        {
            idc = 55007;
            colorText[] = {0.071,0.153,0.58,1};
            style = ST_LEFT;
            x = GUI_GRID_TOPLEFT_X + 6 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 1 * GUI_GRID_TOPLEFT_H;
            w = 10 * GUI_GRID_TOPLEFT_W;
            h = 5 * GUI_GRID_TOPLEFT_H;
            sizeEx = 0.08;
            text = "ABCD";
        };
        class Ueberschrift3 : Ueberschrift2
        {
            idc = 55008;
            colorText[] = {0.749,0.075,0.075,1};
            style = ST_LEFT;
            x = GUI_GRID_TOPLEFT_X + 85 * GUI_GRID_TOPLEFT_W;
            text = "ABCD";
        };
        class Seite1_Spieler1 : RscEdit
        {
            idc = 55101;
            style = ST_MULTI + ST_NO_RECT + ST_UP;
            colorText[] = {0.071,0.153,0.58,1};
            colorBackground[] = {0, 0, 0, 0.7};
            lineSpacing = 1;
            x = GUI_GRID_TOPLEFT_X + 2 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 5 * GUI_GRID_TOPLEFT_H;
            w = 15 * GUI_GRID_TOPLEFT_W;
            h = 40 * GUI_GRID_TOPLEFT_H;
        };
        class Seite2_Spieler1 : RscEdit
        {
            idc = 55201;
            style = ST_MULTI + ST_NO_RECT + ST_UP;
            colorText[] = {0.749,0.075,0.075,1};
            colorBackground[] = {0, 0, 0, 0.7};
            lineSpacing = 1;
            x = GUI_GRID_TOPLEFT_X + 80 * GUI_GRID_TOPLEFT_W;
            y = GUI_GRID_TOPLEFT_Y + 5 * GUI_GRID_TOPLEFT_H;
            w = 15 * GUI_GRID_TOPLEFT_W;
            h = 40 * GUI_GRID_TOPLEFT_H;
        };
    };
  };
};

