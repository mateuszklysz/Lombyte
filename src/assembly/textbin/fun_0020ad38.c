/* ROLE: recovered function `memcard_TestChecksum` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 38.3333%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020ad38/FUN_0020ad38.s", FUN_0020ad38);
#else
#include "rnc/assembly_textbin_fun_0020ad38_types.h"
#include "types.h"


extern s32 func_0020ACC0();
s32 FUN_0020ad38(struct M2c_arg0 *arg0) {
    s32 temp_16_9;
    s32 var_2_6;

    var_2_6 = 0;
    temp_16_9 = arg0->unk4;
    if (temp_16_9 != 0) {
        var_2_6 = func_0020ACC0(((u8 *)arg0 + (8)), arg0->unk0) == temp_16_9;
    }
    return var_2_6;
}
#endif /* NON_MATCHING */
