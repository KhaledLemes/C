#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/* Write a program that opens a file (with the open() system call)
and then calls fork() to create a new process. Can both the child
and parent access the file descriptor returned by open()? What
happens when they are writing to the file concurrently, i.e., at the
same time? */
int main() {
    int fd = open("./teste.txt", O_RDWR | O_CREAT | O_APPEND);


    int rc = fork();
    if (rc < 0) {
        exit(111);
    } else if (!rc) {
        int f_pid = getpid();
        printf("Filho: %d\n", f_pid);
        close(1);
        int fd = open("./teste.txt" ,O_RDWR | O_CREAT | O_APPEND);

        while (1) {
            sleep(1);
            printf("Mensagem do filho\n");
        }
        exit(0);
    } else {
        printf("fd do pai é o %d\n", fd);
        while (1) {
            sleep(2);
            printf("Mensagem do pai\n");
        }
    }
}
