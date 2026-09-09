/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 74.9216%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021d1f8/FUN_0021d1f8.s", FUN_0021d1f8);
#else
#include "rnc/assembly_textbin_fun_0021d1f8_types.h"
#include "types.h"










extern struct M2c_D_00137B80 D_00137B80;
extern struct M2c_D_001516D0 D_001516D0;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u32 D_001D5CF8[];
extern u8 D_001D60B8[];
extern s32 func_00216788();
extern s32 func_00225AC0();
s32 FUN_0021d1f8(struct M2c_arg0 *arg0) {
    s32 var_2_47;
    s32 var_5_18;
    u32 temp_4_20;
    struct M2c_var_3_17 *var_3_17;

    func_00225AC0(1);
    arg0->unk54 = 0;
    arg0->unk38 = 0;
    var_3_17 = D_001D60B8 + 4;
    var_5_18 = 4;
    do {
        temp_4_20 = *(s32 *)((u8 *)var_3_17 - 0x4);
        var_5_18 -= 1;
        if ((temp_4_20 != 0) && (temp_4_20 < (u32) D_001D5BF0.unk10C)) {
            var_3_17->unk0 = (s32) (var_3_17->unk0 | 2);
        }
        var_3_17 += 8;
    } while (var_5_18 >= 0);
    arg0->unk50 = 0;
    if (D_001516D0.unk8 == 0) {
        var_2_47 = 1;
        if (func_00216788(D_001D5CF8[0], D_00137B80.unk1528, D_00137B80.unk152C) == 0) {
            var_2_47 = 3;
        }
        arg0->unk50 = var_2_47;
    }
    arg0->unk10 = (s32) (arg0->unk10 | 4);
    return 0;
}
#endif /* NON_MATCHING */
