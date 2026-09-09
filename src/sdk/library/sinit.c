#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x38];
    s32 unk38;
    s32 unk3C;
    u8 pad_40[0x198];
    s32 unk1D8;
    s32 unk1DC;
    s32 unk1E0;
};

extern u8 D_00113AC8[];
extern s32 std();
void __sinit(struct M2c_arg0 *arg0) {
    register s32 temp_17_10 __asm__("v0");
    s32 *temp_17_9;

    temp_17_9 = ((u8 *)arg0 + (0x1E4));
    arg0->unk3C = D_00113AC8;
    arg0->unk38 = 1;
    std(temp_17_9, 4, 0, arg0);
    std(((u8 *)arg0 + (0x23C)), 9, 1, arg0);
    std(((u8 *)arg0 + (0x294)), 0xA, 2, arg0);
    arg0->unk1E0 = temp_17_9;
    temp_17_10 = 3;
    arg0->unk1DC = temp_17_10;
    arg0->unk1D8 = 0;
}
