/* ROLE: recovered function `cpy2area__FPUciT0iT0iT0i` (movie/read.cpp) starts here; recovered extent unknown. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 49.1842%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023b810/FUN_0023b810.s", FUN_0023b810);
#else
#include "types.h"
extern s32 func_00115248();
s32 FUN_0023b810(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_20_29;
    s32 temp_7_20;
    s32 var_2_26;

    temp_7_20 = (arg1 + arg3) < (arg5 + arg7);
    var_2_26 = 0;
    if (temp_7_20 == 0) {
        temp_20_29 = arg1 - arg5;
        if (arg5 >= arg1) {
            func_00115248(arg0, arg4, arg1, temp_7_20);
            func_00115248(arg2, arg4 + arg1, arg5 - arg1);
            func_00115248((arg2 + arg5) - arg1, arg6, arg7);
        } else if (arg7 >= temp_20_29) {
            func_00115248(arg0, arg4, arg5, temp_7_20);
            func_00115248(arg0 + arg5, arg6, temp_20_29);
            func_00115248(arg2, (arg6 + arg1) - arg5, arg7 - temp_20_29);
        } else {
            func_00115248(arg0, arg4, arg5, temp_7_20);
            func_00115248(arg0 + arg5, arg6, arg7);
        }
        var_2_26 = arg5 + arg7;
    }
    return var_2_26;
}
#endif /* NON_MATCHING */
