/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 72.8378%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002133d0/FUN_002133d0.s", FUN_002133d0);
#else
#include "types.h"
extern s32 func_001F9DC8();
f32 FUN_002133d0(s32 arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    if (fparg2 != 0.0f) {
        goto block_2;
    }
    return fparg0;
block_2:
    if (fparg2 != 1.0f) {
        goto block_4;
    }
    return fparg1;
block_4:
    return fparg0 + ((fparg1 - fparg0) * ((1.0f - func_001F9DC8(fparg2 * 3.1415927f)) * 0.5f));
}
#endif /* NON_MATCHING */
