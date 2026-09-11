/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0023a318
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023a318/FUN_0023a318.s", FUN_0023a318);
#else
#include "rnc/assembly_textbin_fun_0023a318_types.h"
#include "types.h"




extern u8 D_00160ED0[];
extern s32 func_001F9A28();
extern s32 func_001F9AF0();
extern s32 func_0020CD48();
void FUN_0023a318(struct M2c_arg0 *arg0) {
u8 sp_slot[0x60];    s32 sp10;
    s32 sp20;
    struct M2c_temp_16_12 *temp_16_12;

    temp_16_12 = arg0->unk78;
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x7($a6)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, ($a6)  */
    /* m2c-unknown:  unknown instruction: ldl $a4, 0xf($a6)  */
    /* m2c-unknown:  unknown instruction: ldr $a4, 0x8($a6)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0x27($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, 0x20($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a4, 0x2f($sp_slot)  */
    func_0020CD48(4, &sp20, temp_16_12, 0 /*  unknown instruction: sdr $a4, 0x28($sp_slot)  */, D_00160ED0);
    func_001F9A28(sp_slot, ((u8 *)temp_16_12 + (0x10)), temp_16_12);
    func_001F9A28(&sp10, ((u8 *)temp_16_12 + (0x20)), temp_16_12);
    temp_16_12->unk40 = func_001F9AF0(sp_slot);
    temp_16_12->unk44 = func_001F9AF0(&sp10);
}
#endif /* NON_MATCHING */
