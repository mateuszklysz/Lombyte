#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f2588/FUN_001f2588.s", FUN_001f2588);
#else
#include "rnc/assembly_textbin_fun_001f2588_types.h"
#include "types.h"


extern s32 D_0015F484;
extern s32 D_0015F485;
extern s32 D_0015F486;
extern s32 D_0015F488;
extern s32 D_0015F48C;
extern s32 D_0015F490[];
extern s32 D_0015F494;
extern s32 D_0015F498;
extern s32 D_001600BC;
extern s32 D_001610C4;
extern s32 D_001610C5;
extern s32 D_001610C6;
extern s32 D_001610C8;
extern s32 D_001610CC;
extern s32 D_001610D0;
extern s32 D_001610D4;
extern s32 D_001872D4[];
extern struct M2c_D_0018CD00 D_0018CD00;
extern s32 func_001F2D98();
void FUN_001f2588(void) {
    u8 var_4_15;
    u8 var_5_12;
    u8 var_6_16;

    if (D_001872D4[0] != 0) {
        var_5_12 = *(s32 *)0x1610C5;
        var_4_15 = D_001610C6;
        var_6_16 = 0x40000;
        D_0018CD00.unk230 = (s32) D_001610C4;
        D_0018CD00.unk22C = (f32) D_001610D4;
        D_0018CD00.unk234 = (s32) var_5_12;
        D_0018CD00.unk238 = (s32) var_4_15;
        D_0018CD00.unk218 = (f32) D_001610C8;
        D_0018CD00.unk21C = (f32) D_001610CC;
        D_0018CD00.unk228 = (f32) D_001610D0;
        *(s32 *)0x1600BC = 0x40000;
    } else {
        var_4_15 = D_0015F484;
        var_6_16 = D_0015F485;
        var_5_12 = D_0015F486;
        D_0018CD00.unk230 = (s32) var_4_15;
        D_0018CD00.unk22C = (f32) D_0015F494;
        D_0018CD00.unk234 = (s32) var_6_16;
        D_0018CD00.unk238 = (s32) var_5_12;
        D_0018CD00.unk218 = (f32) D_0015F488;
        D_0018CD00.unk21C = (f32) D_0015F48C;
        D_0018CD00.unk228 = (f32) D_0015F490[0];
        *(s32 *)0x1600BC = 0x1F4000;
    }
    func_001F2D98(var_4_15, var_5_12, var_6_16);
    *(s32 *)0x15F498 = 0;
}
#endif /* NON_MATCHING */
