/* STATE: C_EXACT
 * SYMBOL: sprintf
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: newlib sprintf with the SDK FILE ABI
 */

/* sprintf: newlib sprintf.c with the recovered SDK FILE ABI. */
#include "types.h"
#include "rnc/rnc_stdio.h"

typedef char *va_list;

extern RncReent *GlobalReent __asm__("D_0012F76C")
    __attribute__((section(".data")));
extern s32 Vfprintf(RncFile *file, const s8 *format, va_list arguments)
    __asm__("func_00116DA8");

#define __SWR 0x0008
#define __SSTR 0x0200
#define INT_MAX 0x7FFFFFFF

s32 sprintf(s8 *str, const s8 *format, ...)
{
    s32 ret;
    va_list arguments;
    RncFile f;

    f._flags = (u16)(__SWR | __SSTR);
    f._bf._base = f._p = (u8 *)str;
    f._bf._size = f._w = INT_MAX;
    f._data = GlobalReent;
    arguments = __builtin_next_arg(format) - 0x30;
    ret = Vfprintf(&f, format, arguments);
    *f._p = 0;
    return ret;
}
