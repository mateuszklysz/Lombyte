/* ROLE: recovered function `VU0_loadMicroProgram__FPl` (vuchain.cpp, 0xf8 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 63.2400%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002334d8/FUN_002334d8.s", FUN_002334d8);
#else
#include "types.h"
extern s32 func_001F97C0();
void FUN_002334d8(s32 arg0) {
    if (*(s32 *)0x10008000 & 0x100) {
        do {
            func_001F97C0(0x10);
        } while (*(volatile u32 *)0x10008000 & 0x100);
    }
    *(s32 *)0x10008020 = 0;
    *(s32 *)0x10008030 = arg0 & 0x0FFFFFFF;
    *(volatile u32 *)0x10008000 = 0x145;
    if (*(volatile u32 *)0x10008000 & 0x100) {
        do {
            func_001F97C0(0x10);
        } while (*(volatile u32 *)0x10008000 & 0x100);
    }
}
#endif /* NON_MATCHING */
