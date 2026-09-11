/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00204f60
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00204f60/FUN_00204f60.s", FUN_00204f60);
#else
#include "rnc/assembly_textbin_fun_00204f60_types.h"
#include "types.h"




extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_00204EF8();
extern s32 func_00205000();
s32 FUN_00204f60(void) {
    s32 var_16_19;
    s32 var_2_8;
    struct M2c_temp_3_30 *temp_3_30;

    var_2_8 = func_00204EF8(1);
    if (var_2_8 == 0) {
        var_16_19 = 1;
        if ((D_001A00F0.unk290 & 0x1000) || (D_001A00F0.unk27C == 0)) {
loop_3:
            var_16_19 += 1;
            if (var_16_19 < 5) {
                temp_3_30 = ((u8 *)&D_001A00F0 + (var_16_19 * 4));
                if ((temp_3_30->unk28C & 0x1000) || (temp_3_30->unk278 == 0)) {
                    goto loop_3;
                }
            }
        }
        func_00205000(0, var_16_19, &D_001A00F0);
        var_2_8 = var_16_19;
    }
    return var_2_8;
}
#endif /* NON_MATCHING */
