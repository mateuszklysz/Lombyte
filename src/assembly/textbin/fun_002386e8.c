/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002386e8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002386e8/FUN_002386e8.s", FUN_002386e8);
#else
#include "rnc/assembly_textbin_fun_002386e8_types.h"
#include "types.h"




extern u8 D_001863D0[];
extern struct M2c_D_001E63C0 D_001E63C0;
extern s32 func_001F99A8();
extern s32 func_001FB8F0();
extern s32 func_001FF960();
extern s32 func_001FFC30();
void FUN_002386e8(void) {
    s32 temp_16_37;
    s32 temp_3_164;
    s32 var_16_146;
    s32 var_17_147;
    s32 var_18_35;
    s32 var_19_33;
    s32 var_2_173;
    s32 var_2_76;
    u16 temp_4_172;
    u16 temp_4_75;
    struct M2c_var_16_67 *var_16_67;

    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    if (D_001E63C0.unk210 < 8) {
        var_19_33 = 0xC;
        var_18_35 = 0;
        temp_16_37 = D_001E63C0.unk58 * 0x38;
        func_001FB8F0(temp_16_37 + 8, 2, temp_16_37 + 0x40, 0x3A, 0x200, 0x80, ((func_001F99A8(((D_001E63C0.unk4 * 4) & 0x3F) - 0x20) + 0x40) * 0x10202) | 0x80000000);
        func_001FB8F0(temp_16_37 + 0xA, 4, temp_16_37 + 0x3E, 0x38, 0x200, 0x80, 0x80000000);
        if (D_001E63C0.unk210 > 0) {
            var_16_67 = ((u8 *)&D_001E63C0 + 0xD4);
            do {
                temp_4_75 = *(s32 *)((u8 *)((*(s32 *)((u8 *)var_16_67 - 0x4) * 0x4C) + D_001863D0) + 0x38);
                if (var_16_67->unk0 == 1) {
                    var_2_76 = func_001FF960(temp_4_75, 2);
                } else {
                    var_2_76 = func_001FF960(temp_4_75, 0);
                }
                func_001FFC30(var_2_76, var_19_33, 6, 0x30, 0x30, 0x80);
                var_18_35 += 1;
                var_19_33 += 0x38;
                var_16_67 += 0x14;
            } while (var_18_35 < D_001E63C0.unk210);
        }
    } else {
        if (D_001E63C0.unk4C < 0) {
            D_001E63C0.unk4C = (s32) (D_001E63C0.unk4C + 4);
        } else if (D_001E63C0.unk4C > 0) {
            D_001E63C0.unk4C = (s32) (D_001E63C0.unk4C - 4);
        } else {
            func_001FB8F0(0xB0, 2, 0xE8, 0x3A, 0x200, 0x80, ((func_001F99A8(((D_001E63C0.unk4 * 4) & 0x3F) - 0x20) + 0x40) * 0x10202) - 0x80000000);
            func_001FB8F0(0xB2, 4, 0xE6, 0x38, 0x200, 0x80, 0x80000000);
        }
        var_16_146 = D_001E63C0.unk4C - 0x64;
        var_17_147 = -2;
        do {
            temp_3_164 = ((s32) ((D_001E63C0.unk210 * 2) + var_17_147 + (D_001E63C0.unk58 - 3)) % (s32) D_001E63C0.unk210) * 0x14;
            temp_4_172 = *(s32 *)((u8 *)((*(temp_3_164 + (((u8 *)&D_001E63C0 + 0xD0))) * 0x4C) + D_001863D0) + 0x38);
            if (*(temp_3_164 + (((u8 *)&D_001E63C0 + 0xD4))) == 1) {
                var_2_173 = func_001FF960(temp_4_172, 2);
            } else {
                var_2_173 = func_001FF960(temp_4_172, 0);
            }
            var_17_147 += 1;
            func_001FFC30(var_2_173, var_16_146, 6, 0x30, 0x30, 0x80808080);
            var_16_146 += 0x38;
        } while (var_17_147 < 9);
    }
}
#endif /* NON_MATCHING */
