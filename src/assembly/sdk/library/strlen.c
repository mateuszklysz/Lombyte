/*
STATE: C_NON_MATCHING
SYMBOL: strlen
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit strlen; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/strlen/strlen.s", strlen);
#else
#include "types.h"
s32 strlen(void) { return 0; }
#endif /* NON_MATCHING */
