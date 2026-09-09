/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 44.4615%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00119028/FUN_00119028.s", FUN_00119028);
#else
#include "types.h"
extern s32 func_001187F0();
extern s32 func_0011D660();
extern s32 func_0011D6A8();
s32 FUN_00119028(s32 arg0) {
    s32 temp_16_12;
    s32 temp_17_20;

    temp_16_12 = 0 /*  mfc0 $t0  */ & 0x10000;
    if (temp_16_12 != 0) {
        func_0011D660();
    }
    temp_17_20 = func_001187F0(arg0);
    M2C_SYNC();
    if (temp_16_12 != 0) {
        func_0011D6A8();
    }
    return temp_17_20;
}
#endif /* NON_MATCHING */
