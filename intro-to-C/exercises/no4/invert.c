#include <stdio.h>

// Invert string
int main() {
    char str1[51], str2[51];
    int i = 0;

    printf("Type something to invert:\n");
    fgets(str1, 51, stdin);

    while(str1[i] != '\0' && str1[i] != '\n') {
        i++;
    }
    str1[i] = '\0';
    int length = i-1;
    i = 0;
    while (i <= length) {
        str2[i] = str1[length-i];
        i++;
    }

    printf("\tString 1: %s\n\tString 2: %s", str1, str2);
    return 0;
}