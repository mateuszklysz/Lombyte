/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 54.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215300/FUN_00215300.s", FUN_00215300);
#else
#include "types.h"
extern u8 D_0013E520[];
s32 FUN_00215300(void) {
    s32 temp_6_20;
    s32 var_5_8;
    s32 var_6_6;
    u8 temp_3_12;

    var_6_6 = 0;
    var_5_8 = 0;
    do {
        temp_3_12 = *(var_5_8 + D_0013E520);
        var_5_8 += 1;
        var_6_6 = (temp_3_12 != 0) ? (var_6_6 + 1) : var_6_6;
    } while (var_5_8 < 0x25);
    temp_6_20 = (var_6_6 <= -1) ? 0 : var_6_6;
    return (temp_6_20 < 0xB) ? temp_6_20 : 0xA;
}
#endif /* NON_MATCHING */
