/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f79a8
SCORE: code=66.9118 functions=66.9118 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f79a8/FUN_001f79a8.s", FUN_001f79a8);
#else
#include "types.h"
extern s32 D_0015F348;
extern s32 D_0015F478;
extern s32 func_001F76A0();
extern s32 func_001F89A4();
extern s32 func_001F8FF0();
extern s32 func_00233980();
void FUN_001f79a8(void) {
    if (D_0015F478 != 0) {
        func_00233980(8, 5);
        func_00233980(0x14, 0x61);
        func_00233980(0x47, 0x513F1);
        func_00233980(0x4A, 1);
        func_001F8FF0();
        D_0015F348 = 0xBD23D70A;
        func_001F76A0();
        func_001F89A4();
        D_0015F348 = 0;
        func_00233980(0x4A, 0);
    }
}
#endif /* NON_MATCHING */
