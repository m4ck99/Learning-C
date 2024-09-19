#include <stdio.h>

struct man {
    int weight;
    int age;
    float iq;
    char *name;
};
int main(void) {
    struct man me;
    me.weight = 68;
    me.age = 19;
    me.iq = 0.1;
    me.name = "Muhammed Answar C.K";
    printf("My name is %s, My age is %d, my weight is %d, my IQ is %f\n", me.name, me.age, me.weight, me.iq);
    return 0;
}