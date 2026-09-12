/*
STATE: C_NON_MATCHING
SYMBOL: InitializeRenderState
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `music_Pause__Fi` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/gs/initialize_render_state/InitializeRenderState.s", InitializeRenderState);
#else
#include "rnc/assembly_gs_initialize_render_state_types.h"
#include "types.h"


extern struct M2c_D_001516D0 D_001516D0;
void InitializeRenderState(s32 arg0) {
    if (arg0 != 0) {
        D_001516D0.unk5C = -0x8000;
        D_001516D0.unk5E = 0;
    }
    D_001516D0.unk78 = -0x8000;
    D_001516D0.unk7A = 0;
    D_001516D0.unk40 = -0x8000;
    D_001516D0.unk42 = 0;
}
#endif /* NON_MATCHING */
