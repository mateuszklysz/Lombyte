/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 45.6364%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023acb8/FUN_0023acb8.s", FUN_0023acb8);
#else
#include "rnc/assembly_textbin_fun_0023acb8_types.h"
#include "types.h"


extern s32 func_0012F108();
void FUN_0023acb8(struct M2c_arg0 *arg0) {
    s32 temp_2_10;

    temp_2_10 = arg0->unk4C;
    func_0012F108(arg0->unk48, ((s32) ((temp_2_10 > -1) ? temp_2_10 : (temp_2_10 + 0x3FF)) >> 0xA) << 0xA, arg0->unk5C, arg0->unk14, arg0->unk18);
    arg0->unk0 = 2;
}
#endif /* NON_MATCHING */
