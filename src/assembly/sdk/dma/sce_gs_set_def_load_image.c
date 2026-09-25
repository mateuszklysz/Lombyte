#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceGsSetDefLoadImage; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma/sce_gs_set_def_load_image/sceGsSetDefLoadImage.s", sceGsSetDefLoadImage);
#else
#include "types.h"
struct M2c_arg0 {
    s64 unk0;
    s64 unk8;
    s64 unk10;
    s32 unk18;
    u8 pad_1C[0x4];
    s64 unk20;
    s32 unk28;
    u8 pad_2C[0x4];
    s64 unk30;
    s32 unk38;
    u8 pad_3C[0x4];
    s32 unk40;
    u8 pad_44[0x4];
    s32 unk48;
    u8 pad_4C[0x4];
    s64 unk50;
};

extern u8 D_001530B0[];
extern s32 scePrintf();
s32 sceGsSetDefLoadImage(struct M2c_arg0 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7) {
    s64 temp_2_62;
    s32 var_6_22;

    var_6_22 = 0;
    switch (arg3) {
    case 0x0:
    case 0x30:
        var_6_22 = (s32) (arg6 * arg7) >> 2;
        break;
    case 0x1:
    case 0x31:
        var_6_22 = (s32) (arg6 * arg7 * 3) >> 4;
        break;
    case 0x2:
    case 0xA:
    case 0x32:
    case 0x3A:
        var_6_22 = (s32) (arg6 * arg7) >> 3;
        break;
    case 0x13:
    case 0x1B:
        var_6_22 = (s32) (arg6 * arg7) >> 4;
        break;
    case 0x14:
    case 0x24:
    case 0x2C:
        var_6_22 = (s32) (arg6 * arg7) >> 5;
        break;
    }
    if (var_6_22 > 0x7FFF) {
        scePrintf(D_001530B0, arg1 << 0x10, var_6_22, arg1, arg7, arg5 << 0x10, arg6, arg7 << 0x10);
        return 0;
    }
    temp_2_62 = /* m2c-unknown:  unknown instruction: por $v0, $zero, $zero  */
    arg0->unk50 = temp_2_62;
    arg0->unk0 = temp_2_62;
    arg0->unk50 = (s64) (((((s64) arg0->unk50 & ~0x7FFF) | (var_6_22 & 0x7FFF) | 0x8000) & ((((0xF3FFFFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | (0x8000 << 0x2C));
    arg0->unk0 = (s64) (((((s64) arg0->unk0 & ~0x7FFF) | 4) & (-1U >> 4)) | (0x8000 << 0x2D));
    arg0->unk8 = (s64) ((arg0->unk8 & ~0xF) | 0xE);
    arg0->unk10 = (s64) (((s64) ((s64) arg1 << 0x30) >> 0x10) | ((s64) arg2 << 0x30) | ((s64) arg3 << 0x38));
    arg0->unk18 = 0x50;
    arg0->unk20 = (s64) (((s64) ((s64) arg4 << 0x30) >> 0x10) | ((s64) arg5 << 0x30));
    arg0->unk28 = 0x51;
    arg0->unk30 = (s64) (((s64) ((s64) arg6 << 0x30) >> 0x30) | ((s64) ((s64) arg7 << 0x30) >> 0x10));
    arg0->unk38 = 0x52;
    arg0->unk48 = 0x53;
    arg0->unk40 = 0;
    M2C_SYNC();
    return 6;
}
#endif /* NON_MATCHING */
