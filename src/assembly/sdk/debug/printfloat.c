#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit printfloat; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/debug/printfloat/printfloat.s", printfloat);
#else

#include "types.h"

extern char D_00152780[];
extern char D_00152788[];
extern char D_00152790[];
extern f64 D_00152798;
extern f64 D_001527A0;
extern f64 D_001527A8;
extern void *D_0012FC00 __attribute__((section(".data")));
extern s32 dpcmp_f(f64 left, f64 right) __asm__("dpcmp");
extern s32 dpcmp_u(f64 left, u64 right) __asm__("dpcmp");
extern f64 dpsub_f(f64 left, f64 right) __asm__("dpsub");
extern f64 dpmul_f(f64 left, f64 right) __asm__("dpmul");
extern f64 dpmul_u(f64 left, u64 right) __asm__("dpmul");
extern f64 dpdiv_u(f64 left, u64 right) __asm__("dpdiv");
extern u64 __fixunsdfdi(f64 value);
extern s64 ftoi(s64 bits);
extern s32 kprintf();

void printfloat(f64 x)
{
    s32 exponent;
    char *format;

    exponent = 0;
    if (dpcmp_f(x, 0.0) >= 0) {
        goto signed_ok;
    }
    x = dpsub_f(0.0, x);
    ((void (*)(s32))D_0012FC00)(0x2D);
signed_ok:
    if (dpcmp_f(x, *(f64 *)0x00152798) < 0) {
        format = D_00152780;
        for (; dpcmp_f(x, *(f64 *)0x001527A0) < 0; exponent--) {
            x = dpmul_u(x, 0x4024000000000000ULL);
        }
    } else {
        format = D_00152780;
        if (dpcmp_u(x, 0x3FF0000000000000ULL) >= 0) {
            for (; dpcmp_u(x, 0x3FF0000000000000ULL) >= 0; exponent++) {
                x = dpdiv_u(x, 0x4024000000000000ULL);
            }
        }
    }
    kprintf(format, ftoi(__fixunsdfdi(dpmul_f(x, *(f64 *)0x001527A8))));
    if (exponent >= 0) {
        kprintf(D_00152788, exponent);
    } else {
        kprintf(D_00152790, exponent);
    }
}
#endif /* NON_MATCHING */
