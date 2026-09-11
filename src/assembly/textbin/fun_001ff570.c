/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ff570
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff570/FUN_001ff570.s", FUN_001ff570);
#else
#include "rnc/assembly_textbin_fun_001ff570_types.h"
#include "types.h"




extern struct M2c_D_00199B60 D_00199B60;
void FUN_001ff570(s32 arg0, s32 arg1) {
    s32 *var_3_11;
    s32 var_6_10;
    struct M2c_temp_3_27 *temp_3_27;

    var_6_10 = 0;
    if (D_00199B60.unk64 != arg0) {
        var_3_11 = ((u8 *)&D_00199B60 + 0x64);
loop_2:
        var_6_10 += 1;
        var_3_11 += 0x90;
        if (var_6_10 < 0xD) {
            if (*var_3_11 == arg0) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        if (var_6_10 < 0xD) {
            temp_3_27 = ((u8 *)&D_00199B60 + (var_6_10 * 0x90));
            temp_3_27->unk24 = arg1;
            if (temp_3_27->unk68 == 0) {
                temp_3_27->unk4 = arg1;
            }
        }
    }
}
#endif /* NON_MATCHING */
