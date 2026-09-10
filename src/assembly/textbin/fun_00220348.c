/* ROLE: recovered function `DrawCheckingMemoryCardDataMenu` (game/pause.cpp, 0xce8 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 52.7330%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00220348/FUN_00220348.s", FUN_00220348);
#else
#include "rnc/assembly_textbin_fun_00220348_types.h"
#include "types.h"














extern struct M2c_D_0013D290 D_0013D290;
extern u8 D_0013D388[];
extern u8 D_0013D4C0[];
extern struct M2c_D_00151780 D_00151780;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 D_001D5BF4;
extern s32 func_001153FC();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F5450();
extern s32 func_001F75F0();
extern s32 func_001FDD10();
extern s32 func_00204CF0();
s32 FUN_00220348(struct M2c_arg0 *arg0, s32 *arg1, s32 *arg2) {    u16 sp1E;
u8 sp_slot[0x90];    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 sp16;
    u16 sp18;
    u16 sp1A;
    u16 sp22;
    s16 sp30;
    s16 sp32;
    s16 sp34;
    s16 sp36;
    s16 sp38;
    s16 sp3A;
    s16 sp40;
    s16 sp42;
    struct M2c_var_5_0 *var_5_0;
    s32 temp_17_43;
    s32 temp_2_14;
    s32 temp_3_11;
    s32 var_2_22;
    s32 var_4_172;
    s32 var_4_37;
    u16 temp_8_109;
    u16 temp_9_106;
    struct M2c_var_6_0 *var_6_0;

    var_5_0 = arg1;
    var_6_0 = arg2;
    temp_3_11 = arg0->unk44;
    temp_2_14 = arg0->unk34;
    if (temp_3_11 < 2) {
        if (temp_2_14 & 0x100) {
            var_2_22 = 2;
            if (D_0013D290.unk8 == 2) {
                if (D_0013D290.unkD4 < 3) {
                    var_2_22 = 2;
                    if (D_0013D290.unkDC >= 0) {
                        goto block_5;
                    }
                    /* Duplicate return node #19. Try simplifying control flow for better match */
                    return var_2_22;
                }
block_5:
                func_001F4280(0, &D_0013D290);
                var_4_37 = 0x4FB9;
                if (D_001D5BF0.unk128 != 0) {
                    var_4_37 = D_001D5BF0.unk12C;
                }
                temp_17_43 = func_001FDD10(var_4_37);
                func_001153FC(&sp30, 0, 0x18);
                sp32 = arg0->unk24 + 1;
                sp34 = 1;
                sp36 = arg0->unk20 + 1;
                sp38 = (s16) ((s32) arg0->unk20 >> 1);
                sp40 = 0x10;
                sp42 = 5;
                sp30 = 1;
                sp3A = 5;
                /* m2c-unknown:  unknown instruction: ldl $v0, 0x37($sp_slot)  */
                /* m2c-unknown:  unknown instruction: ldr $v0, 0x30($sp_slot)  */
                /* m2c-unknown:  unknown instruction: ldl $v1, 0x3f($sp_slot)  */
                /* m2c-unknown:  unknown instruction: ldr $v1, 0x38($sp_slot)  */
                /* m2c-unknown:  unknown instruction: ldl $a4, 0x47($sp_slot)  */
                /* m2c-unknown:  unknown instruction: ldr $a4, 0x40($sp_slot)  */
                /* m2c-unknown:  unknown instruction: sdl $v0, 0x17($sp_slot)  */
                /* m2c-unknown:  unknown instruction: sdr $v0, 0x10($sp_slot)  */
                /* m2c-unknown:  unknown instruction: sdl $v1, 0x1f($sp_slot)  */
                /* m2c-unknown:  unknown instruction: sdr $v1, 0x18($sp_slot)  */
                /* m2c-unknown:  unknown instruction: sdl $a4, 0x27($sp_slot)  */
                func_001F75F0(&sp10, 0x8000 << 0x10, temp_17_43, -1, 0 /*  unknown instruction: sdr $a4, 0x20($sp_slot)  */, 1U);
                sp1A = (u16) ((s32) ((s32) arg0->unk24 - sp1E) >> 1);
                sp22 ^= 4;
                func_001F75F0(&sp10, 0x8000 << 0x10, temp_17_43, -1);
                temp_9_106 = sp12 - 1;
                temp_8_109 = sp18 - 1;
                sp10 -= 1;
                sp16 -= 1;
                sp12 = temp_9_106;
                sp14 -= 1;
                sp18 = temp_8_109;
                sp1A -= 1;
                func_001F75F0(&sp10, (0x80FF << 0x10) | 0xA888, temp_17_43, -1, temp_8_109, temp_9_106);
                func_001F4398();
                return 2;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_2_22;
        }
        goto block_13;
    }
    if (temp_2_14 & 4) {
        var_6_0 = D_001D5BF4;
        var_5_0 = var_6_0->unk40->unk48 + (*(((u8 *)arg0 + (0x50 ))+ ((temp_3_11 >= 4) * 4)) * 0xA);
        if (var_5_0->unk4 == 0) {
            var_2_22 = 1;
            if (*(var_5_0->unk6 + D_0013D4C0) != 0) {
                goto block_11;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_2_22;
        }
block_11:
        if (var_5_0->unk4 == 1) {
            if (*(var_5_0->unk6 + D_0013D388) == 0) {
block_13:
                return 1;
            }
            goto block_14;
        }
        goto block_14;
    }
block_14:
    func_001F4280(0, var_5_0, var_6_0);
    if (arg0->unk44 >= 4) {
        var_4_172 = arg0->unk4C;
    } else {
        var_4_172 = arg0->unk48;
    }
    func_001F5450(0, 0, D_00151780.unk160, D_00151780.unk162, 0, 0, arg0->unk38, arg0->unk3C, (0x8080 << 0x10) | 0x8080, func_00204CF0(var_4_172));
    func_001F4398();
    var_2_22 = 0x10;
    return var_2_22;
}
#endif /* NON_MATCHING */
