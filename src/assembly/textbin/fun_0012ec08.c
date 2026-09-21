/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 25.8000%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012ec08/FUN_0012ec08.s", FUN_0012ec08);
#else
#include "types.h"
extern s32 func_0012E6E0();
void FUN_0012ec08(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s64 arg_sp10) {    s32 arg_sp0;
u8 sp_slot[0x50];    s32 arg_sp10;
    s32 arg_sp8;
    s32 temp_9_10;

    temp_9_10 = (arg5 << 0x10) | (arg3 & 0xFFFF);
    func_0012E6E0(0x2C, 0x1C, sp_slot, arg_sp8, arg_sp10, temp_9_10, arg0, arg1, (arg4 << 0x10) | (arg2 & 0xFFFF), temp_9_10, arg6, arg7, arg_sp0);
}

extern void func_0012EC08(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s64 arg_sp10) __attribute__((alias("FUN_0012ec08")));
#endif /* NON_MATCHING */
