#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Minimal single-byte multibyte-to-wide-character conversion veneer. */
INCLUDE_ASM("config/us/expected/asm/assembly/runtime/encoding/convert_multibyte_character/ConvertMultibyteCharacter.s", ConvertMultibyteCharacter);
#else
#include "types.h"

int ConvertMultibyteCharacter(void *state, s32 *out, const u8 *str, u32 count)
    __asm__("ConvertMultibyteCharacter");

int ConvertMultibyteCharacter(void *state, s32 *out, const u8 *str, u32 count) {
    s32 c;
    s32 *dest = &c;

    if (out != 0) {
        dest = out;
    }
    if (count == 0) {
        return -1;
    }
    if (str == 0) {
        return 0;
    }
    *dest = str[0];
    return str[0] != 0;
}
#endif /* NON_MATCHING */
