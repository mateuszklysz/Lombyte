/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 82.1333%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00208f28/FUN_00208f28.s", FUN_00208f28);
#else
#include "rnc/assembly_textbin_fun_00208f28_types.h"
#include "types.h"


extern struct M2c_D_0013D290 D_0013D290;
extern s32 D_0015EEB0;
extern s32 D_0015EEB4;
extern s32 func_001FBAB8();
void FUN_00208f28(void) {
    if ((D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0)) {
        if (D_0013D290.unkE4 != 0) {
            func_001FBAB8(3, 0);
            D_0015EEB0 = 0x15;
            D_0015EEB4 |= 0x40;
        } else {
            D_0015EEB0 = 1;
        }
    }
}
#endif /* NON_MATCHING */
