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
class RscText;
class RscTextMulti;

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

        objects[] = {};

        class controls
        {
            class Bild : RscPicture
            {
                idc = 54000; 
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
                font= "TahomaB";
                sizeEx = 0.04;
                x = GUI_GRID_TOPLEFT_X + 40 * GUI_GRID_TOPLEFT_W;
                y = GUI_GRID_TOPLEFT_Y + 6 * GUI_GRID_TOPLEFT_H;
                w = 10 * GUI_GRID_TOPLEFT_W;
                h = 2 * GUI_GRID_TOPLEFT_H;
            };

            class Titel2 : Titel
            {
                idc = 54002;
                text= "";
                sizeEx=0.03;
                y = GUI_GRID_TOPLEFT_Y + 7 * GUI_GRID_TOPLEFT_H;
            };

            class Titel3 : Titel 
            {
                idc = 54003; // Schlachtname
                colorText[]={1,1,1,1};
                sizeEx=0.05;
                y = GUI_GRID_TOPLEFT_Y + 10 * GUI_GRID_TOPLEFT_H;
            };

            class Ueberschrift1 : RscText
            {
                idc = 55000; // "Verteidigungssektoren"
                style = ST_CENTER;
                colorText[] = {1, 1, 1, 1};
                font = "TahomaB";
                sizeEx = 0.035;
                x = GUI_GRID_TOPLEFT_X + 40 * GUI_GRID_TOPLEFT_W;
                y = GUI_GRID_TOPLEFT_Y + 12 * GUI_GRID_TOPLEFT_H;
                w = 10 * GUI_GRID_TOPLEFT_W;
                h = 5 * GUI_GRID_TOPLEFT_H;
            };

            class Seite1 : RscPicture
            {
                idc = 55001; // Logo WEST
                sizeEx = 0.04;
                x = GUI_GRID_TOPLEFT_X + 28 * GUI_GRID_TOPLEFT_W;
                y = GUI_GRID_TOPLEFT_Y + 9 * GUI_GRID_TOPLEFT_H;
                w = 10 * GUI_GRID_TOPLEFT_W;
                h = 5 * GUI_GRID_TOPLEFT_H;
            };
    
            class Seite2 : Seite1
            {
                idc = 55003; // Logo EAST
                x = GUI_GRID_TOPLEFT_X + 52 * GUI_GRID_TOPLEFT_W;
            };

            class Punkte1 : Ueberschrift1
            {
                idc = 55004; // Sektoren WEST
                colorText[] = {0.071,0.153,0.58,1};
                style = ST_LEFT;
                sizeEx = 0.06;
                x = GUI_GRID_TOPLEFT_X + 28 * GUI_GRID_TOPLEFT_W;
                y = GUI_GRID_TOPLEFT_Y + 13 * GUI_GRID_TOPLEFT_H;
                w = 10 * GUI_GRID_TOPLEFT_W;
                h = 5 * GUI_GRID_TOPLEFT_H;
            };

            class Doppelpunkt2 : Punkte1
            {
                idc = 55005;
                colorText[] = {1, 1, 1, 1};
                sizeEx = 0.04;
                style = ST_CENTER;
                x = 0.47;
                w = 0.06;
            };

            class Punkte2 : Punkte1
            {
                idc = 55006; // Sektoren EAST
                colorText[] = {0.749,0.075,0.075,1};
                style = ST_LEFT;
                x = GUI_GRID_TOPLEFT_X + 52 * GUI_GRID_TOPLEFT_W;
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
            };

            class Ueberschrift3 : Ueberschrift2
            {
                idc = 55008;
                colorText[] = {0.749,0.075,0.075,1};
                style = ST_LEFT;
                x = GUI_GRID_TOPLEFT_X + 85 * GUI_GRID_TOPLEFT_W;
            };

            class Seite1_Spieler1 : RscTextMulti
            {
                idc = 55101;
                colorText[] = {0.071,0.153,0.58,1};
                colorBackground[] = {0, 0, 0, 0.7};
                lineSpacing = 1;
                x = GUI_GRID_TOPLEFT_X + 2 * GUI_GRID_TOPLEFT_W;
                y = GUI_GRID_TOPLEFT_Y + 5 * GUI_GRID_TOPLEFT_H;
                w = 15 * GUI_GRID_TOPLEFT_W;
                h = 40 * GUI_GRID_TOPLEFT_H;
            };

            class Seite2_Spieler1 : RscTextMulti
            {
                idc = 55201;
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
