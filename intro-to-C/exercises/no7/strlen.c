#include <stdio.h>

// Create a function that returns the lenght of a string
int strle(char *s) {
    int len = 0, i = 0;

    for (i = 0; s[i] != '\0'; i++) {
        len++;
    }
    return len;
}

    int main() {
        char a[4] = "";
        printf("%d", strle(a));
        return 0;
    }

