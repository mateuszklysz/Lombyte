#include "types.h"
struct M2c_D_00156880 { s32 unk0; s32 unk4; s32 unk8; s32 unkC; s32 unk10; };
struct M2c_temp_16_13 { s32 unk0; s32 unk4; };
struct Sema { s32 count; s32 max_count; s32 init_count; s32 wait_threads; s32 attr; s32 option; };
extern u32 D_0012FC94[];
extern struct M2c_D_00156880 D_00156880;
extern u8 D_001574C0[];
extern u8 D_00157D80[];
extern u8 D_00157F80[];
extern struct M2c_temp_16_13 *get_iob(void);
extern s32 _sceFsWaitS(s32 arg0);
extern s32 ReadQueueStatus(void);
extern s32 CreateSema(void *param);
extern s32 DeleteSema(s32 id);
extern s32 WaitSema(s32 id);
extern s32 sceSifCallRpc(void *a0, s32 a1, s32 a2, void *a3, s32 a4, void *a5, s32 a6, void *a7, void *a8);
s32 sceClose(void) {
    struct Sema sema;
    s32 sp30;
    s32 temp_16_79;
    s32 temp_2_46;
    struct M2c_temp_16_13 *temp_16_13;
    struct M2c_D_00156880 *state = &D_00156880;
    register s32 q __asm__("v0");
    temp_16_13 = get_iob();
    _sceFsWaitS(1);
    q = D_0012FC94[0];
    if (q == 0) {
        ReadQueueStatus();
        return -1;
    }
    if (temp_16_13 == NULL) {
        goto block_6;
    }
    if (temp_16_13->unk4 == 0) {
        goto block_5;
    }
    goto block_7;
block_5:
block_6:
    ReadQueueStatus();
    return -9;
block_7:
    state->unkC = (s32) temp_16_13->unk0;
    sema.max_count = 1;
    state->unk10 = (s32) ((s32) (((u8 *)temp_16_13 - (u8 *)D_00157D80)) >> 4);
    sema.init_count = 0;
    sema.option = 0;
    temp_2_46 = CreateSema(&sema);
    state->unk0 = temp_2_46;
    state->unk4 = &sp30;
    state->unk8 = 4;
    if (sceSifCallRpc(D_00157F80, 1, 0, state, 0x14, D_001574C0, 4, 0, 0) < 0) {
        goto block_9;
    }
    temp_16_13->unk4 = 0;
    goto block_11;
block_9:
    DeleteSema(temp_2_46);
    ReadQueueStatus();
    return -0xB;
block_11:
    temp_16_79 = *(u32 *)((u32) D_001574C0 | 0x20000000);
    ReadQueueStatus();
    if (temp_16_79 != 0) {
        goto block_13;
    }
    DeleteSema(temp_2_46);
    return -0xB;
block_13:
    WaitSema(temp_2_46);
    DeleteSema(temp_2_46);
    if (sp30 < 0) {
        return sp30;
    }
    return 0;
}
