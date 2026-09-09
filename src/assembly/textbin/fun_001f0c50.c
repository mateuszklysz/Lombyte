/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 40.0571%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f0c50/FUN_001f0c50.s", FUN_001f0c50);
#else
#include "types.h"
extern u8 D_00189DC0[];
extern s32 func_001F0BD0();
s32 FUN_001f0c50(s32 arg2, s32 arg0, s32 arg1, u8 *arg3, s32 *arg6, s32 arg7) {
    s32 *var_10_0;
    s32 temp_16_34;
    s32 var_11_0;
    s32 var_9_11;
    u32 temp_4_23;
    u8 *var_8_13;
    u8 temp_4_18;

    var_10_0 = arg6;
    var_11_0 = arg7;
    var_9_11 = 0;
    var_8_13 = arg3;
    if (*arg3 == 0) {
        goto block_3;
    }
    var_11_0 = 0x20;
    var_10_0 = D_00189DC0;
loop_2:
    temp_4_18 = *var_8_13;
    var_8_13 += 1;
    temp_4_23 = (temp_4_18 - 0x20) & 0xFF;
    var_9_11 += *((((temp_4_23 < 0x60U) ? temp_4_23 : 0x20U) * 4) + D_00189DC0);
    if (*var_8_13 != 0) {
        goto loop_2;
    }
block_3:
    temp_16_34 = arg0 - (var_9_11 >> 1);
    func_001F0BD0(temp_16_34, arg1, var_8_13, var_9_11, var_10_0, var_11_0);
    return temp_16_34;
}
#endif /* NON_MATCHING */
