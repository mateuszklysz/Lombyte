#include "types.h"
extern s32 D_0015F5B8;
extern s32 D_0015F638;
extern s32 D_0015F63C;
extern s32 D_00160EF8[];
extern s32 D_00160F00;
extern s32 D_00160F04;
extern s32 D_00160F0C;
extern s32 D_00160F10;
void FUN_00233630(void) {
    s32 temp_3_19;
    s32 temp_4_25;
    s32 temp_6_11;

    temp_6_11 = 1 - D_00160F10;
    temp_3_19 = D_00160EF8[temp_6_11];
    D_00160F04 = D_00160F00;
    D_00160F10 = temp_6_11;
    temp_4_25 = (temp_3_19 + D_00160F0C) - D_0015F5B8;
    D_00160F00 = temp_3_19;
    D_0015F638 = temp_4_25;
    D_0015F63C = temp_4_25 - 0x2000;
}

extern __typeof__(FUN_00233630) func_00233630 __attribute__((alias("FUN_00233630")));
