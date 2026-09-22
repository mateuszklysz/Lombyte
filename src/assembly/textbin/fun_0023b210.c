#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023b210/FUN_0023b210.s", FUN_0023b210);
#else
#include "rnc/assembly_textbin_fun_0023b210_types.h"
#include "types.h"




extern u8 D_00151DF0[];
extern s32 D_0015EE84[];
extern s32 D_0015EEB8;
void FUN_0023b210(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16_23;
    s32 temp_7_24;
    s32 var_4_37;
    s32 var_5_0;
    s32 var_8_33;
    struct M2c_var_10_36 *var_10_36;

    var_5_0 = arg1;
    arg0->unk10 = (s64) ((0x8000 << 0x2D) | 2);
    arg0->unk18 = 0xE;
    arg0->unk0 = 0x10000003;
    arg0->unk8 = 0;
    temp_16_23 = arg2 >> 4;
    temp_7_24 = arg3 >> 4;
    arg0->unk28 = 0x50;
    arg0->unk30 = (s64) ((0x8000 << 0x15) | 0x10);
    arg0->unk38 = 0x52;
    var_8_33 = 0;
    arg0->unk20 = (s64) ((((s64) D_0015EE84[0] >> 8) << 0x20) | (0x8000 << 0x24));
    var_10_36 = ((u8 *)arg0 + (0x40));
    if (temp_16_23 > 0) {
        var_4_37 = 0;
        do {
            if (temp_7_24 > 0) {
                do {
                    var_10_36->unk54 = (s32) (var_5_0 & 0x0FFFFFFF);
                    var_10_36->unk0 = 0x10000004;
                    var_10_36->unk20 = (s64) (((var_8_33 * 0x10) << 0x20) | ((var_4_37 * 0x10) << 0x30));
                    var_4_37 += 1;
                    var_10_36->unk8 = 0;
                    var_5_0 += 0x400;
                    var_10_36->unk10 = (s64) ((0x8000 << 0x2D) | 2);
                    var_10_36->unk18 = 0xE;
                    var_10_36->unk28 = 0x51;
                    var_10_36->unk30 = 0;
                    var_10_36->unk38 = 0x53;
                    var_10_36->unk40 = (s64) ((0x8000 << 0x2C) | 0x40);
                    var_10_36->unk48 = 0;
                    var_10_36->unk50 = 0x30000040;
                    var_10_36->unk58 = 0;
                    var_10_36 += 0x60;
                } while (var_4_37 < temp_7_24);
            }
            var_8_33 += 1;
            var_4_37 = 0;
        } while (var_8_33 < temp_16_23);
    }
    var_10_36->unk0 = 0x30000009;
    var_10_36->unkC = 0x50000009;
    var_10_36->unk4 = (s32) ((*(s32 *)0x15EEB8 + 0xC0) & 0x0FFFFFFF);
    var_10_36->unk8 = 0;
    var_10_36->unk10 = 0x30000025;
    var_10_36->unk14 = D_00151DF0;
    var_10_36->unk1C = 0x50000025;
    var_10_36->unk18 = 0;
    var_10_36->unk20 = 0x70000000;
    *(s32 *)((u8 *)(((u8 *)var_10_36 + (0x20))) + 0x8) = 0;
}
#endif /* NON_MATCHING */
