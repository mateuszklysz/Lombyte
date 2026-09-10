/* ROLE: recovered function `LoadingDataMenu` (game/pause.cpp, 0x2e0 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 77.4809%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002232d8/FUN_002232d8.s", FUN_002232d8);
#else
#include "rnc/assembly_textbin_fun_002232d8_types.h"
#include "types.h"












extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_0013D290 D_0013D290;
extern s32 D_0013E05A;
extern struct M2c_D_0013E550 D_0013E550;
extern s32 D_0015ED84;
extern s32 D_0015EDEC;
extern s32 D_0015EDF0;
extern s32 D_0015EE34;
extern s32 D_0015EEB0;
extern s32 D_0015EEB4;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_001FBAB8();
extern s32 func_0022DA68();
extern s32 func_0022E188();
s32 FUN_002232d8(struct M2c_arg0 *arg0) {
    s32 temp_19_17;
    s32 temp_2_92;
    s32 temp_4_149;
    s32 temp_lo_47;
    s32 temp_lo_59;
    s32 var_3_134;

    temp_19_17 = arg0->unk40;
    if (D_001D5BF0.unk128 != 0) {
        if ((D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0)) {
            D_001D5BF0.unk128 = 0;
            if (D_0013D290.unkE4 != 0) {
                D_0015EEB4 |= 0x100;
                func_001FBAB8(3, D_001D5BF0.unk4, &D_0013D290);
                goto block_40;
            }
            D_0013D290.unkF4 = 1;
            temp_lo_47 = (s32) (D_0015EDF0 * 8) / 10;
            D_0013E550.unk4C = (s32) D_0015EDEC;
            temp_lo_59 = (s32) (D_0015EDF0 * 7) / 10;
            D_0013E550.unk48 = temp_lo_47;
            D_0013E550.unk50 = temp_lo_47;
            D_0013E550.unk54 = temp_lo_59;
            D_0013E550.unk5C = (s32) D_0015EDF0;
            D_0013E550.unk58 = temp_lo_59;
            func_0022E188(D_0015ED84, &D_0013E550, D_0015EDF0, 0xA, 0xA, temp_lo_47);
            D_0013E05A = 0;
            goto block_6;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return 0;
    }
block_6:
    if (D_0013C940.unk1C4 & 0xD00) {
        if (D_001D5BF0.unk124 == 0) {
            return 1;
        }
        goto block_10;
    }
block_10:
    if (D_0013C940.unk1C4 & 0x10) {
        temp_2_92 = D_001D5BF0.unk4->unk38;
        if (temp_2_92 != 0) {
            D_001D5BF0.unk8 = temp_2_92;
            goto block_16;
        }
        if (D_001D5BF0.unk124 == 0) {
            return -1;
        }
        goto block_17;
    }
block_16:
block_17:
    if ((D_0015EEB0 != 0x10) && (D_0015EEB0 != 1)) {
        D_001D5BF0.unk8 = (s32) D_001D5BF0.unk4->unk38;
        return 0;
    }
    if ((D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0) && (D_0013D290.unk8 == 2)) {
        if (arg0->unk30 & 1) {
            var_3_134 = D_0013C940.unk1B4;
        } else {
            var_3_134 = D_0013C940.unk1C4;
        }
        arg0->unk40 = (s32) D_0015EE34;
        if ((var_3_134 & 0x1000) && (D_0015EE34 != 0)) {
            arg0->unk40 = (s32) (D_0015EE34 - 1);
        }
        temp_4_149 = arg0->unk40;
        if ((var_3_134 & 0x4000) && (temp_4_149 < 4)) {
            arg0->unk40 = (s32) (temp_4_149 + 1);
        }
        D_0015EE34 = arg0->unk40;
        if ((var_3_134 & 0x40) && (D_0013D290.unk8 == 2) && (*(s32 *)((u8 *)((arg0->unk40 * 0x1C) + &D_0013D290) + 0x20) >= 0)) {
            func_0022DA68(0, 0x11, arg0->unk14);
            D_0013D290.unkC0 = 0;
            D_0013D290.unk14 = (s32) arg0->unk40;
            if (D_0013D290.unkDC < 0) {
                D_0013D290.unkE0 = 0;
                D_0013D290.unkDC = 0xD;
            }
            D_001D5BF0.unk128 = 1;
            D_001D5BF0.unk12C = 0x4FB6;
        }
        if (arg0->unk40 != temp_19_17) {
            func_0022DA68(1, 0x11, arg0->unk14);
        }
block_40:
    }
    return 0;
}
#endif /* NON_MATCHING */
