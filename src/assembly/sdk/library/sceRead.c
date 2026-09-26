#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceRead; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceRead/sceRead.s", sceRead);
#else
#include "types.h"

struct FsIob {
    s32 fd;
    s32 mode;
    s32 pad8;
    s32 padC;
};

struct FsCall {
    s32 sema;
    void *result;
    s32 result_size;
    s32 fd;
    void *buf;
    s32 size;
    s32 unk18;
    s32 iob;
};

struct SemaParam {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    u32 attr;
    u32 option;
};

extern struct FsCall D_00156880;
extern s32 D_0012FC10[];
extern s32 D_0012FC94[];
extern s32 D_0012FCA4[];
extern u8 D_001574C0[];
extern struct FsIob D_00157D80[];
struct SifClient {
    u8 pad[0x28];
};

extern struct SifClient D_00157F80;
extern struct FsIob *get_iob(s32 fd);
extern void _sceFsWaitS(s32);
extern s32 ReadQueueStatus(void);
extern s32 CreateSema(struct SemaParam *);
extern s32 DeleteSema(s32);
extern s32 WaitSema(s32);
extern s32 SignalSema(s32);
extern void sceSifWriteBackDCache(void *, s32);
extern s32 sceSifCallRpc(void *, s32, s32, void *, s32, void *, s32, void *, void *);

s32 sceRead(s32 fd, void *buf, s32 size) {
    struct FsCall *call;
    struct FsIob *iob;
    struct SemaParam sp;
    s32 result;
    s32 mode;
    s32 sema;
    s32 i;
    s32 *rpc;
    s32 *slot;
    s32 ret;

    call = &D_00156880;
    iob = get_iob(fd);
    _sceFsWaitS(2);
    if (D_0012FC94[0] == 0) {
        ReadQueueStatus();
        return -1;
    }
    if (iob == 0 || (mode = iob->mode) == 0) {
        ReadQueueStatus();
        return -9;
    }
    call->fd = iob->fd;
    sp.max_count = 1;
    call->iob = iob - D_00157D80;
    call->buf = buf;
    call->size = size;
    sp.init_count = 0;
    sp.option = 0;
    sema = CreateSema(&sp);
    call->result = &result;
    call->result_size = 4;
    D_00156880.sema = sema;
    if ((s16)mode & 0x8000) {
        i = 0;
        WaitSema(D_0012FCA4[0]);
        if (D_0012FC10[i] == -1) {
            D_0012FC10[i] = D_00156880.sema;
            D_00156880.sema = -D_00156880.sema;
        } else {
        loop:
            i++;
            if (i < 0x20) {
                slot = &D_0012FC10[i];
                if (*slot != -1) {
                    goto loop;
                }
                *slot = call->sema;
                call->sema = -call->sema;
            }
        }
        SignalSema(D_0012FCA4[0]);
    }
    if (!(mode & 0x20000000)) {
        sceSifWriteBackDCache(buf, size);
    }
    sceSifWriteBackDCache(call, 0x20);
    if (sceSifCallRpc(&D_00157F80, 2, 0, &D_00156880, 0x20, D_001574C0, 4, 0, 0) < 0) {
        DeleteSema(sema);
        ReadQueueStatus();
        return -11;
    }
    ret = *(s32 *)((u32)D_001574C0 | 0x20000000);
    ReadQueueStatus();
    if (ret == 0) {
        DeleteSema(sema);
        return -11;
    }
    if (mode & 0x8000) {
        DeleteSema(sema);
        return 0;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return result;
}
#endif /* NON_MATCHING */
