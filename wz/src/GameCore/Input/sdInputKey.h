//*************************************************************************************************
// ����:	�ⲿ�����
//---------------------------------------------------------
// ����:		
// ����:		2012-07-24
// ����޸�:
//*************************************************************************************************
#pragma once
#ifndef _SD_GAMECORE_INPUT_KEY_H__
#define _SD_GAMECORE_INPUT_KEY_H__

SD_GAMECORE_NAMESPACE_BEGIN_GAMECORE

// �����(ע�ⲻҪ����127)
enum sdEInputKey
{
	E_INPUTKEY_INVALID = 0,

	// ��ɫ���������
	E_INPUTKEY_UP,
	E_INPUTKEY_DOWN,
	E_INPUTKEY_LEFT,
	E_INPUTKEY_RIGHT,
	E_INPUTKEY_ASCEND,
	E_INPUTKEY_DESCEND,
	E_INPUTKEY_TURNLEFT,
	E_INPUTKEY_TURNRIGHT,
	E_INPUTKEY_JUMP,
	E_INPUTKEY_TOGGLEWEAPON,
	E_INPUTKEY_TOGGLESIT,
	E_INPUTKEY_REPLY,

	E_INPUTKEY_TABMONSTER,
	E_INPUTKEY_TAVSELF,

	E_INPUTKEY_TABTEAMMER,
	E_INPUTKEY_TABTEAMMER1,
	E_INPUTKEY_TABTEAMMER2,
	E_INPUTKEY_TABTEAMMER3,
	E_INPUTKEY_TABTEAMMER4,
	E_INPUTKEY_TABTEAMMER5,
	E_INPUTKEY_ATTACKTARGET,

	E_INPUTKEY_TABSELFPET,
	E_INPUTKEY_TABTEAMERPET1,
	E_INPUTKEY_TABTEAMERPET2,
	E_INPUTKEY_TABTEAMERPET3,
	E_INPUTKEY_TABTEAMERPET4,
	E_INPUTKEY_TABTEAMERPET5,

	E_INPUTKEY_FOCUSTARGET,

	//
	E_INPUTKEY_ESCAPE,
	E_INPUTKEY_HOME,
	E_INPUTKEY_END,
	E_INPUTKEY_PAGEUP,
	E_INPUTKEY_PAGEDOWN,
	E_INPUTKEY_NUMLOCK,
	E_INPUTKEY_DIVIDE,
	E_INPUTKEY_VISUALTRACKER,

	E_INPUTKEY_CAMERA_HOME,
	E_INPUTKEY_CAMERA_PAGEUP,
	E_INPUTKEY_CAMERA_PAGEDOWN,

	E_INPUTKEY_TOGGLE_ROLD,
	E_INPUTKEY_TOGGLE_ENEMYHP,
	E_INPUTKEY_TOGGLE_FRIENDHP,
	E_INPUTKEY_TOGGLE_ALLHP,

	E_INPUTKEY_SHORTCUT_HOTKEY_END,

	// ����
	// @{
	//E_INPUTKEY_SHORT_UI_BEGIN,
	//E_INPUTKEY_UI_AVATAR		= E_INPUTKEY_SHORT_UI_BEGIN,
	//E_INPUTKEY_UI_AVATARDETAIL,
	//E_INPUTKEY_UI_BAG,
	//E_INPUTKEY_UI_XINFA,
	//E_INPUTKEY_UI_SKILL,
	//E_INPUTKEY_UI_TASK,
	//E_INPUTKEY_UI_TASKFOLLOW,
	//E_INPUTKEY_UI_MAP,
	//E_INPUTKEY_UI_EMAIL,
	//E_INPUTKEY_UI_HELP,
	//E_INPUTKEY_UI_USERGUIDE,
	//E_INPUTKEY_UI_FRIEND,
	//E_INPUTKEY_UI_GUILD,
	//E_INPUTKEY_UI_CREATERESOURCEBAG,
	//E_INPUTKEY_UI_MALL,
	//E_INPUTKEY_UI_MENU,
	//E_INPUTKEY_UI_LIVESKILL,
	//E_INPUTKEY_UI_LIVESKILL_PRODUCT,
	//E_INPUTKEY_UI_LIVESKILL_LIST,
	//E_INPUTKEY_UI_GROUNDBUY,
	//E_INPUTKEY_UI_PETAVATAR,
	//E_INPUTKEY_UI_ACHIEVEMENT,
	//E_INPUTKEY_UI_STORE,
	//E_INPUTKEY_UI_RANK,
	//E_INPUTKEY_UI_CALENDAR,
	//E_INPUTKEY_UI_BATTLEFIELD,
	//E_INPUTKEY_UI_HEAVEN,
	//E_INPUTKEY_SHORT_UI_END,
	// }@

	// Ƶ���л�
	//E_INPUTKEY_CHANNEL_PREV,
	//E_INPUTKEY_CHANNEL_NEXT,

	// һ����װ
	//E_INPUTKEY_ONECHANGE_ONE,
	//E_INPUTKEY_ONECHANGE_TWO,
	//E_INPUTKEY_ONECHANGE_THREE,

	// �ȼ�
	// @{
	//E_INPUTKEY_SHORTCUT_HOTKEY_BEGIN,
	//
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY1 = E_INPUTKEY_SHORTCUT_HOTKEY_BEGIN,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY2,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY3,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY4,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY5,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY6,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY7,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY8,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY9,
	//E_INPUTKEY_SHORTCUT_PAGE0_HOTKEY0,

	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY1,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY2,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY3,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY4,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY5,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY6,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY7,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY8,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY9,
	//E_INPUTKEY_SHORTCUT_PAGE1_HOTKEY0,

	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY1,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY2,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY3,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY4,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY5,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY6,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY7,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY8,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY9,
	//E_INPUTKEY_SHORTCUT_PAGE2_HOTKEY0,

	//E_INPUTKEY_SHORTCUT_HOTKEY_END,
	// @}

	//
	//E_INPUTKEY_EDIT_SELELC,
	//E_INPUTKEY_EDIT_TRANSFORM,
	//E_INPUTKEY_EDIT_ROTATE,
	//E_INPUTKEY_EDIT_SCALE,
	//E_INPUTKEY_EDIT_MAP,

	// ��Ҫ����127
	NUM_INPUTKEYS,	
};

// ���������
enum sdEKeyCategory
{
	E_KC_MOVE = 0,
	E_KC_CHAT,
	E_KC_TARGETSEL,
	E_KC_UI,
	E_KC_SHORTBAR,
	E_KC_OTHER,

	NUM_KCS,
};

// ����������ϼ�
#define sdInvalidCombDIK	(unsigned short)0xffff

#define sdCombDIKCtrlKey	0x1000
#define sdCombDIKShiftKey	0x2000
#define sdCombDIKAltKey		0x4000

#define sdGetDIKKey(key)						(key) & 0x00ff
#define sdMakeCombDIKKey(key, ctrl_shift_alt)	(key) & (ctrl_shift_alt)

#define sdHasDIKCtrlKey(key)	((((short)key & 0xff00) & sdCombDIKCtrlKey) == sdCombDIKCtrlKey)
#define sdHasDIKShiftKey(key)	((((short)key & 0xff00) & sdCombDIKShiftKey) == sdCombDIKShiftKey)
#define sdHasDIKAltKey(key)		((((short)key & 0xff00) & sdCombDIKAltKey) == sdCombDIKAltKey)

SD_GAMECORE_NAMESPACE_END_GAMECORE
#endif