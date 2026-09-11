/*
STATE: C_EXACT
SYMBOL: CallGlobalStateResource
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Pass the shared state object and caller arguments to the resource hook. */
extern int GlobalStateResource __asm__("D_0012F76C")
    __attribute__((section(".data")));

extern int StateResourceCall(int resource, int first, int second, int third)
    __asm__("func_00116A38");

int CallGlobalStateResource(int resource, int first, int second)
    __asm__("CallGlobalStateResource");

int CallGlobalStateResource(int resource, int first, int second) {
    return StateResourceCall(GlobalStateResource, resource, first, second);
}
