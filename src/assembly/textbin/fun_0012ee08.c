/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 84.2564%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012ee08/FUN_0012ee08.s", FUN_0012ee08);
#else
#include "types.h"
extern s32 D_00137B00;
extern s32 D_0015EC8C;
extern s32 D_0015EC98;
extern s32 func_00118A80();
extern s32 func_00120C30();
extern s32 func_0012DC80();
s32 FUN_0012ee08(s32 arg0) {
    s32 temp_2_21;
    s32 temp_2_39;

    if (D_0015EC8C == 0) {
        return func_00120C30();
    }
    func_00118A80(0);
    temp_2_21 = D_00137B00 == 0;
    D_0015EC98 = temp_2_21;
    if (temp_2_21 != 1) {
        if (arg0 == 1) {
            return 1;
        }
        if (temp_2_21 == 0) {
            do {
                func_0012DC80();
                func_00118A80(0);
                temp_2_39 = D_00137B00 == 0;
                D_0015EC98 = temp_2_39;
            } while (temp_2_39 == 0);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
#endif /* NON_MATCHING */
