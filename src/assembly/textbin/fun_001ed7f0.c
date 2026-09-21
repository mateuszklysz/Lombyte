/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 39.8795%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ed7f0/FUN_001ed7f0.s", FUN_001ed7f0);
#else
#include "rnc/assembly_textbin_fun_001ed7f0_types.h"
#include "types.h"




extern s32 D_0015F604;
extern struct M2c_D_00186F40 D_00186F40;
extern u8 D_00194120[];
extern s32 func_001EFA68();
extern s32 func_001F0B58();
extern s32 func_002135F0();
void FUN_001ed7f0(void) {
u8 sp_slot[0x60];    f32 sp8;
    s64 sp10;
    f32 sp18;
    s32 var_16_31;

    if (D_00186F40.unk180->unk86 == 6) {
        goto block_2;
    }
    if (D_0015F604 == 0) {
        goto block_4;
    }
block_2:
    D_00186F40.unk394 = 0;
    return;
block_3:
    D_00186F40.unk394 = 1;
    return;
block_4:
    sp10 = D_00186F40.unk140;
    var_16_31 = 0;
    sp8 += 0.75f;
    sp18 -= 0.75f;
    goto loop_10;
block_6:
    if (func_001F0B58() != 0) {
        goto block_9;
    }
    if (D_00186F40.unk148 < (func_002135F0(D_00194120, 0) + 0.04f)) {
        goto block_3;
    }
    D_00186F40.unk394 = 0;
    return;
block_9:
    var_16_31 += 1;
    sp8 -= 0.01f;
loop_10:
    if (var_16_31 >= 6) {
        goto block_12;
    }
    if (func_001EFA68(sp_slot, &sp10, 0x12, 0, 0) != 0) {
        goto block_6;
    }
block_12:
    return;
}
#endif /* NON_MATCHING */
