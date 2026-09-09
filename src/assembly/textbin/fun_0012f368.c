/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 48.1961%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012f368/FUN_0012f368.s", FUN_0012f368);
#else
#include "types.h"
extern u8 D_0013A448[];
extern u8 D_0013A4E0[];
extern s32 D_0015ED58;
extern s32 func_00120C30();
extern s32 func_00121450();
extern s32 func_00121630();
extern s32 func_00122298();
s32 FUN_0012f368(s32 arg0) {
u8 sp_slot[0x2840];    s8 sp2800;
    u8 sp2801;
    s8 sp2802;
    s8 sp2803;
    u32 var_5_44;
    u8 *temp_4_48;
    u8 temp_3_49;

    sp2800 = 0x20;
    sp2801 = D_0015ED58;
    sp2802 = 0;
    sp2803 = 0;
loop_1:
    func_00121450(*((arg0 * 8) + D_0013A448), 5, sp_slot, &sp2800);
    goto loop_3;
block_2:
    func_00122298(0);
loop_3:
    if (func_00120C30(1) != 0) {
        goto block_2;
    }
    if (func_00121630() == 0) {
        goto block_6;
    }
    goto loop_1;
block_6:
    var_5_44 = 0;
loop_8:
    temp_4_48 = var_5_44 + D_0013A4E0;
    temp_3_49 = *(sp_slot + var_5_44);
    var_5_44 += 1;
    *temp_4_48 = temp_3_49;
    if (var_5_44 < 0x2434U) {
        goto loop_8;
    }
    return 1;
}
#endif /* NON_MATCHING */
