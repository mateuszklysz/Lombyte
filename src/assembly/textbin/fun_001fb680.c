/*
STATE: C_NON_MATCHING
SYMBOL: AA_BlurPass__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `AA_BlurPass__Fv` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb680/FUN_001fb680.s", FUN_001fb680);
#else
#include "rnc/assembly_textbin_fun_001fb680_types.h"
#include "types.h"


extern u8 D_00151900[];
extern struct M2c_D_00160F00 *D_00160F00;
void FUN_001fb680(void) {
    D_00160F00->unk0 = 0x30000026;
    D_00160F00->unk4 = D_00151900;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000026;
    D_00160F00 += 0x10;
}
#endif /* NON_MATCHING */
