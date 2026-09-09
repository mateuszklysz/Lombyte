/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 99.0857%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0011bbb8/FUN_0011bbb8.s", FUN_0011bbb8);
#else
#include "types.h"
extern u8 D_0012FBEC[];
extern u32 D_0012FC94[];
extern u32 D_0012FCA8[];
extern s32 func_001151B4();
extern s32 func_001153FC();
extern void B_00157FA8();
s32 FUN_0011bbb8(void) {
    s32 var_18_14;

    var_18_14 = 0;
    if ((func_001151B4(&B_00157FA8, D_0012FBEC, 4) != 0) && (func_001151B4(&B_00157FA8, D_0012FCA8[0], 4) != 0)) {
        var_18_14 = func_001151B4(D_0012FBEC, D_0012FCA8[0], 4) != 0;
    }
    return var_18_14;
}

s32 func_0011BC48(void) {
    D_0012FC94[0] = 0;
    func_001153FC(&B_00157FA8, 0, 4);
    return 0;
}
#endif /* NON_MATCHING */
