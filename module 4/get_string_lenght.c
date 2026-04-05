#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // We can get the string length with a loop
    int i = 0;
    char str[50] = "String test n1";
    // loop:
    while(str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    int length = i;
    printf("%s\tlength: %d\n", str, length);
    // OR just use a builtin method

    char str2[50] = "Wake me up inside";
    int length2 = strlen(str2);
    printf("%s\tlength: %d", str2, length2);
    return 0;
}