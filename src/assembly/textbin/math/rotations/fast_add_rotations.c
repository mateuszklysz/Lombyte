#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/math/rotations/fast_add_rotations/FUN_001fa580.s", FUN_001fa580);
#else
#include "types.h"
f32 FUN_001fa580(f32 a, f32 b) {
    f32 r;

    r = a + b;
    if (!(r < 3.1415927f)) {
        r = r - 3.1415927f - 3.1415927f;
    }
    if (r < -3.1415927f) {
        r = r + 3.1415927f + 3.1415927f;
    }
    return r;
}
#endif /* NON_MATCHING */
