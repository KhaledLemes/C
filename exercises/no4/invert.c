#include <stdio.h>

// Invert string
int main() {
    char str1[51], str2[51];
    int i = 0;

    printf("Type something to copy:\n");
    fgets(str1, 51, stdin);

    while(str1[i] != '\0' && str1[i] != '\n') {
        str2[i] = str1[i];
        i++;
    }
    str1[i] = '\0';
    str2[i] = '\0';
    printf("\tString 1: %s\n\tString 2: %s", str1, str2);
    return 0;
}