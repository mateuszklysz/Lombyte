/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 23.5238%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00201200/FUN_00201200.s", FUN_00201200);
#else
#include "types.h"
extern s32 func_001F6C20();
extern s32 func_00201128();
void FUN_00201200(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16_12;
    s32 temp_4_26;

    temp_16_12 = arg2 >> 0x18;
    temp_4_26 = func_001F6C20(arg0 + 1, arg1 + 1, arg2 & 0xFF000000, -1) - 0x20;
    func_00201128(temp_4_26, arg1 - 8, (arg0 - temp_4_26) * 2, 0x20, (temp_16_12 >= 0x51) ? 0x50 : temp_16_12);
    func_001F6C20(arg0, arg1, arg2, arg3, -1);
}
#endif /* NON_MATCHING */
