#include "types.h"
extern s32 D_0015EEB8[];
extern s32 sceGsPutDispEnv();
void put_disp_buffer(void) __asm__("FUN_001fb2a8");

void put_disp_buffer(void) {
    sceGsPutDispEnv(D_0015EEB8[0]);
}

extern __typeof__(put_disp_buffer) func_001FB2A8 __attribute__((alias("FUN_001fb2a8")));
