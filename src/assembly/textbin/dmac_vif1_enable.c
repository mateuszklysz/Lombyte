/*
STATE: C_NON_MATCHING
SYMBOL: DMAC_VIF1_Enable__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `DMAC_VIF1_Enable__Fv`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/dmac_vif1_enable/FUN_00233d00.s", FUN_00233d00);
#else
#include "types.h"
extern s32 D_00160F18;
extern s32 D_00160F1C;
extern s32 func_001187B0();
extern s32 func_00119160();
extern void func_00233E00();
extern void func_00233F00();
void FUN_00233d00(void) {
    if (D_00160F18 == 0) {
        if (D_00160F1C == 0) {
            if (!(*(s32 *)0x1000E010 & 0x20000)) {
                *(volatile u32 *)0x1000E010 = 0x20000;
            }
            D_00160F18 = func_001187B0(1, &func_00233E00, 0);
            D_00160F1C = func_001187B0(0xF, &func_00233F00, 0);
            func_00119160(1);
        }
    }
}
#endif /* NON_MATCHING */
