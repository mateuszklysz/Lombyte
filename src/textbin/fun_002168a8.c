#include "types.h"
#include "rnc/assembly_textbin_fun_002168a8_types.h"
extern struct M2c_D_001516D0 D_001516D0;

extern void ReadGlobalTableEntry(void);
extern s32 func_0012DC80();
extern s32 func_0012EB00();
extern s32 func_00216290();
extern s32 sceGsSyncV();
s16 FUN_002168a8(s32 arg0) {
    if (arg0 != 0) {
        if (D_001516D0.unk8 != 0) {
            do {
                sceGsSyncV(0);
                func_00216290();
                func_0012EB00();
                func_0012DC80();
                ReadGlobalTableEntry();
            } while (D_001516D0.unk8 != 0);
        }
    } else {
        func_00216290();
        func_0012EB00();
        func_0012DC80();
        ReadGlobalTableEntry();
    }
    return D_001516D0.unk8;
}
