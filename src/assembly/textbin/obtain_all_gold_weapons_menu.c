/* ROLE: recovered whole function `ObtainAllGoldWeaponsMenu` (game/pause.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 43.3809%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/obtain_all_gold_weapons_menu/FUN_00222948.s", FUN_00222948);
#else
#include "rnc/assembly_textbin_fun_00222948_types.h"
#include "types.h"


extern s32 func_001153FC();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F7580();
extern s32 func_001FDD10();
extern s32 func_001FF960();
extern s32 func_001FFC30();
s32 FUN_00222948(struct M2c_arg0 *arg0) {    u16 spE;
u8 sp_slot[0x70];    s32 sp20;
    u16 sp22;
    u16 sp26;
    s16 sp30;

    func_001153FC(&sp20, 0, 0x18);
    sp30 = 0x10;
    sp26 = arg0->unk20;
    sp22 = arg0->unk24;
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x27($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, 0x20($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x2f($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, 0x28($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $a1, 0x37($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldr $a1, 0x30($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, ($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0xf($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, 0x8($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a1, 0x17($sp_slot)  */
    func_001F4280(0, 0 /*  unknown instruction: sdr $a1, 0x10($sp_slot)  */);
    func_001FFC30(func_001FF960(0xE99A, 6), 4, 0xC, 0x10, 0x10, 0x80);
    func_001F7580(sp_slot, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x5182, 0x18, 4), -1);
    func_001FFC30(func_001FF960(0xE99A, 6, (s16) spE + 0x10), 4, (s16) spE + 0x18, 0x10, 0x10, 0x80);
    func_001F7580(sp_slot, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x5183), -1);
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
