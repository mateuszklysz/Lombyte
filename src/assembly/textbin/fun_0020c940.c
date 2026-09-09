/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 69.5263%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020c940/FUN_0020c940.s", FUN_0020c940);
#else
#include "rnc/assembly_textbin_fun_0020c940_types.h"
#include "types.h"




extern u8 D_0013E550[];
extern s32 func_0022D798();
extern s32 func_0022DA68();
void FUN_0020c940(struct M2c_arg0 *arg0) {
    u8 temp_2_33;
    u8 temp_3_11;
    struct M2c_temp_3_18 *temp_3_18;

    temp_3_11 = arg0->unk7D;
    if (temp_3_11 == 0xFF) {
        goto block_7;
    }
    temp_3_18 = (temp_3_11 * 0x70) + D_0013E550;
    if (temp_3_18->unk88 != arg0) {
        goto block_3;
    }
    goto block_5;
block_3:
    arg0->unk7D = 0xFFU;
    goto block_9;
block_5:
    if (temp_3_18->unk7E == arg0->unk7C) {
        goto block_10;
    }
    func_0022D798(temp_3_11, temp_3_11);
    arg0->unk7D = 0xFFU;
    goto block_9;
block_7:
    temp_2_33 = arg0->unk7C;
    if (temp_2_33 == temp_3_11) {
        goto block_9;
    }
    arg0->unk7D = func_0022DA68(temp_2_33, 4, arg0);
block_9:
block_10:
    return;
}
#endif /* NON_MATCHING */
