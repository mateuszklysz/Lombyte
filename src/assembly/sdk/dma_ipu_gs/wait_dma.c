/*
STATE: C_NON_MATCHING
SYMBOL: WaitDma
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit WaitDma; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/wait_dma/WaitDma.s", WaitDma);
#else
#include "types.h"
extern u8 D_001533E0[];
extern u8 D_FFFFFF[];
extern s32 sceDmaPause();
extern s32 scePrintf();
void WaitDma(s32 *arg0) {
    s32 *var_17_14;
    if (*arg0 & 0x100) {
        var_17_14 = D_FFFFFF;
        do {
            if ((s32) var_17_14 < 0) {
                scePrintf(D_001533E0);
                sceDmaPause(arg0);
            }
            var_17_14 -= 1;
        } while (*arg0 & 0x100);
    }
}
#endif /* NON_MATCHING */
