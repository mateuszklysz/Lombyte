/*
STATE: C_EXACT
SYMBOL: FUN_0023aba0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `proceedAudio__Fv` starts here; this unit covers only its beginning. */

#include "types.h"

extern s32 D_0016120C[];
extern s32 func_0023AEF0();

s32 FUN_0023aba0(void) {
    s32 result;
    result = func_0023AEF0(D_0016120C[0] + 0xD9100);
    return result;
}

extern s32 func_0023ABA0(void) __attribute__((alias("FUN_0023aba0")));
