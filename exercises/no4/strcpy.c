#include <stdio.h>
#include <string.h>

// Create a program that copies a string without built-in functions
int main() {
    char str1[50], str2[50];
    int i = 0;

    printf("Type something to copy:\n");
    fgets(str1, 50, stdin);

    while(str1[i] != '\n' && str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str1[i] = '\0';
    str2[i] = '\0';
    printf("\tString 1: %s\n\tString 2: %s", str1, str2);
    return 0;
}