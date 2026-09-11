/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00225cd8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225cd8/FUN_00225cd8.s", FUN_00225cd8);
#else
#include "rnc/assembly_textbin_fun_00225cd8_types.h"
#include "types.h"




extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u8 D_001D60B8[];
extern s32 func_002166E8();
s32 FUN_00225cd8(s32 arg0) {
    s32 temp_3_21;
    s32 var_5_10;
    struct M2c_var_16_12 *var_16_12;

    var_5_10 = 0;
    var_16_12 = D_001D60B8 + 4;
loop_1:
    if (*(s32 *)((u8 *)var_16_12 - 0x4) == arg0) {
        temp_3_21 = var_16_12->unk0;
        if (temp_3_21 & 2) {
            if (temp_3_21 & 4) {
                var_16_12->unk0 = (s32) (temp_3_21 ^ 4);
                if (D_001D5BF0.unkCB != 0) {
                    func_002166E8(var_5_10, &D_001D5BF0);
                    D_001D5BF0.unkCB = 0U;
                }
            }
            var_16_12->unk0 = (s32) (var_16_12->unk0 & ~2);
            return 0;
        }
    }
    var_5_10 += 1;
    var_16_12 += 8;
    if (var_5_10 >= 5) {
        return 0;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
