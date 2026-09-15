/*
STATE: C_NON_MATCHING
SYMBOL: VU1_addDataRef__FPvi
SCORE: code=50.789474 functions=50.789474 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233830/FUN_00233830.s", FUN_00233830);
#else
#include "rnc/assembly_textbin_fun_00233830_types.h"
#include "types.h"


extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00233830(s32 arg0, s32 arg1) {
    D_00160F00->unk0 = (s32) (arg1 | 0x30000000);
    D_00160F00->unk4 = arg0;
    do {
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0;
    } while (0);
    D_00160F00 += 1;
}
#endif /* NON_MATCHING */
