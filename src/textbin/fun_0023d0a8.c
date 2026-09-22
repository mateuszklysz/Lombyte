#include "types.h"

extern s32 D_0016120C[];
extern s32 func_0023A770();
extern s32 func_0023BF70();

s32 FUN_0023d0a8(void) {
    register s32 v __asm__("v0");
    func_0023A770();
    v = D_0016120C[0];
    func_0023BF70(v + 0xD9090);
    return 1;
}
