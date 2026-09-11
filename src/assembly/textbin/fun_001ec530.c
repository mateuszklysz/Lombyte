/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ec530
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 43.9076%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ec530/FUN_001ec530.s", FUN_001ec530);
#else
#include "rnc/assembly_textbin_fun_001ec530_types.h"
#include "types.h"


extern s32 func_001F9A28();
extern s32 func_001F9AB0();
extern s32 func_001F9AF0();
extern s32 func_001F9BF8();
extern s32 func_001F9DF8();
extern s32 func_00214890();
void FUN_001ec530(s32 arg1, s32 arg2, struct M2c_arg0 *arg0, s32 *arg3, s32 *arg4, s32 *arg5) {
u8 sp_slot[0xF0];    s32 sp10;
    s32 sp20;
    s32 sp30;
    s32 sp40;
    f32 temp_f20_41;
    f32 temp_f20_83;
    f32 temp_f21_96;
    f32 var_f0_42;
    f32 var_f0_84;
    f32 var_f20_107;
    f32 var_f20_60;

    func_001F9A28(sp_slot);
    func_001F9BF8(&sp10, arg5, func_001F9AB0(sp_slot, arg5));
    func_001F9A28(&sp20, sp_slot, &sp10);
    temp_f20_41 = func_001F9AB0(arg3, &sp20);
    var_f0_42 = func_001F9AF0(&sp20);
    if (var_f0_42 == 0.0f) {
        var_f0_42 = 0.0001f;
    }
    var_f20_60 = 1.5707964f - func_001F9DF8(temp_f20_41 / var_f0_42);
    func_001F9BF8(&sp30, &sp20, 1.0f);
    if (func_001F9AB0(arg4, &sp30) < 0.0f) {
        var_f20_60 = -var_f20_60;
    }
    arg0->unk4 = var_f20_107;
    func_00214890(&sp40, arg3, arg5, var_f20_60);
    temp_f20_83 = func_001F9AB0(&sp40, sp_slot);
    var_f0_84 = func_001F9AF0(sp_slot);
    if (var_f0_84 == 0.0f) {
        var_f0_84 = 0.0001f;
    }
    temp_f21_96 = 1.5707964f - func_001F9DF8(temp_f20_83 / var_f0_84);
    func_001F9BF8(&sp30, sp_slot, 1.0f);
    var_f20_107 = -temp_f21_96;
    if (func_001F9AB0(arg5, &sp30) < 0.0f) {
        var_f20_107 = temp_f21_96;
    }
    arg0->unk0 = var_f20_60;
    arg0->unk8 = func_001F9AF0(sp_slot);
}
#endif /* NON_MATCHING */
