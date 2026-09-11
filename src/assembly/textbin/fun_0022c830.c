/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0022c830
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 13.0750%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c830/FUN_0022c830.s", FUN_0022c830);
#else
#include "types.h"
extern u8 D_00187080[];
extern s32 func_001F99E8();
extern s32 func_001F9A28();
extern s32 func_001F9B20();
extern s32 func_001F9D20();
extern s32 func_001F9E90();
extern s32 func_001FA6D0();
void FUN_0022c830(s32 arg0, s32 arg1, s32 arg2) {    s32 sp0;
u8 sp_slot[0x40];    s32 sp4;
    f32 temp_f20_27;

    func_001F9A28(sp_slot, D_00187080);
    func_001F9D20(sp_slot, sp_slot, arg2);
    temp_f20_27 = func_001F99E8(func_001F9B20(sp_slot) - 1.0f, 0, 0x3F800000);
    func_001FA6D0(-func_001F9E90(sp0, sp4) * 180.0f * temp_f20_27 * 0.31830987f);
}
#endif /* NON_MATCHING */
