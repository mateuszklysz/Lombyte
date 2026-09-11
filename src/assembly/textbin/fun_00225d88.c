/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00225d88
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 65.4000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225d88/FUN_00225d88.s", FUN_00225d88);
#else
#include "rnc/assembly_textbin_fun_00225d88_types.h"
#include "types.h"


extern u8 D_001D60B8[];
s32 FUN_00225d88(s32 arg0) {
    struct M2c_var_3_7 *var_3_7;
    s32 var_5_8;

    var_3_7 = D_001D60B8;
    var_5_8 = 0;
loop_1:
    var_5_8 += 1;
    if (var_3_7->unk0 == arg0) {
        return (var_3_7->unk4 & 1) ? 0x4F000 : 0x11800;
    }
    var_3_7 += 8;
    if (var_5_8 >= 5) {
        return -1;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
