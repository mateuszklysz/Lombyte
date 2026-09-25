#include "types.h"

struct GlobalData
{
    u8 pad0[0x278];
    s32 list278[5];
    s32 list28c[6];
    s32 list2a4[16];
};

extern struct GlobalData D_001A00F0;
extern void func_001F98D0(s32, s32, s32);

void move_map_entry_slot(s32 arg0, s32 arg1) __asm__("FUN_00205000");

void move_map_entry_slot(s32 arg0, s32 arg1)
{
    s32 value;

    func_001F98D0(D_001A00F0.list278[arg0], D_001A00F0.list278[arg1], D_001A00F0.list2a4[arg1] * 0x10);
    value = D_001A00F0.list28c[arg1];
    D_001A00F0.list28c[arg0] = value;
    D_001A00F0.list2a4[arg0] = D_001A00F0.list2a4[arg1];
    D_001A00F0.list28c[arg1] = -1;
}

extern __typeof__(move_map_entry_slot) func_00205000 __attribute__((alias("FUN_00205000")));
