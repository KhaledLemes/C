#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/* Write a program that calls fork(). Before calling fork(), have the
main process access a variable (e.g., x) and set its value to some-
thing (e.g., 100). What value is the variable in the child process?
What happens to the variable when both the child and parent change
the value of x? */
int main() {
    int x = 100;

    int rc = fork();
    if (rc < 0) {
        exit(111);
    } else if (!rc) {
        printf("Antes de mudar no filho - %d (%p)\n", x, &x);
        x = 1;
        printf("Depois de mudar no filho - %d (%p)\n", x, &x);

        *(volatile int*)&x = 5;
        exit(0);
    } else {
        wait(NULL);
        printf("Antes de mudar no pai - %d (%p)\n", x, &x);
        x = 2;
        printf("Depois de mudar no pai - %d (%p)\n", x, &x);

    }
}
