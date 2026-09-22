#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/music_stop/FUN_00215ee8.s", FUN_00215ee8);
#else
#include "types.h"

struct M2c_D_001516D0 {
    s32 unk0;
    u8 pad_4[0x18];
    s32 unk1C;
    s16 unk20;
    s8 unk22;
    s8 unk23;
    u8 pad_24[0xC];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    s32 unk34;
    s16 unk38;
    u8 pad_3A[0x2];
    s16 unk3C;
    s16 unk3E;
    u8 pad_40[0x10];
    s32 unk50;
    u8 pad_54[0x4];
    s16 unk58;
    s16 unk5A;
    u8 pad_5C[0x10];
    s32 unk6C;
    u8 pad_70[0x4];
    s16 unk74;
    s16 unk76;
};


extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012DC80();
extern s32 func_0012EBD0();
extern s32 func_0012ED30();
void FUN_00215ee8(void) {
    s32 cur;

    if (D_001516D0.unk34 == 0xFFFFFFFF) {
        do {
            func_0012DC80();
        } while (D_001516D0.unk34 == 0xFFFFFFFF);
    }
    if (D_001516D0.unk6C == 0xFFFFFFFF) {
        do {
            func_0012DC80();
        } while (D_001516D0.unk6C == 0xFFFFFFFF);
    }
    if (D_001516D0.unk50 == 0xFFFFFFFF) {
        do {
            func_0012DC80();
        } while (D_001516D0.unk50 == 0xFFFFFFFF);
    }
    func_0012EBD0();
    do {

    } while (func_0012DC80() != 0);
    func_0012ED30(1);
    cur = D_001516D0.unk22;
    D_001516D0.unk3E = 0;
    D_001516D0.unk3C = 0;
    D_001516D0.unk34 = 0;
    if (cur != -1) {
        D_001516D0.unk38 = cur;
    }
    D_001516D0.unk23 = -1;
    D_001516D0.unk5A = 0;
    D_001516D0.unk58 = 0;
    D_001516D0.unk50 = 0;
    D_001516D0.unk76 = 0;
    D_001516D0.unk74 = 0;
    D_001516D0.unk6C = 0;
    D_001516D0.unk20 = 0;
    D_001516D0.unk22 = -1;
}
#endif /* NON_MATCHING */
