/* ROLE: recovered function `audioDecReset__FP9_AudioDec` (movie/audiodec.cpp, 0x48 bytes) starts here; this unit covers only its first fragment. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2). */
#include "types.h"

struct M2c_arg0 {
    s32 unk0;
    u8 pad_4[0x2C];
    s32 unk30;
    u8 pad_34[0x4];
    s32 unk38;
    s32 unk3C;
    u8 pad_40[0x4];
    s32 unk44;
    u8 pad_48[0x8];
    s32 unk50;
    u8 pad_54[0x4];
    s32 unk58;
    s32 unk5C;
};
extern s32 func_0012F0A8();
void FUN_0023ad10(struct M2c_arg0 *arg0) {
    func_0012F0A8();
    arg0->unk0 = 0;
    arg0->unk30 = 0;
    arg0->unk38 = 0;
    arg0->unk3C = 0;
    arg0->unk44 = 0;
    arg0->unk50 = 0;
    arg0->unk58 = 0;
    arg0->unk5C = 0;
}
