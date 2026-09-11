/*
STATE: C_NON_MATCHING
SYMBOL: UNK_NoMapAvailable
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `UNK_NoMapAvailable` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205640/FUN_00205640.s", FUN_00205640);
#else
#include "types.h"
s32 FUN_00205640(void) { return 0; }
#endif /* NON_MATCHING */
