#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/banks/snd_bank_load_from_ee_cb/FUN_0012e088.s", FUN_0012e088);
#else
#include "types.h"
extern s32 D_0015EC88;
extern s32 D_0015ECC8;
extern s32 D_0015ECD0;
extern s64 D_0015ECD8[];
extern u32 D_0015ED00[];
extern s32 D_00137B40[];
extern u8 D_0015EBE8[];
extern char D_00153EC0[];
extern char D_00153EF8[];
extern char D_00153D20[];
extern s32 printf(const char *, ...);
extern s32 func_0012EE08(s32);
extern s32 func_0012DC80(void);
extern s32 FlushCache(s32);
extern s32 SceSifCheckStatRpc(void *);
extern s32 sceSifCallRpc(void *, s32, s32, void *, s32, void *, s32, void *, void *);
void FUN_0012e088(s32 cmd, s32 arg, s64 data) {
    D_0015EC88 = 0;
    if (D_0015ECC8 != 0) {
        printf(D_00153EC0);
        return;
    }
    if (func_0012EE08(1) == 1) {
        printf(D_00153EF8);
        return;
    }
    D_00137B40[0] = cmd;
    D_0015ED00[0] = 0xFFFFFFFF;
    D_0015ECD0 = arg;
    D_0015ECD8[0] = data;
    while (SceSifCheckStatRpc(D_0015EBE8) != 0) {
        printf(D_00153D20);
        func_0012DC80();
        FlushCache(0);
    }
    D_0015ECC8 = 1;
    sceSifCallRpc(D_0015EBE8, 0x57, 1, D_00137B40, 4, D_0015ED00, 4, 0, 0);
}
#endif /* NON_MATCHING */
