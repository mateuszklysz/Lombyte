/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00219e10
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00219e10/FUN_00219e10.s", FUN_00219e10);
#else
#include "rnc/assembly_textbin_fun_00219e10_types.h"
#include "types.h"








extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u32 D_001D5D14[];
extern s32 func_0022DA68();
s32 FUN_00219e10(struct M2c_arg0 *arg0) {
    s32 temp_2_93;
    s32 temp_3_102;
    s32 temp_3_30;
    s32 temp_3_54;
    s32 temp_4_44;
    s32 temp_4_72;
    s32 temp_4_87;
    s32 var_2_80;

    if (D_0013C940.unk1C4 & 0xD00) {
        if (D_001D5D14[0] == 0) {
            return 1;
        }
        goto block_4;
    }
block_4:
    if (D_0013C940.unk1C4 & 0x10) {
        temp_3_30 = D_001D5BF0.unk4->unk38;
        if (temp_3_30 != 0) {
            D_001D5BF0.unk8 = temp_3_30;
            goto block_10;
        }
        if (D_001D5BF0.unk124 == 0) {
            return -1;
        }
        goto block_11;
    }
block_10:
block_11:
    temp_4_44 = arg0->unk3C;
    if ((D_0013C940.unk1C4 & 0x1000) && (temp_4_44 != 0)) {
        arg0->unk3C = (s32) (temp_4_44 - 1);
    }
    if (D_0013C940.unk1C4 & 0x4000) {
        temp_3_54 = arg0->unk3C + 1;
        if (temp_3_54 < arg0->unk40) {
            arg0->unk3C = temp_3_54;
        }
    }
    if (arg0->unk3C != temp_4_44) {
        func_0022DA68(1, 0x11, arg0->unk14);
    }
    temp_4_72 = arg0->unk24 * 0x10;
    if ((temp_4_72 / 608) >= arg0->unk40) {
        var_2_80 = 0x60;
    } else {
        temp_4_87 = arg0->unk3C;
        if (arg0->unk60 >= temp_4_87) {
            temp_2_93 = temp_4_87 - 1;
            arg0->unk60 = temp_2_93;
            if (temp_2_93 < 0) {
                arg0->unk60 = 0;
            }
        }
        temp_3_102 = arg0->unk3C - (((s32) (temp_4_72 - 0x28) / 608) - 2);
        if (arg0->unk60 < temp_3_102) {
            arg0->unk60 = temp_3_102;
        }
        var_2_80 = 0x190 - (arg0->unk60 * 0x260);
    }
    arg0->unk5C = var_2_80;
    return 0;
}
#endif /* NON_MATCHING */
