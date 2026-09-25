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

extern s32 BcdToTime(u8 value);

void decode_bcd_time_fields(struct M2c_arg0 *arg0) __asm__("FUN_0012d3c0");

void decode_bcd_time_fields(struct M2c_arg0 *arg0) {
    arg0->unk7 = BcdToTime(arg0->unk7);
    arg0->unk6 = BcdToTime(arg0->unk6);
    arg0->unk5 = BcdToTime(arg0->unk5);
    arg0->unk3 = BcdToTime(arg0->unk3);
    arg0->unk2 = BcdToTime(arg0->unk2);
    arg0->unk1 = BcdToTime(arg0->unk1);
}

extern void func_0012D3C0(struct M2c_arg0 *) __attribute__((alias("FUN_0012d3c0")));
