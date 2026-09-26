#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/math/rotations/fast_subtract_rotations/FUN_001fa5c8.s", FUN_001fa5c8);
#else
#include "types.h"
#define PI 3.1415927f
f32 fast_subtract_rotations(f32 a, f32 b) __asm__("FUN_001fa5c8");
f32 fast_subtract_rotations(f32 a, f32 b) {
    f32 d;
    d = a - b;
    if (!(d < PI)) {
        d = (d - PI) - PI;
    }
    if (d < -PI) {
        d = (d + PI) + PI;
    }
    return d;
}
#endif /* NON_MATCHING */
