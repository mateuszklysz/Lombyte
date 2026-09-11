/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002212b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002212b8/FUN_002212b8.s", FUN_002212b8);
#else
#include "rnc/assembly_textbin_fun_002212b8_types.h"
#include "types.h"










extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_0022DA68();
s32 FUN_002212b8(struct M2c_arg0 *arg0) {
    s32 *var_3_85;
    s32 temp_2_36;
    s32 temp_5_60;
    s32 temp_6_50;
    s32 var_2_16;
    s32 var_7_79;
    u8 *temp_6_100;
    struct M2c_temp_4_81 *temp_4_81;

    var_2_16 = 0;
    if (D_001D5BF0.unk4->unk40 == arg0) {
        if ((D_0013C940.unk1C4 & 0xD00) && (D_001D5BF0.unk124 == 0)) {
            var_2_16 = 1;
        } else if (D_0013C940.unk1C4 & 0x10) {
            temp_2_36 = D_001D5BF0.unk4->unk38;
            if (temp_2_36 != 0) {
                    arg0->unk38 = (s32) (temp_5_60 + 1);
                goto block_10;
            }
            if (D_001D5BF0.unk124 == 0) {
                var_2_16 = -1;
            } else {
                goto block_11;
            }
        } else {
block_10:
block_11:
            temp_6_50 = arg0->unk38;
            if ((D_0013C940.unk1C4 & 0x1000) && (temp_6_50 != 0)) {
                arg0->unk38 = (s32) (temp_6_50 - 1);
            }
            if (D_0013C940.unk1C4 & 0x4000) {
                temp_5_60 = arg0->unk38;
                if (*(s32 *)((u8 *)((temp_5_60 * 0x18) + arg0->unk34) + 0x18) != 0) {
                D_001D5BF0.unk8 = temp_2_36;
                }
            }
            if (temp_6_50 != arg0->unk38) {
                func_0022DA68(1, 0x11, arg0->unk14);
            }
            var_7_79 = 0;
            temp_4_81 = arg0->unk34 + (arg0->unk38 * 0x18);
            if (temp_4_81->unk8 != 0) {
                var_3_85 = ((u8 *)temp_4_81 + (8 ))+ 4;
loop_21:
                var_7_79 += 1;
                if (*var_3_85 != 0) {
                    var_3_85 += 4;
                    if (var_7_79 < 4) {
                        goto loop_21;
                    }
                }
            }
            var_2_16 = 0;
            if (D_0013C940.unk1C4 & 0x40) {
                temp_6_100 = temp_4_81->unk4;
                if (temp_6_100 != NULL) {
                    *temp_6_100 = (u8) ((s32) (*temp_6_100 + 1) % var_7_79);
                    func_0022DA68(0, 0x11, arg0->unk14, var_7_79);
                    var_2_16 = 0;
                }
            }
        }
    }
    return var_2_16;
}
#endif /* NON_MATCHING */
