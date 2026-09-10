/* ROLE: recovered function `viBufBeginPut__FP5ViBufPPUcPiT1T2` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 80.9016%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023be20/FUN_0023be20.s", FUN_0023be20);
#else
#include "rnc/assembly_textbin_fun_0023be20_types.h"
#include "types.h"


extern s32 func_00118990();
extern s32 func_001189B0();
void FUN_0023be20(struct M2c_arg0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_2_39;
    s32 temp_3_24;
    s32 temp_4_19;
    s32 temp_5_21;
    s32 temp_5_34;
    s32 temp_6_22;
    s32 temp_hi_31;

    func_001189B0(arg0->unk40);
    temp_4_19 = arg0->unk10;
    temp_5_21 = arg0->unk14;
    temp_6_22 = temp_4_19 + 2;
    temp_3_24 = arg0->unk18;
    temp_hi_31 = (s32) (((arg0->unkC + temp_4_19) << 0xB) + temp_5_21) % temp_3_24;
    temp_5_34 = ((arg0->unk8 - temp_6_22) << 0xB) - temp_5_21;
    temp_2_39 = arg0->unk0;
    if ((temp_3_24 - temp_hi_31) >= temp_5_34) {
        *arg1 = temp_2_39 + temp_hi_31;
        *arg2 = temp_5_34;
        *arg3 = 0;
        *arg4 = 0;
    } else {
        *arg1 = temp_2_39 + temp_hi_31;
        *arg2 = arg0->unk18 - temp_hi_31;
        *arg3 = arg0->unk0;
        *arg4 = temp_5_34 - (arg0->unk18 - temp_hi_31);
    }
    func_00118990(arg0->unk40, temp_5_34, temp_6_22, temp_hi_31);
}
#endif /* NON_MATCHING */
