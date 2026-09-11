/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021b6d8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021b6d8/FUN_0021b6d8.s", FUN_0021b6d8);
#else
#include "types.h"
extern u32 D_001601B4[];
extern s32 func_001F96F8();
extern s32 func_001FA6E0();
void FUN_0021b6d8(s32 arg0, s32 arg1, s32 arg2) {
    f32 var_f12_44;
    s32 temp_16_32;
    s32 temp_19_12;

    temp_19_12 = (arg0 > -1) ? arg0 : 0;
    if (func_001F96F8(D_001601B4[0]) >= temp_19_12) {
        temp_16_32 = func_001F96F8(D_001601B4[0]);
        var_f12_44 = 1.0f - ((f32) (temp_16_32 - temp_19_12) / (f32) func_001F96F8(D_001601B4[0]));
    } else {
        var_f12_44 = 1.0f;
    }
    func_001FA6E0((~arg1 != 0) ? arg1 : 0x80FFA888, (~arg2 != 0) ? arg2 : 0x8020FFFF, var_f12_44);
}
#endif /* NON_MATCHING */
