/*
STATE: C_NON_MATCHING
SYMBOL: music_Update__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `music_Update__Fv` starts here. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 62.8051%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00216290/FUN_00216290.s", FUN_00216290);
#else
#include "rnc/assembly_textbin_fun_00216290_types.h"
#include "types.h"






extern struct M2c_D_001516D0 D_001516D0;
extern u8 D_001516FC[];
extern u8 D_00151704[];
extern s32 func_0012E4C0();
extern s32 func_0012ECA0();
extern s32 func_0012EE08();
extern s32 func_001F96F8();
extern s32 func_001F9740();
extern s32 func_00215970();
extern s32 func_00215B68();
extern s32 func_00215C40();
extern s32 func_00215D18();
extern s32 func_00215E00();
extern s32 func_002160A8();
extern s32 func_00216788();
extern void func_00216B68();
void FUN_00216290(void) {
    s32 *var_17_49;
    s16 temp_16_282;
    s32 temp_4_192;
    s32 temp_lo_178;
    s8 temp_4_70;
    s8 temp_5_79;
    struct M2c_temp_17_275 *temp_17_275;
    struct M2c_temp_17_68 *temp_17_68;

    if (D_001516D0.unkB != 0) {
        goto block_77;
    }
    if (D_001516D0.unk40 & 0x8000) {
        goto block_14;
    }
    if (D_001516D0.unk3E & 0x8000) {
        goto block_14;
    }
    if (D_001516D0.unk34 != 0) {
        goto block_8;
    }
    if (!(D_001516D0.unk3C & 1)) {
        goto block_7;
    }
    if (D_001516D0.unk22 != -1) {
        goto block_7;
    }
    func_00215C40(D_001516D0.unk38, (s16) D_001516D0.unk3C, D_001516D0.unk3A);
    goto block_13;
block_7:
block_8:
    if (D_001516D0.unk3E == 9) {
        goto block_14;
    }
    var_17_49 = D_001516FC;
    if (D_001516D0.unk34 == 0) {
        goto block_15;
    }
    if (D_001516D0.unk34 == 0xFFFFFFFF) {
        goto block_13;
    }
    if (D_001516D0.unk3E != 8) {
        goto block_14;
    }
    func_00215D18(D_001516D0.unk38, (s16) D_001516D0.unk3C, D_001516D0.unk3A);
block_13:
block_14:
    var_17_49 = D_001516FC;
block_15:
    temp_17_68 = var_17_49 - 0x2C;
    if (func_001F9740(var_17_49) == 0) {
        goto block_24;
    }
    temp_4_70 = temp_17_68->unk22;
    if (temp_4_70 == -1) {
        goto block_24;
    }
    if (temp_17_68->unk20 != 0) {
        goto block_24;
    }
    if (temp_17_68->unk38 != temp_4_70) {
        goto block_20;
    }
    temp_17_68->unk22 = -1;
    goto block_24;
block_20:
    temp_5_79 = temp_17_68->unk23;
    if (temp_5_79 == -1) {
        goto block_23;
    }
    if (func_00215E00(temp_4_70, temp_5_79, temp_17_68->unk3C, temp_17_68->unk3A) == 0) {
        goto block_24;
    }
block_23:
    func_001F96F8(7);
    temp_17_68->unk2C = 60.0f;
block_24:
    if (D_001516D0.unk1C < 0) {
        goto block_29;
    }
    if (D_001516D0.unk50 == 0) {
        goto block_28;
    }
    if ((u32) (D_001516D0.unk5A - 6) < 2U) {
        goto block_30;
    }
    D_001516D0.unk5A = 5U;
    goto block_29;
block_28:
    func_00215970(D_001516D0.unk1C, 0, 0x400);
    D_001516D0.unk1C = -1;
block_29:
block_30:
    if (D_001516D0.unk3E == 9) {
        goto block_68;
    }
    if (D_001516D0.unk34 == 0xFFFFFFFF) {
        goto block_68;
    }
    if (D_001516D0.unk40 & 0x8000) {
        goto block_68;
    }
    if (D_001516D0.unk3E & 0x8000) {
        goto block_68;
    }
    if (D_001516D0.unk78 & 0x8000) {
        goto block_68;
    }
    if (D_001516D0.unk76 & 0x8000) {
        goto block_68;
    }
    if (D_001516D0.unk20 == 3) {
        goto block_55;
    }
    if (D_001516D0.unk20 >= 4) {
        goto block_42;
    }
    if (D_001516D0.unk20 != 2) {
        goto block_40;
    }
    goto block_45;
block_40:
    goto block_68;
block_42:
    if (D_001516D0.unk20 == 4) {
        goto block_59;
    }
    if (D_001516D0.unk20 == 5) {
        goto block_65;
    }
    goto block_68;
block_45:
    temp_lo_178 = (s32) (D_001516D0.unk3A * (D_001516D0.unk28 - (D_001516D0.unk24 - D_001516D0.unk84))) / (s32) D_001516D0.unk28;
    if (temp_lo_178 <= 0) {
        goto block_52;
    }
    if (D_001516D0.unk76 != 4) {
        goto block_48;
    }
    if (D_001516D0.unk7C != 0) {
        goto block_49;
    }
block_48:
    if (D_001516D0.unk6C == 0) {
        goto block_52;
    }
block_49:
    temp_4_192 = D_001516D0.unk34;
    if (temp_4_192 == 0) {
        goto block_51;
    }
    goto block_53;
block_51:
block_52:
    D_001516D0.unk20 = 3;
    D_001516D0.unk3E = 5;
    goto block_68;
block_53:
    if (D_001516D0.unk3E == 9) {
        goto block_68;
    }
    D_001516D0.unk34 = 0xFFFFFFFF;
    func_0012E4C0(temp_4_192, 5, temp_lo_178, 0, 0, 0, &func_00216B68, ((u8 *)&D_001516D0 + 0x34));
    goto block_68;
block_55:
    if (D_001516D0.unk3E != 0) {
        goto block_68;
    }
    if (D_001516D0.unk7C != 0) {
        goto block_58;
    }
    if (D_001516D0.unk6C != 0) {
        goto block_68;
    }
block_58:
    func_00215B68(D_001516D0.unk22, (s16) D_001516D0.unk3C, D_001516D0.unk3A, D_001516D0.unk76);
    D_001516D0.unk20 = 4;
    D_001516D0.unk22 = -1;
    goto block_68;
block_59:
    if (D_001516D0.unk3E != 3) {
        goto block_68;
    }
    if (D_001516D0.unk84 < D_001516D0.unk28) {
        goto block_64;
    }
    if (D_001516D0.unk76 != 4) {
        goto block_64;
    }
    if (D_001516D0.unk7C != 0) {
        goto block_68;
    }
    if (D_001516D0.unk6C != 0) {
        goto block_69;
    }
block_64:
    func_0012ECA0(D_001516D0.unk34, 4, 3, D_001516D0.unk76);
    D_001516D0.unk20 = 5;
    D_001516D0.unk3E = 8;
    goto block_68;
block_65:
    if (D_001516D0.unk76 != 4) {
        goto block_67;
    }
    if (D_001516D0.unk7C != 0) {
        goto block_68;
    }
block_67:
    D_001516D0.unk20 = 0;
block_68:
block_69:
    temp_17_275 = ((u8 *)D_00151704 - (u8 *)0x34);
    func_002160A8(D_00151704);
    func_002160A8(D_00151704 + 0x38);
    func_002160A8(D_00151704 + 0x1C);
    if (temp_17_275->unkA != 0) {
        goto block_71;
    }
    temp_16_282 = temp_17_275->unk8;
    goto block_74;
block_71:
    if (func_0012EE08(1) != 0) {
        goto block_78;
    }
    temp_17_275->unkA = 0U;
    temp_17_275->unk8 = 0;
    return;
block_74:
    if (temp_16_282 != 2) {
        goto block_78;
    }
    temp_17_275->unk8 = 0;
    func_00216788(temp_17_275->unk14, temp_17_275->unkC, temp_17_275->unk10);
    if (temp_17_275->unk8 != 0) {
        goto block_77;
    }
    temp_17_275->unk8 = temp_16_282;
block_77:
block_78:
    return;
}
#endif /* NON_MATCHING */
