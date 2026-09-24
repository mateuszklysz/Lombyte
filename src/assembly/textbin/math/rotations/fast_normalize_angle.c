#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/math/rotations/fast_normalize_angle/FUN_001fa610.s", FUN_001fa610);
#else
#include "types.h"

void fast_normalize_angle(f32 fparg0) __asm__("FUN_001fa610");

void fast_normalize_angle(f32 fparg0) {
    f32 var_f0_5;

    var_f0_5 = fparg0;
    if (!(var_f0_5 < 3.1415927f)) {
        do {
            var_f0_5 = (var_f0_5 - 3.1415927f) - 3.1415927f;
        } while (!(var_f0_5 < 3.1415927f));
    }
    if (var_f0_5 < -3.1415927f) {
        do {
            var_f0_5 = var_f0_5 + 3.1415927f + 3.1415927f;
        } while (var_f0_5 < -3.1415927f);
    }
}
#endif /* NON_MATCHING */
