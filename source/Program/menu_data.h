/*

Directory Opus 5
Original APL release version 5.82
Copyright 1993-2012 Jonathan Potter & GP Software

This program is free software; you can redistribute it and/or
modify it under the terms of the AROS Public License version 1.1.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
AROS Public License for more details.

The release of Directory Opus 5 under the GPL in NO WAY affects
the existing commercial status of Directory Opus for Windows.

For more information on Directory Opus for Windows please see:

                 http://www.gpsoft.com.au

*/

extern MenuData dopus_menus[];
extern MenuHelp menu_help_data[];

enum
{
	MENU_BASE,

	MENU_BACKDROP,
	MENU_ABOUT,
	MENU_HIDE,
	MENU_QUIT,

	MENU_NEW_LISTER,
	MENU_TILE_HORIZ,
	MENU_TILE_VERT,
	MENU_CASCADE,
	MENU_ENVIRONMENT,
	MENU_CLOSE_ALL,

	MENU_CREATE_ICONS,
	MENU_OPEN_ENVIRONMENT,
	MENU_SAVE_ENVIRONMENT,
	MENU_SAVEAS_ENVIRONMENT,
	MENU_EDIT_ENVIRONMENT,
	MENU_OPEN_SETTINGS,
	MENU_SAVE_SETTINGS,
	MENU_SAVEAS_SETTINGS,
	MENU_EDIT_SETTINGS,
	MENU_FILETYPES,
	MENU_HOTKEYS,

	MENU_LISTER_SOURCE,
	MENU_LISTER_DEST,
	MENU_LISTER_LOCK_SOURCE,
	MENU_LISTER_LOCK_DEST,
	MENU_LISTER_UNLOCK,
	MENU_LISTER_OFF,
	MENU_LISTER_UNLOCK_ALL,
	MENU_LISTER_CLOSE,

	MENU_NEW_BUTTONS,
	MENU_OPEN_BUTTONS,
	MENU_SAVE_BUTTONS,
	MENU_SAVEAS_BUTTONS,
	MENU_CLOSE_BUTTONS,
	MENU_EDIT_BUTTONS,

	MENU_LISTER_PARENT,
	MENU_LISTER_ROOT,
	MENU_NEW_FILETYPES,

	MENU_CLOCK,

	MENU_EDIT_LISTER,
	MENU_LISTER_BUTTONS,
	MENU_LISTER_MENU,
	MENU_MENU,

	MENU_USER_MENU,

	MENU_ICON_OPEN,
	MENU_ICON_INFO,
	MENU_ICON_SNAPSHOT,
	MENU_ICON_LEAVE_OUT,
	MENU_ICON_PUT_AWAY,
	MENU_ICON_SELECT_ALL,
	MENU_ICON_CLEANUP,
	MENU_ICON_RESET,

	LISTER_COOKIE,

	MENU_ICON_RENAME,
	MENU_ICON_FORMAT,

	LISTER_TILE_ALL,

	MENU_EXECUTE,
	MENU_PRINT,

	MENU_TOOL_MENU,
	MENU_LISTER_LOCK_POS,
	MENU_LISTER_SNAPSHOT,
	MENU_ICON_DISKINFO,
	MENU_LISTER_ICONIFY,

	MENU_ICON_MENU,
	MENU_ICON_UNSNAPSHOT,
	MENU_FILTER,

	MENU_ICON_GROUP,
	MENU_GROUP_NEW,
	MENU_GROUP_DELETE,
	MENU_GROUP_REMOVE,

	MENU_LISTER_VIEW_ICONS,

	MENU_LISTER_VIEW,
	MENU_LISTER_VIEW_NAME,
	MENU_LISTER_VIEW_ICON,
	MENU_LISTER_SHOW_ALL,

	COOKIE_2,

	MENU_ICON_SNAPSHOT_ICON,
	MENU_ICON_SNAPSHOT_WINDOW,
	MENU_ICON_SNAPSHOT_ALL,

	MENU_SAVE_LAYOUT,

	REXX_REQUESTER,

	DELETE_TEMP_FILES,

	WORKBENCH_STARTUP,

	MENU_ICONIFY_BUTTONS,

	CMD_KILL_PIRATES,

	SHOW_PICTURE,
	MENU_DEFPUBSCR,

