/*
STATE: C_NON_MATCHING
SYMBOL: _doMC
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _doMC; includes target internal entry symbols. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/domc/_doMC.s", _doMC);
#else
#include "rnc/assembly_sdk_library_domc_types.h"
#include "types.h"


extern u8 D_00153770[];
extern s32 _Error();
void _doMC(struct M2c_arg0 *arg0, s32 arg1) {
    s32 sp0;
u8 *sp4;
u8 *sp8;
    s32 *temp_2_114;
    s32 temp_16_36;
    s32 temp_16_40;
    s32 temp_17_37;
u8 *temp_18_43;
    s32 temp_19_38;
u8 *temp_2_21;
    s32 temp_4_74;
    s32 temp_5_7;
    s32 temp_5_89;
    s32 var_21_26;
u8 *var_30_31;
    sp0 = arg1;
    temp_5_7 = arg1 * 0x140;
    temp_2_21 = ((u8 *)arg0 + (0x6BC));
    if ((*(s32 *)((u8 *)arg0 + temp_5_7 + 0x6C8)) == 0) {
        goto block_5;
    }
    sp4 = temp_2_21;
    var_21_26 = 0;
    if (*(s32 *)((u8 *)temp_2_21 + temp_5_7) <= 0) {
        goto block_6;
    }
    sp8 = ((u8 *)arg0 + (0x6C0));
    var_30_31 = ((u8 *)arg0 + (0x6B8));
loop_3:
    temp_16_36 = var_21_26 * 4;
    temp_17_37 = sp0 * 0x140;
    temp_19_38 = var_21_26 * 0x1C;
    var_21_26 += 1;
    temp_16_40 = temp_16_36 + temp_17_37;
    temp_18_43 = ((u8 *)arg0 + ((temp_17_37 + 0x590)));
    ((s32 (*)())(((u8 *)arg0 + (0x5B8 ))+ temp_16_40))(temp_18_43 + (temp_19_38 + 0x48));
    ((s32 (*)())(((u8 *)arg0 + (0x5C8 ))+ temp_16_40))(temp_18_43 + (temp_19_38 + 0xB8));
    if (var_21_26 < *(s32 *)((u8 *)sp4 + temp_17_37)) {
        goto loop_3;
    }
    goto block_7;
block_5:
    var_30_31 = ((u8 *)arg0 + (0x6B8));
    sp8 = ((u8 *)arg0 + (0x6C0));
    goto block_7;
block_6:
    var_30_31 = ((u8 *)arg0 + (0x6B8));
    sp8 = ((u8 *)arg0 + (0x6C0));
block_7:
    temp_4_74 = sp0 * 0x140;
    if (*(s32 *)((u8 *)sp8 + temp_4_74) == 0) {
        goto block_10;
    }
    if ((*(s32 *)((u8 *)arg0 + temp_4_74 + 0x6CC)) == 0) {
        goto block_10;
    }
    _Error(arg0, D_00153770);
block_10:
    temp_5_89 = sp0 * 0x140;
    if (*(s32 *)((u8 *)sp8 + temp_5_89) == 0) {
        goto block_13;
    }
    func_001271D8(*(s32 *)((u8 *)var_30_31 + temp_5_89), (*(s32 *)((u8 *)arg0 + temp_5_89 + 0x594)));
    return;
block_13:
    temp_2_114 = var_30_31 + temp_5_89;
    if ((*(s32 *)((u8 *)arg0 + temp_5_89 + 0x6CC)) == 0) {
        goto block_16;
    }
    func_001271D8(*temp_2_114, arg0->unk81C);
    return;
block_16:
    func_00127178(*temp_2_114, arg0->unk81C, (*(s32 *)((u8 *)arg0 + temp_5_89 + 0x594)));
    return;
}
#endif /* NON_MATCHING */
