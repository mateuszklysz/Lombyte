/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00233938
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233938/FUN_00233938.s", FUN_00233938);
#else
#include "rnc/assembly_textbin_fun_00233938_types.h"
#include "types.h"


extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00233938(s32 arg0) {
    D_00160F00->unk0 = 0x10000000;
    do {
        D_00160F00->unk4 = 0;
        D_00160F00->unk8 = 0;
    } while (0);
    D_00160F00->unkC = arg0;
    D_00160F00 += 0x10;
}
#endif /* NON_MATCHING */
