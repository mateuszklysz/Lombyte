/*
STATE: C_NON_MATCHING
SYMBOL: Hud_sendTexture__FPciiiii
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `Hud_sendTexture__FPciiiii` starts here. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 10.5870%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200b10/FUN_00200b10.s", FUN_00200b10);
#else
#include "rnc/assembly_textbin_fun_00200b10_types.h"
#include "types.h"


extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00118A80();
extern s32 func_00122330();
extern s32 func_00122658();
void FUN_00200b10(u32 arg0, u16 arg1, u16 arg2, u32 arg3, u32 arg4, u32 arg5) {
u8 sp_slot[0xB0];    s32 temp_12_11;
    s32 temp_18_16;
    s32 *var_16_43;

    temp_12_11 = (s32) (1 << arg3) >> 6;
    temp_18_16 = 1 << ((arg3 + arg4) - 4);
    if (arg5 == 0) {
        D_00160F00->unk0 = 0x10000006;
        D_00160F00->unk4 = 0;
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0x50000006;
        var_16_43 = D_00160F00 + 0x10;
        D_00160F00 += 0x70;
    } else {
        var_16_43 = sp_slot;
    }
    func_00122330(var_16_43, arg1, (s16) ((temp_12_11 <= 0) ? 1 : temp_12_11), arg2, 0, 0, (s16) (1 << arg3), (s16) (1 << arg4));
    if (arg5 == 0) {
        D_00160F00->unk0 = (s32) (temp_18_16 | 0x30000000);
        D_00160F00->unk4 = arg0;
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = (s32) (temp_18_16 | 0x50000000);
        D_00160F00 += 0x10;
        return;
    }
    func_00118A80(0);
    func_00122658(var_16_43, arg0);
}
#endif /* NON_MATCHING */
