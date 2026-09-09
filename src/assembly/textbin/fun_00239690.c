/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 45.7447%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00239690/FUN_00239690.s", FUN_00239690);
#else
#include "types.h"
extern s32 func_001F33B8();
extern s32 func_001FB440();
extern s32 func_00233980();
void FUN_00239690(s32 arg0, s32 arg1, f32 fparg0) {
    s32 temp_2_13;

    temp_2_13 = arg0 + arg1;
    func_001FB440(arg0, arg1, ((s32) (0x3FF000 - (4 << ((temp_2_13 >= 0x11) ? 0x10 : temp_2_13))) >> 0xD) << 0xD);
    func_001F33B8(1 << arg0, 1 << arg1, fparg0, 0, 0x49000000, 0x437F0000, 0);
    func_00233980(0x47, 0x30000);
    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
}
#endif /* NON_MATCHING */
