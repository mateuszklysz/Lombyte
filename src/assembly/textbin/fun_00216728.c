/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 47.5000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00216728/FUN_00216728.s", FUN_00216728);
#else
#include "rnc/assembly_textbin_fun_00216728_types.h"
#include "types.h"


extern struct M2c_D_00151700 D_00151700;
extern u32 D_0015ED58[];
extern u32 D_0015EEBC[];
extern u32 D_0015EEC0[];
extern s32 func_00121450();
s32 FUN_00216728(s32 arg0, s32 arg1, s32 arg2) {
u8 sp_slot[0x20];    D_0015EEBC[0] = 0;
    D_0015EEC0[0] = 0;
    func_00121450(arg1, arg2, arg0, sp_slot, &D_00151700, (s32 *) D_00151700.unk0, D_0015ED58[0]);
    return 1;
}
#endif /* NON_MATCHING */
