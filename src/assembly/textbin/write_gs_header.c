/*
STATE: C_NON_MATCHING
SYMBOL: writeGSHeader
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `writeGSHeader`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 38.5625%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/write_gs_header/FUN_001f8364.s", FUN_001f8364);
#else
#include "rnc/assembly_textbin_fun_001f8364_types.h"
#include "types.h"


extern struct M2c_D_00160F00 *D_00160F00;
void FUN_001f8364(s32 arg0) {
    s32 temp_8_10;

    temp_8_10 = 0x10000000 | arg0;
    D_00160F00->unk0 = 0;
    D_00160F00->unkC = (s32) (temp_8_10 | 0x40000000);
    D_00160F00->unk0 = temp_8_10;
    D_00160F00 += (arg0 * 0x10) + 0x10;
}
#endif /* NON_MATCHING */
