#include <stdio.h>
#include <stdlib.h>

int main() {
    int* p = calloc(4, sizeof(int));
    // We got two main differences:
    // 1 - calloc asks for 2 args;
    // 2 - calloc also clears the value of the addresses, os it sets them to 0

    if (p) {
        printf("%d%d%d%d", p[0], p[1], p[2], p[3]); // 0000
    }
    else
        printf("No memory allocated you are a loser");
}