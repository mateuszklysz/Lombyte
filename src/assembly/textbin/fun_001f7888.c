/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f7888
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 49.7119%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f7888/FUN_001f7888.s", FUN_001f7888);
#else
#include "types.h"
extern s32 D_001518EE;
extern s32 D_0015EE8C;
extern s32 func_001F33B8();
extern s32 func_001FB440();
extern s32 func_00233980();
void FUN_001f7888(s32 arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s16 var_3_18;
    s32 temp_3_20;

    if (arg2 != 0) {
        var_3_18 = D_001518EE;
    } else {
        temp_3_20 = arg0 + arg1;
        var_3_18 = (s16) ((s32) (D_0015EE8C - (4 << ((temp_3_20 >= 0x11) ? 0x10 : temp_3_20))) >> 0xD);
    }
    func_001FB440(arg0, arg1, var_3_18 << 0xD);
    func_001F33B8(1 << arg0, 1 << arg1, fparg0, 0, 0x49000000, 0x437F0000, 0);
    if (arg2 != 0) {
        func_00233980(0x47, 0);
    } else {
        func_00233980(0x47, 0x30000);
    }
    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
}
#endif /* NON_MATCHING */
