#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _PES_packet; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_PES_packet/_PES_packet.s", _PES_packet);
#else
#include "types.h"

extern u8 D_001539C8[];
extern u8 D_001539D8[];
extern s32 _Error();
extern s32 _sysbitGet();
extern s32 _sysbitJump();
extern void _sysbitMarker();

struct PES_BS {
    u8 pad_0[0x18];
    s64 stamp;
};

struct PES_HDR {
    s64 unk0;
    s32 unk8;
    s32 unkC;
    s64 unk10;
    s64 unk18;
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

struct PES_TBL {
    u8 v[16];
} __attribute__((packed));

s32 _PES_packet(s32 arg0, struct PES_BS *bs, struct PES_HDR *hdr) {
    struct PES_TBL tbl;
    s32 sp[3];          /* frame slots 0x10/0x14/0x18: id, flag1, len */
    s64 base;        /* (s32)bs->stamp, captured before the bit reads */
    s64 t;           /* the 64-bit stamp; base is its 32-bit truncation */
    s64 now;         /* the same stamp, re-read at the sync point */
    s32 v7;          /* 2-bit flags field */
    s32 v8;          /* 4-bit length, indexes tbl */
    s32 v5;          /* 1-bit descriptor == 1 selects the extension block */
    u32 a; u32 b; u32 c;  /* the 3/15/15-bit pack pieces */

    sp[0] = arg0;
    hdr->unk28 = (s32)bs->stamp;
    tbl = *(struct PES_TBL *)D_001539C8;
    _sysbitGet(bs, 0x18);
    hdr->unk0 = (s64)_sysbitGet(bs, 8) << 0x20;
    hdr->unk8 = _sysbitGet(bs, 0x10);
    hdr->unk10 = -1;
    hdr->unk18 = -1;
    if (hdr->unk0 == ((u64)0xBC00 << 0x18)) goto L688;
    if (hdr->unk0 == ((u64)0xBE00 << 0x18)) goto L618;
    if (hdr->unk0 == ((u64)0xBF00 << 0x18)) goto L618;
    if (hdr->unk0 == ((u64)0xF000 << 0x18)) goto L618;
    if (hdr->unk0 == ((u64)0xF100 << 0x18)) goto L618;
    if (hdr->unk0 == ((u64)0xFF00 << 0x18)) goto L618;
    if (hdr->unk0 == ((u64)0xF200 << 0x18)) goto L618;
    if (hdr->unk0 == ((u64)0xF800 << 0x18)) goto L618;
    _sysbitGet(bs, 2);
    hdr->unkC = _sysbitGet(bs, 2);
    _sysbitGet(bs, 4);
    v7 = _sysbitGet(bs, 2);
    sp[1] = _sysbitGet(bs, 1);
    v8 = _sysbitGet(bs, 4);
    v5 = _sysbitGet(bs, 1);
    sp[2] = _sysbitGet(bs, 8);
    t = bs->stamp;
    base = (s32)t;
    if (v7 & 2) {
        _sysbitGet(bs, 4);
        a = _sysbitGet(bs, 3);
        _sysbitMarker(bs);
        b = _sysbitGet(bs, 0xF);
        _sysbitMarker(bs);
        c = _sysbitGet(bs, 0xF);
        _sysbitMarker(bs);
        hdr->unk10 = ((s64)((a >> 2) & 1) << 0x20) | (s64)(u32)(a << 30 | b << 15 | c);
    }
L3BC:
    if (v7 == 3) {
        _sysbitGet(bs, 4);
        a = _sysbitGet(bs, 3);
        _sysbitMarker(bs);
        b = _sysbitGet(bs, 0xF);
        _sysbitMarker(bs);
        c = _sysbitGet(bs, 0xF);
        _sysbitMarker(bs);
        hdr->unk18 = ((s64)((a >> 2) & 1) << 0x20) | (s64)(u32)(a << 30 | b << 15 | c);
    }
L448:
    if (sp[1] == 1) {
        _sysbitGet(bs, 0x30);
    }
L45C:
    if (v8 != 0) {
        _sysbitGet(bs, tbl.v[v8]);
    }
L470:
    if (v5 == 1) {
        s32 a1;
        s32 a2;
        s32 a3;
        s32 a4;
        s32 a5;
        a1 = _sysbitGet(bs, 1);
        a2 = _sysbitGet(bs, 1);
        a3 = _sysbitGet(bs, 1);
        a4 = _sysbitGet(bs, 1);
        _sysbitGet(bs, 3);
        a5 = _sysbitGet(bs, 1);
        if (a1 != v5) goto L4FC;
        _sysbitGet(bs, 0x30);
        _sysbitGet(bs, 0x30);
        _sysbitGet(bs, 0x20);
L4FC:
        if (a2 == v5) {
            _Error(sp[0], D_001539D8);
            return 0;
        }
L518:
        if (a3 == v5) {
            _sysbitGet(bs, 0x10);
        }
L528:
        if (a4 == v5) {
            _sysbitGet(bs, 0x10);
        }
L538:
        if (a5 == v5) {
            u32 i;
            u32 n;
            _sysbitMarker(bs);
            i = 0;
            n = _sysbitGet(bs, 7);
            if (n != 0) {
                do {
                    _sysbitGet(bs, 8);
                    i++;
                } while (i < n);
            }
        }
    }
L588:
    now = bs->stamp;
    {
    s32 delta = sp[2] - (s32)((now - base) >> 3);
    if (delta != 0) {
        _sysbitJump(bs, delta);
    }
    }
L5B4:
    {
    s32 n = hdr->unk8 - sp[2];
    s32 m;
    hdr->unk24 = n - 3;
    hdr->unk20 = (s32)bs->stamp;
    if (hdr->unk0 == ((u64)0xBD00 << 0x18)) {
        hdr->unk0 |= (u64)(u32)_sysbitGet(bs, 0x20);
        m = n - 7;
    } else {
        m = n - 3;
    }
    if (m == 0) {
        return 1;
    }
    _sysbitJump(bs, m);
    return 1;
    }
L618:
    if (hdr->unk0 == ((u64)0xBC00 << 0x18)) goto L688;
    if (hdr->unk0 == ((u64)0xBF00 << 0x18)) goto L690;
    if (hdr->unk0 == ((u64)0xF000 << 0x18)) goto L688;
    if (hdr->unk0 == ((u64)0xF100 << 0x18)) goto L688;
    if (hdr->unk0 == ((u64)0xFF00 << 0x18)) goto L688;
    if (hdr->unk0 == ((u64)0xF200 << 0x18)) goto L688;
    if (hdr->unk0 != ((u64)0xF800 << 0x18)) goto L6D8;
L688:
L690:
    {
    s32 n = hdr->unk8;
    if (hdr->unk0 == ((u64)0xBF00 << 0x18)) {
        n -= 4;
        hdr->unk0 |= (u64)(u32)_sysbitGet(bs, 0x20);
    }
    if (n == 0) {
        return 1;
    }
    _sysbitJump(bs, n);
    return 1;
    }
L6D8:
    {
    s32 n;
    if (hdr->unk0 != ((u64)0xBE00 << 0x18)) {
        return 1;
    }
    n = hdr->unk8;
    if (n == 0) {
        return 1;
    }
    _sysbitJump(bs, n);
    return 1;
    }
}
#endif /* NON_MATCHING */
