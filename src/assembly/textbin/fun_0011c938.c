#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0011c938/FUN_0011c938.s", FUN_0011c938);
#else
#include "types.h"
extern s32 D_0012FCAC[];
extern u8 D_00158040[];
extern u8 D_00158080[];
extern u8 D_001580C0[];
extern s32 sceSifCallRpc();
s32 FUN_0011c938(s32 arg0) {
    s32 var_2_28;

    if (D_0012FCAC[0] < 0) {
        return 0;
    }
    *(s32 *)D_001580C0 = arg0;
    var_2_28 = *(s32 *)D_00158080;
    if (sceSifCallRpc(D_00158040, 2, 0, D_001580C0, 4, D_00158080, 4, 0, 0) < 0) {
        var_2_28 = -1;
    }
    return var_2_28;
}
#endif /* NON_MATCHING */
