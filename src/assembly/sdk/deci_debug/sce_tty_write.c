/*
STATE: C_NON_MATCHING
SYMBOL: sceTtyWrite
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceTtyWrite; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/deci_debug/sce_tty_write/sceTtyWrite.s", sceTtyWrite);
#else
#include "types.h"
struct M2c_D_00154A50 {
    s32 unk0;
    s32 unk4;
    u8 pad_8[0x4];
    s32 unkC;
    s32 unk10;
};

extern struct M2c_D_00154A50 D_00154A50;
extern u8 D_00154A80[];
extern s32 CallDebugCharacter();
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 SceDeci2Poll();
s32 sceTtyWrite(s8 *arg0, s32 arg1) {
    s32 temp_6_26;
    s32 var_17_14;
    s32 var_18_12;
    s32 var_20_8;
    s32 var_2_19;
    s8 *var_16_16;
    u8 *var_4_32;

    var_20_8 = 0;
    var_18_12 = arg1;
    var_17_14 = 0;
    var_16_16 = arg0;
    var_2_19 = -1;
    if (D_00154A50.unkC == 0) {
        DIntr();
        temp_6_26 = (s32) D_00154A80 | 0x20000000;
            D_00154A50.unkC = 0;
        D_00154A50.unkC = 1;
        var_4_32 = temp_6_26 + 0xC;
loop_2:
        var_18_12 -= 1;
        if (var_18_12 != -1) {
            if (*var_16_16 == 0xA) {
                *var_4_32 = 0xD;
                var_17_14 += 1;
                var_4_32 += 1;
                if (var_17_14 < 0x100) {
                    goto block_6;
                }
            } else {
block_6:
                *var_4_32 = (u8) *var_16_16;
                var_17_14 += 1;
                var_16_16 += 1;
                var_4_32 += 1;
                var_20_8 += 1;
                if (var_17_14 < 0x100) {
                    goto loop_2;
                }
            }
        }
        D_00154A50.unk10 = temp_6_26;
        *(s32 *)((u8 *)temp_6_26 + 0x0) = (s16) D_00154A50.unk4;
        if (CallDebugCharacter(D_00154A50.unk0, *(s32 *)((u8 *)temp_6_26 + 0x7), temp_6_26, 0xA, -1) < 0) {
        D_00154A50.unk4 = (s32) (var_17_14 + 0xC);
            EnableInterrupts();
            return -1;
        }
        if (D_00154A50.unkC != 0) {
            do {
                SceDeci2Poll(D_00154A50.unk0);
            } while (D_00154A50.unkC != 0);
        }
        EnableInterrupts();
        var_2_19 = var_20_8;
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_2_19;
    }
    return var_2_19;
}
#endif /* NON_MATCHING */
