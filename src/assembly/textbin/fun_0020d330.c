/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 55.6562%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020d330/FUN_0020d330.s", FUN_0020d330);
#else
#include "types.h"
extern s32 D_0015FF14;
extern s32 func_00118A80();
extern s32 func_0020D218();
extern s32 func_0020D248();
extern s32 func_00211808();
extern s32 func_00233980();
void FUN_0020d330(s32 arg0, s32 arg1) {
    func_00233980(0x47, 0x5360B);
    func_00118A80(0);
    func_0020D248();
    D_0015FF14 = func_00211808(arg0, D_0015FF14, arg1, 0);
    func_0020D218();
    D_0015FF14 -= 0x10;
}
#endif /* NON_MATCHING */
