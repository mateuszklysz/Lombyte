/* ROLE: recovered function `snd_InitVAGStreamingEx` (snd989, 0xb0 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.2558%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012eb20/FUN_0012eb20.s", FUN_0012eb20);
#else
#include "types.h"
extern s32 D_0015EC8C;
extern s32 D_0015ECC8;
extern s32 func_0012DC80();
extern s32 func_0012E548();
extern s32 func_0012EE08();
s32 FUN_0012eb20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
u8 sp_slot[0x60];    s32 temp_2_41;

    if (D_0015EC8C == 1) {
        return 0;
    }
    if (D_0015ECC8 != 0) {
        do {

        } while (func_0012DC80() != 0);
    }
    func_0012EE08(0);
    temp_2_41 = func_0012E548(0x2A, 0x10, sp_slot, arg0, arg1, arg2, arg3);
    D_0015EC8C = temp_2_41;
    return temp_2_41;
}
#endif /* NON_MATCHING */
