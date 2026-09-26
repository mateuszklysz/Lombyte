#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/sky/sky_draw_shell_textured/FUN_0022b6e8.s", FUN_0022b6e8);
#else
#include "types.h"

struct DmaTag {
    u32 w0;
    u32 addr;
    u32 w2;
    u32 w3;
};

struct DmaTagPointer {
    struct DmaTag *current;
};

struct ShellEntry {
    u8 pad20[0x20];
    s32 address;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 pad10[0x10];
};

struct Shell {
    s32 count;
    u8 pad4[0xC];
    u8 bounds[0x10];
};

extern struct DmaTagPointer D_00160F00[];
extern s32 D_00160408[2];
extern s32 D_00160410;
extern u8 D_0013D160[];

extern void func_0022C4C8(void *bounds, s32 count, u8 *visibility);
extern void WriteDmaChannelRegisters(s32 address, s32 qwc, s32 destination);
extern void func_0020B3E0(void);
extern s32 func_0022BF94(s32, s32, s32, s32);
extern void func_0022C208(s32, s32, s32, s32);

void sky_draw_shell_textured(struct Shell *shell) __asm__("FUN_0022b6e8");

void sky_draw_shell_textured(struct Shell *shell) {
    u8 visibility[shell->count];
    s32 index;
    s32 next_index;
    s32 destination;
    s32 c_destination;
    s32 a_destination;
    struct ShellEntry *entry;

    if (shell->count == 0) {
        return;
    }

    func_0022C4C8(shell->bounds, shell->count, visibility);

    D_00160F00[0].current->w0 = 0x30000007;
    D_00160F00[0].current->addr = (u32)D_0013D160;
    D_00160F00[0].current->w2 = 0;
    D_00160F00[0].current->w3 = 0x50000007;
    D_00160F00[0].current++;

    D_00160410 = 1 - D_00160410;
    if (visibility[0] == 1) {
        WriteDmaChannelRegisters(((struct ShellEntry *)shell)->address,
                                 ((struct ShellEntry *)shell)->unkE >> 4,
                                 D_00160408[D_00160410]);
    }

    for (index = 0; index < shell->count; index = next_index) {
        if (visibility[index] == 1) {
            func_0020B3E0();
        }

        next_index = index + 1;
        D_00160410 = 1 - D_00160410;
        if (next_index < shell->count && visibility[next_index] == 1) {
            WriteDmaChannelRegisters(
                                     ((struct ShellEntry *)((u8 *)shell + next_index * 0x20))->address,
                                     ((struct ShellEntry *)((u8 *)shell + next_index * 0x20))->unkE >> 4,
                                     D_00160408[D_00160410]);
        }

        if (visibility[index] == 1) {
            entry = (struct ShellEntry *)((u8 *)shell + index * 0x20);
            destination = D_00160408[1 - D_00160410];
            c_destination = destination + entry->unkC;
            a_destination = destination + entry->unkA;
            if (func_0022BF94(destination + entry->unk8, 0x70002000,
                              entry->unk4, entry->unkC) == 0) {
                func_0022C208(entry->unk6, c_destination,
                              a_destination, 0x70002000);
            }
        }
    }
}
#endif /* NON_MATCHING */
