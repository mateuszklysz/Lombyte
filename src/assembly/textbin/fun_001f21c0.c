/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 69.7949%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f21c0/FUN_001f21c0.s", FUN_001f21c0);
#else
#include "types.h"
extern s32 D_0015ED80;
extern s32 D_0015EE78;
extern s32 D_0015F618;
extern s32 D_00160EE0;
extern s32 D_00160F00;
extern s32 func_001204B8();
extern s32 func_00121878();
extern s32 func_00123008();
extern s32 func_001F34E8();
extern s32 func_0020B418();
extern s32 func_002335D0();
extern s32 func_00233D00();
extern s32 func_00233D90();
void FUN_001f21c0(void) {
    s32 temp_16_33;

    D_0015F618 = 1;
    D_00160EE0 = 0;
    func_00233D90();
    func_00123008(1);
    func_0020B418();
    func_00121878(0, 1, (D_0015ED80 == 0) ? 2 : 3, 0);
    func_001204B8();
    func_002335D0();
    temp_16_33 = D_0015EE78;
    D_00160F00 = 0;
    func_001F34E8();
    D_0015EE78 = temp_16_33;
    func_002335D0();
    func_00233D00();
}
#endif /* NON_MATCHING */
