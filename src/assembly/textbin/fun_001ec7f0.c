#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ec7f0/FUN_001ec7f0.s", FUN_001ec7f0);
#else
#include "types.h"
struct M2c_D_001871B0 {
    u8 pad_0[0x2];
    u8 unk2;
    s32 unk3;
    u8 pad_7[0x49];
    s32 unk50;
    u8 pad_54[0x6C];
    s64 unkC0;
    u8 pad_C8[0x8];
    s64 unkD0;
};

extern u8 D_0013F490[];
extern struct M2c_D_001871B0 D_001871B0;
extern s32 func_001F9A10();
void FUN_001ec7f0(void) {
    s64 *var_4_18;
    s32 *temp_5_11;

    if (D_001871B0.unk2 == 0) {
        temp_5_11 = ((u8 *)&D_001871B0 + 0xC0);
        D_001871B0.unkC0 = (s64) D_001871B0.unk50;
        var_4_18 = ((u8 *)&D_001871B0 + 0x60);
        if (D_001871B0.unk3 == 2) {
            func_001F9A10(temp_5_11, D_0013F490, temp_5_11);
            var_4_18 = ((u8 *)&D_001871B0 + 0x60);
        }
        D_001871B0.unkD0 = (s64) *var_4_18;
    }
}
#endif /* NON_MATCHING */
