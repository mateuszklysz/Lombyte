/*
STATE: C_NON_MATCHING
SYMBOL: sceIpuInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceIpuInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_ipu_init/sceIpuInit.s", sceIpuInit);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern void func_001F8A88(int a0, float x0, float x1, float y0, float y1, float z0, float z1);

/* sn-2.95.3-136, as: "sn" (ps2eeas). */



__attribute__((section(".text.func_00148F50")))
void func_00148F50(int u, int *mp, int obj)
{
    unsigned char hold[0x10] __attribute__((aligned(16)));
    char *base;
    char *tbl;
    char *part;
    char *vp;
    int i, n, m, off;
    float minx, maxx, miny, maxy, minz, maxz;
    float v;

    minx = 1.0e9f;
    maxx = -1.0e9f;
    miny = minx;
    maxy = maxx;
    minz = miny;
    maxz = maxy;
    base = (char *)*mp;
    i = 0;
    n = *(unsigned short *)(base + 0xA);
    if (n != 0) {
        tbl = base + 0x20;
        do {
            off = i * 4;
            part = (char *)(*(int *)(tbl + off) + (int)base);
            *(int *)hold = (int)part;
            vp = (char *)(*(int *)part + (int)part);
            m = *(unsigned short *)(part + 0x14);
            if (m != 0) {
                do {
                    v = (float)*(short *)(vp + 0);
                    if (v < minx) minx = v;
                    if (maxx < v) maxx = v;
                    v = (float)*(short *)(vp + 2);
                    if (v < miny) miny = v;
                    if (maxy < v) maxy = v;
                    v = (float)*(short *)(vp + 4);
                    if (v < minz) minz = v;
                    if (maxz < v) maxz = v;
                    m--;
                    vp += 8;
                } while (m != 0);
            }
            i = i + 1;
        } while (i < n);
    }
    minx = minx / 100.0f;
    maxx = maxx / 100.0f;
    miny = miny / 100.0f;
    maxy = maxy / 100.0f;
    minz = minz / 100.0f;
    maxz = maxz / 100.0f;
    func_001F8A88(obj, minx, maxx, miny, maxy, minz, maxz);
}
#endif /* NON_MATCHING */
