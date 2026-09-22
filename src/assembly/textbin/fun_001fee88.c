#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fee88/FUN_001fee88.s", FUN_001fee88);
#else
#include "rnc/assembly_textbin_fun_001fee88_types.h"
#include "types.h"






extern u8 D_0015F6D8[];
extern struct M2c_D_0015FA00 *D_0015FA00;
extern s32 D_0015FA04;
extern s32 D_0015FA08;
extern s32 D_0015FA0C[];
extern u8 D_00199B60[];
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001F9810();
extern s32 func_001FF288();
extern s32 func_001FF308();
/* retail small-data globals, declared to GAS before the body */
__asm__(".extern D_0015FA04, 4");

void FUN_001fee88(void) {
    s32 temp_4_23;
    s32 var_17_14;
    s32 *temp_2_41;
    struct M2c_var_16_16 *var_16_16;

    var_17_14 = 0;
    var_16_16 = D_00199B60 + 0x24;
    D_0019A3E8.unk0 = 0;
    D_0019A3E8.unk4 = 0;
    do {
        var_16_16->unk40 = -1;
        temp_4_23 = var_17_14;
        *(s32 *)((u8 *)var_16_16 - 0x4) = 0x10000;
        var_17_14 += 1;
        func_001FF308(temp_4_23, 0xFFFF, 0, 0, 0, 0, 1);
        var_16_16->unk58 = 0;
        var_16_16->unk48 = -6;
        *(s32 *)((u8 *)var_16_16 - 0x20) = 0;
        var_16_16->unk0 = 0;
        var_16_16 += 0x90;
    } while (var_17_14 < 0xD);
    temp_2_41 = D_0015FA00;
    if (temp_2_41 == NULL) {
        D_0015FA00 = func_001FF288(0x2800, 0, D_0015F6D8, 0x115);
        D_0015FA0C[0] = func_001FF288(0x1400, 0, D_0015F6D8, 0x116);
    }
    D_0015FA08 = temp_2_41 + 0x2800;
    D_0015FA04 = temp_2_41;
    func_001F9810(temp_2_41, 0x2800);
    D_0015FA00->unk20 = 0xFF;
}
#endif /* NON_MATCHING */
