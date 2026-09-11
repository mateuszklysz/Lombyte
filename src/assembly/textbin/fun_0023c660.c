/*
STATE: C_NON_MATCHING
SYMBOL: viBufFlush__FP5ViBuf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `viBufFlush__FP5ViBuf` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023c660/FUN_0023c660.s", FUN_0023c660);
#else
#include "rnc/assembly_textbin_fun_0023c660_types.h"
#include "types.h"


extern s32 func_00118990();
extern s32 func_001189B0();
void FUN_0023c660(struct M2c_arg0 *arg0) {
    s32 temp_3_11;
    s32 temp_5_14;

    func_001189B0(arg0->unk40);
    temp_3_11 = arg0->unk14;
    temp_5_14 = temp_3_11 + 0x7FF;
    arg0->unk14 = (s32) (((s32) ((temp_5_14 > -1) ? temp_5_14 : (temp_3_11 + 0xFFE)) >> 0xB) << 0xB);
    func_00118990(arg0->unk40, temp_5_14);
}
#endif /* NON_MATCHING */
