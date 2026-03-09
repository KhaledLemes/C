#include <stdio.h>

int main() {
    printf("coração\n");

    char a[3] = "ã";
    printf("%s\n\n\n", a);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}