#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x590];
    s32 unk590;
    s32 unk594;
    u8 pad_598[0x138];
    s32 unk6D0;
    s32 unk6D4;
    u8 pad_6D8[0x138];
    s32 unk810;
};

extern s32 _ipuSetMPEG1();
void _clearOnce(struct M2c_arg0 *arg0) {
    register u32 value_590 __asm__("s1");
    register u32 value_594 __asm__("v0");
    register u32 value_6D0 __asm__("v1");
    register u32 value_6D4 __asm__("a0");

    _ipuSetMPEG1(1);
    value_590 = 0x70000000;
    value_594 = 0x70001800;
    value_6D0 = 0x70001B00;
    value_6D4 = 0x70003300;
    arg0->unk590 = value_590;
    arg0->unk594 = value_594;
    arg0->unk6D0 = value_6D0;
    arg0->unk6D4 = value_6D4;
    arg0->unk810 = 0;
}
