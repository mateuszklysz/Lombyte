/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001e9b10
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001e9b10/FUN_001e9b10.s", FUN_001e9b10);
#else
#include "types.h"
s32 FUN_001e9b10(void) { return 0; }
#endif /* NON_MATCHING */
