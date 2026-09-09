#include "types.h"

typedef struct DoubleParts {
    s32 category;
    s32 sign;
    s32 exponent;
    u32 reserved;
    u64 fraction;
    u64 extra;
} DoubleParts;

extern void UnpackDouble(const u64 *encoded_value, DoubleParts *parts)
    __asm__("__unpack_d");
extern DoubleParts *AddDoubleParts(DoubleParts *left_parts,
                                   DoubleParts *right_parts,
                                   DoubleParts *result_parts)
    __asm__("_fpadd_parts");
extern u64 PackDouble(const DoubleParts *parts) __asm__("__pack_d");

u64 AddPackedDoubles(u64 left_value, u64 right_value) __asm__("dpadd");

u64 AddPackedDoubles(u64 left_value, u64 right_value)
{
    DoubleParts left_parts;
    DoubleParts right_parts;
    DoubleParts result_parts;

    UnpackDouble(&left_value, &left_parts);
    UnpackDouble(&right_value, &right_parts);
    return PackDouble(AddDoubleParts(&left_parts, &right_parts, &result_parts));
}
