/*
STATE: C_EXACT
SYMBOL: subhour
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

typedef unsigned char u8;

typedef struct Time {
    u8 unused[3];
    u8 hour;
} Time;

extern void Subdate(Time *time) __asm__("func_0012D548");

void Subhour(Time *time) __asm__("subhour");

void Subhour(Time *time) {
    if (time->hour == 0) {
        time->hour = 0x17;
        Subdate(time);
    } else {
        time->hour--;
    }
}
