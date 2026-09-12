/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: GetOsdConfigParam
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: GetOsdConfigParam. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/get_osd_config_param/GetOsdConfigParam.s", GetOsdConfigParam);

