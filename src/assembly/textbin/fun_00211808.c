/*
STATE: C_NON_MATCHING
SYMBOL: MobyProc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `MobyProc` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00211808/FUN_00211808.s", FUN_00211808);
#else
#include "types.h"
s32 FUN_00211808(void) { return 0; }
#endif /* NON_MATCHING */
