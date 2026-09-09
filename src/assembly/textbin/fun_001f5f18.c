/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 35.9259%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f5f18/FUN_001f5f18.s", FUN_001f5f18);
#else
#include "types.h"
extern s32 func_001F52A0();
void FUN_001f5f18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 temp_16_15;
    s32 temp_17_46;
    s32 temp_18_47;
    s32 temp_19_54;
    s32 temp_20_28;
    s32 temp_20_55;
    s32 temp_21_39;
    s32 temp_23_29;
    s32 temp_2_30;
    s32 temp_30_38;

    temp_16_15 = (arg4 << 0x18) | 0x40404;
    sp0 = arg0 + 1;
    temp_20_28 = arg2 - 2;
    func_001F52A0(temp_16_15);
    temp_23_29 = arg0 + 2;
    temp_2_30 = arg1 - 1;
    sp4 = temp_2_30;
    temp_30_38 = arg1 - 2;
    func_001F52A0(sp0, temp_2_30, temp_20_28, arg2, temp_16_15);
    temp_21_39 = arg2 - 3;
    temp_17_46 = arg0 + 4;
    func_001F52A0(temp_23_29, temp_30_38, temp_21_39, temp_20_28, temp_16_15);
    temp_18_47 = arg1 - 4;
    temp_19_54 = arg3 + 2;
    func_001F52A0(temp_17_46, temp_18_47, arg2 - 4, temp_21_39, temp_16_15);
    temp_20_55 = arg3 + 3;
    func_001F52A0(sp0, sp4, arg3, temp_19_54, temp_16_15);
    func_001F52A0(temp_23_29, temp_30_38, temp_19_54, temp_20_55, temp_16_15);
    func_001F52A0(temp_17_46, temp_18_47, temp_20_55, arg3 + 4, temp_16_15);
}
#endif /* NON_MATCHING */
