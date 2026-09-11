/*
STATE: C_NON_MATCHING
SYMBOL: FastDiffRots__Fff
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `FastDiffRots__Fff` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa688/FUN_001fa688.s", FUN_001fa688);
#else
#include "types.h"

f32 FUN_001fa688(f32 fparg0, f32 fparg1) {
    f32 var_f0_10;

    var_f0_10 = fabsf(fparg0 - fparg1);
    if (!(var_f0_10 < 3.1415927f)) {
        var_f0_10 = (2.0f * 3.1415927f) - var_f0_10;
    }
    return var_f0_10;
}
#endif /* NON_MATCHING */
