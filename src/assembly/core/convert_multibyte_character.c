/*
STATE: C_NON_MATCHING
SYMBOL: ConvertMultibyteCharacter
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Minimal single-byte multibyte-to-wide-character conversion veneer. */
INCLUDE_ASM("config/us/expected/asm/assembly/core/convert_multibyte_character/ConvertMultibyteCharacter.s", ConvertMultibyteCharacter);
#else
#include "rnc/assembly_core_convert_multibyte_character_types.h"
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern unsigned char D_005FEA60[];




__attribute__((section(".text.func_002C2418")))
int ConvertMultibyteCharacter(char *a0, int flags) {
    if (((S002C2418 *)D_005FEA60)->f70 == 0) {
        if (flags & 0x10) {
            ((S002C2418 *)D_005FEA60)->f70 = a0 + 0x5C;
            ((S002C2418 *)D_005FEA60)->f64 = *(unsigned char *)(a0 + 0x7C);
        } else if (flags & 0x20) {
            ((S002C2418 *)D_005FEA60)->f64 = *(unsigned char *)(a0 + 0x7D);
        } else {
            ((S002C2418 *)D_005FEA60)->f70 = a0 + 0x5C;
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
