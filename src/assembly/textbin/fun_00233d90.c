/*
STATE: C_NON_MATCHING
SYMBOL: DMAC_VIF1_Disable__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `DMAC_VIF1_Disable__Fv` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233d90/FUN_00233d90.s", FUN_00233d90);
#else
#include "types.h"
extern s32 D_00160F18;
extern s32 D_00160F1C;
extern s32 func_001187D0();
extern s32 func_001190F8();
void FUN_00233d90(void) {
    if (*(s32 *)0x1000E010 & 0x20000) {
        *(volatile u32 *)0x1000E010 = 0x20000;
    }
    func_001187D0(1, D_00160F18);
    func_001187D0(0xF, D_00160F1C);
    func_001190F8(1);
    D_00160F18 = 0;
    D_00160F1C = 0;
}
#endif /* NON_MATCHING */
