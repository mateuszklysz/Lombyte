/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021d1f8
SCORE: code=76.5098 functions=76.5098 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021d1f8/FUN_0021d1f8.s", FUN_0021d1f8);
#else
#include "rnc/assembly_textbin_fun_0021d1f8_types.h"
#include "types.h"










extern struct M2c_D_00137B80 D_00137B80;
extern struct M2c_D_001516D0 D_001516D0;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 D_001D5CF8[];
extern u8 D_001D60B8[];
extern s32 func_00216788();
extern s32 func_00225AC0();
s32 FUN_0021d1f8(struct M2c_arg0 *arg0) {
    s32 var_2_45;
    s32 var_5_16;
    u32 temp_4_18;
    struct M2c_var_3_15 *var_3_15;

    func_00225AC0(1);
    arg0->unk54 = 0;
    arg0->unk38 = 0;
    var_3_15 = D_001D60B8 + 4;
    var_5_16 = 4;
    do {
        temp_4_18 = *(s32 *)((u8 *)var_3_15 - 0x4);
        var_5_16 -= 1;
        if ((temp_4_18 != 0) && (temp_4_18 < (u32) D_001D5BF0.unk10C)) {
            var_3_15->unk0 = (s32) (var_3_15->unk0 | 2);
        }
        var_3_15 += 2;
    } while (var_5_16 >= 0);
    arg0->unk50 = 0;
    if (D_001516D0.unk8 == 0) {
        var_2_45 = 1;
        if (func_00216788(D_001D5CF8[0], D_00137B80.unk1528, D_00137B80.unk152C) == 0) {
            var_2_45 = 3;
        }
        arg0->unk50 = var_2_45;
    }
    arg0->unk10 = (s32) (arg0->unk10 | 4);
    return 0;
}
#endif /* NON_MATCHING */
