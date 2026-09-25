#include "types.h"

#include "rnc/d_001516d0.h"

extern struct M2c_D_001516D0 D_001516D0;
extern s32 func_0012DC80();
extern s32 func_0012EBD0();
extern s32 func_0012ED30();
void music_stop(void) __asm__("FUN_00215ee8");

void music_stop(void) {
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
    D_001516D0.unk5A = 0;
    D_001516D0.unk58 = 0;
    D_001516D0.unk50 = 0;
    D_001516D0.unk76 = 0;
    D_001516D0.unk74 = 0;
    D_001516D0.unk6C = 0;
    D_001516D0.unk20 = 0;
    D_001516D0.unk22 = -1;
    D_001516D0.unk23 = -1;
}

extern __typeof__(music_stop) func_00215EE8 __attribute__((alias("FUN_00215ee8")));
