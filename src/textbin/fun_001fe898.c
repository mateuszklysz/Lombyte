/*
STATE: C_EXACT
SYMBOL: FUN_001fe898
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc2.95.2-v2.73a cc1 + SN Ps2EeAs (padless, run-7 resume 2026-09-12)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
struct M2c_D_001996D0 {
    s32 unk0;
    s32 unk4;
    u8 pad_8[0x8];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

extern struct M2c_D_001996D0 D_001996D0;
extern s32 func_001F44B8();
extern s32 func_001F5450();
extern s32 func_001F5F18();
void FUN_001fe898(void) {
    s32 var_16_27;
    s64 call;
    D_001996D0.unk18 = 0x20;
    D_001996D0.unk1C = 0x20;
    func_001F5F18(D_001996D0.unk14 - 0x20, D_001996D0.unk14 + 0x20, D_001996D0.unk10 - 0x20, D_001996D0.unk10 + 0x20, 0x60);
    if ((D_001996D0.unk0 == 1) || (var_16_27 = 0x7E, (D_001996D0.unk0 == 7))) {
        var_16_27 = D_001996D0.unk4 * 0x15;
    }
    var_16_27 = (var_16_27 < 0x81) ? var_16_27 : 0x80;
    call = (u64) func_001F44B8(4);
    __asm__ __volatile__("" : "+r"(call));
    func_001F5450(D_001996D0.unk10 - 0x20, D_001996D0.unk14 - 0x20, 0x40, 0x40, 0, 0, 0x40, 0x40, (u64) ((var_16_27 << 0x18) | 0x808080), call);
}
