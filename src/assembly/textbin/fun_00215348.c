/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 54.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215348/FUN_00215348.s", FUN_00215348);
#else
#include "types.h"
extern u8 D_0013D408[];
s32 FUN_00215348(void) {
    s32 temp_6_20;
    s32 var_5_8;
    s32 var_6_6;
    u8 temp_3_12;

    var_6_6 = 0;
    var_5_8 = 0;
    do {
        temp_3_12 = *(var_5_8 + D_0013D408);
        var_5_8 += 1;
        var_6_6 = (temp_3_12 != 0) ? (var_6_6 + 1) : var_6_6;
    } while (var_5_8 < 0x20);
    temp_6_20 = (var_6_6 <= -1) ? 0 : var_6_6;
    return (temp_6_20 < 0x1F) ? temp_6_20 : 0x1E;
}
#endif /* NON_MATCHING */
