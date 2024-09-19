    #include <stdio.h>
    #include <stdlib.h>

    int allocate(void) {
        char *ptr = malloc(36 * sizeof(char));
        if (!ptr) {
            puts("Memmory allocation failled!.");
            return 1;
        }
        else {
            return 0;
        }
        

    }
    void main(void) {
        char *ptr = NULL;
        ptr = "Memory was successfully allocated.#";
        puts(ptr);

    }