/*
STATE: C_NON_MATCHING
SYMBOL: SubtractIntegerWithClamp
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/math/subtract_integer_with_clamp/SubtractIntegerWithClamp.s", SubtractIntegerWithClamp);
#else
#include "types.h"

s32 SubtractIntegerWithClamp(s32 arg0) {
    s32 var_4_0;

    var_4_0 = arg0;
    if (var_4_0 < 0) {
        var_4_0 = -var_4_0;
    }
    return var_4_0;
}
#endif /* NON_MATCHING */
