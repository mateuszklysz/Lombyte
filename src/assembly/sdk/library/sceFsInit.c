#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceFsInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceFsInit/sceFsInit.s", sceFsInit);
#else

#include "types.h"

/* 4-byte blob with byte alignment: ee-gcc copies these with lwl/lwr + swl/swr
   (a plain s32 copy would be lw/sw). */
struct Word4 {
    u8 b[4];
};

/* 0x10-byte record; the s32 payload the sema loop clears sits at +4. */
struct SemaRec {
    u8 pad0[4];
    s32 val;
    u8 pad1[8];
};

struct FsCmd {
    s32 unk0;
    s32 unk4;
};

struct FsQueue {
    u8 pad_0[0x24];
    s32 unk24;
};

/* Incomplete array types: a sized declaration would put these globals in
   small data and emit %gp_rel instead of the retail %hi/%lo pair. */
extern u8 D_0011B980[];
extern s32 D_0012FC94[];
extern s32 D_0012FC98[];
extern s32 D_0012FCA0[];
extern struct FsCmd D_00156840[];
extern u8 D_001574C0[];
extern u8 D_00157500[];
extern u8 D_00157D80[];
extern struct FsQueue D_00157F80;
extern struct Word4 D_00157FA8[];
extern u8 D_00157FC0[];
extern struct FsCmd D_00158000[];
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 _sceFsIobSemaMK();
extern s32 sceSifAddCmdHandler();
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
extern s32 sceSifInitRpc();
extern void _sceFs_Rcv_Intr();

s32 sceFsInit(void) {
    s32 irq;
    s32 i;
    struct FsCmd *cb;
    u8 *end;
    struct SemaRec *rec;
    struct Word4 tmp;

    cb = &D_00158000[0];
    sceSifInitRpc(0);
    cb->unk0 = 0;
    cb->unk4 = 0;
    irq = DIntr();
    sceSifAddCmdHandler(0x80000011, &_sceFs_Rcv_Intr, D_00157FC0);
    sceSifAddCmdHandler(0x80000013, D_0011B980, cb);
    if (irq == 0) {
        goto L_bind;
    }
    EnableInterrupts();
L_bind:
    for (;;) {
        if (sceSifBindRpc(&D_00157F80, 0x80000001, 0) < 0) {
            return -1;
        }
        if (D_00157F80.unk24 != 0) {
            break;
        }
        i = 0x100000;
        do {
            i--;
        } while (i != -1);
    }
    _sceFsIobSemaMK();
    WaitSema(D_0012FCA0[0]);
    rec = (struct SemaRec *)D_00157D80;
    end = (u8 *)rec + 0x200;
    if ((u8 *)rec >= end) {
        goto L_sema;
    }
L_loop:
    rec->val = 0;
    rec++;
    if ((u8 *)rec < end) {
        goto L_loop;
    }
L_sema:
    SignalSema(D_0012FCA0[0]);
    D_00156840[0].unk0 = (s32)D_00157500;
    D_00156840[0].unk4 = (s32)D_00157500 + 0x440;
    if (sceSifCallRpc(&D_00157F80, 0xFF, 0, &D_00156840[0], 8, (s32)D_001574C0, 8, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    D_00157FA8[0] = *(struct Word4 *)((s32)D_001574C0 | 0x20000000);
    tmp = *(struct Word4 *)(((s32)D_001574C0 + 4) | 0x20000000);
    D_0012FC98[0] = (*(s32 *)&tmp == 2);
    D_0012FC94[0] = 1;
    return 0;
}
#endif /* NON_MATCHING */
