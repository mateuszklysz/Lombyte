/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 73.7714%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e608/FUN_0021e608.s", FUN_0021e608);
#else
#include "rnc/assembly_textbin_fun_0021e608_types.h"
#include "types.h"






extern u8 D_0013D4C0[];
extern struct M2c_D_001D5BF4 *D_001D5BF4;
extern s32 func_0020D330();
s32 FUN_0021e608(struct M2c_arg0 *arg0) {
    s32 temp_4_23;
    s32 temp_4_31;
    struct M2c_temp_2_14 *temp_2_14;

    temp_2_14 = D_001D5BF4->unk40;
    if (*(*(s32 *)((u8 *)((temp_2_14->unk3C * 0xA) + temp_2_14->unk48) + 0x6) + D_0013D4C0) == 0) {
        goto block_2;
    }
    temp_4_23 = arg0->unk44;
    goto block_4;
block_2:
    return 0;
block_4:
    if (temp_4_23 == 0) {
        goto block_6;
    }
    func_0020D330(temp_4_23, 1, D_001D5BF4, 0xA);
block_6:
    temp_4_31 = arg0->unk48;
    if (temp_4_31 == 0) {
        goto block_8;
    }
    func_0020D330(temp_4_31, 1);
block_8:
    return 8;
}
#endif /* NON_MATCHING */
