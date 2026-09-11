/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: TfragProc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

/* ROLE: recovered whole function `TfragProc`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/tfrag_proc/FUN_00233fb0.s", FUN_00233fb0);
#else
#include "types.h"
s32 FUN_00233fb0(void) { return 0; }
#endif /* NON_MATCHING */
