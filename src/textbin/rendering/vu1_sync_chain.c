#include "types.h"
extern s32 D_00160EE0;
extern char D_001E89E0[];
extern void SpinWait(s32);
extern void DebugPrint(char *, ...);
extern void FUN_001f21c0(void);
void FUN_002337b0(s32 mask) {
    s32 i;

    for (i = 0; D_00160EE0 & mask; i++) {
        SpinWait(0x400);
        if (i > 100000) {
            DebugPrint(D_001E89E0);
            FUN_001f21c0();
            break;
        }
    }
}

extern __typeof__(FUN_002337b0) func_002337B0 __attribute__((alias("FUN_002337b0")));
