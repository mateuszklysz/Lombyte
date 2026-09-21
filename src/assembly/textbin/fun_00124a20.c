/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 14.0000%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00124a20/FUN_00124a20.s", FUN_00124a20);
#else
#include "types.h"

void FUN_00124a20(s32 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp48;
    s64 sp50;
    s64 sp58;
    s64 sp60;
    s64 sp68;
    s64 sp70;
    s64 sp78;

    sp48 = arg1;
    sp50 = arg2;
    sp58 = arg3;
    sp60 = arg4;
    sp68 = arg5;
    sp70 = arg6;
    sp78 = arg7;
}

extern void func_00124A20(s32 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) __attribute__((alias("FUN_00124a20")));
#endif /* NON_MATCHING */
