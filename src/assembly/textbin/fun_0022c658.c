/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0022c658
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c658/FUN_0022c658.s", FUN_0022c658);
#else
#include "rnc/assembly_textbin_fun_0022c658_types.h"
#include "types.h"


extern u8 D_00187080[];
extern s32 func_001EFA68();
extern s32 func_001F9A10();
extern s32 func_001F9A28();
extern s32 func_001F9A68();
extern s32 func_001F9C90();
void FUN_0022c658(struct M2c_arg0 *arg0, s32 arg1) {
u8 sp_slot[0x50];    func_001F9A28(sp_slot, ((u8 *)arg0 + (0x20)), D_00187080);
    func_001F9A68(sp_slot, sp_slot, 0x3F400000);
    func_001F9C90(sp_slot, sp_slot, 0x42800000);
    func_001F9A10(sp_slot, sp_slot, D_00187080);
    func_001EFA68(arg1, sp_slot, 0x82, arg0->unk18, 0);
}
#endif /* NON_MATCHING */