	MENU_ICON_DELETE,

	MENU_EDIT_PATHS,
	MENU_SCRIPTS,

	MODULE_STARTUP,

	MENU_LISTER_ICON_ACTION,

	MENU_ICON_COPY,

	MENU_ICON_NEW,
	MENU_ICON_MAKEDIR,

	MENU_ICON_COPY_RAM,
	MENU_ICON_COPY_DF0,
	MENU_ICON_COPY_OTHER,

	MENU_LISTER_ARRANGE_NAME,
	MENU_LISTER_ARRANGE_TYPE,
	MENU_LISTER_ARRANGE_SIZE,
	MENU_LISTER_ARRANGE_DATE,
	GET_LISTER_ICONS,
	MENU_OPEN_BUTTONS_LOCAL,

	MENU_ICON_CLOSE,

	MENU_TOOLBAR_BUTTONS_NEW,
	MENU_TOOLBAR_BUTTONS_OPEN,
	MENU_TOOLBAR_BUTTONS_SAVE,
	MENU_TOOLBAR_BUTTONS_SAVEAS,
	MENU_TOOLBAR_BUTTONS_CANCEL,
	MENU_TOOLBAR_RESET_DEFAULTS,
	MENU_TOOLBAR_LAST_SAVED,
	MENU_TOOLBAR_RESTORE,

	MENU_EMPTY_TRASH,
	MENU_OPEN_PARENT,

	MENU_LISTER_PARENT_NEW,
	MENU_LISTER_ROOT_NEW,
	CMD_REMAP_PATTERNS,
	REFRESH_MAIN_DRIVES,
	MAIN_DISK_CHANGE,
	MENU_LISTER_UNSNAPSHOT,
	MAIN_SNIFF_MODULES,
	MAIN_CLOSEWB,
	MAINCMD_REFRESH_DRIVES,
	MENU_ICON_COPY_TO,

	MENU_SYSMENU,
	MENU_ICON_COPY_TO_SCRIPT,
	MENU_ICONPOS,

	MENU_COMMAND_NEW,

	MENU_ICONPOS_APPICON,
	MENU_ICONPOS_DISKS,
	MENU_ICONPOS_LISTERS,
	MENU_ICONPOS_PRIORITY0,
	MENU_ICONPOS_PRIORITY1,
	MENU_ICONPOS_PRIORITY2,
	MENU_ICONPOS_PRIORITY3,
	MENU_ICONPOS_PRIORITY4,

	MAIN_ENV_UPDATE,

	MENU_EDIT_STARTMENU,
	MENU_START_BORDERLESS,
	MENU_START_DRAGBAR_LEFT,
	MENU_START_DRAGBAR_RIGHT,
	MENU_START_SAVE,
	MENU_START_IMAGE,
	MENU_START_LABEL,
	MENU_NEW_STARTMENU,
	MENU_OPEN_STARTMENU,

	MENU_OPEN_NEW_WINDOW,
	MENU_NEW_BUTTONS_GFX,
	MENU_NEW_BUTTONS_TEXT,

	MENU_LISTER_GAUGE,
	MENU_OPEN_WITH,
	MENU_FILE_OPEN_WITH,

	MENU_UPDATE_DESKTOP,
	MENU_ICON_SHORTCUT,

	MENU_ICONPOS_GROUPS,
	MENU_ICONPOS_LEFTOUT,

	MENU_DESKTOP_LEFTOUT,
	MENU_DESKTOP_COPY,
	MENU_DESKTOP_MOVE,
	MENU_DESKTOP_CANCEL,

	MENU_ICON_COPY_DESKTOP,
	MENU_START_FONT,

	MENU_HELP,
	MENU_KEYFINDER,

	MENU_START_SCALING,
	MENU_START_DRAGBAR_OFF,
	MENU_START_LABEL_FONT,
	MENU_ICON_LINEUP,
	MENU_START_PICTURE,

	MENU_LISTER_RESTORE,

	MENU_THEMES,
	MENU_THEMES_LOAD,
	MENU_THEMES_SAVE,
	MENU_THEMES_BUILD,

	MENU_OPEN_WITH_BASE=7900,
	MENU_OPEN_WITH_MAX=7999,

	MENU_CUSTOM=8000,

	MENU_EXTENSION=10000,
};