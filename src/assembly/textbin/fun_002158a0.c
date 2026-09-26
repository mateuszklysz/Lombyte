#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002158a0/FUN_002158a0.s", FUN_002158a0);
#else
#include "types.h"
#include "rnc/d_001516d0.h"

extern u8 D_00137B80[];
extern struct M2c_D_001516D0 D_001516D0;
extern void func_002169C0();
extern void func_0012EC08(s32, s32, s32, s32, s16, s32, s32, s32, s32, void (*)(), u64);

void FUN_002158a0(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    s32 *entry;
    struct M2c_D_001516D0 *d;

    p = D_00137B80;
    p += (arg0 - 0x2710) * 8;
    entry = (s32 *)p;
    if (entry[0x68] != 0) {
        if (D_001516D0.unk50 == 0) {
            d = &D_001516D0;
            *(u32 *)&d->unk50 = 0xFFFFFFFF;
            d->unk5A = 1;
            d->unk54 = arg0;
            d->unk58 = arg1;
            d->unk64 = 0xA;
            d->unk68 = 0xBB80;
            d->unk56 = arg2;
            d->unk60 = 0;
            func_0012EC08(entry[0x68], 0, 0, 0, arg2, 0, 2, 0, 0x21, func_002169C0, (u32)&d->unk50);
        }
    }
}
#endif /* NON_MATCHING */
