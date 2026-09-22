#include "types.h"
#include "rnc/assembly_textbin_fun_00216828_types.h"
extern struct M2c_D_001516D0 D_001516D0;

extern void ReadGlobalTableEntry(void);
extern s32 func_0012DC80();
extern s32 func_0012EB00();
extern s32 func_00216290();
extern s32 FUN_00216788(s32 arg0, s32 arg1, s32 arg2);
extern s32 sceGsSyncV();

s32 FUN_00216828(s32 arg0, s32 arg1, s32 arg2) {
    s32 result = FUN_00216788(arg0, arg1, arg2);

    if (result != 0 && D_001516D0.unk8 != 0) {
        do {
            sceGsSyncV(0);
            func_00216290();
            func_0012EB00();
            func_0012DC80();
            ReadGlobalTableEntry();
        } while (D_001516D0.unk8 != 0);
    }
    return result;
}

extern s32 func_00216828(s32 arg0, s32 arg1, s32 arg2) __attribute__((alias("FUN_00216828")));
