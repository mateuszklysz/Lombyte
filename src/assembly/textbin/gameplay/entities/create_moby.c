#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/entities/create_moby/FUN_0020c4f8.s", FUN_0020c4f8);
#else
#include "types.h"
extern s32 D_0015F60C;
extern s32 D_0015FEFC;
extern s32 D_0015FF1C;
extern s32 D_0015FF20;
extern s32 D_0015FF28;
extern u8 D_001E83C0[];
extern void DebugPrint();
extern void FillTransferWords();
extern void func_0020C5F0();
s32 *create_moby(s32 arg0, s32 arg3) __asm__("FUN_0020c4f8");

s32 *create_moby(s32 arg0, s32 arg3) {
    s32 temp_3_42;
    s32 var_7_0;
    u32 var_16_9;
    u8 var_4_15;

    var_7_0 = arg3;
    var_16_9 = D_0015FF1C;
    if (var_16_9 >= (u32) D_0015FF20) {
        goto block_16;
    }
    var_7_0 = 0xFF;
    var_4_15 = *(s32 *)((u8 *)var_16_9 + 0x20);
loop_2:
    if (var_4_15 >= 0xFEU) {
        goto block_4;
    }
    var_16_9 += 0x100;
    goto block_13;
block_4:
    if ((u32) D_0015F60C >= (u64) *(s32 *)((u8 *)var_16_9 + 0x38)) {
        goto block_7;
    }
    var_16_9 += 0x100;
    goto block_13;
block_7:
    if (var_4_15 != 0xFF) {
        goto block_10;
    }
    *(s32 *)((u8 *)var_16_9 + 0x120) = var_4_15;
block_10:
    func_0020C5F0((void *) var_16_9, arg0, arg0, 0xFF);
    temp_3_42 = D_0015FF28 + (((s32) (var_16_9 - D_0015FF1C) >> 8) << 7);
    *(s32 *)((u8 *)var_16_9 + 0x78) = temp_3_42;
    FillTransferWords(temp_3_42, 0, 0x80);
    if (D_0015FEFC == 0) {
        goto block_12;
    }
    D_0015FEFC -= 1;
block_12:
    return (void *) var_16_9;
block_13:
    if (var_16_9 >= (u32) D_0015FF20) {
        goto block_15;
    }
    var_4_15 = *(s32 *)((u8 *)var_16_9 + 0x20);
    goto loop_2;
block_15:
block_16:
    DebugPrint(D_001E83C0, D_0015F60C, arg0, var_7_0);
    return NULL;
}
#endif /* NON_MATCHING */
