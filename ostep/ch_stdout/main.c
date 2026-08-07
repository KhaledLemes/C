#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <fcntl.h>

int main() {
    char test[32];
    int fd;
    close(STDOUT_FILENO); // Goodbye stdout
    fd = open("output.txt", O_RDWR); // Hello new stdout : ./output.txt
    printf("This is a test");

    close(STDOUT_FILENO); // close(1)
    printf("STDOUT DOES NOT EXIST, THIS WILL NEVER BE PRINTED");
    fd = 0;
    close(STDIN_FILENO); // close(stdin)
    fgets(test, 32, stdin);

    close(fd);
    return 0;
}