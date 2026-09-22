#include "types.h"

extern volatile s32 D_001611E0[];
extern volatile s32 D_001611E4[];
extern s32 sceGsSyncV();

void FUN_0023b590(s32 arg0) {
    do {

    } while (sceGsSyncV(0) == arg0);
    D_001611E0[0] = 1;
    D_001611E4[0] = 0;
}

extern __typeof__(FUN_0023b590) func_0023B590 __attribute__((alias("FUN_0023b590")));
