/*
STATE: C_NON_MATCHING
SYMBOL: CollLine_Fix
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `CollLine_Fix` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001efa68/FUN_001efa68.s", FUN_001efa68);
#else
#include "types.h"
s32 FUN_001efa68(void) { return 0; }
#endif /* NON_MATCHING */
