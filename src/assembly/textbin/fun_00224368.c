/*
STATE: C_NON_MATCHING
SYMBOL: LoadHandGadget
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `LoadHandGadget` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00224368/FUN_00224368.s", FUN_00224368);
#else
#include "types.h"
s32 FUN_00224368(void) { return 0; }
#endif /* NON_MATCHING */
