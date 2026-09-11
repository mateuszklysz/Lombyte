/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020cca8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020cca8/FUN_0020cca8.s", FUN_0020cca8);
#else
#include "rnc/assembly_textbin_fun_0020cca8_types.h"
#include "types.h"


extern s32 func_001F9A10();
extern s32 func_001F9A68();
extern s32 func_001FA298();
extern s32 func_001FA378();
extern s32 func_00210850();
void FUN_0020cca8(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
u8 sp_slot[0xA0];    s32 sp40;
    f32 temp_f20_19;
    s32 temp_16_22;

    sp40 = arg1;
    temp_f20_19 = arg0->unk2C * 0.0009765625f;
    func_00210850(1, &sp40, arg2);
    temp_16_22 = arg2 + 0x30;
    func_001F9A68(temp_16_22, temp_16_22, temp_f20_19);
    func_001FA298(sp_slot, ((u8 *)arg0 + (0xC0)));
    func_001FA378(arg2, sp_slot, arg2);
    func_001F9A10(temp_16_22, temp_16_22, ((u8 *)arg0 + (0x10)));
}
#endif /* NON_MATCHING */
