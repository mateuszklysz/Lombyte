/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 75.7500%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00213308/FUN_00213308.s", FUN_00213308);
#else
#include "types.h"
extern s32 func_001160D8();
f32 FUN_00213308(s32 arg0) {
    return (f32) (((func_001160D8() >> 0x10) & 0xFFF) - 0x800) * 3.1415927f * 0.00048828125f;
}
#endif /* NON_MATCHING */
