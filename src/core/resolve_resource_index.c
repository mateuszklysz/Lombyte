typedef struct Resource Resource;
struct Resource {
    unsigned char pad0[14];
    short index;
    unsigned char pad10[68];
    int value;
};

int Func00112468(int value, int index) __asm__("func_00112468");

int Func00116408(Resource *resource) __asm__("func_00116408");

int Func00116408(Resource *resource) {
    return Func00112468(resource->value, resource->index);
}
