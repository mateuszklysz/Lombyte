/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 15.0909%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020c828/FUN_0020c828.s", FUN_0020c828);
#else
#include "types.h"
extern u32 D_0015F60C[];
extern u32 D_0015FF1C[];
extern s32 func_0020DC20();
void FUN_0020c828(u32 arg0) {
    s8 var_2_13;

    if (arg0 < (u32) D_0015FF1C[0]) {
        var_2_13 = 0xFD;
    } else {
        var_2_13 = 0xFE;
    }
    *(s32 *)((u8 *)arg0 + 0x20) = var_2_13;
    *(s32 *)((u8 *)arg0 + 0x38) = (s64) (D_0015F60C[0] + 2);
    func_0020DC20(arg0, 0x80807F7F);
}
#endif /* NON_MATCHING */
