/*
STATE: C_NON_MATCHING
SYMBOL: ParseSpaceSceneChunk__Fi
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `ParseSpaceSceneChunk__Fi` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002049f0/FUN_002049f0.s", FUN_002049f0);
#else
#include "rnc/assembly_textbin_fun_002049f0_types.h"
#include "types.h"




extern u32 D_00160F0C[];
extern struct M2c_D_0018CB20 D_0018CB20;
extern u32 D_001940C8[];
extern s32 func_00204790();
void FUN_002049f0(s32 arg0) {
    struct M2c_temp_4_11 *temp_4_11;

    temp_4_11 = ((u8 *)&D_0018CB20 + (arg0 * 4));
    D_0018CB20.unk5C = (s32) temp_4_11->unk60;
    func_00204790(temp_4_11);
    D_0018CB20.unk5C = (s32) (D_001940C8[0] + D_00160F0C[0]);
}
#endif /* NON_MATCHING */
