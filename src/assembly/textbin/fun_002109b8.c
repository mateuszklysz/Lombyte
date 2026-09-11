/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: FUN_002109b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002109b8/FUN_002109b8.s", FUN_002109b8);
#else
#include "types.h"
s32 FUN_002109b8(void) { return 0; }
#endif /* NON_MATCHING */
