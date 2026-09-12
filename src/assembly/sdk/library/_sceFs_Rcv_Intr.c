/*
STATE: C_NON_MATCHING
SYMBOL: _sceFs_Rcv_Intr
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _sceFs_Rcv_Intr; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_sceFs_Rcv_Intr/_sceFs_Rcv_Intr.s", _sceFs_Rcv_Intr);
#else
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0xC];
    s32 unkC;
};

struct M2c_temp_7_64 {
    u8 pad_0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

extern u8 D_0012FC10[];
extern u32 D_0012FC90[];
extern u32 D_0012FC98[];
extern u8 D_00157500[];
extern s32 iSignalSema();
extern s32 memcpy();
extern void memcpy();
void _sceFs_Rcv_Intr(struct M2c_arg0 *arg0) {
    s32 sp0;
    s32 sp4;
u8 *sp8;
u8 *spC;
u8 *sp10;
u8 *sp14;
u8 *temp_7_214;
u8 *temp_7_34;
    s32 *temp_3_262;
    s32 temp_16_20;
    s32 temp_2_115;
u8 *temp_2_22;
    s32 temp_2_244;
    s32 temp_2_62;
    s32 temp_2_80;
    s32 var_4_110;
    s32 var_5_6;
u8 *var_6_111;
    s32 var_6_256;
    s32 var_6_67;
    s32 var_6_85;
u8 *var_6_221;
    u8 *temp_4_71;
    u8 *temp_4_89;
    u8 *temp_5_68;
    u8 *temp_5_86;
    u8 *var_2_69;
    u8 *var_2_87;
    struct M2c_temp_7_64 *temp_7_64;

    var_5_6 = 0;
    if (D_0012FC98[0] != 0) {
        var_5_6 = arg0->unkC;
    }
    D_0012FC90[0] = var_5_6;
    temp_16_20 = (s32) ((var_5_6 * 0x440) + D_00157500) | 0x20000000;
    temp_2_22 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0x0);
    sp0 = temp_2_22;
    sp4 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0x4);
    sp8 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0x8);
    temp_7_34 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0xC);
    spC = temp_7_34;
    if (temp_2_22 >= 0) {
        memcpy(sp8, temp_16_20 + 0x10, spC, temp_7_34);
    }
    switch (sp4) {
    case 2:
        temp_2_62 = *(s32 *)((u8 *)temp_16_20 + 0x14);
        temp_7_64 = temp_16_20 + 0x14;
        if (temp_2_62 > 0) {
            var_6_67 = 0;
            if (temp_2_62 > 0) {
                temp_5_68 = temp_16_20 + 0x24;
                var_2_69 = temp_5_68;
                do {
                    temp_4_71 = temp_7_64->unk8 + var_6_67;
                    var_6_67 += 1;
                    *temp_4_71 = *var_2_69;
                    var_2_69 = temp_5_68 + var_6_67;
                } while (var_6_67 < *(s32 *)((u8 *)temp_16_20 + 0x14));
            }
        }
        temp_2_80 = temp_7_64->unk4;
        if (temp_2_80 > 0) {
            var_6_85 = 0;
            if (temp_2_80 > 0) {
                temp_5_86 = ((u8 *)temp_7_64 + (0x50));
                var_2_87 = temp_5_86;
                do {
                    temp_4_89 = temp_7_64->unkC + var_6_85;
                    var_6_85 += 1;
                    *temp_4_89 = *var_2_87;
                    var_2_87 = temp_5_86 + var_6_85;
                } while (var_6_85 < temp_7_64->unk4);
            default:
            }
        }
        break;
    case 11:
        sp10 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0x14);
        var_4_110 = temp_16_20 + 0x18;
        var_6_111 = sp10;
        temp_2_115 = temp_16_20 + 0x158;
        if (((u32)(u8 *)var_4_110 | (u32)(u8 *)var_6_111) & 7) {
            do {
                /* m2c-unknown:  unknown instruction: ldl $a4, 0x7($a0)  */
                /* m2c-unknown:  unknown instruction: ldr $a4, ($a0)  */
                /* m2c-unknown:  unknown instruction: ldl $v1, 0xf($a0)  */
                /* m2c-unknown:  unknown instruction: ldr $v1, 0x8($a0)  */
                /* m2c-unknown:  unknown instruction: ldl $a1, 0x17($a0)  */
                /* m2c-unknown:  unknown instruction: ldr $a1, 0x10($a0)  */
                /* m2c-unknown:  unknown instruction: ldl $a3, 0x1f($a0)  */
                /* m2c-unknown:  unknown instruction: ldr $a3, 0x18($a0)  */
                /* m2c-unknown:  unknown instruction: sdl $a4, 0x7($a2)  */
                /* m2c-unknown:  unknown instruction: sdr $a4, ($a2)  */
                /* m2c-unknown:  unknown instruction: sdl $v1, 0xf($a2)  */
                /* m2c-unknown:  unknown instruction: sdr $v1, 0x8($a2)  */
                /* m2c-unknown:  unknown instruction: sdl $a1, 0x17($a2)  */
                /* m2c-unknown:  unknown instruction: sdr $a1, 0x10($a2)  */
                /* m2c-unknown:  unknown instruction: sdl $a3, 0x1f($a2)  */
                /* m2c-unknown:  unknown instruction: sdr $a3, 0x18($a2)  */
                var_4_110 += 0x20;
                var_6_111 += 0x20;
            } while (var_4_110 != temp_2_115);
        } else {
            do {
                *(s32 *)((u8 *)var_6_111 + 0x0) = (s64) *(s32 *)((u8 *)var_4_110 + 0x0);
                *(s32 *)((u8 *)var_6_111 + 0x8) = (s64) *(s32 *)((u8 *)var_4_110 + 0x8);
                *(s32 *)((u8 *)var_6_111 + 0x10) = (s64) *(s32 *)((u8 *)var_4_110 + 0x10);
                *(s32 *)((u8 *)var_6_111 + 0x18) = (s64) *(s32 *)((u8 *)var_4_110 + 0x18);
                var_4_110 += 0x20;
                var_6_111 += 0x20;
            } while (var_4_110 != temp_2_115);
        }
        *var_6_111 = (s32 *) *(s32 *)((u8 *)var_4_110 + 0x0);
        break;
    case 12:
        sp10 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0x14);
        /* m2c-unknown:  unknown instruction: ldl $v1, 0x1f($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $v1, 0x18($s0)  */
        /* m2c-unknown:  unknown instruction: ldl $a0, 0x27($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $a0, 0x20($s0)  */
        /* m2c-unknown:  unknown instruction: ldl $a1, 0x2f($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $a1, 0x28($s0)  */
        /* m2c-unknown:  unknown instruction: ldl $a2, 0x37($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $a2, 0x30($s0)  */
        /* m2c-unknown:  unknown instruction: sdl $v1, 0x7($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $v1, ($v0)  */
        /* m2c-unknown:  unknown instruction: sdl $a0, 0xf($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $a0, 0x8($v0)  */
        /* m2c-unknown:  unknown instruction: sdl $a1, 0x17($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $a1, 0x10($v0)  */
        /* m2c-unknown:  unknown instruction: sdl $a2, 0x1f($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $a2, 0x18($v0)  */
        /* m2c-unknown:  unknown instruction: ldl $v1, 0x3f($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $v1, 0x38($s0)  */
        /* m2c-unknown:  unknown instruction: ldl $a0, 0x47($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $a0, 0x40($s0)  */
        /* m2c-unknown:  unknown instruction: ldl $a1, 0x4f($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $a1, 0x48($s0)  */
        /* m2c-unknown:  unknown instruction: ldl $a2, 0x57($s0)  */
        /* m2c-unknown:  unknown instruction: ldr $a2, 0x50($s0)  */
        /* m2c-unknown:  unknown instruction: sdl $v1, 0x27($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $v1, 0x20($v0)  */
        /* m2c-unknown:  unknown instruction: sdl $a0, 0x2f($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $a0, 0x28($v0)  */
        /* m2c-unknown:  unknown instruction: sdl $a1, 0x37($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $a1, 0x30($v0)  */
        /* m2c-unknown:  unknown instruction: sdl $a2, 0x3f($v0)  */
        /* m2c-unknown:  unknown instruction: sdr $a2, 0x38($v0)  */
        break;
    case 23:
    case 25:
    case 26:
        temp_7_214 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0x14);
        sp10 = temp_7_214;
        sp14 = (s32 *) *(s32 *)((u8 *)temp_16_20 + 0x18);
        var_6_221 = sp14;
        if (var_6_221 >= 0x401U) {
            var_6_221 = 0x400;
            sp14 = 0x400;
        }
        memcpy(sp10, temp_16_20 + 0x1C, var_6_221, temp_7_214);
        break;
    }
    if (sp0 < 0) {
        temp_2_244 = -sp0;
        sp0 = temp_2_244;
        if (*(s32 *)D_0012FC10 == temp_2_244) {
            *(s32 *)D_0012FC10 = -1;
            return;
        }
        var_6_256 = 1;
loop_30:
        if (var_6_256 < 0x20) {
            temp_3_262 = ((s32 *)D_0012FC10 + var_6_256);
            var_6_256 += 1;
            if (*temp_3_262 == temp_2_244) {
                *temp_3_262 = -1;
                return;
            }
            goto loop_30;
        }
    } else {
        iSignalSema(sp0);
    }
}
#endif /* NON_MATCHING */
