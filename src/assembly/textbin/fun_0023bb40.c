/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 12.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023bb40/FUN_0023bb40.s", FUN_0023bb40);
#else
#include "types.h"
extern s32 func_0011D660();
extern s32 func_0011D6A8();
void FUN_0023bb40(s32 arg0) {
    func_0011D660();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 = arg0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    func_0011D6A8(0xFFFEFFFF, 0x1000F520, 0x1000F590, 0x10000);
}
#endif /* NON_MATCHING */
