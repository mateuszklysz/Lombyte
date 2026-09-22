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
    s32 temp_3_19;
    s32 var_5_8;
    struct M2c_var_16_10 *var_16_10;

    var_5_8 = 0;
    var_16_10 = D_001D60B8 + 4;
loop_1:
    if (*(s32 *)((u8 *)var_16_10 - 0x4) == arg0) {
        temp_3_19 = var_16_10->unk0;
        if (temp_3_19 & 2) {
            if (temp_3_19 & 4) {
                var_16_10->unk0 = (s32) (temp_3_19 ^ 4);
                if (D_001D5BF0.unkCB != 0) {
                    func_002166E8(var_5_8, &D_001D5BF0);
                    D_001D5BF0.unkCB = 0U;
                }
            }
            var_16_10->unk0 = (s32) (var_16_10->unk0 & ~2);
            return 0;
        }
    }
    var_5_8 += 1;
    var_16_10 += 2;
    if (var_5_8 >= 5) {
        return 0;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
