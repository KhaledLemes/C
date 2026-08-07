#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

void sigint_handle(int ps) {
    printf("I am not being interrupted. Cry.\n");
    sleep(60);
}

int main() {
    int rc = fork();
    if (rc < 0) {
        exit(1);
    } else if (rc == 0) {
        printf("Hello I am son\n");
        signal(SIGINT, sigint_handle);
        printf("Now I kinda wanna end.\n");
        exit(0);
    } else if (rc > 0) {
        sleep(2);
        kill(rc, SIGINT);
        wait(NULL);
    }
    return 0;
}