/*
STATE: C_EXACT
SYMBOL: mcDelayThread
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

extern int GetThreadId(void);
extern int SetAlarm(int delay, void *callback, int thread_id);
extern void SleepThread(void);
extern unsigned char D_00123BC0[] __attribute__((section(".data")));

void mcDelayThread(int delay) {
    int delay_ticks = delay & 0xFFFF;
    void *alarm_callback = D_00123BC0;
    int thread_id = GetThreadId();

    SetAlarm(delay_ticks, alarm_callback, thread_id);
    SleepThread();
}
