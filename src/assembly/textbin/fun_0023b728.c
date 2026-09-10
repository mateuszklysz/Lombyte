/* ROLE: recovered function `pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 42.8421%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023b728/FUN_0023b728.s", FUN_0023b728);
#else
#include "rnc/assembly_textbin_fun_0023b728_types.h"
#include "types.h"




extern s32 D_0016120C;
extern s32 func_0023AD58();
extern s32 func_0023AE28();
extern s32 func_0023B810();
s32 FUN_0023b728(s32 arg0, struct M2c_arg1 *arg1, struct M2c_arg2 *arg2) {    s32 sp0;
u8 sp_slot[0x70];    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_16_33;
    s32 temp_16_35;
    s32 temp_17_23;
    s32 temp_17_37;
    s32 temp_2_45;
    s32 temp_3_21;
    u32 temp_18_27;
    u32 temp_18_31;
    s32 *temp_16_24;

    temp_3_21 = arg2->unk50008;
    temp_17_23 = arg1->unkC - 4;
    temp_16_24 = ((u8 *)arg2 + (temp_3_21));
    temp_18_27 = arg1->unk8 + 4;
    temp_18_31 = (temp_18_27 >= (u32) temp_16_24) ? (temp_18_27 - temp_3_21) : temp_18_27;
    temp_16_33 = temp_16_24 - temp_18_31;
    temp_16_35 = (temp_17_23 < temp_16_33) ? temp_17_23 : temp_16_33;
    temp_17_37 = temp_17_23 - temp_16_35;
    func_0023AD58(D_0016120C + 0xD9100, sp_slot, &sp4, &sp8, &spC);
    temp_2_45 = func_0023B810(sp0, sp4, sp8, spC, temp_18_31, temp_16_35, arg2, temp_17_37);
    func_0023AE28(D_0016120C + 0xD9100, temp_2_45);
    return temp_2_45 > 0;
}
#endif /* NON_MATCHING */
