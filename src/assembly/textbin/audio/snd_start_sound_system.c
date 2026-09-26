#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/snd_start_sound_system/FUN_0012da28.s", FUN_0012da28);
#else
#include "types.h"

struct SifClientDataStartSound {
    u8 pad_0[0x24];
    s32 status;
};

struct StartSoundWork {
    s32 unk0;
    u8 pad_4[0xC];
    s32 unk10;
};

extern u8 D_00133280[];
extern u8 D_00134280[];
extern u8 D_00135280[];
extern u8 D_00136280[];
extern u8 D_00137280[];
extern u8 D_001376C0[];
extern struct StartSoundWork D_00137B00;
extern u8 D_00153C50[];
extern u8 D_00153C78[];
extern struct SifClientDataStartSound D_0015EBC0;
extern struct SifClientDataStartSound D_0015EBE8;
extern s32 D_0015ECA0;
extern s32 D_0015ECA4;
extern s32 D_0015ECA8;
extern s32 D_0015ECAC;
extern s32 D_0015ECB0;
extern s32 D_0015ECB4;
extern s32 D_0015ECB8;
extern s32 D_0015ECBC;
extern s32 D_0015ECC8;
extern s32 D_0015ECD0;
extern s64 D_0015ECD8;
extern s32 D_0015ED00;

__asm__(".extern D_0015ECA0, 4");
__asm__(".extern D_0015ECA8, 4");
__asm__(".extern D_0015ECB0, 4");
__asm__(".extern D_0015ECB8, 4");
__asm__(".extern D_0015ECC8, 4");
__asm__(".extern D_0015ECD0, 4");

extern void sceSifInitRpc(u32);
extern s32 sceSifBindRpc(struct SifClientDataStartSound *, u32, s32);
extern s32 printf(const char *, ...);
extern s32 func_0012E548(s32, s32, void *);

void snd_start_sound_system(void) __asm__("FUN_0012da28");

void snd_start_sound_system(void) {
    s32 ret;
    s32 count;
    s32 wait;
    s32 command_arg;

    D_0015ECA0 = (s32)(u32)D_00133280;
    D_0015ECA4 = (s32)(u32)D_00134280;
    D_0015ECB8 = (s32)(u32)D_00137280;
    D_0015ECBC = (s32)(u32)D_001376C0;
    D_0015ECB0 = (s32)(u32)D_00135280;
    D_0015ECB4 = (s32)(u32)D_00136280;
    sceSifInitRpc(0);

    count = 0x2710;
    for (;;) {
        ret = sceSifBindRpc(&D_0015EBC0, 0x123456, 0);
        if (ret < 0) {
            printf((const char *)D_00153C50, D_00153C78, 0x73);
            for (;;) {
            }
        }
        for (wait = count - 1; wait != -1; --wait) {
        }
        if (D_0015EBC0.status != 0) {
            break;
        }
    }

    D_0015ECC8 = 0;
    D_0015ECD0 = 0;
    D_0015ECD8 = 0;
    D_0015ED00 = 0;

    for (;;) {
        ret = sceSifBindRpc(&D_0015EBE8, 0x123457, 0);
        if (ret < 0) {
            printf((const char *)D_00153C50, D_00153C78, 0x88);
            for (;;) {
            }
        }
        for (wait = count - 1; wait != -1; --wait) {
        }
        if (D_0015EBE8.status != 0) {
            break;
        }
    }

    *(s32 *)D_00133280 = 0;
    D_00137B00.unk0 = 0;
    *(s32 *)D_00134280 = 0;
    D_0015ECAC = 0xFFC;
    D_00137B00.unk10 = 0;
    D_0015ECA8 = 0xFFC;
    command_arg = (s32)(u32)&D_00137B00;
    func_0012E548(0, 4, &command_arg);
}
#endif /* NON_MATCHING */
