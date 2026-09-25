#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001edaa8/FUN_001edaa8.s", FUN_001edaa8);
#else
#include "types.h"

/* PS2 MMI quadword. 16 bytes; the four fields below are all 16-byte aligned. */
typedef int qword_t __attribute__((mode(TI)));

struct M2c_D_00186F40 {
    u8 pad_0[0x140];
    qword_t unk140;
    u8 pad_150[0x30];
    s32 unk180;
    s32 unk184;
    u8 pad_188[0xE8];
    u16 unk270;
    u8 pad_272[0xDE];
    qword_t unk350;
    qword_t unk360;
    qword_t unk370;
    u8 pad_380[0x18];
    s32 unk398;
};

struct M2c_D_0018C318 {
    u8 pad_0[0x14];
    s32 unk14;
};

struct M2c_temp_17_36 {
    qword_t unk0;
    qword_t unk10;
    qword_t unk20;
    qword_t unk30;
};

extern s32 D_0015F604;
extern s32 D_001E6400[];
extern struct M2c_D_00186F40 D_00186F40;
extern u8 D_0015EDB4;
extern u8 D_001870A0[];
extern u8 D_001871B0[];
extern u8 D_00187290[];
extern struct M2c_D_0018C318 D_0018C318;
extern void func_001EC420();
extern void func_001EC8A0();
extern void func_001ED2B0();
extern void func_001ED360();
extern void func_001ED470();
extern void func_001ED7F0();
extern void func_001ED940();
extern void func_001EDA60();
extern void func_001EE4B0();
extern void func_001F9AD8();
extern void func_001FA298();
extern void func_00214598();

void FUN_001edaa8(void) {
    u8 sp_slot[0x40];
    struct M2c_temp_17_36 *temp_17_36;

    if (D_0015F604 == 5) {
        if (D_001E6400[0] == 0) {
            *(s16 *)D_001871B0 = 0;
            *(u8 *)(D_001871B0 + 2) = 0;
            goto block_3;
        }
    } else {
block_3:
        D_00186F40.unk398 = (s32) (D_00186F40.unk398 + 1);
        func_001EDA60();
        func_001ED940();
        func_001ED470();
        func_001EC420();
        temp_17_36 = D_00186F40.unk180;
        if ((u32) (D_00186F40.unk270 - 1) < 2U) {
            func_001EC8A0(D_00186F40.unk184);
        }
        if ((s16) D_00186F40.unk270 == 3) {
            func_001ED2B0(temp_17_36);
            goto block_9;
        }
        if (D_0018C318.unk14 == 0) {
            D_00186F40.unk140 = temp_17_36->unk30;
            D_00186F40.unk350 = temp_17_36->unk0;
            D_00186F40.unk360 = temp_17_36->unk10;
            D_00186F40.unk370 = temp_17_36->unk20;
block_9:
            if (D_0018C318.unk14 == 0) {
                func_001FA298(sp_slot, D_00187290, &D_0018C318);
                func_00214598(sp_slot, ((u8 *)D_00187290 - (u8 *)0x200));
            }
        }
        func_001ED360(D_001870A0, 0);
        func_001ED360(D_001870A0 + 0x10, 1);
        func_001ED7F0();
        func_001EE4B0(((u8 *)D_001870A0 - (u8 *)0x20));
        if (D_0015EDB4 != 0) {
            func_001F9AD8(D_001870A0 + 0x200, D_001870A0 + 0x210, D_001870A0 + 0x1F0);
        }
    }
}
#endif /* NON_MATCHING */
