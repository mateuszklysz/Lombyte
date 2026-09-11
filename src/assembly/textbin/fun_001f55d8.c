/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f55d8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f55d8/FUN_001f55d8.s", FUN_001f55d8);
#else
#include "types.h"
s32 FUN_001f55d8(void) { return 0; }
#endif /* NON_MATCHING */
