/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00206f50
SCORE: code=85.5140 functions=85.5140 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00206f50/FUN_00206f50.s", FUN_00206f50);
#else
#include "types.h"
extern s32 func_00208818();

s32 FUN_00206f50(s32 arg0, s32 arg1) {
    s32 temp_16_54;
    s32 temp_16_73;
    s32 temp_16_96;
    s32 temp_2_60;
    s32 temp_2_79;
    s32 temp_3_105;
    s32 var_9;

    if (arg1 < 0xE9) {
        if (func_00208818(arg0, arg1, 0x132, 0xA0, 0x15F, 0xD8) == 0) {
            return 0;
        }
        if (func_00208818(arg0, arg1, 0x14D, 0xD8, 0x181, 0x9A) == 0) {
            return 0;
        }
        if (func_00208818(arg0, arg1, 0x182, 0xB4, 0x137, 0x93) == 0) {
            return 0;
        }
        var_9 = func_00208818(arg0, arg1, 0x157, 0x8C, 0x130, 0xAA);
        if (var_9 == 0) {
            if (var_9 == 0) {
                return 0;
            } else {
                return 0;
            }
        }
        return 1;
    }
    temp_16_54 = func_00208818(arg0, arg1, 0x8F, 0x115, 0x148, 0x14B);
    temp_2_60 = func_00208818(arg0, arg1, 0xE7, 0x108, 0x127, 0x164);
    if (temp_16_54 == 0 && temp_2_60 == 0) {
        return 0;
    }
    temp_16_73 = func_00208818(arg0, arg1, 0xED, 0x15F, 0x154, 0x10E);
    temp_2_79 = func_00208818(arg0, arg1, 0xA2, 0x12B, 0x16F, 0x147);
    if (temp_16_73 == 0 && temp_2_79 == 0) {
        return 0;
    }
    temp_16_96 = func_00208818(arg0, arg1, 0x132, 0x163, 0x141, 0xCC);
    temp_3_105 = func_00208818(arg0, arg1, 0xC2, 0x108, 0x1A0, 0x12E);
    if (temp_16_96 != 0) {
        return 1;
    }
    if (temp_3_105 != 0) {
        if (temp_16_96) {
            return 1;
        } else {
            return 1;
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
