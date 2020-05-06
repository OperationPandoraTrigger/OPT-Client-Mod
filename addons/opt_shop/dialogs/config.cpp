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
			idc = 20001;
			style = ST_CENTER;
			sizeEx = 0.05;
			colorText[] = COLOR_TEXT;
			x = 0.05;
			y = 0.00;
			w = 0.5;
			h = 0.15;
			text = "Shop";
			default = true;
		};	
	};		

    class controls 
	{
		class Flagge : RscPicture
		{
			idc = 20002;
			colorText[] = COLOR_TEXT;
			colorBackground[] = COLOR_BACK;
			x = 0.15;
			y = 0.1;
			w = 0.39;
			h = 0.1;
			text = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
			default = true;
		};
		class Kosten : RSCText
		{
			idc = 20003;
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
		class PadBox : RSCText
		{
			idc = 20004;
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
			idc = 20005;
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
			idc = 20006;
			style = ST_CENTER;
			sizeEx = 0.03;
			x = 0.22;
			y = 0.92;
			w = 0.08;
			h = 0.05;
			text = "Abbrechen";
			action = "closeDialog 0";
			tooltip = "Dialog schliessen";
			default = true;
		};		
		class RscButtonMoveIn: RscButton
        {
            idc = 20007;
            style = ST_CENTER;
			sizeEx = 0.03;
			x = 0.50;
			y = 0.92;
			w = 0.2;
			h = 0.05;
			text = "Fahrzeug besetzten"; 
            tooltip = "Käufer in das Fahrzeug setzen";
			action = "";
        };
		class buttonkonfig : RSCButton
		{
			idc = 20008;
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
			idc = 20009;
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
			action = "closeDialog 0";
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
			text = "Fahrzeug besetzten"; 
            tooltip = "Käufer in das Fahrzeug setzen";
			action = "";
        };
	};
};

