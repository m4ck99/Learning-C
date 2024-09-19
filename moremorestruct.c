#include <stdio.h>
#include <stdlib.h>

struct name {
    char *name;
};


int main(void) {
    struct name myname;
    struct name *ptr;
    ptr = malloc(sizeof(struct name));
    myname.name = malloc(5 * sizeof(char));
    ptr->name = malloc(5 * sizeof(char));
    myname.name = "Answar";
    printf("%s\n", myname.name);
    (*ptr).name = "malutty";
    printf("%s\n", (*ptr).name);
    ptr->name = "bicha and kunjalu";
    printf("%s\n", ptr->name);
    return 0;
}