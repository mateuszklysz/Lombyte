#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/state/reset_gs_registers_pr/FUN_001f3958.s", FUN_001f3958);
#else
#include "rnc/assembly_textbin_fun_001f3958_types.h"
#include "types.h"


extern struct M2c_D_00151788 D_00151788;
void reset_gs_registers_pr(void) __asm__("FUN_001f3958");

void reset_gs_registers_pr(void) {
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
