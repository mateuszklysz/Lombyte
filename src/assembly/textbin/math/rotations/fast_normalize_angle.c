#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/math/rotations/fast_normalize_angle/FUN_001fa610.s", FUN_001fa610);
#else
#include "types.h"
#define PI 3.1415927f
f32 fast_normalize_angle(f32 a) __asm__("FUN_001fa610");
f32 fast_normalize_angle(f32 a) {
    f32 v;
    f32 pi;
    f32 mpi;
    pi = PI;
    mpi = -PI;
    v = a;
    if (!(v < pi)) {
        do {
            v = (v - pi) - pi;
        } while (!(v < pi));
    }
    if (v < mpi) {
        do {
            v = (v + pi) + pi;
        } while (v < mpi);
    }
    return v;
}
#endif /* NON_MATCHING */
