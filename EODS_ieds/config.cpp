////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.45
//'now' is Thu May 21 11:11:27 2015 : 'file' last modified on Thu May 21 11:11:27 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_
#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

#define LockNo		0
#define LockCadet		1
#define LockYes		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

//Class eods_ieds : config.bin{
class CfgPatches
{
	class EODS_ieds_main
	{
		units[] = {"EODS_ied01_armed","EODS_ied02_armed","EODS_ied03_armed","EODS_ied04_armed","EODS_ied05_armed","EODS_ied06_armed","EODS_ied07_armed","EODS_Fake_01","EODS_ied01","EODS_ied02","EODS_ied03","EODS_ied04","EODS_ied05","EODS_ied06","EODS_ied07","EODS_tierra01_ied01","EODS_tierra02_ied01","EODS_tierra01_ied02","EODS_tierra02_ied02","EODS_tierra01_ied03","EODS_tierra02_ied03","EODS_tierra01_ied04","EODS_tierra02_ied04","EODS_IED_HIDDEN_IN_OBJECT","EODS_IED_CELLPHONE_MODULE","EODS_IED_HIDDEN_MODULE","EODS_IED_CADENA_MODULE","EODS_IED_ARMAR_MODULE","EODS_Uxo_1","EODS_122mm_USSR_IED","EODS_Water_Container_IED","EODS_FuelCan_IED","EODS_122mm_USSR_IED_PP","EODS_ied_B_PressurePlate","EODS_FertilizerBag","EODS_FertilizerBag2_Pile","EODS_FertilizerBag3_Pile","EODS_FertilizerBag_2And3_Pile","EODS_CocaCan","EODS_Bullet_Case_Detonator","EODS_wire_spool","EODS_Water_Container","EODS_Water_Container2"};
		weapons[] = {"EODS_cellphone_02","EODS_inventario_ied_01","EODS_inventario_ied_02","EODS_inventario_ied_03","EODS_inventario_ied_04","EODS_inventario_ied_05","EODS_inventario_ied_06","EODS_inventario_ied_07","EODS_Uxo_01_Inv","EODS_inventario_ied_B_PressurePlate","EODS_inventario_122mm_USSR_IED","EODS_inventario_Water_Container_IED","EODS_inventario_FuelCan_IED","EODS_inventario_122mm_USSR_IED_PP"};
		requiredVersion = 1;
		requiredAddons[] = {"CBA_XEH","CBA_MAIN","A3_UI_F"};
		versionDesc = "[EODS] 0.0.1";
		version = "0.0.1";
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgFunctions
{
	class EODS
	{
		class Init
		{
			file = "EODS_ieds\funciones\PCU";
			class EODS_PCU_INIT
			{
				postInit = 1;
			};
		};
	};
};
class EODS_ProgressBar
{
	access = 0;
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	colorFrame[] = {0,0,0,0};
	h = 0.0261438;
	shadow = 2;
	style = 0;
	texture = "\A3\ui_f\data\GUI\RscCommon\RscProgress\progressbar_ca.paa";
	type = 8;
	w = 0.313726;
	x = 0.344;
	y = 0.619;
};
class EODS_Text
{
	deletable = 0;
	fade = 0;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	access = 0;
	type = 0;
	idc = -1;
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	font = "PuristaMedium";
	size = "0.018 * safezoneH";
	sizeEx = "0.018 * safezoneH";
	linespacing = 1;
};
class EODS_StructuredText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1,1,1,1};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#ffffff";
		align = "center";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "0.018 * safezoneH";
	shadow = 1;
};
class EODS_Picture
{
	deletable = 0;
	fade = 0;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	fixedWidth = 0;
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	font = "PuristaLight";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class EODS_Edit
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {-1,-1,-1,-1};
	colorText[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {-1,-1,-1,-1};
	colorSelection[] = {-1,-1,-1,-1};
	colorBorder[] = {-1,-1,-1,-1};
	autocomplete = "";
	text = "";
	size = 0;
	style = 0;
	font = "PuristaMedium";
	shadow = 0;
	sizeEx = "0.018 * safezoneH";
	canModify = 0;
	borderSize = 0;
	tooltipColorText[] = {-1,-1,-1,-1};
	tooltipColorBox[] = {-1,-1,-1,-1};
	tooltipColorShade[] = {-1,-1,-1,-1};
};
class EODS_Combo
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 4;
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorScrollbar[] = {1,0,0,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictudeDisabled[] = {1,1,1,0.25};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	maxHistoryDelay = 1;
	class ComboScrollBar
	{
		color[] = {1,1,1,1};
	};
	style = "0x10 + 0x200";
	font = "PuristaMedium";
	sizeEx = "0.018 * safezoneH";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	colorSelectBackground[] = {1,1,1,0.7};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPictureDisabled[] = {1,1,1,1};
};
class EODS_ListBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 5;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0.3};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictudeDisabled[] = {1,1,1,0.25};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class ListScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
	style = 16;
	font = "PuristaMedium";
	sizeEx = "0.018 * safezoneH";
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	period = 1.2;
	maxHistoryDelay = 1;
	colorPictureDisabled[] = {1,1,1,1};
};
class EODS_Button_celular
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = {-1,-1,-1,-1};
	colorDisabled[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorBackgroundDisabled[] = {-1,-1,-1,-1};
	colorBackgroundActive[] = {-1,-1,-1,-1};
	colorFocused[] = {-1,-1,-1,-1};
	colorShadow[] = {-1,-1,-1,-1};
	colorBorder[] = {-1,-1,-1,-1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 0;
	font = "PuristaMedium";
	sizeEx = "0.018 * safezoneH";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class EODS_Button
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,1};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 0;
	font = "PuristaMedium";
	sizeEx = "0.018 * safezoneH";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class EODS_ShortcutButton
{
	deletable = 0;
	fade = 0;
	type = 16;
	x = 0.1;
	y = 0.1;
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	shortcuts[] = {};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {1,1,1,1};
	colorFocused[] = {1,1,1,1};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackground2[] = {1,1,1,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
		shadow = 1;
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	period = 0.4;
	font = "PuristaMedium";
	size = "0.018 * safezoneH";
	sizeEx = "0.018 * safezoneH";
	text = "";
	action = "";
	class AttributesImage
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
	};
};
class EODS_ShortcutButtonMain
{
	idc = -1;
	style = 0;
	default = 0;
	w = 0.313726;
	h = 0.104575;
	color[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0.0145;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	class TextPos
	{
		left = "(((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		right = 0.005;
		bottom = 0;
	};
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	period = 0.5;
	font = "PuristaMedium";
	size = "0.018 * safezoneH";
	sizeEx = "0.018 * safezoneH";
	text = "";
	action = "";
	class Attributes
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
		shadow = 0;
	};
	class AttributesImage
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = 0;
	};
};
class EODS_Frame
{
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = "0.018 * safezoneH";
	text = "";
};
class EODS_Slider
{
	deletable = 0;
	fade = 0;
	color[] = {1,1,1,0.8};
	colorActive[] = {1,1,1,1};
	access = 0;
	type = 3;
	style = 1024;
	w = 0.3;
	shadow = 0;
	h = 0.025;
};
class IGUIBack
{
	colorText[] = {0,0,0,0};
	colorbackground[] = {0,0,0,1};
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	font = "PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
};
class EODS_CheckBox
{
	idc = -1;
	type = 77;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] = {1,1,1,0.7};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.2};
	colorBackground[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	textureChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
};
class EODS_TextCheckBox
{
	idc = -1;
	type = 7;
	style = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	colorText[] = {1,0,0,1};
	color[] = {0,0,0,0};
	colorBackground[] = {0,0,1,1};
	colorTextSelect[] = {0,0.8,0,1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorSelect[] = {0,0,0,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	font = "PuristaMedium";
	sizeEx = "0.018 * safezoneH";
	rows = 1;
	columns = 1;
	strings[] = {"UNCHECKED"};
	checked_strings[] = {"CHECKED"};
};
class EODS_ButtonMenu
{
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	textureNoShortcut = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "0.018 * safezoneH";
	sizeEx = "0.018 * safezoneH";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos
	{
		left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = 0;
	};
	class ShortcutPos
	{
		left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0;
		h = 0;
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
};
class EODS_ButtonMenuOK
{
	idc = 1;
	shortcuts[] = {"0x00050000 + 0",28,57,156};
	default = 1;
	text = "Aceptar";
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
};
class EODS_ButtonMenuCancel
{
	idc = 2;
	shortcuts[] = {"0x00050000 + 1"};
	text = "Cancelar";
};
class EODS_ControlsGroup
{
	deletable = 0;
	fade = 0;
	class VScrollbar
	{
		color[] = {1,1,1,1};
		width = 0.021;
		autoScrollEnabled = 1;
	};
	class HScrollbar
	{
		color[] = {1,1,1,1};
		height = 0.028;
	};
	class Controls{};
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
};
class EODS_IEDS_MENU_CELULAR
{
	idd = -1;
	movingEnable = 1;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['EODS_IEDS_MENU_CELULAR_CHECK_VAR', _this select 0]";
	onUnLoad = "uiNamespace setVariable ['EODS_IEDS_MENU_CELULAR_CHECK_VAR', nil]";
	controls[] = {"EODS_IEDS_CELULAR_Picture_1201","EODS_IEDS_CELULAR_Picture_1200","EODS_IEDS_CELULAR_Button_1600","EODS_IEDS_CELULAR_Button_1601","EODS_IEDS_CELULAR_Button_1602","EODS_IEDS_CELULAR_Button_1603","EODS_IEDS_CELULAR_Button_1604","EODS_IEDS_CELULAR_Button_1605","EODS_IEDS_CELULAR_Button_1606","EODS_IEDS_CELULAR_Button_1607","EODS_IEDS_CELULAR_Button_1608","EODS_IEDS_CELULAR_Button_1609","EODS_IEDS_CELULAR_Button_1610","EODS_IEDS_CELULAR_Button_1611","EODS_IEDS_CELULAR_Button_1612","EODS_IEDS_CELULAR_Button_1613","EODS_IEDS_CELULAR_Button_1614","EODS_IEDS_CELULAR_Button_1615","EODS_IEDS_CELULAR_Edit_1401","EODS_IEDS_CELULAR_Edit_1402","EODS_IEDS_CELULAR_Edit_1400"};
	class EODS_IEDS_CELULAR_Picture_1201: EODS_Picture
	{
		idc = 1201;
		text = "\EODS_ieds\data\logo_menu.paa";
		x = "0.425521 * safezoneW + safezoneX";
		y = "0.675931 * safezoneH + safezoneY";
		w = "0.148958 * safezoneW";
		h = "0.109957 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Picture_1200: EODS_Picture
	{
		idc = 1200;
		text = "\EODS_ieds\data\menu_celular.paa";
		x = "0.345313 * safezoneW + safezoneX";
		y = "0.214111 * safezoneH + safezoneY";
		w = "0.309375 * safezoneW";
		h = "0.494807 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1600: EODS_Button_celular
	{
		idc = 11;
		text = "1";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '1'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_1",0.09,1};
		x = "0.454167 * safezoneW + safezoneX";
		y = "0.532987 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1601: EODS_Button_celular
	{
		idc = 12;
		text = "2";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '2'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_2",0.09,1};
		x = "0.488542 * safezoneW + safezoneX";
		y = "0.543983 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1602: EODS_Button_celular
	{
		idc = 13;
		text = "3";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '3'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_3",0.09,1};
		x = "0.522917 * safezoneW + safezoneX";
		y = "0.532987 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1603: EODS_Button_celular
	{
		idc = 14;
		text = "4";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '4'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_4",0.09,1};
		x = "0.454167 * safezoneW + safezoneX";
		y = "0.565974 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1604: EODS_Button_celular
	{
		idc = 15;
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '5'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_5",0.09,1};
		x = "0.488542 * safezoneW + safezoneX";
		y = "0.57697 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1605: EODS_Button_celular
	{
		idc = 16;
		text = "6";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '6'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_6",0.09,1};
		x = "0.522917 * safezoneW + safezoneX";
		y = "0.565974 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1606: EODS_Button_celular
	{
		idc = 17;
		text = "7";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '7'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_7",0.09,1};
		x = "0.454167 * safezoneW + safezoneX";
		y = "0.598961 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1607: EODS_Button_celular
	{
		idc = 18;
		text = "8";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '8'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_8",0.09,1};
		x = "0.488542 * safezoneW + safezoneX";
		y = "0.609957 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1608: EODS_Button_celular
	{
		idc = 19;
		text = "9";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '9'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_9",0.09,1};
		x = "0.522917 * safezoneW + safezoneX";
		y = "0.598961 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1609: EODS_Button_celular
	{
		idc = 20;
		text = "0";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '0'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_0",0.09,1};
		x = "0.488542 * safezoneW + safezoneX";
		y = "0.642944 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1610: EODS_Button_celular
	{
		idc = 21;
		text = "LL";
		action = "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_CHECK_NUMERO_CELULAR; EODS_CELULAR_AGENDA_ACTIVA = false;";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_0",0.09,1};
		x = "0.454167 * safezoneW + safezoneX";
		y = "0.5 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1611: EODS_Button_celular
	{
		idc = 22;
		text = "COL";
		action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {ctrlSetText [1400, ''];};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_0",0.09,1};
		x = "0.522917 * safezoneW + safezoneX";
		y = "0.5 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1612: EODS_Button_celular
	{
		idc = 23;
		text = "SA";
		action = "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_GUARDAR_NUMERO_CELULAR;";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_0",0.09,1};
		x = "0.465625 * safezoneW + safezoneX";
		y = "0.456017 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1613: EODS_Button_celular
	{
		idc = 24;
		text = "AGE";
		action = "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_CELULAR; EODS_CELULAR_AGENDA_ACTIVA = true;";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_0",0.09,1};
		x = "0.511458 * safezoneW + safezoneX";
		y = "0.456017 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1614: EODS_Button_celular
	{
		idc = 25;
		text = "UP";
		action = "if (EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_SUBIR;};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_0",0.09,1};
		x = "0.488542 * safezoneW + safezoneX";
		y = "0.467013 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Button_1615: EODS_Button_celular
	{
		idc = 26;
		text = "Down";
		action = "if (EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_BAJAR;};";
		soundClick[] = {"\EODS_ieds\data\Sonidos\celu_tecla_0",0.09,1};
		x = "0.488542 * safezoneW + safezoneX";
		y = "0.5 * safezoneH + safezoneY";
		w = "0.0229167 * safezoneW";
		h = "0.0329871 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Edit_1401: EODS_Text
	{
		idc = 1401;
		text = "$STR_EODS_ieds_Celular_Guardar";
		x = "0.459301 * safezoneW + safezoneX";
		y = "0.425458 * safezoneH + safezoneY";
		w = "0.0458333 * safezoneW";
		h = "0.0219914 * safezoneH";
		style = 0;
		sizeEx = "0.019 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Edit_1402: EODS_Text
	{
		idc = 1402;
		text = "$STR_EODS_ieds_Celular_Agenda";
		x = "0.499182 * safezoneW + safezoneX";
		y = "0.425458 * safezoneH + safezoneY";
		w = "0.0458333 * safezoneW";
		h = "0.0219914 * safezoneH";
		style = 1;
		sizeEx = "0.019 * safezoneH";
	};
	class EODS_IEDS_CELULAR_Edit_1400: EODS_Text
	{
		idc = 1400;
		text = "";
		x = "0.471354 * safezoneW + safezoneX";
		y = "0.34606 * safezoneH + safezoneY";
		w = "0.0630208 * safezoneW";
		h = "0.0989614 * safezoneH";
		style = 2;
		sizeEx = "0.019 * safezoneH";
	};
};
class EODS_IEDS_MENU_PRINCIPAL
{
	idd = -1;
	movingEnable = 1;
	enableSimulation = 1;
	onLoad = "if (!EODS_IEDS_PCU_HABILITADO) then {closedialog 0;}; uiNamespace setVariable ['EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR', _this select 0]";
	onUnLoad = "uiNamespace setVariable ['EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR', nil]";
	class controls
	{
		class EODS_IEDS_Picture_1200: EODS_Picture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.396875 * safezoneW + safezoneX";
			y = "0.390043 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.164936 * safezoneH";
		};
		class EODS_IEDS_ButtonMenu_2401: EODS_Button
		{
			idc = 1;
			text = "Armar";
			x = "0.236458 * safezoneW + safezoneX";
			y = "0.42303 * safezoneH + safezoneY";
			w = "0.131771 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_ButtonMenu_2402: EODS_Button
		{
			idc = 2;
			text = "Enterrar";
			x = "0.236458 * safezoneW + safezoneX";
			y = "0.489004 * safezoneH + safezoneY";
			w = "0.131771 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_ButtonMenu_2403: EODS_Button
		{
			idc = 3;
			text = "Mover";
			x = "0.631771 * safezoneW + safezoneX";
			y = "0.42303 * safezoneH + safezoneY";
			w = "0.131771 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_ButtonMenu_2404: EODS_Button
		{
			idc = 4;
			text = "Recoger";
			x = "0.631771 * safezoneW + safezoneX";
			y = "0.489004 * safezoneH + safezoneY";
			w = "0.131771 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_ButtonMenu_2405: EODS_Button
		{
			idc = 5;
			text = "Inspeccionar";
			x = "0.442708 * safezoneW + safezoneX";
			y = "0.565974 * safezoneH + safezoneY";
			w = "0.131771 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_Text_1000: EODS_Text
		{
			idc = 21;
			text = "$STR_EODS_ieds_titulo_struct";
			x = "0.396875 * safezoneW + safezoneX";
			y = "0.599109 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.0219914 * safezoneH";
			colorBackground[] = {"178/255","121/255","29/255",0.5};
			colorText[] = {1,1,1,1};
			colorShadow[] = {0,0,0,0.5};
			SizeEx = "(((1 / 1.2) / 24) * 0.9)";
		};
		class EODS_IEDS_structuredText_1100: EODS_StructuredText
		{
			idc = 22;
			x = "0.396875 * safezoneW + safezoneX";
			y = "0.620952 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.131949 * safezoneH";
			text = "";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,0.5};
		};
		class EODS_IEDS_Picture_1201: EODS_Picture
		{
			idc = 1100;
			text = "\EODS_ieds\data\logo_menu.paa";
			x = "0.425521 * safezoneW + safezoneX";
			y = "0.280086 * safezoneH + safezoneY";
			w = "0.148958 * safezoneW";
			h = "0.109957 * safezoneH";
		};
		class EODS_IEDS_HELP_01_ButtonMenu_2410: EODS_Button
		{
			idc = 11;
			text = "?";
			x = "0.373958 * safezoneW + safezoneX";
			y = "0.42303 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_HELP_02_ButtonMenu_2411: EODS_Button
		{
			idc = 12;
			text = "?";
			x = "0.373958 * safezoneW + safezoneX";
			y = "0.489004 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_HELP_03_ButtonMenu_2412: EODS_Button
		{
			idc = 13;
			text = "?";
			x = "0.608854 * safezoneW + safezoneX";
			y = "0.42303 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_HELP_04_ButtonMenu_2413: EODS_Button
		{
			idc = 14;
			text = "?";
			x = "0.608854 * safezoneW + safezoneX";
			y = "0.489004 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
		class EODS_IEDS_HELP_05_ButtonMenu_2414: EODS_Button
		{
			idc = 15;
			text = "?";
			x = "0.419792 * safezoneW + safezoneX";
			y = "0.565974 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
	};
};
class RscTitles
{
	class Eods_Ieds_Display_hint
	{
		idd = -1;
		onLoad = "uiNamespace setVariable ['Eods_Ieds_Display_hint_CHECK_VAR', _this select 0]; EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO = true;";
		onUnLoad = "uiNamespace setVariable ['Eods_Ieds_Display_hint_CHECK_VAR', displayNull]; EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO = false; EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA = false; terminate EODS_IEDS_PCU_DISPLAY_FUNCION;";
		fadeIn = 0.2;
		fadeOut = 0.2;
		movingEnable = 0;
		duration = "10e10";
		name = "Eods_Ieds_Display_hint";
		class controls
		{
			class EODS_IEDS_Edit_1400: EODS_Text
			{
				idc = 1400;
				text = "BLAH BLAH";
				x = "0.00729166 * safezoneW + safezoneX";
				y = "0.0161887 * safezoneH + safezoneY";
				w = "0.131771 * safezoneW";
				h = "0.0219914 * safezoneH";
				colorBackground[] = {"178/255","121/255","29/255",0.5};
				colorText[] = {1,1,1,1};
				colorShadow[] = {0,0,0,0.5};
			};
			class EODS_IEDS_Info_Text: EODS_StructuredText
			{
				idc = 1100;
				x = "0.00729166 * safezoneW + safezoneX";
				y = "0.0381801 * safezoneH + safezoneY";
				w = "0.131771 * safezoneW";
				h = "0.109957 * safezoneH";
				text = "";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.1,0.1,0.1,0.5};
			};
			class EODS_IEDS_fondo: EODS_StructuredText
			{
				idc = 1110;
				x = "0.00729166 * safezoneW + safezoneX";
				y = "0.0381801 * safezoneH + safezoneY";
				w = "0.131771 * safezoneW";
				h = "0.0439828 * safezoneH";
				text = "";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.1,0.1,0.1,0.5};
			};
			class EODS_IEDS_ProgressBar: EODS_ProgressBar
			{
				idc = 1120;
				x = "0.0130208 * safezoneW + safezoneX";
				y = "0.057 * safezoneH + safezoneY";
				w = "0.120313 * safezoneW";
				h = "0.00549786 * safezoneH";
			};
		};
	};
	class RscPicture;
	class Eods_Talon_Display_Camera
	{
		idd = -1;
		onLoad = "uiNamespace setVariable ['Eods_Talon_Display_Camera_CHECK_VAR', _this select 0];";
		onUnLoad = "uiNamespace setVariable ['Eods_Talon_Display_Camera_CHECK_VAR', displayNull];";
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		duration = 99999999;
		fadein = 0;
		fadeout = 0;
		class controls
		{
			class EODS_TALON_Camera: RscPicture
			{
				idc = 0;
				type = 0;
				style = 48;
				text = "";
				x = "0.80 * safezoneW + safezoneX";
				y = "0.68 * safezoneH + safezoneY";
				w = "0.18 * safezoneW";
				h = "0.15 * safezoneH";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.3};
				font = "TahomaB";
				sizeEx = 0;
				lineSpacing = 0;
				fixedWidth = 0;
				shadow = 0;
			};
			class EODS_TALON_Text_1501: EODS_Text
			{
				idc = 1501;
				text = "BLAH BLAH";
				x = "0.831102 * safezoneW + safezoneX";
				y = "0.774893 * safezoneH + safezoneY";
				w = "0.164584 * safezoneW";
				h = "0.0219914 * safezoneH";
				colorBackground[] = {"178/255","121/255","29/255",0.5};
				colorText[] = {1,1,1,1};
				colorShadow[] = {0,0,0,0.5};
			};
		};
	};
};
class CfgModels
{
	class Default
	{
		sectionsInherit = "";
		sections[] = {};
		skeletonName = "";
	};
	class Vehicle: Default{};
	class tierra01_ied01: Vehicle
	{
		sections[] = {"todo"};
	};
	class tierra02_ied01: Vehicle
	{
		sections[] = {"todo"};
	};
	class tierra01_ied02: Vehicle
	{
		sections[] = {"todo"};
	};
	class tierra02_ied02: Vehicle
	{
		sections[] = {"todo"};
	};
	class tierra01_ied03: Vehicle
	{
		sections[] = {"todo"};
	};
	class tierra02_ied03: Vehicle
	{
		sections[] = {"todo"};
	};
	class tierra01_ied04: Vehicle
	{
		sections[] = {"todo"};
	};
	class tierra02_ied04: Vehicle
	{
		sections[] = {"todo"};
	};
};
class CfgFactionClasses
{
	class EODS_ieds_modules
	{
		displayName = "EODS";
		priority = 5000;
		side = 7;
	};
};
class CfgVehicleClasses
{
	class EODS_ied_class
	{
		displayName = "EODS IEDs";
	};
};
class cfgVehicles
{
	class ThingX;
	class EODS_Fake_Base: ThingX
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_Fake_Base";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
	class EODS_Fake_01: EODS_Fake_Base
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_Fake_01";
		scope = 1;
		displayName = "blah";
		model = "EODS_ieds\meshes\fake_point.p3d";
		vehicleClass = "EODS_ied_class";
	};
	class EODS_base_ied_cellphone: ThingX
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_base_ied_cellphone";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class HitPoints
		{
			class HitIed;
		};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf'";
		};
		class AnimationSources
		{
			class Battery_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Detonator_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class EODS_base_ied_Pressure: ThingX
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_base_ied_Pressure";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class HitPoints
		{
			class HitIed;
			class HitPP;
		};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf'";
		};
		class AnimationSources
		{
			class Battery_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Detonator_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class EODS_base_Uxo: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_base_Uxo";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class HitPoints
		{
			class HitIed;
			class HitPP;
		};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf'";
		};
	};
	class EODS_Uxo_1: EODS_base_Uxo
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_UXO_1";
		scope = 2;
		displayName = "UXO";
		model = "EODS_ieds\meshes\EODS_UXO_1.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied01_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied01: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied01";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied01";
		model = "EODS_ieds\meshes\ied01.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied01_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied01_armed: EODS_ied01
	{
		displayName = "$STR_EODS_ieds_ied01_armed";
		class Eventhandlers
		{
			
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};
	
	class EODS_ied02: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied02";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied02";
		model = "EODS_ieds\meshes\ied02.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied02_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied02_armed: EODS_ied02
	{
		displayName = "$STR_EODS_ieds_ied02_armed";
		class Eventhandlers
		{
			
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};
	
	class EODS_ied03: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied03";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied03";
		model = "EODS_ieds\meshes\ied03.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied03_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied03_armed: EODS_ied03
	{
		displayName = "$STR_EODS_ieds_ied03_armed";
		class Eventhandlers
		{
			
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};
	
	class EODS_ied04: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied04";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied04";
		model = "EODS_ieds\meshes\ied04.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied04_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied04_armed: EODS_ied04
	{
		displayName = "$STR_EODS_ieds_ied04_armed";
		class Eventhandlers
		{
			
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};
	
	class EODS_ied05: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied05";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied05";
		model = "EODS_ieds\meshes\EWK_ied01.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied05_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied05_armed: EODS_ied05
	{
		displayName = "$STR_EODS_ieds_ied05_armed";
		class Eventhandlers
		{
			
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};
	
	class EODS_ied06: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied06";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied06";
		model = "EODS_ieds\meshes\EWK_ied02.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied06_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied06_armed: EODS_ied06
	{
		displayName = "$STR_EODS_ieds_ied06_armed";
		class Eventhandlers
		{
			
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};
	
	class EODS_ied07: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied07";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied07";
		model = "EODS_ieds\meshes\EWK_ied03.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	
	class EODS_ied07_armed: EODS_ied07
	{
		displayName = "$STR_EODS_ieds_ied07_armed";
		class Eventhandlers
		{
			
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};
	
	class EODS_122mm_USSR_IED: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_122mm_USSR_RCIED";
		scope = 0;
		displayName = "EODS_122mm_USSR_RCIED";
		model = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	class EODS_Water_Container_IED: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Water_Container_IED";
		scope = 0;
		displayName = "EODS Water Container IED";
		model = "\EODS_ieds\meshes\WaterBomb.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class Eventhandlers{};
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};
	class EODS_FuelCan_IED: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FuelCan_IED";
		scope = 0;
		displayName = "EODS FuelCan IED";
		model = "\EODS_ieds\meshes\FuelCan.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class Eventhandlers{};
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};
	class EODS_122mm_USSR_IED_PP: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_122mm_USSR_IED_PP";
		scope = 0;
		displayName = "EODS 122mm_USSR_IED_PP";
		model = "\EODS_ieds\meshes\122mm_USSR_IED_PP.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class Eventhandlers{};
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};
	class EODS_ied_B_PressurePlate: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "ied_B_PressurePlate";
		scope = 0;
		displayName = "ied_B_PressurePlate";
		model = "EODS_ieds\meshes\Ied_PP01.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};
	class EODS_FertilizerBag: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FertilizerBag";
		scope = 0;
		displayName = "EODS FertilizerBag";
		model = "\EODS_ieds\meshes\FertilizerBag.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_FertilizerBag2_Pile: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FertilizerBag2_Pile";
		scope = 0;
		displayName = "EODS_FertilizerBag2_Pile";
		model = "\EODS_ieds\meshes\FertilizerBag2Pile.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_FertilizerBag3_Pile: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FertilizerBag3_Pile";
		scope = 0;
		displayName = "EODS_FertilizerBag3_Pile";
		model = "\EODS_ieds\meshes\FertilizerBag3Pile.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_FertilizerBag_2And3_Pile: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "FertilizerBag2And3Pile";
		scope = 0;
		displayName = "FertilizerBag2And3Pile";
		model = "\EODS_ieds\meshes\FertilizerBag2And3Pile.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_CocaCan: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_CocaCan";
		scope = 0;
		displayName = "EODS SodaCan (coca)";
		model = "\EODS_ieds\meshes\CocaCan.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_Bullet_Case_Detonator: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Bullet_Case_Detonator";
		scope = 0;
		displayName = "EODS Bullet_Case_Detonator";
		model = "\EODS_ieds\meshes\Bullet_Case_Detonator.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_wire_spool: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_wire_spool";
		scope = 0;
		displayName = "EODS wire_spool";
		model = "\EODS_ieds\meshes\wire_spool.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_Water_Container: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Water_Container";
		scope = 0;
		displayName = "EODS Water Container";
		model = "\EODS_ieds\meshes\WaterContainer.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_Water_Container2: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Water_Container2";
		scope = 0;
		displayName = "EODS Water Container2";
		model = "\EODS_ieds\meshes\WaterContainer2.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class House_F;
	class EODS_tierra_base: House_F
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_tierra_base";
		scope = 0;
		displayName = "Tierra Ied Base";
		model = "\A3\Weapons_F\empty.p3d";
		vehicleClass = "EODS_ied_class";
		icon = "iconObject";
		keepHorizontalPlacement = 0;
		hiddenSelections[] = {"todo"};
		class DestructionEffects{};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_TIERRA_INIT.sqf';};";
		};
	};
	class EODS_tierra01_ied01: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied01";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_01";
		model = "EODS_ieds\meshes\tierra01_ied01.p3d";
	};
	class EODS_tierra02_ied01: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied01";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_02";
		model = "EODS_ieds\meshes\tierra02_ied01.p3d";
	};
	class EODS_tierra01_ied02: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied02";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_03";
		model = "EODS_ieds\meshes\tierra01_ied02.p3d";
	};
	class EODS_tierra02_ied02: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied02";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_04";
		model = "EODS_ieds\meshes\tierra02_ied02.p3d";
	};
	class EODS_tierra01_ied03: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied03";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_05";
		model = "EODS_ieds\meshes\tierra01_ied03.p3d";
	};
	class EODS_tierra02_ied03: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied03";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_06";
		model = "EODS_ieds\meshes\tierra02_ied03.p3d";
	};
	class EODS_tierra01_ied04: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied04";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_07";
		model = "EODS_ieds\meshes\tierra01_ied04.p3d";
	};
	class EODS_tierra02_ied04: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied04";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_08";
		model = "EODS_ieds\meshes\tierra02_ied04.p3d";
	};
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class EODS_IED_HIDDEN_IN_OBJECT: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_HIDDEN_IN_OBJECT";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_hidden_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_hidden_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_hidden_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\HIDDEN_IEDS\EODS_HIDDEN_OBJECT_INIT.sqf';};";
		};
	};
	class EODS_IED_CELLPHONE_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_CA";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_IED_CA_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_IED_CA_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_IED_CA_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\IED_CA\EODS_CA_INIT.sqf';};";
		};
	};
	class EODS_IED_HIDDEN_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_HIDDEN";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_bury_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_bury_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_bury_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\HIDDEN_IEDS\EODS_HIDDEN_INIT.sqf';};";
		};
	};
	class EODS_IED_CADENA_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_CADENA";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_Encadenar_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_Encadenar_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_Encadenar_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\CADENA\EODS_CADENA_INIT.sqf';};";
		};
	};
	class EODS_IED_ARMAR_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_ARMAR";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_Armar_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_Armar_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_Armar_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\ARMAR\EODS_ARMAR_INIT.sqf';};";
		};
	};
};
class WeaponSlotsInfo;
class ItemInfo;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Default;
	class ItemCore;
	class EODS_item_general: ItemCore
	{
		scope = 0;
	};
	class EODS_cellphone_02: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_celuar";
		class ItemInfo
		{
			mass = 1;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\iconocelular_03.paa";
		model = "EODS_ieds\meshes\celular02.p3d";
	};
	class EODS_Uxo_01_Inv: EODS_item_general
	{
		scope = 1;
		displayName = "EODS_Uxo_01";
		class ItemInfo
		{
			mass = 70;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_01.paa";
		model = "EODS_ieds\meshes\EODS_UXO_1.p3d";
	};
	class EODS_inventario_ied_01: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied01";
		class ItemInfo
		{
			mass = 70;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_01.paa";
		model = "EODS_ieds\meshes\ied01.p3d";
	};
	class EODS_inventario_ied_02: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied02";
		class ItemInfo
		{
			mass = 90;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_02.paa";
		model = "EODS_ieds\meshes\ied02.p3d";
	};
	class EODS_inventario_ied_03: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied03";
		class ItemInfo
		{
			mass = 120;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_03.paa";
		model = "EODS_ieds\meshes\ied03.p3d";
	};
	class EODS_inventario_ied_04: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied04";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_04.paa";
		model = "EODS_ieds\meshes\ied04.p3d";
	};
	class EODS_inventario_ied_05: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied05";
		class ItemInfo
		{
			mass = 70;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_05.paa";
		model = "EODS_ieds\meshes\EWK_ied01.p3d";
	};
	class EODS_inventario_ied_06: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied06";
		class ItemInfo
		{
			mass = 120;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_06.paa";
		model = "EODS_ieds\meshes\EWK_ied02.p3d";
	};
	class EODS_inventario_ied_07: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied07";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\EWK_ied03.p3d";
	};
	class EODS_inventario_ied_B_PressurePlate: EODS_item_general
	{
		scope = 1;
		displayName = "ied_B_PressurePlate";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\Ied_PP01.p3d";
	};
	class EODS_inventario_122mm_USSR_IED: EODS_item_general
	{
		scope = 2;
		displayName = "122mm_USSR_IED";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
	};
	class EODS_inventario_Water_Container_IED: EODS_item_general
	{
		scope = 1;
		displayName = "EODS_Water_Container_IED";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\WaterBomb.p3d";
	};
	class EODS_inventario_FuelCan_IED: EODS_item_general
	{
		scope = 1;
		displayName = "EODS_FuelCan_IED";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\FuelCan.p3d";
	};
	class EODS_inventario_122mm_USSR_IED_PP: EODS_item_general
	{
		scope = 1;
		displayName = "122mm_USSR_IED_PP";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\122mm_USSR_IED_PP.p3d";
	};
};
class CfgSounds
{
	class sordera1
	{
		name = "sordera1";
		sound[] = {"A3\Missions_F_EPA\data\sounds\combat_deafness.wss",1,1};
		titles[] = {};
	};
	class EODS_tone
	{
		name = "EODS_tone";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_tone.ogg",0.5,1};
		titles[] = {};
	};
	class EODS_disconect
	{
		name = "EODS_disconect";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_disconect.ogg",0.5,1};
		titles[] = {};
	};
	class EODS_ringtone_01
	{
		name = "EODS_ringtone_01";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_01.ogg",0.3,1};
		titles[] = {};
	};
	class EODS_ringtone_02
	{
		name = "EODS_ringtone_02";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_02.ogg",0.3,1};
		titles[] = {};
	};
	class EODS_ringtone_03
	{
		name = "EODS_ringtone_03";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_03.ogg",0.3,1};
		titles[] = {};
	};
	class EODS_ringtone_04
	{
		name = "EODS_ringtone_04";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_04.ogg",0.3,1};
		titles[] = {};
	};
	class EODS_ringtone_05
	{
		name = "EODS_ringtone_05";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_05.ogg",0.3,1};
		titles[] = {};
	};
	class EODS_ringtone_01_enterrado
	{
		name = "EODS_ringtone_01_enterrado";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_01.ogg",0.1,0.8};
		titles[] = {};
	};
	class EODS_ringtone_02_enterrado
	{
		name = "EODS_ringtone_02_enterrado";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_02.ogg",0.1,0.8};
		titles[] = {};
	};
	class EODS_ringtone_03_enterrado
	{
		name = "EODS_ringtone_03_enterrado";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_03.ogg",0.1,0.8};
		titles[] = {};
	};
	class EODS_ringtone_04_enterrado
	{
		name = "EODS_ringtone_04_enterrado";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_04.ogg",0.1,0.8};
		titles[] = {};
	};
	class EODS_ringtone_05_enterrado
	{
		name = "EODS_ringtone_05_enterrado";
		sound[] = {"\EODS_ieds\data\Sonidos\EODS_ringtone_05.ogg",0.1,0.8};
		titles[] = {};
	};
};
//};
