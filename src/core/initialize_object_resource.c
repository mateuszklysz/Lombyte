/*
STATE: C_EXACT
SYMBOL: InitializeObjectResource
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

typedef struct Object Object;
struct Object {
    unsigned char pad0[16];
    int state;
    int value;
};

Object *Func001154D0(Object *object, int index) __asm__("func_001154D0");

Object *Func00115808(Object *unused, Object *object)
    __asm__("func_00115808");

Object *Func00115808(Object *unused, Object *object) {
    Object *result = Func001154D0(unused, 1);
    result->value = (int)object;
    result->state = 1;
    return result;
}
