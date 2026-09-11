/*
STATE: C_NON_MATCHING
SYMBOL: DrawQuitGameMenu
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `DrawQuitGameMenu` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e890/FUN_0021e890.s", FUN_0021e890);
#else
#include "rnc/assembly_textbin_fun_0021e890_types.h"
#include "types.h"


extern s32 func_001153FC();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6250();
extern s32 func_001F6530();
extern s32 func_001F6AF0();
extern s32 func_001F7580();
extern s32 func_001FDD10();
extern s32 func_00233980();
s32 FUN_0021e890(struct M2c_arg0 *arg0) {
u8 sp_slot[0xA0];    s32 temp_16_71;
    s32 temp_17_20;
    s32 temp_17_83;
    s32 temp_18_27;
    s32 temp_2_75;
    u32 temp_16_18;

    temp_16_18 = arg0->unk20;
    temp_17_20 = arg0->unk24;
    func_001153FC(sp_slot, 0, 0x18);
    temp_18_27 = (s32) (temp_16_18 + (temp_16_18 >> 0x1F)) >> 1;
    func_001F4280(0, 6, 0x10, 1, (s16) temp_17_20, 4, temp_16_18 - 4, (s16) temp_18_27, 6, (s16) temp_16_18, (s16) temp_17_20, 0x10, 1);
    func_00233980(0x47, 0x2004B);
    func_001F7580(sp_slot, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4F6D), -1);
    func_001F6AF0(temp_18_27, temp_17_20 - 0x40, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4F3F), -1);
    temp_16_71 = func_001F6250(func_001FDD10(0x524B), -1);
    temp_2_75 = func_001F6250(func_001FDD10(0x524F), -1);
    temp_17_83 = (s32) (arg0->unk20 - ((temp_2_75 >= temp_16_71) ? temp_2_75 : temp_16_71)) >> 1;
    func_001F6530(temp_17_83, temp_17_20 - 0x28, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x524B), -1);
    func_001F6530(temp_17_83, temp_17_20 - 0x14, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x524F), -1);
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
