#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f96f8/FUN_001f96f8.s", FUN_001f96f8);
#else
#include "types.h"
__asm__(".extern D_0015ED68, 4");
extern f32 D_0015ED68;
s32 FUN_001f96f8(s32 arg0) __asm__("FUN_001f96f8");
s32 FUN_001f96f8(s32 arg0) {
    f32 t;
    t = 0.25f;
    t = t + (f32) arg0 * D_0015ED68;
    return (s32) t;
}
#endif /* NON_MATCHING */
