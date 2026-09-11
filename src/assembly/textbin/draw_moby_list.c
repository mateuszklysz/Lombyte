/*
STATE: C_NON_MATCHING
SYMBOL: DrawMobyList
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `DrawMobyList`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/draw_moby_list/FUN_0020d330.s", FUN_0020d330);
#else
#include "types.h"
extern s32 D_0015FF14;
extern s32 func_00118A80();
extern s32 func_0020D218();
extern s32 func_0020D248();
extern s32 func_00211808();
extern s32 func_00233980();
void FUN_0020d330(s32 arg0, s32 arg1) {
    func_00233980(0x47, 0x5360B);
    func_00118A80(0);
    func_0020D248();
    D_0015FF14 = func_00211808(arg0, D_0015FF14, arg1, 0);
    func_0020D218();
    D_0015FF14 -= 0x10;
}
#endif /* NON_MATCHING */
