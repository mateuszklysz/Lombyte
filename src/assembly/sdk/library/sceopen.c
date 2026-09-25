#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceOpen; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceopen/sceOpen.s", sceOpen);
#else
#include "types.h"

typedef char *va_list;

struct M2c_D_00156880 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 unk14[0x400];
    s32 unk414;
};

struct Sema {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    s32 attr;
    s32 option;
};

struct M2c_temp_2_43 {
    s32 unk0;
    s32 unk4;
};

extern s32 D_0012FC94[];
extern s32 D_0012FCA0[];
extern struct M2c_D_00156880 D_00156880;
extern u8 D_001574C0[];
extern u8 D_00157D80[];
extern u8 D_00157F80[];
extern s32 CreateSema();
extern s32 DeleteSema();
extern s32 ReadQueueStatus();
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 _sceFsWaitS();
extern s32 func_0011BBB8();
extern s32 new_iob();
extern s32 sceFsInit();
extern s32 sceSifCallRpc();

s32 sceOpen(u8 *arg0, s32 arg1, ...)
{
    struct Sema sema;
    va_list ap;
    s32 sp30;
    s32 i;
    s8 c;
    s32 arg2_32;
    s32 sema_id;
    s32 temp_21_91;
    s32 temp_17_129;
    struct M2c_temp_2_43 *iob;
    struct M2c_D_00156880 *state;

    state = &D_00156880;
    ap = __builtin_next_arg(arg1) - 0x30;
    _sceFsWaitS(0);
    if (D_0012FC94[0] == 0) {
        sceFsInit();
    }
    if (func_0011BBB8() != 0) {
        ReadQueueStatus();
        return -0x10004;
    }
    iob = new_iob();
    if (iob == NULL) {
        ReadQueueStatus();
        return -0x13;
    }
    i = 0;
    arg2_32 = *(s32 *)ap;
    c = *(s8 *)arg0;
    state->unk14[0] = c;
    if ((c << 0x18) != 0) {
        for (;;) {
            i++;
            if (i >= 0x400) {
                break;
            }
            c = *(s8 *)(arg0 + i);
            state->unk14[i] = c;
            if ((c << 0x18) == 0) {
                break;
            }
        }
    }
    if (i == 0x400) {
        state->unk14[0x3FF] = 0;
    }
block_18:
    temp_21_91 = (s32) (((u8 *)iob - (u8 *)D_00157D80)) >> 4;
    state->unkC = (s32) (arg1 & 0x6FFFFFFF);
    state->unk10 = arg2_32;
    sema.max_count = 1;
    state->unk414 = temp_21_91;
    sema.init_count = 0;
    sema.option = 0;
    sema_id = CreateSema(&sema, i, D_00157D80, arg2_32);
    state->unk4 = &sp30;
    state->unk0 = sema_id;
    state->unk8 = 4;
    if (sceSifCallRpc(D_00157F80, 0, 0, &D_00156880, 0x418, (s32) D_001574C0, 4, 0, 0) >= 0) {
        goto block_20;
    }
    DeleteSema(sema_id);
    ReadQueueStatus();
    return -0xB;
block_20:
    temp_17_129 = *(u32 *)((u32) D_001574C0 | 0x20000000);
    ReadQueueStatus();
    if (temp_17_129 != 0) {
        goto block_22;
    }
    DeleteSema(sema_id);
    return -0xB;
block_22:
    WaitSema(sema_id);
    DeleteSema(sema_id);
    if (sp30 >= 0) {
        goto block_24;
    }
    WaitSema(D_0012FCA0[0]);
    iob->unk4 = 0;
    SignalSema(D_0012FCA0[0]);
    return sp30;
block_24:
    WaitSema(D_0012FCA0[0]);
    iob->unk4 = (s32) (iob->unk4 | arg1);
    iob->unk0 = sp30;
    SignalSema(D_0012FCA0[0]);
    return temp_21_91;
}
#endif /* NON_MATCHING */
