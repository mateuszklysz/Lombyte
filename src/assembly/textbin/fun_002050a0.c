/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 99.8235%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002050a0/FUN_002050a0.s", FUN_002050a0);
#else
#include "rnc/assembly_textbin_fun_002050a0_types.h"
#include "types.h"


extern u8 D_001A00F0[];
s32 FUN_002050a0(s32 arg0) {
    register s32 var_5_6 __asm__("a1") = 0;
    u8 *base;
    u8 *var_3_8;

    base = D_001A00F0;
    base += 0xF0;
    var_3_8 = base;
    var_3_8 += 0x28C;
loop_1:
    if (*(s32 *)(var_3_8 - 0x14) != 0 && *(s32 *)var_3_8 == arg0) {
        goto block_6;
    }
    var_5_6 += 1;
    goto block_8;
block_6:
    return var_5_6;
block_8:
    var_3_8 += 4;
    if (var_5_6 < 5) {
        goto loop_1;
    }
    return -1;
}
#endif /* NON_MATCHING */
