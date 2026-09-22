#include "types.h"
extern s32 D_0015F468;
extern u8 D_0018DD40[];
extern u8 D_0018DE40[];
void FUN_001f47b8(s32 arg0, s32 arg1) {
    s32 off;

    if (D_0015F468 < 0x40) {
        off = D_0015F468 * 4;
        *(s32 *)(off + D_0018DD40) = arg0;
        *(s32 *)(off + D_0018DE40) = arg1;
        D_0015F468 += 1;
    }
}
