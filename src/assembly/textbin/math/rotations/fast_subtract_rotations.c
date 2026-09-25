#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/math/rotations/fast_subtract_rotations/FUN_001fa5c8.s", FUN_001fa5c8);
#else
#include "types.h"

f32 fast_subtract_rotations(f32 fparg0, f32 fparg1) __asm__("FUN_001fa5c8");

f32 fast_subtract_rotations(f32 fparg0, f32 fparg1) {
    f32 var_f0_5;
    s32 temp_cond_14;

    var_f0_5 = fparg0 - fparg1;
    temp_cond_14 = var_f0_5 < -3.1415927f;
    if (!(var_f0_5 < 3.1415927f)) {
        var_f0_5 = (var_f0_5 - 3.1415927f) - 3.1415927f;
    }
    if (temp_cond_14) {
        var_f0_5 = var_f0_5 + 3.1415927f + 3.1415927f;
    }
    return var_f0_5;
}
#endif /* NON_MATCHING */
