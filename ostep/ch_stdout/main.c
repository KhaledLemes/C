#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <fcntl.h>

int main() {
    int fd;
    close(1); // Goodbye stdout
    fd = open("output.txt", O_RDWR); // Hello new stdout : ./output.txt
    printf("This is a test");
    close(fd);
    return 0;
}