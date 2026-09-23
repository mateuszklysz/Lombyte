#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001edaa8/FUN_001edaa8.s", FUN_001edaa8);
#else
#include "rnc/assembly_textbin_fun_001edaa8_types.h"
#include "types.h"








extern u8 D_0015EDB4;
extern s32 D_0015F604;
extern struct M2c_D_00186F40 D_00186F40;
extern u8 D_001870A0[];
extern struct M2c_D_001871B0 D_001871B0;
extern u8 D_00187290[];
extern struct M2c_D_0018C318 D_0018C318;
extern s32 D_001E6400[];
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
u8 sp_slot[0x70];    struct M2c_temp_17_36 *temp_17_36;

    if (D_0015F604 == 5) {
        if (D_001E6400[0] == 0) {
            D_001871B0.unk0 = 0;
            D_001871B0.unk2 = 0;
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
            D_00186F40.unk140 = (s64) temp_17_36->unk30;
            D_00186F40.unk350 = (s64) temp_17_36->unk0;
            D_00186F40.unk360 = (s64) temp_17_36->unk10;
            D_00186F40.unk370 = (s64) temp_17_36->unk20;
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
