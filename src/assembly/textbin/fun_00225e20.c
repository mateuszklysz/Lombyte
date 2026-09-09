/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 77.2105%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225e20/FUN_00225e20.s", FUN_00225e20);
#else
#include "rnc/assembly_textbin_fun_00225e20_types.h"
#include "types.h"


extern u8 D_001D60B8[];
s32 FUN_00225e20(s32 arg0) {
    s32 var_6_6;
    struct M2c_var_5_9 *var_5_9;

    var_6_6 = 0;
    var_5_9 = D_001D60B8 + 4;
loop_1:
    var_6_6 += 1;
    if (*(s32 *)((u8 *)var_5_9 - 0x4) == arg0) {
        var_5_9->unk0 = (s32) (var_5_9->unk0 & ~4);
        return 0;
    }
    var_5_9 += 8;
    if (var_6_6 >= 5) {
        return 1;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
