/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: FUN_001ee650
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ee650/FUN_001ee650.s", FUN_001ee650);
#else
#include "types.h"
s32 FUN_001ee650(void) { return 0; }
#endif /* NON_MATCHING */
