#include <stdio.h>

int main(void) {
    int variable = 16;
    int *ptr = &variable;
    printf("The value of the int variable is: %d\n", variable);
    printf("The value of the pointer to the int variable is: %d\n", ptr);
    printf("The memmory address of the int variable is: %d\n", ptr);
    printf("The value held at the memmory address at which the pointer is pointing is: %d\n", variable);
    return 0;
}