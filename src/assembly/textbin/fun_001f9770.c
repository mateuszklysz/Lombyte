/* ROLE: recovered function `FastDecTimer__FRs` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 45.4167%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9770/FUN_001f9770.s", FUN_001f9770);
#else
#include "types.h"

s32 FUN_001f9770(s16 *arg0) {
    s16 temp_1_9;
    s32 var_2_6;

    var_2_6 = 1;
    if (*arg0 != 0) {
        temp_1_9 = 0 /*  unknown instruction: pmaxw $at, $at, $v0  */ - 1;
        var_2_6 = 0;
        *arg0 = temp_1_9;
        if (temp_1_9 <= 0) {
            var_2_6 = 2;
        }
    }
    return var_2_6;
}
#endif /* NON_MATCHING */
