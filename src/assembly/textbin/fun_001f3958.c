/* ROLE: recovered function `ResetGsRegistersPr__Fv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 21.9000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f3958/FUN_001f3958.s", FUN_001f3958);
#else
#include "rnc/assembly_textbin_fun_001f3958_types.h"
#include "types.h"


extern struct M2c_D_00151788 D_00151788;
void FUN_001f3958(void) {
    *(s64 *)0x120000E0 = 0;
    *(s64 *)0x12000000 = 0xFFA1;
    *(s64 *)0x12000020 = D_00151788.unk0;
    *(s64 *)0x12000070 = D_00151788.unk8;
    *(s64 *)0x12000090 = D_00151788.unk8;
    *(s64 *)0x12000080 = D_00151788.unk10;
    *(s64 *)0x120000A0 = D_00151788.unk10;
    *(s64 *)0x120000D0 = 0;
}
#endif /* NON_MATCHING */
