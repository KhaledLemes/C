#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    int rc = fork();
    if (rc < 0) {
        exit(1);
    } else if (!rc) {
        close(1);
        while (1) {
            sleep(2);
            printf("sou o filho\n");
        }
        exit(0);
    } else {
        while (1) {
            sleep(2);
            printf("sou o pai\n");
        }
    }
}