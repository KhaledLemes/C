#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>


int main() {
    int pid = getpid();
    printf("Hello! PID (%d)\n", pid);

    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "Error\n");
        exit(1);
    } else if (rc == 0) {
        printf("Hello! I am a children with PID %d\n", (int) getpid());

        char *args[3];
        args[0] = strdup("cat");
        args[1] = strdup("read_with_cat.txt");
        args[2] = NULL;

        execvp(args[0], args);
        exit(0);
    } else if (rc > 0) {
        wait(NULL);
        printf("Hey I am the dad. My name is %d and my child is %d\nHe is already dead though, because I decided to wait until his death.\n", pid, rc);
    }

    return 0;
}
