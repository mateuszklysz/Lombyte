/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 16.8919%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214a98/FUN_00214a98.s", FUN_00214a98);
#else
#include "rnc/assembly_textbin_fun_00214a98_types.h"
#include "types.h"


extern s32 func_001F99C0();
extern s32 func_001F9D68();
extern s32 func_001FA6D0();
void FUN_00214a98(struct M2c_arg0 *arg0, s32 *arg1) {
u8 sp_slot[0x50];    f32 temp_f0_19;
    f32 temp_f0_62;
    f32 temp_f21_17;
    f32 temp_f6_53;
    f32 var_f1_29;
    f32 var_f20_20;
    s32 temp_2_38;
    s32 temp_3_42;

    temp_f21_17 = func_001F99C0(arg0->unk0);
    var_f20_20 = func_001F99C0(arg0->unk4);
    temp_f0_19 = func_001F99C0(arg0->unk8);
    if (var_f20_20 < temp_f21_17) {
        var_f20_20 = temp_f21_17;
    }
    var_f1_29 = temp_f0_19;
    if (temp_f0_19 < var_f20_20) {
        var_f1_29 = var_f20_20;
    }
    temp_2_38 = func_001FA6D0((var_f1_29 * 10000.0f) / 63.0f);
    temp_3_42 = (temp_2_38 < 0x100) ? temp_2_38 : 0xFF;
    temp_f6_53 = (f32) ((temp_3_42 <= 0) ? 1 : temp_3_42);
    temp_f0_62 = 1.0f / (temp_f6_53 * 0.0001f);
    *arg1 = func_001F9D68(sp_slot, 1, (arg0->unk0 * temp_f0_62) + 127.0f, (arg0->unk4 * temp_f0_62) + 127.0f, (arg0->unk8 * temp_f0_62) + 127.0f, temp_f6_53);
}
#endif /* NON_MATCHING */
