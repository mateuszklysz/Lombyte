/*
STATE: C_EXACT
SYMBOL: _sbrk_r
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

extern int SbrkErrno __asm__("D_0015EC10")
    __attribute__((section(".data")));
extern void *Sbrk(int increment) __asm__("sbrk");

void *SbrkReentrant(void *reent, int increment) __asm__("_sbrk_r");

void *SbrkReentrant(void *reent, int increment) {
    void *result;

    SbrkErrno = 0;
    result = Sbrk(increment);
    if (result == (void *)-1 && SbrkErrno != 0) {
        *(int *)reent = SbrkErrno;
    }
    return result;
}
