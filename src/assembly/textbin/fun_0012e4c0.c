/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 42.8889%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012e4c0/FUN_0012e4c0.s", FUN_0012e4c0);
#else
#include "types.h"
extern s32 func_0012E6E0();
void FUN_0012e4c0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
u8 sp_slot[0x30];    func_0012E6E0(0x21, 0x18, sp_slot, arg6, arg7, arg0, arg1, arg2, arg3, arg4, arg5);
}

extern void func_0012E4C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) __attribute__((alias("FUN_0012e4c0")));
#endif /* NON_MATCHING */
