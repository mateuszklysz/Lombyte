/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 91.6364%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001eb740/FUN_001eb740.s", FUN_001eb740);
#else
#include "rnc/assembly_textbin_fun_001eb740_types.h"
#include "types.h"


extern u8 D_0013E550[];
extern u32 D_0015F5B4[];
s32 FUN_001eb740(s32 arg0, s32 arg1) {
    s32 var_2_18;
    struct M2c_temp_4_15 *temp_4_15;

    if ((arg0 < 0) || ((temp_4_15 = (arg0 * 0x70) + D_0013E550, var_2_18 = 0, (temp_4_15->unk7E == (arg1 + D_0015F5B4[0]))) && (var_2_18 = 1, (((u32) (temp_4_15->unk74 - 1) < 2U) == 0)))) {
        var_2_18 = 0;
    }
    return var_2_18;
}
#endif /* NON_MATCHING */
