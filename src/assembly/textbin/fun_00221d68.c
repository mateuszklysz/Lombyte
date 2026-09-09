/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 83.4386%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221d68/FUN_00221d68.s", FUN_00221d68);
#else
#include "rnc/assembly_textbin_fun_00221d68_types.h"
#include "types.h"








extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u32 D_001D5D14[];
extern s32 func_0022DA68();
s32 FUN_00221d68(struct M2c_arg0 *arg0) {
    s32 temp_3_29;
    s32 temp_5_43;
    s32 var_2_46;

    if (D_0013C940.unk1C4 & 0xD00) {
        if (D_001D5D14[0] == 0) {
            return 1;
        }
        goto block_4;
    }
block_4:
    if (D_0013C940.unk1C4 & 0x10) {
        temp_3_29 = D_001D5BF0.unk4->unk38;
        if (temp_3_29 != 0) {
            D_001D5BF0.unk8 = temp_3_29;
            goto block_10;
        }
        if (D_001D5BF0.unk124 == 0) {
            return -1;
        }
        goto block_11;
    }
block_10:
block_11:
    temp_5_43 = arg0->unk40;
    if (D_0013C940.unk1A4 & 0x40) {
        var_2_46 = temp_5_43 + 1;
        goto block_15;
    }
    if (D_0013C940.unk1A4 & 0x20) {
        var_2_46 = temp_5_43 + 0x1D;
block_15:
        arg0->unk40 = (s32) (var_2_46 % 30);
    }
    if (arg0->unk40 != temp_5_43) {
        func_0022DA68(1, 0x11, arg0->unk14);
    }
    return 0;
}
#endif /* NON_MATCHING */
