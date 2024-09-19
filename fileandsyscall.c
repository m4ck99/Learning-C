#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    int filedesc;
    filedesc = open("./test.txt", O_WRONLY | O_CREAT, S_IRWXU);
    if (filedesc == -1) {
        printf("File open operation failed\n");
        return -1;
    }
    else {
        printf("File open operation success!\n");
        return 0;   
    }
}