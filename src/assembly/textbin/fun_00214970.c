#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214970/FUN_00214970.s", FUN_00214970);
#else
#include "types.h"

extern f32 D_0015ED60;
extern f32 D_0015ED64;
extern f32 D_0015ED68;
extern f32 D_0015ED6C;
extern f32 D_0015ED70;
extern f32 D_0015ED74;
extern s32 D_0015ED78;
extern f32 D_0015ED7C;
extern s32 D_0015ED80;

void FUN_00214970(s32 arg0) {
    if (arg0 == 0) {
        D_0015ED80 = 0;
        D_0015ED60 = 1.0f;
        D_0015ED68 = 1.0f;
        D_0015ED64 = 1.0f;
        D_0015ED70 = 0.00027777778f;
        D_0015ED74 = 0.0000046296295f;
        D_0015ED78 = 5;
        D_0015ED7C = 0.016666668f;
        D_0015ED6C = 0.016666668f;
        return;
    }
    D_0015ED80 = 1;
    D_0015ED60 = 1.2f;
    D_0015ED64 = 1.44f;
    D_0015ED68 = 0.8333333f;
    D_0015ED6C = 0.020000001f;
    D_0015ED70 = 0.00040000002f;
    D_0015ED74 = 0.000008f;
    D_0015ED78 = 6;
    D_0015ED7C = 0.02f;
}
#endif /* NON_MATCHING */
