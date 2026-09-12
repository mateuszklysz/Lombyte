/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: SetOsdConfigParam
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: SetOsdConfigParam. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/set_osd_config_param/SetOsdConfigParam.s", SetOsdConfigParam);

