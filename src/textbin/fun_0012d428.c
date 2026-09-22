#include "types.h"
struct M2c_arg0 {
    u8 pad_0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 pad_4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
};

extern s32 TimeToBcd(u8 value);
void FUN_0012d428(struct M2c_arg0 *arg0) {
    arg0->unk7 = TimeToBcd(arg0->unk7);
    arg0->unk6 = TimeToBcd(arg0->unk6);
    arg0->unk5 = TimeToBcd(arg0->unk5);
    arg0->unk3 = TimeToBcd(arg0->unk3);
    arg0->unk2 = TimeToBcd(arg0->unk2);
    arg0->unk1 = TimeToBcd(arg0->unk1);
}
