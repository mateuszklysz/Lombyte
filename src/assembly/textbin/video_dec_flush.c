/*
STATE: C_NON_MATCHING
SYMBOL: videoDecFlush__FP8VideoDec
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `videoDecFlush__FP8VideoDec`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.5556%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video_dec_flush/FUN_0023cd08.s", FUN_0023cd08);
#else
#include "rnc/assembly_textbin_fun_0023cd08_types.h"
#include "types.h"




extern u32 D_0016120C[];
extern struct M2c_D_00161218 D_00161218;
extern s32 func_0023B810();
extern s32 func_0023C660();
extern s32 func_0023CBF0();
extern s32 func_0023CC10();
s32 FUN_0023cd08(struct M2c_arg0 *arg0) {
u8 sp_slot[0x40];    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 var_2_25;

    func_0023CBF0(&sp10, &sp14, &sp18, &sp1C, &D_00161218, (s32 *) D_00161218.unk0);
    var_2_25 = 0;
    if ((sp14 + sp1C) >= 4) {
        func_0023CC10(D_0016120C[0] + 0xD9048, func_0023B810((sp10 & 0x0FFFFFFF) | 0x20000000, sp14, (sp18 & 0x0FFFFFFF) | 0x20000000, sp1C, sp_slot, 4, 0, 0));
        func_0023C660(((u8 *)arg0 + (0x48)));
        var_2_25 = 1;
        if (arg0->unkA8 == 0) {
            arg0->unkA8 = 2;
            var_2_25 = 1;
        }
    }
    return var_2_25;
}
#endif /* NON_MATCHING */
