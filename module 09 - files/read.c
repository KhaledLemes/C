#include <stdio.h>

int main() {
    FILE *f = fopen("test.txt", "r");
    char str[100];

    if (f) {
        fgets(str, 100, f);
        printf("%s", str);
        fclose(f);
    }
    else
        printf("coding isn't really for u man");
    return 0;
}