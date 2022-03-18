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

class Dialogintro
{
  	idd = 55000;
    onload = "";
    movingEnable = true;

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
			sizeEx = 0.04;
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
			x = GUI_GRID_TOPLEFT_X + 30 * GUI_GRID_TOPLEFT_W;
			y = GUI_GRID_TOPLEFT_Y + 9 * GUI_GRID_TOPLEFT_H;
			w = 10 * GUI_GRID_TOPLEFT_W;
			h = 5 * GUI_GRID_TOPLEFT_H;
		};
	
		class Seite2 : Seite1
		{
			idc = 55003;
			x = GUI_GRID_TOPLEFT_X + 50 * GUI_GRID_TOPLEFT_W;
			text = "";
		};
		class Punkte1 : Ueberschrift1
		{
			idc = 55004;
			colorText[] = {0.071,0.153,0.58,1};
			style = ST_LEFT;
			sizeEx = 0.06;
			x = GUI_GRID_TOPLEFT_X + 34 * GUI_GRID_TOPLEFT_W;
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
			x = GUI_GRID_TOPLEFT_X + 54 * GUI_GRID_TOPLEFT_W;
			text = "00000";
		};
		class Ueberschrift2 : Ueberschrift1
		{
			idc = 55007;
			colorText[] = {0.071,0.153,0.58,1};
			style = ST_LEFT;
			x = GUI_GRID_TOPLEFT_X + 7 * GUI_GRID_TOPLEFT_W;
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
			x = GUI_GRID_TOPLEFT_X + 84 * GUI_GRID_TOPLEFT_W;
		};
		class Seite1_Spieler1 : RscText
		{
			idc = 55101;
			sizeEx = 0.05;
			rowHeight = 0.025;
			style = ST_CENTER;
			colorText[] = {0.071,0.153,0.58,1};
			x = GUI_GRID_TOPLEFT_X + 2 * GUI_GRID_TOPLEFT_W;
			y = GUI_GRID_TOPLEFT_Y + 2 * GUI_GRID_TOPLEFT_H;
			w = 15 * GUI_GRID_TOPLEFT_W;
			h = 5 * GUI_GRID_TOPLEFT_H;
			text = ;
		};
		class Seite1_Spieler2 : Seite1_Spieler1
		{
			idc = 55102;
			y = GUI_GRID_TOPLEFT_Y + 3 * GUI_GRID_TOPLEFT_H;
		};
		class Seite1_Spieler3 : Seite1_Spieler1
		{
			idc = 55103;
			y = GUI_GRID_TOPLEFT_Y + 4 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler4 : Seite1_Spieler1
	 	{
	  		idc = 55104;
			y = GUI_GRID_TOPLEFT_Y + 5 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite1_Spieler5 : Seite1_Spieler1
	  	{
	  		idc = 55105;
			y = GUI_GRID_TOPLEFT_Y + 6 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler6 : Seite1_Spieler1
	  	{
	  		idc = 55106;
			y = GUI_GRID_TOPLEFT_Y + 7 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler7 : Seite1_Spieler1
	  	{
	  		idc = 55107;
			y = GUI_GRID_TOPLEFT_Y + 8 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite1_Spieler8 : Seite1_Spieler1
	 	{
	  		idc = 55108;
			y = GUI_GRID_TOPLEFT_Y + 9 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler9 : Seite1_Spieler1
	  	{
	  		idc = 55109;
			y = GUI_GRID_TOPLEFT_Y + 10 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler10 : Seite1_Spieler1
	  	{
	  		idc = 55110;
			y = GUI_GRID_TOPLEFT_Y + 11 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler11 : Seite1_Spieler1
	  	{
	  		idc = 55111;
			y = GUI_GRID_TOPLEFT_Y + 12 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler12 : Seite1_Spieler1
	  	{
	  		idc = 55112;
			y = GUI_GRID_TOPLEFT_Y + 13 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler13 : Seite1_Spieler1
	  	{
	  		idc = 55113;
			y = GUI_GRID_TOPLEFT_Y + 14 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler14 : Seite1_Spieler1
	 	{
	  		idc = 55114;
			y = GUI_GRID_TOPLEFT_Y + 15 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler15 : Seite1_Spieler1
	  	{
	  		idc = 55115;
			y = GUI_GRID_TOPLEFT_Y + 16 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler16 : Seite1_Spieler1
	  	{
	  		idc = 55116;
			y = GUI_GRID_TOPLEFT_Y + 17 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler17 : Seite1_Spieler1
	  	{
	  		idc = 55117;
			y = GUI_GRID_TOPLEFT_Y + 18 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler18 : Seite1_Spieler1
	  	{
	  		idc = 55118;
			y = GUI_GRID_TOPLEFT_Y + 19 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler19 : Seite1_Spieler1
	  	{
	  		idc = 55119;
			y = GUI_GRID_TOPLEFT_Y + 20 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler20 : Seite1_Spieler1
	  	{
	  		idc = 55120;
			y = GUI_GRID_TOPLEFT_Y + 21 * GUI_GRID_TOPLEFT_H;
	  	};
		class Seite1_Spieler21 : Seite1_Spieler1
		{
			idc = 55121;
			y = GUI_GRID_TOPLEFT_Y + 22 * GUI_GRID_TOPLEFT_H;
		};
		class Seite1_Spieler22 : Seite1_Spieler1
		{
			idc = 55122;
			y = GUI_GRID_TOPLEFT_Y + 23 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler23 : Seite1_Spieler1
	 	{
	  		idc = 55123;
			y = GUI_GRID_TOPLEFT_Y + 24 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite1_Spieler24 : Seite1_Spieler1
	  	{
	  		idc = 55124;
			y = GUI_GRID_TOPLEFT_Y + 25 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler25 : Seite1_Spieler1
	  	{
	  		idc = 55125;
			y = GUI_GRID_TOPLEFT_Y + 26 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler26 : Seite1_Spieler1
	  	{
	  		idc = 55126;
			y = GUI_GRID_TOPLEFT_Y + 27 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite1_Spieler27 : Seite1_Spieler1
	 	{
	  		idc = 55127;
			y = GUI_GRID_TOPLEFT_Y + 28 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler28 : Seite1_Spieler1
	  	{
	  		idc = 55128;
			y = GUI_GRID_TOPLEFT_Y + 29 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler29 : Seite1_Spieler1
	  	{
	  		idc = 55129;
			y = GUI_GRID_TOPLEFT_Y + 30 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler30 : Seite1_Spieler1
	  	{
	  		idc = 55130;
			y = GUI_GRID_TOPLEFT_Y + 31 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler31 : Seite1_Spieler1
	  	{
	  		idc = 55131;
			y = GUI_GRID_TOPLEFT_Y + 32 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler32 : Seite1_Spieler1
	  	{
	  		idc = 55132;
			y = GUI_GRID_TOPLEFT_Y + 33 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler33 : Seite1_Spieler1
	 	{
	  		idc = 55133;
			y = GUI_GRID_TOPLEFT_Y + 34 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler34 : Seite1_Spieler1
	  	{
	  		idc = 55134;
			y = GUI_GRID_TOPLEFT_Y + 35 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler35 : Seite1_Spieler1
	  	{
	  		idc = 55135;
			y = GUI_GRID_TOPLEFT_Y + 36 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler36 : Seite1_Spieler1
	  	{
	  		idc = 55136;
			y = GUI_GRID_TOPLEFT_Y + 37 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler37 : Seite1_Spieler1
	  	{
	  		idc = 55137;
			y = GUI_GRID_TOPLEFT_Y + 38 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler38 : Seite1_Spieler1
	  	{
	  		idc = 55138;
			y = GUI_GRID_TOPLEFT_Y + 39 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite1_Spieler39 : Seite1_Spieler1
	  	{
	  		idc = 55139;
			y = GUI_GRID_TOPLEFT_Y + 40 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler1 : RscText
	  	{
	  		idc = 55201;
			sizeEx = 0.05;
			rowHeight = 0.019;
			style = ST_CENTER;
			colorText[] = {0.749,0.075,0.075,1};
			x = GUI_GRID_TOPLEFT_X + 80 * GUI_GRID_TOPLEFT_W;
			y = GUI_GRID_TOPLEFT_Y + 2 * GUI_GRID_TOPLEFT_H;
			w = 15 * GUI_GRID_TOPLEFT_W;
			h = 5 * GUI_GRID_TOPLEFT_H;
			text = ;
	  	};
		class Seite2_Spieler2 : Seite2_Spieler1
		{
			idc = 55202;
			y = GUI_GRID_TOPLEFT_Y + 3 * GUI_GRID_TOPLEFT_H;
		};
		class Seite2_Spieler3 : Seite2_Spieler1
		{
			idc = 55203;
			y = GUI_GRID_TOPLEFT_Y + 4 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler4 : Seite2_Spieler1
	 	{
	  		idc = 55204;
			y = GUI_GRID_TOPLEFT_Y + 5 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite2_Spieler5 : Seite2_Spieler1
	  	{
	  		idc = 55205;
			y = GUI_GRID_TOPLEFT_Y + 6 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler6 : Seite2_Spieler1
	  	{
	  		idc = 55206;
			y = GUI_GRID_TOPLEFT_Y + 7 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler7 : Seite2_Spieler1
	  	{
	  		idc = 55207;
			y = GUI_GRID_TOPLEFT_Y + 8 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite2_Spieler8 : Seite2_Spieler1
	 	{
	  		idc = 55208;
			y = GUI_GRID_TOPLEFT_Y + 9 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler9 : Seite2_Spieler1
	  	{
	  		idc = 55209;
			y = GUI_GRID_TOPLEFT_Y + 10 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler10 : Seite2_Spieler1
	  	{
	  		idc = 55210;
			y = GUI_GRID_TOPLEFT_Y + 11 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler11 : Seite2_Spieler1
	  	{
	  		idc = 55211;
			y = GUI_GRID_TOPLEFT_Y + 12 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler12 : Seite2_Spieler1
	  	{
	  		idc = 55212;
			y = GUI_GRID_TOPLEFT_Y + 13 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler13 : Seite2_Spieler1
	  	{
	  		idc = 55213;
			y = GUI_GRID_TOPLEFT_Y + 14 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler14 : Seite2_Spieler1
	 	{
	  		idc = 55214;
			y = GUI_GRID_TOPLEFT_Y + 15 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler15 : Seite2_Spieler1
	  	{
	  		idc = 55215;
			y = GUI_GRID_TOPLEFT_Y + 16 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler16 : Seite2_Spieler1
	  	{
	  		idc = 55216;
			y = GUI_GRID_TOPLEFT_Y + 17 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler17 : Seite2_Spieler1
	  	{
	  		idc = 55217;
			y = GUI_GRID_TOPLEFT_Y + 18 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler18 : Seite2_Spieler1
	  	{
	  		idc = 55218;
			y = GUI_GRID_TOPLEFT_Y + 19 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler19 : Seite2_Spieler1
	  	{
	  		idc = 55219;
			y = GUI_GRID_TOPLEFT_Y + 20 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler20 : Seite2_Spieler1
	  	{
	  		idc = 55220;
			y = GUI_GRID_TOPLEFT_Y + 21 * GUI_GRID_TOPLEFT_H;
	  	};
		class Seite2_Spieler21 : Seite2_Spieler1
		{
			idc = 55221;
			y = GUI_GRID_TOPLEFT_Y + 22 * GUI_GRID_TOPLEFT_H;
		};
		class Seite2_Spieler22 : Seite2_Spieler1
		{
			idc = 55222;
			y = GUI_GRID_TOPLEFT_Y + 23 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler23 : Seite2_Spieler1
	 	{
	  		idc = 55223;
			y = GUI_GRID_TOPLEFT_Y + 24 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite2_Spieler24 : Seite2_Spieler1
	  	{
	  		idc = 55224;
			y = GUI_GRID_TOPLEFT_Y + 25 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler25 : Seite2_Spieler1
	  	{
	  		idc = 55225;
			y = GUI_GRID_TOPLEFT_Y + 26 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler26 : Seite2_Spieler1
	  	{
	  		idc = 55226;
			y = GUI_GRID_TOPLEFT_Y + 27 * GUI_GRID_TOPLEFT_H;
	 	};
	 	class Seite2_Spieler27 : Seite2_Spieler1
	 	{
	  		idc = 55227;
			y = GUI_GRID_TOPLEFT_Y + 28 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler28 : Seite2_Spieler1
	  	{
	  		idc = 55228;
			y = GUI_GRID_TOPLEFT_Y + 29 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler29 : Seite2_Spieler1
	  	{
	  		idc = 55229;
			y = GUI_GRID_TOPLEFT_Y + 30 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler30 : Seite2_Spieler1
	  	{
	  		idc = 55230;
			y = GUI_GRID_TOPLEFT_Y + 31 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler31 : Seite2_Spieler1
	  	{
	  		idc = 55231;
			y = GUI_GRID_TOPLEFT_Y + 32 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler32 : Seite2_Spieler1
	  	{
	  		idc = 55232;
			y = GUI_GRID_TOPLEFT_Y + 33 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler33 : Seite2_Spieler1
	 	{
	  		idc = 55233;
			y = GUI_GRID_TOPLEFT_Y + 34 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler34 : Seite2_Spieler1
	  	{
	  		idc = 55234;
			y = GUI_GRID_TOPLEFT_Y + 35 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler35 : Seite2_Spieler1
	  	{
	  		idc = 55235;
			y = GUI_GRID_TOPLEFT_Y + 36 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler36 : Seite2_Spieler1
	  	{
	  		idc = 55236;
			y = GUI_GRID_TOPLEFT_Y + 37 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler37 : Seite2_Spieler1
	  	{
	  		idc = 55237;
			y = GUI_GRID_TOPLEFT_Y + 38 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler38 : Seite2_Spieler1
	  	{
	  		idc = 55238;
			y = GUI_GRID_TOPLEFT_Y + 39 * GUI_GRID_TOPLEFT_H;
	  	};
	  	class Seite2_Spieler39 : Seite2_Spieler1
	  	{
	  		idc = 55239;
			y = GUI_GRID_TOPLEFT_Y + 40 * GUI_GRID_TOPLEFT_H;
	  	};
	};
};
