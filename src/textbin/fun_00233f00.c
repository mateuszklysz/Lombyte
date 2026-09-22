#include "types.h"
extern u8 D_001E8A08[];
extern u8 D_001E8A20[];
extern u8 D_001E8A38[];
extern s32 DebugPrint();
void FUN_00233f00(void) {
    volatile u32 *p1 = (volatile u32 *)0x10009000;
    volatile u32 *p2 = (volatile u32 *)0x10009030;
    s32 v1 = *p1;
    s32 v2 = *p2;

    DebugPrint(D_001E8A08);
    DebugPrint(D_001E8A20, v1, v2);
    DebugPrint(D_001E8A38);
    for (;;) {
    }
}

extern __typeof__(FUN_00233f00) func_00233F00 __attribute__((alias("FUN_00233f00")));
