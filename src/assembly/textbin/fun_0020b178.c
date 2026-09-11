/*
STATE: C_NON_MATCHING
SYMBOL: memcard_Save__Fii
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `memcard_Save__Fii` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020b178/FUN_0020b178.s", FUN_0020b178);
#else
#include "rnc/assembly_textbin_fun_0020b178_types.h"
#include "types.h"


extern struct M2c_D_0013D290 D_0013D290;
extern u8 D_0013DD58[];
extern u8 D_00141EC0[];
extern u8 D_0014EED0[];
extern u8 D_001506D0[];
extern u32 D_0015ED84[];
extern u32 D_0015ED98[];
extern u32 D_0015EE20[];
extern u32 D_0015EE24[];
extern u8 D_0015EE98[];
extern u32 D_0015EEB4[];
extern u8 D_001A04C0[];
extern u8 D_001A07C0[];
extern s32 func_00121780();
extern s32 func_0012D6D8();
extern s32 func_00207B08();
extern s32 func_00208770();
extern s32 func_0020AD78();
s32 FUN_0020b178(s32 arg0, s32 arg1) {
    s32 temp_2_45;
    u8 *temp_3_72;
    u8 var_18_65;

    func_00121780(D_0015EE98);
    func_0012D6D8(D_0015EE98);
    func_00208770();
    func_00207B08((D_0015ED84[0] << 0xB) + D_00141EC0);
    if (D_0013D290.unkC0 == -1) {
        goto block_4;
    }
    if (*(s32 *)((u8 *)((D_0013D290.unkC0 * 0xB8) + &D_0013D290) + 0x14) < 0) {
        goto block_3;
    }
    goto block_5;
block_3:
block_4:
    return arg0 == 0;
block_5:
    temp_2_45 = D_0013D290.unkF4 | arg0;
    D_0013D290.unkF4 = temp_2_45;
    if (temp_2_45 == 0) {
        goto block_18;
    }
    if (arg0 != 0) {
        goto block_8;
    }
    D_0015EEB4[0] |= 0x200;
block_8:
    if (D_0013D290.unkD4 >= 3) {
        goto block_19;
    }
    if (D_0013D290.unkDC >= 0) {
        goto block_19;
    }
    var_18_65 = 0;
    D_0013D290.unkC8 = (s32) D_0015ED84[0];
    if (arg1 < 0) {
        goto block_13;
    }
    D_0015ED84[0] = arg1;
    temp_3_72 = arg1 + D_0013DD58;
    var_18_65 = *temp_3_72;
    if (var_18_65 != 0) {
        goto block_14;
    }
    *temp_3_72 = 1;
block_13:
block_14:
    *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x24) = (s32) D_0015ED98[0];
    *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x20) = (s32) D_0015ED84[0];
    *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x2C) = (s32) D_0015EE24[0];
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x7($a6)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, ($a6)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0x7($v0)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, ($v0)  */
    *(s32 *)((u8 *)((D_0013D290.unk14 * 0x1C) + &D_0013D290) + 0x28) = (s32) D_0015EE20[0];
    func_0020AD78(D_0014EED0, 0, D_001A04C0, 0x1C, D_0015ED98[0], D_0015ED84[0], D_0015EE98, D_0015EE20[0]);
    func_0020AD78(D_001506D0, D_0013D290.unkC8, D_001A07C0);
    if (arg1 < 0) {
        goto block_16;
    }
    *(D_0015ED84[0] + D_0013DD58) = var_18_65;
    D_0015ED84[0] = D_0013D290.unkC8;
block_16:
    if (D_0013D290.unkDC >= 0) {
        goto block_19;
    }
    D_0013D290.unkDC = 0xF;
    D_0013D290.unkE0 = (s32) D_0013D290.unkC0;
block_18:
block_19:
    return D_0013D290.unkDC == 0xF;
}
#endif /* NON_MATCHING */
