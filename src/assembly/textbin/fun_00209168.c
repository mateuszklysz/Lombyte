/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.2267%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00209168/FUN_00209168.s", FUN_00209168);
#else
#include "rnc/assembly_textbin_fun_00209168_types.h"
#include "types.h"




extern u8 D_0013D1D0[];
extern struct M2c_D_0013D290 D_0013D290;
extern u8 D_0013D348[];
extern s32 func_00122298();
extern s32 func_00123C30();
extern s32 func_00123D68();
extern s32 func_00123EF0();
s32 FUN_00209168(void) {    s32 sp0;
u8 sp_slot[0x60];    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_3_35;
    s32 var_2_48;
    struct M2c_temp_5_33 *temp_5_33;

    sp10 = func_00123D68(D_0013D290.unk0, D_0013D290.unk4, sp_slot, &sp4, &sp8);
    goto loop_3;
block_2:
    func_00122298(0, temp_5_33);
loop_3:
    temp_5_33 = ((u8 *)D_0013D348 - (u8 *)0xB8);
    if (func_00123C30(1, D_0013D348, D_0013D348 + 4) == 0) {
        goto block_2;
    }
    temp_3_35 = temp_5_33->unkBC;
    if (temp_3_35 == -5) {
        goto block_6;
    }
    if (temp_3_35 >= -9) {
        goto block_7;
    }
block_6:
    return 1;
block_7:
    if (temp_3_35 == -2) {
        goto block_15;
    }
    var_2_48 = 1;
    if (sp0 != 2) {
        goto block_16;
    }
    if (sp8 == 0) {
        goto block_15;
    }
    sp10 = func_00123EF0(D_0013D290.unk0, temp_5_33->unk4, D_0013D1D0, 0, -1, 0);
    goto loop_12;
block_11:
    func_00122298(0);
loop_12:
    if (func_00123C30(1, &spC, &sp10) == 0) {
        goto block_11;
    }
    if (sp10 > 0) {
        goto block_15;
    }
    return (sp4 < 0x15E) * 2;
block_15:
    var_2_48 = 0;
block_16:
    return var_2_48;
}
#endif /* NON_MATCHING */
