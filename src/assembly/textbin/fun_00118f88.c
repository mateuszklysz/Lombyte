/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 22.5161%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00118f88/FUN_00118f88.s", FUN_00118f88);
#else
#include "types.h"
extern s32 func_00118EE0();
extern s32 func_0011D660();
void FUN_00118f88(s32 arg0, s32 arg1) {
    s32 temp_16_14;

    temp_16_14 = 0 /*  mfc0 $t0  */ & 0x10000;
    if (temp_16_14 != 0) {
        func_0011D660();
    }
    func_00118EE0(arg0 & 0xFFFFFFC0, arg1 & 0xFFFFFFC0);
    if (temp_16_14 != 0) {
        func_0011D6A8();
    }
}
#endif /* NON_MATCHING */
