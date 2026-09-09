/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 66.9302%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012f208/FUN_0012f208.s", FUN_0012f208);
#else
#include "types.h"
extern s32 func_00120C30();
extern s32 func_00121450();
extern s32 func_00121630();
extern s32 func_00122298();
s32 FUN_0012f208(s32 arg0, s32 arg1, s32 arg2) {
u8 sp_slot[0x60];loop_1:
    func_00121450(arg0, arg1, arg2, sp_slot);
    goto loop_3;
block_2:
    func_00122298(0);
loop_3:
    if (func_00120C30(1) != 0) {
        goto block_2;
    }
    if (func_00121630() != 0) {
        goto loop_1;
    }
    return arg1 << 0xB;
}
#endif /* NON_MATCHING */
