/*
STATE: C_NON_MATCHING
SYMBOL: Help_FindIndex
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `Help_FindIndex` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 84.4815%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fdca0/FUN_001fdca0.s", FUN_001fdca0);
#else
#include "rnc/assembly_textbin_fun_001fdca0_types.h"
#include "types.h"




extern struct M2c_D_0015F6A0 *D_0015F6A0;
extern struct M2c_D_001996D0 D_001996D0;
s32 FUN_001fdca0(s32 arg0) {
    s32 var_5_11;
    s32 var_6_6;

    var_6_6 = -1;
    var_5_11 = 0;
    if (D_001996D0.unk2C > 0) {
        if (D_0015F6A0->unk4 == arg0) {
            var_6_6 = 0;
        } else {
loop_4:
            var_5_11 += 1;
            if (var_5_11 < D_001996D0.unk2C) {
                if (*(s32 *)((u8 *)((var_5_11 * 0x10) + D_0015F6A0) + 0x4) == arg0) {
                    var_6_6 = var_5_11;
                } else {
                    goto loop_4;
                }
            }
        }
    }
    return var_6_6;
}
#endif /* NON_MATCHING */
