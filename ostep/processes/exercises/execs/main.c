#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    char *cmd[10];
    int rc = fork();
    if (rc < 0) {
        printf("Error\n");
        exit(1);
    } else if (!rc) {
        cmd[0] = strdup("/bin/ls");
        cmd[1] = NULL;
        execle("/bin/ls", NULL);
        printf("aaaa\n");
        exit(0);
    } else {

    }
}