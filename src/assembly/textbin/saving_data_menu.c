/* ROLE: recovered whole function `SavingDataMenu`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 79.0755%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/saving_data_menu/FUN_00222f88.s", FUN_00222f88);
#else
#include "rnc/assembly_textbin_fun_00222f88_types.h"
#include "types.h"












extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_0013D290 D_0013D290;
extern s32 D_0015ED84;
extern s32 D_0015ED98;
extern s32 D_0015EE20;
extern s32 D_0015EE24;
extern s32 D_0015EE34;
extern s32 D_0015EEB0;
extern s32 D_0015EEB4;
extern u8 D_001D2578[];
extern s32 D_001D2640;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_001FBAB8();
extern s32 func_002269C0();
extern s32 func_0022DA68();
s32 FUN_00222f88(struct M2c_arg0 *arg0) {
    s32 *temp_2_128;
    s32 temp_11_49;
    s32 temp_17_31;
    s32 temp_4_186;
    s32 temp_5_192;
    s32 var_3_170;

    if (D_001D5BF0.unk4->unk40 == arg0) {
        if ((arg0->unk4C == 0) && (D_001D5BF0.unkD0 == D_001D2578) && (D_001D5BF0.unkD0->unk84 != 0)) {
            arg0->unk4C = 1;
        }
        temp_17_31 = arg0->unk4C;
        if (temp_17_31 == 1) {
            func_002269C0(arg0->unk48, arg0->unk40);
            D_001D5BF0.unk12C = 0x4FB5;
            D_001D5BF0.unk128 = temp_17_31;
        }
        arg0->unk4C = 2;
        temp_11_49 = arg0->unk40;
        if (D_001D5BF0.unk128 != 0) {
            if ((D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0)) {
                D_001D5BF0.unk128 = 0;
                if (D_0013D290.unkE4 != 0) {
                    D_0015EEB4 |= 0x80;
                    func_001FBAB8(3, D_001D5BF0.unk4);
                    goto block_46;
                }
                *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x24) = (s32) D_0015ED98;
                *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x20) = (s32) D_0015ED84;
                *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x2C) = (s32) D_0015EE24;
                /* m2c-unknown:  unknown instruction: ldl $v1, 0x7($a3)  */
                /* m2c-unknown:  unknown instruction: ldr $v1, ($a3)  */
                /* m2c-unknown:  unknown instruction: sdl $v1, 0x7($v0)  */
                /* m2c-unknown:  unknown instruction: sdr $v1, ($v0)  */
                *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x28) = (s32) D_0015EE20;
                goto block_13;
            }
            /* Duplicate return node #47. Try simplifying control flow for better match */
            return 0;
        }
block_13:
        if (D_0013C940.unk1C4 & 0xD00) {
            if (D_001D5BF0.unk124 == 0) {
                return 1;
            }
            goto block_17;
        }
block_17:
        if (D_0013C940.unk1C4 & 0x10) {
            temp_2_128 = D_001D5BF0.unk4->unk38;
            if (temp_2_128 != NULL) {
                D_001D5BF0.unk8 = temp_2_128;
                goto block_23;
            }
            if (D_001D5BF0.unk124 == 0) {
                return -1;
            }
            goto block_24;
        }
block_23:
block_24:
        if ((D_0015EEB0 != 0x10) && (D_0015EEB0 != 1)) {
            D_001D5BF0.unk8 = (void *) D_001D5BF0.unk4->unk38;
            return 0;
        }
        if ((D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0) && (D_0013D290.unk8 == 2)) {
            if (arg0->unk30 & 1) {
                var_3_170 = D_0013C940.unk1B4;
            } else {
                var_3_170 = D_0013C940.unk1A4;
            }
            arg0->unk40 = (s32) D_0015EE34;
            if ((var_3_170 & 0x1000) && (D_0015EE34 != 0)) {
                arg0->unk40 = (s32) (D_0015EE34 - 1);
            }
            if (var_3_170 & 0x4000) {
                temp_4_186 = arg0->unk40;
                if (temp_4_186 < 4) {
                    arg0->unk40 = (s32) (temp_4_186 + 1);
                }
            }
            temp_5_192 = arg0->unk40;
            D_0015EE34 = temp_5_192;
            if ((var_3_170 & 0x40) && (D_0013D290.unk8 == 2)) {
                if (*(s32 *)((u8 *)((temp_5_192 * 0x1C) + &D_0013D290) + 0x20) != -1) {
                    D_001D5BF0.unkD4 = 0;
                    D_001D5BF0.unk8 = D_001D2578;
                    D_001D2640 = arg0->unk40;
                } else {
                    arg0->unk4C = 1;
                }
            }
            if (arg0->unk40 != temp_11_49) {
                func_0022DA68(1, 0x11, arg0->unk14);
            }
block_46:
        }
        /* Duplicate return node #47. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
#endif /* NON_MATCHING */
