/*
STATE: C_NON_MATCHING
SYMBOL: DrawDebugProfiler
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `DrawDebugProfiler` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f39d0/FUN_001f39d0.s", FUN_001f39d0);
#else
#include "types.h"
s32 FUN_001f39d0(void) { return 0; }
#endif /* NON_MATCHING */
