/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0022dba0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022dba0/FUN_0022dba0.s", FUN_0022dba0);
#else
#include "rnc/assembly_textbin_fun_0022dba0_types.h"
#include "types.h"


extern u8 D_0013E550[];
extern s32 D_0015F5B4;
extern s32 D_0015F630;
extern s32 D_0015F634;
extern s32 func_0022D7F0();
s32 FUN_0022dba0(s32 arg1, s32 arg0, s32 arg2) {
    s16 temp_16_11;
    s32 temp_2_26;
    struct M2c_temp_3_34 *temp_3_34;

    temp_16_11 = arg0 + D_0015F5B4;
    if (temp_16_11 >= D_0015F630) {
        return -1;
    }
    temp_2_26 = func_0022D7F0(D_0015F634 + (temp_16_11 << 5), arg2, 0, 0x400);
    if (temp_2_26 >= 0) {
        temp_3_34 = (temp_2_26 * 0x70) + D_0013E550;
        temp_3_34->unk7E = temp_16_11;
        temp_3_34->unk88 = arg2;
    }
    return temp_2_26;
}
#endif /* NON_MATCHING */
