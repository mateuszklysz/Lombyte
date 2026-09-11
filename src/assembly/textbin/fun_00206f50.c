/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00206f50
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00206f50/FUN_00206f50.s", FUN_00206f50);
#else
#include "types.h"
extern s32 func_00208818();
s32 FUN_00206f50(s32 arg0, s32 arg1) {
    s32 temp_16_56;
    s32 temp_16_75;
    s32 temp_16_98;
    s32 temp_2_62;
    s32 temp_2_81;
    s32 temp_3_107;
    s32 var_2_45;

    if (arg1 < 0xE9) {
        if (func_00208818(0x132, 0xA0, 0x15F, 0xD8) != 0) {
            if (func_00208818(arg0, arg1, 0x14D, 0xD8, 0x181, 0x9A) != 0) {
                if (func_00208818(arg0, arg1, 0x182, 0xB4, 0x137, 0x93) != 0) {
                    var_2_45 = 1;
                    if (func_00208818(arg0, arg1, 0x157, 0x8C, 0x130, 0xAA) == 0) {
                        return 0;
                    }
                    /* Duplicate return node #15. Try simplifying control flow for better match */
                    return var_2_45;
                }
                goto block_10;
            }
            goto block_10;
        }
        goto block_10;
    }
    temp_16_56 = func_00208818(arg0, arg1, 0x8F, 0x115, 0x148, 0x14B);
    temp_2_62 = func_00208818(arg0, arg1, 0xE7, 0x108, 0x127, 0x164);
    if (temp_16_56 == 0) {
        var_2_45 = 0;
        if (temp_2_62 != 0) {
            goto block_8;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_2_45;
    }
block_8:
    temp_16_75 = func_00208818(arg0, arg1, 0xED, 0x15F, 0x154, 0x10E);
    temp_2_81 = func_00208818(arg0, arg1, 0xA2, 0x12B, 0x16F, 0x147);
    if (temp_16_75 == 0) {
        if (temp_2_81 == 0) {
block_10:
            return 0;
        }
        goto block_12;
    }
block_12:
    temp_16_98 = func_00208818(arg0, arg1, 0x132, 0x163, 0x141, 0xCC);
    temp_3_107 = func_00208818(arg0, arg1, 0xC2, 0x108, 0x1A0, 0x12E);
    if (temp_16_98 == 0) {
        var_2_45 = 0;
        if (temp_3_107 != 0) {
            goto block_14;
        }
    } else {
block_14:
        var_2_45 = 1;
    }
    return var_2_45;
}
#endif /* NON_MATCHING */
