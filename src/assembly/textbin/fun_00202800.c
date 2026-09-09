/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 41.4727%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00202800/FUN_00202800.s", FUN_00202800);
#else
#include "rnc/assembly_textbin_fun_00202800_types.h"
#include "types.h"










extern s32 D_0015F45C;
extern u8 D_0018D440[];
extern s32 func_001F97A0();
void FUN_00202800(s32 *arg0, s32 arg1) {
    s32 temp_16_32;
    s32 temp_3_31;
    s32 temp_4_28;
    s32 temp_4_48;
    s32 temp_5_25;
    struct M2c_temp_17_21 *temp_17_21;
    struct M2c_temp_17_26 *temp_17_26;
    struct M2c_temp_2_29 *temp_2_29;
    struct M2c_temp_3_47 *temp_3_47;
    struct M2c_var_17_12 *var_17_12;

    D_0015F45C = 0;
    var_17_12 = arg0;
    if (arg1 > 0) {
        do {
            temp_17_21 = ((u8 *)var_17_12 + (4));
            temp_5_25 = (s32) var_17_12->unk0 >> 4;
            temp_17_26 = ((u8 *)temp_17_21 + (4));
            temp_4_28 = temp_17_21->unk4;
            temp_2_29 = (D_0015F45C * 0x10) + D_0018D440;
            temp_3_31 = (s32) var_17_12->unk4 >> 4;
            temp_16_32 = temp_17_26->unk4;
            temp_2_29->unkA = (s16) temp_5_25;
            var_17_12 = ((u8 *)temp_17_26 + (4 ))+ 4;
            temp_2_29->unk8 = (s16) temp_3_31;
            *(s32 *)((u8 *)((D_0015F45C * 0x10) + D_0018D440) + 0xC) = func_001F97A0(temp_4_28, temp_5_25);
            temp_3_47 = (D_0015F45C * 0x10) + D_0018D440;
            temp_4_48 = D_0015F45C + 1;
            temp_3_47->unkE = func_001F97A0(temp_16_32);
            temp_3_47->unk0 = 0;
            D_0015F45C = temp_4_48;
        } while (temp_4_48 < arg1);
    }
}
#endif /* NON_MATCHING */
