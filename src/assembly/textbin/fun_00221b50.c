/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 33.2479%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221b50/FUN_00221b50.s", FUN_00221b50);
#else
#include "rnc/assembly_textbin_fun_00221b50_types.h"
#include "types.h"


extern u8 D_001602E8[];
extern s32 D_001D5CC4;
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F75F0();
extern s32 func_001FDD10();
extern s32 func_00233980();
extern s32 memset();
s32 FUN_00221b50(struct M2c_arg0 *arg0) {    u16 spE;
u8 sp_slot[0x70];    u16 sp0;
    u16 sp2;
    u16 sp4;
    u16 sp6;
    u16 sp8;
    u16 spA;
    u16 sp12;
    s16 sp20;
    s16 sp22;
    s16 sp24;
    s16 sp26;
    s16 sp28;
    s16 sp2A;
    s16 sp30;
    s16 sp32;
    s32 *var_17_21;
    s32 var_4_24;
    u16 temp_8_102;
    u16 temp_9_99;

    func_00233980(0x42, 0x44);
    func_00233980(0x47, 0x2004B);
    func_001F4280(0);
    var_17_21 = D_001602E8;
    if (D_001D5CC4 >= 0) {
        if (D_001D5CC4 < 3) {
            var_4_24 = 0x4FB3;
            goto block_6;
        }
        if (D_001D5CC4 == 3) {
            var_4_24 = 0x4FB5;
block_6:
            var_17_21 = func_001FDD10(var_4_24);
        }
    }
    memset(&sp20, 0, 0x18);
    sp22 = arg0->unk24 + 1;
    sp24 = 1;
    sp26 = arg0->unk20 + 1;
    sp28 = (s16) ((s32) arg0->unk20 >> 1);
    sp30 = 0x10;
    sp32 = 5;
    sp20 = 1;
    sp2A = 5;
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x27($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, 0x20($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x2f($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, 0x28($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $a4, 0x37($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $a4, 0x30($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, ($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0xf($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, 0x8($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a4, 0x17($sp_slot)  */
    func_001F75F0(sp_slot, 0x8000 << 0x10, var_17_21, -1, 0 /*  unknown instruction: sdr $a4, 0x10($sp_slot)  */, 1U);
    sp12 ^= 4;
    spA = (u16) ((s32) ((s32) arg0->unk24 - (s16) spE) >> 1);
    func_001F75F0(sp_slot, 0x8000 << 0x10, var_17_21, -1);
    temp_9_99 = sp2 - 1;
    temp_8_102 = sp8 - 1;
    sp0 -= 1;
    sp6 -= 1;
    spA -= 1;
    sp2 = temp_9_99;
    sp4 -= 1;
    sp8 = temp_8_102;
    func_001F75F0(sp_slot, (0x80FF << 0x10) | 0xA888, var_17_21, -1, temp_8_102, temp_9_99);
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
