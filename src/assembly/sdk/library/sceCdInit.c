#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceCdInit/sceCdInit.s", sceCdInit);
#else
#include "types.h"

/* IOP CD control block bound over SIF-RPC; 0x24 is the "bound" flag. */
struct CdlCB {
    u8 pad_0[0x24];
    s32 unk24;
};

/* EE-side CD driver state words (hardware, hence volatile where the retail
   reloads them: cdintreq, cdready, cdistop, cdsync, cdctrl). */
extern volatile u32 D_001312D0[]; /* cdready  */
extern volatile u32 D_001312E0[]; /* cdctrl   */
extern volatile u32 D_001312E4[]; /* cdintreq */
extern volatile u32 D_001312E8[]; /* cdistop  */
extern volatile u32 D_001312EC[]; /* cdsync   */
extern volatile u32 D_001312F4[]; /* cdmode   */
extern volatile u32 D_001312F8[]; /* cdpos    */
extern volatile u32 D_001312FC[]; /* cdread   */
extern volatile u32 D_00131300[]; /* cdtype   */
extern volatile u32 D_00131304[]; /* cdv      */
extern volatile u32 D_00131308[]; /* cdintx   */
extern volatile u32 D_0013130C[]; /* cdctrl2  */
extern volatile u32 D_00131310[]; /* cdmode2  */

extern u8 D_001324C0[]; /* 0x10-byte RPC result buffer */
extern u8 D_00152F50[]; /* format: bind failure      */
extern u8 D_00152F70[]; /* format: mode 5 shutdown   */
extern u32 D_00159750[]; /* cdthread */
extern struct CdlCB D_00159968; /* cdfile */
extern u32 D_001599C0[]; /* one word of CD parameter handed to the RPC */

extern s32 GetThreadId();
extern s32 PowerOffCB();
extern s32 cdvd_exit();
extern s32 cmd_sem_init();
extern s32 sceCdSyncS();
extern s32 scePrintf();
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
extern s32 sceSifInitRpc();
extern s32 sceSifWriteBackDCache();

s32 sceCdInit(s32 mode)
{
    s32 ret;
    s32 m;
    s32 stat;
    s32 nread;
    s32 extra;
    s32 size;
    s32 size2;
    s32 wait;

    if (sceCdSyncS(1) != 0) {
        return 0;
    }

    sceSifInitRpc(0);

    *(volatile s32 *)D_001312E4 = 1;
    *(volatile u32 *)D_00159750 = GetThreadId();
    *(s32 *)D_001312FC = -1;
    *(s32 *)D_00131300 = -1;
    *(s32 *)D_001312F8 = -1;
    *(s32 *)D_00131308 = -1;
    *(s32 *)D_00131304 = -1;
    *(s32 *)D_001312F4 = 0;
    *(s32 *)D_00131310 += 1;
    *(s32 *)D_0013130C = -1;

    m = mode;

    for (;;) {
        ret = sceSifBindRpc(&D_00159968, 0x80000592, 0);
        if (ret < 0) {
            if (*(s32 *)D_001312D0 > 0) {
                scePrintf(D_00152F50, ret, *(s32 *)D_00131310);
            }
            for (wait = 0x10000; wait != -1; wait--) ;
        }
        else {
            if (D_00159968.unk24 == 0) {
                goto retry;
            }
            *(s32 *)D_001599C0 = m;
            *(s32 *)D_0013130C = 0;
            sceSifWriteBackDCache(D_001599C0, 4);

            if (sceSifCallRpc(&D_00159968, 0, 0, D_001599C0, 4, D_001324C0, 0x10, 0, 0) < 0) {
                *(volatile s32 *)D_001312E4 = 0;
                return 0;
            }

            stat = *(s32 *)((u32)D_001324C0 + 0xC | 0x20000000);
            nread = *(s32 *)((u32)D_001324C0 + 4 | 0x20000000);
            extra = *(s32 *)((u32)D_001324C0 + 8 | 0x20000000);

            ret = 1;
            if (stat == 0xFF) {
                /* no drive: keep ret = 1 */
            } else if (stat == 0xFE) {
                *(s32 *)D_001312D0 = 1;
            } else {
                size = nread + 0xFF;
                if (stat < nread) {
                    size = nread;
                }
                if ((size >> 8) < 2) {
                    ret = 2;
                } else {
                    size2 = extra + 0xFF;
                    if (stat < extra) {
                        size2 = extra;
                    }
                    if ((size2 >> 8) < 2) {
                        ret = 2;
                    }
                }
            }

            *(volatile s32 *)D_001312E4 = 0;

            if (m >= 0 && m >= 2 && m == 5) {
                if (*(s32 *)D_001312D0 > 0) {
                    scePrintf(D_00152F70, nread, stat);
                }
                cdvd_exit();
                *(volatile s32 *)D_001312E8 = -1;
                *(volatile s32 *)D_001312EC = -1;
                *(volatile s32 *)D_001312E0 = -1;
            } else {
                cmd_sem_init();
                PowerOffCB();
            }
            return ret;
        }
    retry:;
    }
}
#endif /* NON_MATCHING */
