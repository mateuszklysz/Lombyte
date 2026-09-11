/*
STATE: C_NON_MATCHING
SYMBOL: Help_Update
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `Help_Update` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fde90/FUN_001fde90.s", FUN_001fde90);
#else
#include "types.h"
s32 FUN_001fde90(void) { return 0; }
#endif /* NON_MATCHING */
