#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012df20/FUN_0012df20.s", FUN_0012df20);
#else
#include "types.h"
struct M2c_D_00137B40 {
    s32 unk0;
    s32 unk4;
};

extern struct M2c_D_00137B40 D_00137B40;
extern u8 D_00153D20[];
extern u8 D_00153DA8[];
extern u8 D_00153DD8[];
extern u8 D_00153DF8[];
extern u8 D_0015EBE8[];
extern s32 D_0015EC88;
extern s32 D_0015ECC8;
extern u8 D_0015ED00[];
extern s32 FlushCache();
extern s32 SceSifCheckStatRpc();
extern s32 func_0012DC80();
extern s32 func_0012EE08();
extern s32 printf();
extern s32 sceSifCallRpc();
/* retail small-data globals, declared to GAS before the body */
__asm__(".extern D_0015EC88, 4");
__asm__(".extern D_0015ECC8, 4");
__asm__(".extern D_0015ED00, 4");

s32 FUN_0012df20(s32 arg0, s32 arg1) {
    s32 *var_4_15;
    s32 temp_2_77;

    D_0015EC88 = 0;
    if (D_0015ECC8 == 0) {
        goto block_2;
    }
    var_4_15 = D_00153DA8;
    goto block_4;
block_2:
    if (func_0012EE08(1) != 1) {
        goto block_5;
    }
    var_4_15 = D_00153DD8;
block_4:
    printf(var_4_15);
    return 0;
block_5:
    D_00137B40.unk4 = arg1;
    *(s32 *)D_0015ED00 = 0xFFFFFFFF;
    D_00137B40.unk0 = arg0;
    goto loop_7;
block_6:
    printf(D_00153D20);
    func_0012DC80();
    FlushCache(0);
loop_7:
    if (SceSifCheckStatRpc(D_0015EBE8) != 0) {
        goto block_6;
    }
    if (sceSifCallRpc(D_0015EBE8, 3, 1, &D_00137B40, 8, D_0015ED00, 4, 0, 0) >= 0) {
        goto block_10;
    }
    printf(D_00153DF8);
    D_0015EC88 = 0x106;
    return 0;
block_10:
    temp_2_77 = *(s32 *)D_0015ED00;
    if (*(s32 *)D_0015ED00 != 0xFFFFFFFF) {
        goto block_13;
    }
loop_12:
    FlushCache(0);
    if (*(s32 *)D_0015ED00 == 0xFFFFFFFF) {
        goto loop_12;
    }
block_13:
    return temp_2_77;
}
#endif /* NON_MATCHING */
