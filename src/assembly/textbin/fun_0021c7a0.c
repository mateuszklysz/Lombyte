/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 67.4130%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021c7a0/FUN_0021c7a0.s", FUN_0021c7a0);
#else
#include "rnc/assembly_textbin_fun_0021c7a0_types.h"
#include "types.h"










extern struct M2c_D_0013C940 D_0013C940;
extern u8 D_0013D4C0[];
extern struct M2c_D_00141848 D_00141848;
extern s32 D_0015ED84;
extern s32 D_0015EEA4;
extern struct M2c_D_001D5BF4 *D_001D5BF4[];
extern s32 func_001F96F8();
extern s32 func_0022DA68();
s32 FUN_0021c7a0(struct M2c_arg0 *arg0) {
    s16 temp_19_24;
    s32 *temp_6_105;
    s32 *var_3_112;
    s32 temp_2_134;
    s32 temp_2_39;
    s32 temp_3_135;
    s32 temp_4_25;
    s32 temp_4_40;
    s32 temp_6_21;
    s32 var_4_111;
    struct M2c_temp_3_16 *temp_3_16;

    temp_3_16 = D_001D5BF4[0]->unk40;
    temp_6_21 = arg0->unk50;
    temp_19_24 = *(s32 *)((u8 *)((temp_3_16->unk3C * 0xA) + temp_3_16->unk48) + 0x6);
    if (D_0013C940.unk1C4 & 8) {
        temp_4_25 = temp_6_21 + 1;
        arg0->unk50 = (s32) (temp_4_25 - (((s32) ((temp_4_25 > -1) ? temp_4_25 : (temp_6_21 + 8)) >> 3) * 8));
    }
    if (D_0013C940.unk1C4 & 4) {
        temp_2_39 = arg0->unk50;
        temp_4_40 = temp_2_39 + 7;
        arg0->unk50 = (s32) (temp_4_40 - (((s32) ((temp_4_40 > -1) ? temp_4_40 : (temp_2_39 + 0xE)) >> 3) * 8));
    }
    if (arg0->unk50 != temp_6_21) {
        func_0022DA68(1, 0x11, arg0->unk14);
    }
    if (temp_19_24 != 0) {
        if ((*(temp_19_24 + D_0013D4C0) != 0) && (D_0013C940.unk1C4 & 0x40)) {
            if ((u16) D_00141848.unkA8 <= 0xFFFEU) {
                D_00141848.unkA8 = (u16) (D_00141848.unkA8 + 1);
            }
            if ((s32) D_00141848.unkAA >= (func_001F96F8(D_0015EEA4) / 600)) {

            } else {
                D_00141848.unkAA = (u16) (func_001F96F8(D_0015EEA4) / 600);
            }
            temp_6_105 = ((u8 *)arg0 + (0x30));
            D_00141848.unkAC = (s32) (D_00141848.unkAC | (1 << D_0015ED84) | 0x80000000);
            var_4_111 = 0;
            if (arg0->unk30 != temp_19_24) {
                var_3_112 = temp_6_105;
loop_17:
                var_4_111 += 1;
                var_3_112 += 1;
                if (var_4_111 < 8) {
                    if (*var_3_112 == temp_19_24) {
                        goto block_19;
                    }
                    goto loop_17;
                }
            } else {
block_19:
                if (var_4_111 < 8) {
                    *(temp_6_105 + var_4_111) = 0;
                }
            }
            *(temp_6_105 + arg0->unk50) = (s32) temp_19_24;
            temp_2_134 = arg0->unk50;
            temp_3_135 = temp_2_134 + 1;
            arg0->unk50 = (s32) (temp_3_135 - (((s32) ((temp_3_135 > -1) ? temp_3_135 : (temp_2_134 + 8)) >> 3) * 8));
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
