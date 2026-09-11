/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002192a8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002192a8/FUN_002192a8.s", FUN_002192a8);
#else
#include "types.h"
s32 FUN_002192a8(void) { return 0; }
#endif /* NON_MATCHING */
