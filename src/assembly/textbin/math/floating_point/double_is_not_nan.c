#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/math/floating_point/double_is_not_nan/FUN_00116168.s", FUN_00116168);
#else
#include "types.h"
typedef union { f64 value; struct { u32 lsw; u32 msw; } parts; } ieee_double_shape_type;
s32 FUN_00116168(f64 x) {
    s32 hx;
    s32 lx;
    ieee_double_shape_type ew_u;

    ew_u.value = x;
    hx = ew_u.parts.msw;
    lx = ew_u.parts.lsw;
    hx &= 0x7fffffff;
    hx |= (u32)(lx | (-lx)) >> 31;
    hx = 0x7ff00000 - hx;
    return 1 - (s32)(((u32)(hx | (-hx))) >> 31);
}
#endif /* NON_MATCHING */
