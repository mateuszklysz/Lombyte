/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00233c90
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233c90/FUN_00233c90.s", FUN_00233c90);
#else
#include "rnc/assembly_textbin_fun_00233c90_types.h"
#include "types.h"


extern u8 D_0013CF10[];
extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00233c90(void) {
    D_00160F00->unk0 = 0x3000000B;
    D_00160F00->unk4 = D_0013CF10;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x5000000B;
    D_00160F00 += 0x10;
}
#endif /* NON_MATCHING */
