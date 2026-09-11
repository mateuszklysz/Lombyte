/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00220648
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00220648/FUN_00220648.s", FUN_00220648);
#else
#include "rnc/assembly_textbin_fun_00220648_types.h"
#include "types.h"






extern u8 D_00137B80[];
extern s32 D_001516D8;
extern s32 D_0015ED88;
extern s32 func_00216788();
s32 FUN_00220648(struct M2c_arg0 *arg0) {
    s32 temp_3_10;
    s32 temp_4_27;
    s32 temp_4_57;
    s32 temp_6_39;
    s32 temp_6_69;
    s32 var_2_45;
    struct M2c_temp_3_38 *temp_3_38;
    struct M2c_temp_3_68 *temp_3_68;

    temp_3_10 = arg0->unk44;
    if (temp_3_10 == 1) {
        goto block_14;
    }
    if (temp_3_10 >= 2) {
        goto block_4;
    }
    if (temp_3_10 == 0) {
        goto block_7;
    }
    goto block_27;
block_4:
    if (temp_3_10 == 2) {
        goto block_16;
    }
    if (temp_3_10 == 3) {
        goto block_23;
    }
    goto block_27;
block_7:
    temp_4_27 = arg0->unk48;
    if (temp_4_27 == 0) {
        goto block_26;
    }
    if (D_001516D8 != 0) {
        goto block_27;
    }
    temp_3_38 = D_00137B80 + (D_0015ED88 * 8);
    temp_6_39 = temp_3_38->unk2CC;
    if (temp_6_39 == 0) {
        goto block_27;
    }
    if (func_00216788(temp_4_27, temp_3_38->unk2C8, temp_6_39) != 0) {
        goto block_12;
    }
    var_2_45 = -1;
    goto block_25;
block_12:
    var_2_45 = arg0->unk44 + 1;
    goto block_25;
block_14:
    if (D_001516D8 != 0) {
        goto block_27;
    }
    var_2_45 = 2;
    goto block_25;
block_16:
    temp_4_57 = arg0->unk4C;
    if (temp_4_57 == 0) {
        goto block_26;
    }
    if (D_001516D8 != 0) {
        goto block_27;
    }
    temp_3_68 = D_00137B80 + (D_0015ED88 * 8);
    temp_6_69 = temp_3_68->unk2FC;
    if (temp_6_69 == 0) {
        goto block_27;
    }
    if (func_00216788(temp_4_57, temp_3_68->unk2F8, temp_6_69) != 0) {
        goto block_21;
    }
    var_2_45 = -1;
    goto block_25;
block_21:
    var_2_45 = arg0->unk44 + 1;
    goto block_25;
block_23:
    if (D_001516D8 != 0) {
        goto block_28;
    }
    var_2_45 = 4;
block_25:
    arg0->unk44 = var_2_45;
block_26:
block_27:
block_28:
    return 0;
}
#endif /* NON_MATCHING */
