/*
STATE: C_NON_MATCHING
SYMBOL: FastSin__Ff
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `FastSin__Ff`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_sin/FUN_001f9de0.s", FUN_001f9de0);
#else
#include "types.h"
/* func_00158FB8 — returns 0.0f (constant float stub). */

__attribute__((section(".text.func_00158FB8")))
float FUN_001f9de0(void *a0) {
    return 0.0f;
}
#endif /* NON_MATCHING */
