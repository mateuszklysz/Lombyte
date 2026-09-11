/*
STATE: C_EXACT
SYMBOL: __make_dp
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

typedef unsigned long long u64;

extern void PackDouble(void *parameters) __asm__("__pack_d");

void MakeDoublePacket(int first, int second, int third, u64 fourth)
    __asm__("__make_dp");

void MakeDoublePacket(int first, int second, int third, u64 fourth) {
    int parameters[8];

    parameters[0] = first;
    parameters[1] = second;
    parameters[2] = third;
    *(u64 *)&parameters[4] = fourth;
    PackDouble(parameters);
}
