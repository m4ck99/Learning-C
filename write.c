#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    int filedesc;
    char buf[20] = "Muhammed Answar C K\n";
    int writestat;
    filedesc = open("./test.txt", O_WRONLY | O_CREAT, S_IRWXU);
    if (filedesc == -1) {
        printf("File open operation failed\n");
        return -1;
    }
    else {
        printf("File open operation success!\n");
        writestat = write(filedesc, buf, 20);
        if (writestat == -1) {
            printf("File is not written\n");
        }
        else {
            printf("File written\n");
        }
        return 0;   
    }

}