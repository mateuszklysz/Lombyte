/*
STATE: C_EXACT
SYMBOL: FUN_0023abd0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    s32 unk0;
    s32 unk4;
    u8 pad_8[0x28];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    u8 pad_54[0x4];
    s32 unk58;
    s32 unk5C;
    s32 unk60;
};

extern s32 D_001612BC[];
extern s32 FUN_0012f068();
extern s32 func_001F9810();
s32 FUN_0023abd0(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2_38;
    register s32 three __asm__("v0");
    register s32 four __asm__("v1");

    func_001F9810(((u8 *)arg0 + (8)), 0x20);
    arg0->unk34 = arg1;
    arg0->unk40 = arg2;
    three = 3;
    arg0->unk4 = three;
    arg0->unk0 = 0;
    arg0->unk30 = 0;
    arg0->unk38 = 0;
    arg0->unk3C = 0;
    arg0->unk44 = 0;
    arg0->unk50 = 0;
    arg0->unk58 = 0;
    arg0->unk5C = 0;
    arg0->unk60 = 0;
    D_001612BC[0] = arg3;
    four = 0x400;
    arg0->unk4C = four;
    temp_2_38 = FUN_0012f068(0x400, 0x1000, 0x400, 0, 5, 3);
    arg0->unk48 = temp_2_38;
    if (temp_2_38 < 0) {
        return 0;
    }
    return 1;
}
