/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0011ace8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0011ace8/FUN_0011ace8.s", FUN_0011ace8);
#else
#include "rnc/assembly_textbin_fun_0011ace8_types.h"
#include "types.h"




extern s32 func_0011D660();
extern s32 func_0011D6A8();
s32 *FUN_0011ace8(struct M2c_arg0 *arg0) {
    s32 temp_2_25;
    s32 temp_4_11;
    s32 var_3_12;
    s32 var_3_26;
    struct M2c_var_16_14 *var_16_14;

    func_0011D660();
    temp_4_11 = arg0->unk8;
    var_3_12 = 0;
    var_16_14 = arg0->unk4;
    if (temp_4_11 > 0) {
loop_2:
        if (var_16_14->unk10 & 1) {
            var_3_12 += 1;
            var_16_14 += 0x40;
            if (var_3_12 >= temp_4_11) {
                goto block_9;
            }
            goto loop_2;
        }
        var_16_14->unk10 = (s32) ((var_3_12 << 0x10) | 5);
        temp_2_25 = arg0->unk0;
        var_3_26 = temp_2_25 + 1;
        arg0->unk0 = var_3_26;
        if (var_3_26 == 1) {
            var_3_26 = 1;
            arg0->unk0 = (s32) (temp_2_25 + 2);
        }
        var_16_14->unk14 = var_16_14;
        var_16_14->unk18 = var_3_26;
        func_0011D6A8(temp_4_11, 1);
        return var_16_14;
    }
block_9:
    func_0011D6A8(temp_4_11);
    return NULL;
}
#endif /* NON_MATCHING */
