/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00203120
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 62.6071%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00203120/FUN_00203120.s", FUN_00203120);
#else
#include "rnc/assembly_textbin_fun_00203120_types.h"
#include "types.h"


extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern s32 D_0015EE8C;
extern s32 func_00118A80();
extern s32 func_00120558();
extern s32 func_00122330();
extern s32 func_00122658();
void FUN_00203120(s32 arg0, s32 arg1, s32 *arg2) {
u8 sp_slot[0xF0];    s16 temp_16_36;
    s32 temp_17_34;
    s32 temp_20_30;
    s32 temp_2_29;
    s32 temp_3_33;
    s32 temp_3_49;
    s32 temp_6_38;
    s32 var_19_23;
    s32 var_3_74;
    struct M2c_var_18_12 *var_18_12;

    var_18_12 = arg2;
    D_0015EE78 = D_0015EE8C;
    D_0015EE74 = D_0015EE8C;
    if (arg1 <= 0) {
        goto block_10;
    }
    var_19_23 = arg1;
loop_2:
    temp_2_29 = var_18_12->unk4;
    temp_20_30 = arg0 + var_18_12->unkC;
    temp_3_33 = var_18_12->unk0;
    temp_17_34 = temp_2_29 >> 0x10;
    temp_16_36 = temp_2_29 & 0xFFFF;
    if (temp_3_33 != 0x13) {
        goto block_4;
    }
    temp_6_38 = temp_16_36 >> 6;
    func_00122330(sp_slot, (s32) (D_0015EE74 << 8) >> 0x10, (temp_6_38 == 0) ? 1 : temp_6_38, 0x13, 0, 0, temp_16_36, temp_17_34);
    temp_3_49 = temp_16_36 * temp_17_34;
    D_0015EE74 += (temp_3_49 <= 0xFF) ? 0x100 : temp_3_49;
    goto block_9;
block_4:
    if (temp_3_33 != 2) {
        goto block_6;
    }
    func_00122330(sp_slot, (s32) (D_0015EE74 << 8) >> 0x10, 1, 2, 0, 0, 0x10, 0x10);
    var_3_74 = D_0015EE74 + 0x200;
    goto block_8;
block_6:
    if (temp_3_33 != 0) {
        goto block_9;
    }
    func_00122330(sp_slot, (s32) (D_0015EE74 << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_3_74 = D_0015EE74 + 0x400;
block_8:
    D_0015EE74 = var_3_74;
block_9:
    var_19_23 -= 1;
    func_00118A80(0);
    var_18_12 += 0x10;
    func_00122658(sp_slot, temp_20_30);
    func_00120558(0, 0);
    if (var_19_23 != 0) {
        goto loop_2;
    }
block_10:
    D_0015EE78 = D_0015EE74;
    return;
}
#endif /* NON_MATCHING */
