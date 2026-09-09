/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 55.7143%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e1f8/FUN_0021e1f8.s", FUN_0021e1f8);
#else
#include "rnc/assembly_textbin_fun_0021e1f8_types.h"
#include "types.h"


extern s32 func_001FA580();
void FUN_0021e1f8(struct M2c_arg0 *arg0) {
    arg0->unk48 = func_001FA580(arg0->unk48, 0x3C23D70A);
}
#endif /* NON_MATCHING */
