#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    int rc = fork();
    if (rc < 0) {
        exit(1);
    } else if (!rc) {

        exit(0);
    } else {
        
    }
}