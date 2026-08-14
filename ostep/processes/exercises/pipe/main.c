#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    char khaled[30] = "teste";


    int pipedes[2] = { 1, 0 };
    pipe(pipedes);

    int rc = fork();
    if (rc < 0) {
        exit(1);
    } else if (!rc) {

        usleep(434);
        write(pipedes[1], khaled, 30);

        int novo = fork();
        if (novo < 0) {
            exit(232323);
        } else if (!novo) {
            char str[30];
            read(pipedes[0], str, 30);
            printf("%s\n", str);
            exit(1112);

        }
        wait(NULL);
    }
    wait(NULL);
}