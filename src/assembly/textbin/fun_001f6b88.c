/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 74.1351%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f6b88/FUN_001f6b88.s", FUN_001f6b88);
#else
#include "types.h"
extern u8 D_001DF3F0[];
extern s32 func_001F44B8();
extern s32 func_001F6270();
extern s32 func_001F62B0();
s32 FUN_001f6b88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16_23;

    temp_16_23 = arg0 - (func_001F6270(arg3, arg4) >> 1);
    func_001F62B0(temp_16_23, arg1, arg2, arg3, arg4, func_001F44B8(2), D_001DF3F0);
    return temp_16_23;
}
#endif /* NON_MATCHING */
