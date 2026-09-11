/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ff308
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff308/FUN_001ff308.s", FUN_001ff308);
#else
#include "rnc/assembly_textbin_fun_001ff308_types.h"
#include "types.h"


extern s32 D_0015F604;
extern u8 D_00199B60[];
extern s32 D_0019A3E8;
extern s32 func_001FF418();
extern void temp_16_16();
s32 FUN_001ff308(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_11_5;
    s32 temp_12_12;
    s32 var_2_24;
    struct M2c_temp_16_16 *temp_16_16;

    temp_11_5 = arg0 & 0xF;
    temp_12_12 = arg0 & 0xFFF0;
    temp_16_16 = (temp_11_5 * 0x90) + D_00199B60;
    if ((D_0015F604 != 5) || (temp_11_5 == 2) || (var_2_24 = 0, (temp_11_5 == 0))) {
        if ((temp_16_16->unk2C != arg5) || (temp_16_16->unk28 != arg6) || (temp_16_16->unk20 != arg1) || (temp_16_16->unk24 != temp_12_12) || (temp_16_16->unk30 != arg2) || (temp_16_16->unk34 != arg3) || (temp_16_16->unk38 != arg4)) {
            temp_16_16->unk2C = arg5;
            temp_16_16->unk64 = (s32) D_0019A3E8;
            temp_16_16->unk28 = arg6;
            D_0019A3E8 += 1;
            temp_16_16->unk20 = arg1;
            temp_16_16->unk30 = arg2;
            temp_16_16->unk34 = arg3;
            temp_16_16->unk38 = arg4;
            temp_16_16->unk68 = 1;
            temp_16_16->unk24 = temp_12_12;
            temp_16_16->unk7C = 0;
            temp_16_16->unk70 = 0;
            if (temp_12_12 & temp_16_16->unk4 & 0x20) {
                func_001FF418(temp_16_16, 1, temp_11_5);
            }
        }
        var_2_24 = temp_16_16->unk64;
    }
    return var_2_24;
}
#endif /* NON_MATCHING */
