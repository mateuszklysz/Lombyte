/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fa6d0
SCORE: code=97.5000 functions=97.5000 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa6d0/FUN_001fa6d0.s", FUN_001fa6d0);
#else
#include "types.h"

s32 FUN_001fa6d0(f32 fparg0) {
    return (s32) fparg0;
}
#endif /* NON_MATCHING */
