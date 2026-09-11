/*
STATE: C_NON_MATCHING
SYMBOL: music_StartTrack__Fiii
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `music_StartTrack__Fiii` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 63.3396%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00215c40/FUN_00215c40.s", FUN_00215c40);
#else
#include "rnc/assembly_textbin_fun_00215c40_types.h"
#include "types.h"


extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012EC08();
extern void func_00216B28();
void FUN_00215c40(u16 arg0, u16 arg1, u16 arg2) {
    s32 *temp_4_18;

    if (D_001516D0.unk34 == 0) {
        temp_4_18 = (arg0 * 4) + (D_00137B80 + 0x2AA8);
        if (*temp_4_18 != 0) {
            D_001516D0.unk3E = 1;
            D_001516D0.unk38 = arg0;
            D_001516D0.unk48 = 0xA;
            D_001516D0.unk4C = 0xBB80;
            D_001516D0.unk34 = 0xFFFFFFFF;
            D_001516D0.unk3C = arg1;
            D_001516D0.unk3A = arg2;
            D_001516D0.unk44 = 0;
            func_0012EC08((s64) ((s64) *temp_4_18 << 0x20) >> 0x20, 0, 0, 0, arg2, 0, 1, 0, 0x20, &func_00216B28, (u64) ((s64) (((u8 *)&D_001516D0 + 0x34)) << 0x20) >> 0x20);
        }
    }
}
#endif /* NON_MATCHING */
