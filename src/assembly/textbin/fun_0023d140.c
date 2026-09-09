/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 7.7500%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023d140/FUN_0023d140.s", FUN_0023d140);
#else
#include "rnc/assembly_textbin_fun_0023d140_types.h"
#include "types.h"


extern s32 D_0016120C;
extern s32 func_0023C920();
s32 FUN_0023d140(s32 arg0, struct M2c_arg1 *arg1) {    u64 sp0;
u8 sp_slot[0x40];    u64 sp8;
    func_0023C920(D_0016120C + 0xD9090, sp_slot);
    arg1->unk8 = sp0;
    arg1->unk10 = sp8;
    return 1;
}
#endif /* NON_MATCHING */
