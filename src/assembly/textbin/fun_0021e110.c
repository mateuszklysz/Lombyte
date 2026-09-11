/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021e110
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 69.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e110/FUN_0021e110.s", FUN_0021e110);
#else
#include "rnc/assembly_textbin_fun_0021e110_types.h"
#include "types.h"






extern u8 D_0013D4C0[];
extern struct M2c_D_001D5BF4 *D_001D5BF4;
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F7580();
extern s32 func_001FDD10();
extern s32 func_0020D330();
extern s32 func_00226778();
s32 FUN_0021e110(struct M2c_arg0 *arg0) {
u8 sp_slot[0x40];    s32 temp_4_23;
    s32 temp_4_31;
    s32 var_2_33;
    struct M2c_temp_2_14 *temp_2_14;

    temp_2_14 = D_001D5BF4->unk40;
    if (*(*(s32 *)((u8 *)((temp_2_14->unk3C * 0xA) + temp_2_14->unk48) + 0x6) + D_0013D4C0) == 0) {
        goto block_2;
    }
    temp_4_23 = arg0->unk44;
    goto block_4;
block_2:
    return 0;
block_4:
    if (temp_4_23 == 0) {
        goto block_7;
    }
    func_0020D330(temp_4_23, 1, D_001D5BF4, 0xA);
    temp_4_31 = arg0->unk48;
    var_2_33 = 8;
    if (temp_4_31 == 0) {
        goto block_8;
    }
    func_0020D330(temp_4_31, 1);
    return 8;
block_7:
    func_001F4280(0, D_0013D4C0, D_001D5BF4, 0xA);
    func_00226778(sp_slot, arg0);
    func_001F7580(sp_slot, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4F4D, 0x10, 3), -1);
    func_001F4398();
    var_2_33 = 2;
block_8:
    return var_2_33;
}
#endif /* NON_MATCHING */
