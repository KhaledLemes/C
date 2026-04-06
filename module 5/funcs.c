#include <stdio.h>

int strlen(char *str) {
    int i = 0;
    while (str[i] != '\n' && str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[101];
    printf("Type something to see the amount of chars\n");
    fgets(str, 101, stdin);
    str[strlen(str)] = '\0';
    printf("String '%s' has %d chars", str, strlen(str));
    return 0;
}
