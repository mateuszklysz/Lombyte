/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021b6d8
SCORE: code=39.1346 functions=39.1346 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021b6d8/FUN_0021b6d8.s", FUN_0021b6d8);
#else
#include "types.h"
extern s32 D_001601B4;
extern s32 func_001F96F8();
extern s32 func_001FA6E0(s32, s32, f32);
void FUN_0021b6d8(s32 arg0, s32 arg1, s32 arg2) {
    f32 var_f12_42;
    s32 temp_16_30;
    s32 temp_19_10;

    temp_19_10 = (arg0 > -1) ? arg0 : 0;
    if (func_001F96F8(D_001601B4) >= temp_19_10) {
        temp_16_30 = func_001F96F8(D_001601B4);
        var_f12_42 = 1.0f - ((f32) (temp_16_30 - temp_19_10) / (f32) func_001F96F8(D_001601B4));
    } else {
        var_f12_42 = 1.0f;
    }
    func_001FA6E0((~arg1 != 0) ? arg1 : 0x80FFA888, (~arg2 != 0) ? arg2 : 0x8020FFFF, var_f12_42);
}
#endif /* NON_MATCHING */
