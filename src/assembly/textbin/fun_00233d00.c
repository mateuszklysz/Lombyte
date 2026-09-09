/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 61.5278%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233d00/FUN_00233d00.s", FUN_00233d00);
#else
#include "types.h"
extern s32 D_00160F18;
extern s32 D_00160F1C;
extern s32 func_001187B0();
extern s32 func_00119160();
extern void func_00233E00();
extern void func_00233F00();
void FUN_00233d00(void) {
    if (D_00160F18 == 0) {
        if (D_00160F1C == 0) {
            if (!(*(s32 *)0x1000E010 & 0x20000)) {
                *(volatile u32 *)0x1000E010 = 0x20000;
            }
            D_00160F18 = func_001187B0(1, &func_00233E00, 0);
            D_00160F1C = func_001187B0(0xF, &func_00233F00, 0);
            func_00119160(1);
        }
    }
}
#endif /* NON_MATCHING */
