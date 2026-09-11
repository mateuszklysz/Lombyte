/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ff480
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff480/FUN_001ff480.s", FUN_001ff480);
#else
#include "rnc/assembly_textbin_fun_001ff480_types.h"
#include "types.h"


extern struct M2c_D_00199B60 D_00199B60;
extern s32 func_001FF308();
s32 FUN_001ff480(s32 arg0) {
    s32 *var_3_13;
    s32 var_4_12;

    var_4_12 = 0;
    if (D_00199B60.unk64 != arg0) {
        var_3_13 = ((u8 *)&D_00199B60 + 0x64);
loop_2:
        var_4_12 += 1;
        var_3_13 += 0x90;
        if (var_4_12 < 0xD) {
            if (*var_3_13 == arg0) {
                goto block_4;
            }
            goto loop_2;
        }
        goto block_5;
    }
block_4:
    if (var_4_12 >= 0xD) {
block_5:
        return 0;
    }
    func_001FF308(var_4_12, 0xFFFF, 0, 0, 0, 0, 0);
    return 1;
}
#endif /* NON_MATCHING */
