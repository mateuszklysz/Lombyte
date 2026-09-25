#include "types.h"

struct SkyShell {
    u8 pad_0[0x4];
    s32 unk4;
};

struct SkyShellSet {
    u8 pad_0[0x6];
    s16 unk6;
    u8 pad_8[0x18];
    struct SkyShell *unk20[1];
};

extern struct SkyShellSet *D_0016045C;
extern s32 func_0022B6E8();
extern s32 func_0022B928();
void sky_draw_shell(s32 arg0) __asm__("FUN_0022b690");

void sky_draw_shell(s32 arg0) {
    struct SkyShell *shell;

    if (arg0 < D_0016045C->unk6) {
        shell = D_0016045C->unk20[arg0];
        if (shell->unk4 != 0) {
            func_0022B928(shell);
        } else {
            func_0022B6E8(shell);
        }
    }
}

extern __typeof__(sky_draw_shell) func_0022B690 __attribute__((alias("FUN_0022b690")));
