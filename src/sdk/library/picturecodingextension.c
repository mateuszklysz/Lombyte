/*
STATE: C_EXACT
SYMBOL: _pictureCodingExtension
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: cc_himuro_patched -O2 -g2 -mastra-volatile-delay -mastra-sd-saves; Ps2EeAs + padless at-store policy
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0xD4];
    s32 unkD4;
    u8 pad_D8[0x8C];
    s32 unk164;
    s32 unk168;
    s32 unk16C;
    s32 unk170;
    s32 unk174;
    s32 unk178;
    s32 unk17C;
    s32 unk180;
    s32 unk184;
    s32 unk188;
};

extern s32 _nextBit();
void _pictureCodingExtension(struct M2c_arg0 *arg0) {
    s32 temp_2_35;
    s32 temp_6_65;
    s32 temp_6_77;
    s32 temp_6_89;

    arg0->unk164 = _nextBit(arg0, 4);
    arg0->unk168 = _nextBit(arg0, 4);
    arg0->unk16C = _nextBit(arg0, 4);
    arg0->unk170 = _nextBit(arg0, 4);
    *(s32 *)0x10002010 = (*(s32 *)0x10002010 & 0xFFFCFFFF) | (_nextBit(arg0, 2) << 0x10);
    temp_2_35 = _nextBit(arg0, 2);
    arg0->unk174 = temp_2_35;
    if (arg0->unkD4 == 0) {
        arg0->unkD4 = temp_2_35;
    }
    arg0->unk178 = _nextBit(arg0, 1);
    arg0->unk17C = _nextBit(arg0, 1);
    arg0->unk180 = _nextBit(arg0, 1);
    temp_6_65 = (*(volatile u32 *)0x10002010 & 0xFFBFFFFF) | (_nextBit(arg0, 1) << 0x16);
    *(volatile u32 *)0x10002010 = temp_6_65;
    temp_6_77 = (*(volatile u32 *)0x10002010 & 0xFFDFFFFF) | (_nextBit(arg0, 1) << 0x15);
    *(volatile u32 *)0x10002010 = temp_6_77;
    temp_6_89 = (*(volatile u32 *)0x10002010 & 0xFFEFFFFF) | (_nextBit(arg0, 1) << 0x14);
    *(volatile u32 *)0x10002010 = temp_6_89;
    arg0->unk184 = _nextBit(arg0, 1);
    _nextBit(arg0, 1);
    arg0->unk188 = _nextBit(arg0, 1);
    if (_nextBit(arg0, 1) != 0) {
        _nextBit(arg0, 1);
        _nextBit(arg0, 3);
        _nextBit(arg0, 1);
        _nextBit(arg0, 7);
        _nextBit(arg0, 8);
    }
}
