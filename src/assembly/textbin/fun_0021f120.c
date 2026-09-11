/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021f120
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 55.7143%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021f120/FUN_0021f120.s", FUN_0021f120);
#else
#include "rnc/assembly_textbin_fun_0021f120_types.h"
#include "types.h"


extern s32 func_001FA580();
void FUN_0021f120(struct M2c_arg0 *arg0) {
    arg0->unk40 = func_001FA580(arg0->unk40, 0x3CA3D70A);
}
#endif /* NON_MATCHING */
