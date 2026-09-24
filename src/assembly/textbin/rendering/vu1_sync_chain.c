#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/vu1_sync_chain/FUN_002337b0.s", FUN_002337b0);
#else
#include "types.h"
extern s32 D_00160EE0;
extern u8 D_001E89E0[];
extern void DebugPrint();
extern void SpinWait();
extern void func_001F21C0();
void vu1_sync_chain(s32 arg0) __asm__("FUN_002337b0");

void vu1_sync_chain(s32 arg0) {
    s32 var_17_12;

    var_17_12 = 0;
loop_1:
    if (*(s32 *)0x160EE0 & arg0) {
        SpinWait(0x400);
        var_17_12 += 1;
        if (var_17_12 > 0x186A0) {
            DebugPrint(D_001E89E0);
            func_001F21C0();
        } else {
            goto loop_1;
        }
    }
}
#endif /* NON_MATCHING */
