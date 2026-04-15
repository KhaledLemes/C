#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = malloc(sizeof(int)); // This function allows you to just use the amount of bytes you are allocating
                                    // But since it is usually not used with primitives but with longer data, no one does this.
    if (p) {
        *p = 100;
        printf("%d\n", *p);
    }
    else {
        printf("Could not allocate memory loser gtfo\n");
    }

    // We can also allocate more than 1 slot of memory:
    int *p2 = malloc(2 * sizeof(int));
    if (p2) {
        *p2 = 100, *(p2+1) = 67;
        printf("%d %d\n", *p2, *(p2+1));
    }
    return 0;
}