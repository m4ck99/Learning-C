#include <stdio.h>

int main(void) {
    int integer = 100;
    int *pointer = &integer;
    printf("The value of pointer of our integer variable is: %d\n", pointer);
    return 0;
}