/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 74.6897%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff288/FUN_001ff288.s", FUN_001ff288);
#else
#include "rnc/assembly_textbin_fun_001ff288_types.h"
#include "types.h"


extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FF260();
s32 FUN_001ff288(s32 arg0) {
    s32 var_2_22;

    if (D_0019A3E8.unk10 == 0) {
        func_001FF260();
    }
    var_2_22 = 0;
    if ((D_0019A3E8.unk14 - D_0019A3E8.unk10) >= arg0) {
        var_2_22 = D_0019A3E8.unk10;
        D_0019A3E8.unk10 = (s32) (D_0019A3E8.unk10 + ((arg0 + 0xF) & 0xFFFFFFF0));
    }
    return var_2_22;
}
#endif /* NON_MATCHING */
