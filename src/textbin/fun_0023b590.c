/*
STATE: C_EXACT
SYMBOL: FUN_0023b590
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc2.95.2 cc1 + Ps2EeAs (cc_sn_padless); -mno-split-addresses
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `startDisplay__Fi` starts here; this unit covers only its beginning. */


#include "types.h"

/* ROLE: recovered function `startDisplay__Fi` starts here; this unit covers
 * only its beginning (recovered_names match=fragment). */

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
