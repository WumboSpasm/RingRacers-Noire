/// \file  menus/options-data-replays.c
/// \brief Replay Options

#include "../k_menu.h"

menuitem_t OPTIONS_DataReplay[] =
{
	{IT_STRING | IT_CVAR, "Record Replays", "Select when to save replays.",
		NULL, {.cvar = &cv_recordmultiplayerdemos}, 0, 0},

	{IT_STRING | IT_CVAR, "Synch. Check Interval", "How often to check for synchronization while playing back a replay.",
		NULL, {.cvar = &cv_netdemosyncquality}, 0, 0},
};

menu_t OPTIONS_DataReplayDef = {
	sizeof (OPTIONS_DataReplay) / sizeof (menuitem_t),
	&OPTIONS_DataDef,
	0,
	OPTIONS_DataReplay,
	48, 80,
	SKINCOLOR_BLUEBERRY, 0,
	2, 5,
	M_DrawGenericOptions,
	M_OptionsTick,
	NULL,
	NULL,
	NULL,
};
