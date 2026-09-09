/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 53.3636%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022b690/FUN_0022b690.s", FUN_0022b690);
#else
#include "rnc/assembly_textbin_fun_0022b690_types.h"
#include "types.h"




extern struct M2c_D_0016045C *D_0016045C;
extern s32 func_0022B6E8();
extern s32 func_0022B928();
void FUN_0022b690(s32 arg0) {
    struct M2c_temp_4_14 *temp_4_14;

    if (arg0 >= D_0016045C->unk6) {
        goto block_4;
    }
    temp_4_14 = *(s32 *)((u8 *)(D_0016045C + (arg0 * 4)) + 0x20);
    if (temp_4_14->unk4 == 0) {
        goto block_3;
    }
    func_0022B928(temp_4_14);
    return;
block_3:
    func_0022B6E8(temp_4_14);
block_4:
    return;
}
#endif /* NON_MATCHING */
