/*
STATE: C_EXACT
SYMBOL: FUN_0020d460
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `DrawMobys` starts here; this unit covers only its beginning. */


#include "types.h"
extern s32 D_0015FF14;
extern u8 D_001E8400[];
extern s32 D_0018A2D8[];
extern s32 DebugPrint();
extern s32 FUN_0020d1f0();
extern void func_0020D278();
extern s32 FUN_0020d3b0();
extern s32 func_00211808();
void FUN_0020d460(void) {
    register s32 flag __asm__("v1");
    s32 *new_var;

    func_0020D278();
    flag = D_0018A2D8[0];
    if (flag != 0) {
        FUN_0020d1f0();
        new_var = (s32 *)0x160F00;
        D_0015FF14 = func_00211808(*(s32 *)0x15FF18, *(s32 *)0x15FF14, -1, 1);
        if (*new_var > *(s32 *)0x160F08) {
            DebugPrint(D_001E8400);
        }
    }
    FUN_0020d3b0();
}

extern void func_0020D460(void) __attribute__((alias("FUN_0020d460")));
