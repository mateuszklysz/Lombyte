#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00120d40/FUN_00120d40.s", FUN_00120d40);
#else
#include "types.h"

struct M2c_D_00132D08 {
    u8 pad_0[0x24];
    s32 unk24;
};

extern s32 D_001312D0[];
extern s32 D_001312D8[];
extern volatile s32 D_001312EC[];
extern s32 D_00131308[];
extern struct M2c_D_00132D08 D_00132D08;
extern char D_00152F10[];
extern char D_00152F38[];
extern s32 D_00159750[];
extern char D_00159758[];
extern s32 PollSema(s32);
extern void ReferThreadStatus(s32, char *);
extern void SignalSema(s32);
extern void cmd_sem_init(void);
extern s32 sceCdSyncS(s32);
extern int scePrintf(const char *, ...);
extern s32 sceSifBindRpc(struct M2c_D_00132D08 *, u32, s32);
extern void sceSifInitRpc(u32);

s32 FUN_00120d40(s32 arg0) {
    s32 i;

    cmd_sem_init();
    if (D_001312EC[0] != PollSema(D_001312EC[0])) {
        if (D_001312D0[0] > 0) {
            scePrintf(D_00152F10, arg0, D_001312D8[0]);
        }
    } else {
        D_001312D8[0] = arg0;
        ReferThreadStatus(D_00159750[0], D_00159758);
        if (sceCdSyncS(1) != 0) {
            SignalSema(D_001312EC[0]);
        } else {
            sceSifInitRpc(0);
            if (D_00131308[0] < 0) {
                goto bind;
    delay1:
                for (i = 0x100000; i != -1; i--) {
                }
    bind:
                for (;;) {
                    if (sceSifBindRpc(&D_00132D08, 0x80000593, 0) < 0) {
                        if (*(s32 *)0x001312D0 > 0) {
                            scePrintf(D_00152F38);
                        }
                        for (i = 0x100000; i != -1; i--) {
                        }
                        continue;
                    }
                    if (D_00132D08.unk24 != 0) {
                        D_00131308[0] = 0;
                        return 1;
                    }
                    goto delay1;
                }
            }
            return 1;
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
