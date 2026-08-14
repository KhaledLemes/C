#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/*
Now write a program that uses wait() to wait for the child process
to finish in the parent. What does wait() return? What happens if
you use wait() in the child?

PS: not on the book but I also tested it with waitpid().
*/
int main() {
    int pid = getpid();

    int rc = fork();
    if (rc < 0) {
        exit(1);
    } else if (!rc) {
        int b = wait(NULL);
        if (b < 0) {
            perror("ops foi mal");
        }
        printf("filho: %d\n", b);

        int wfp = waitpid(pid, NULL, 0);
        if (wfp < 0) {
            perror("nem aqui deu");
        }
        printf("filho: %d\n", b);
        exit(0);
    } else {
        int a = wait(NULL);
        printf("paizao: %d\n", a);
    }
}