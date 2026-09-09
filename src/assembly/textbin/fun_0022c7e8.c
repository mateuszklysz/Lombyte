/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 44.8235%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c7e8/FUN_0022c7e8.s", FUN_0022c7e8);
#else
#include "rnc/assembly_textbin_fun_0022c7e8_types.h"
#include "types.h"




extern u8 D_00187080[];
extern s32 func_001F9B48();
extern s32 func_0022C6F8();
void FUN_0022c7e8(struct M2c_arg0 *arg0, s32 arg1) {
    struct M2c_temp_4_13 *temp_4_13;

    temp_4_13 = arg0->unk8;
    func_0022C6F8(temp_4_13, func_001F9B48(arg1, D_00187080), temp_4_13->unk0, temp_4_13->unk4);
}
#endif /* NON_MATCHING */
