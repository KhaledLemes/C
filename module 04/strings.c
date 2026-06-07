#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[13] = "Hello world!"; //String must always be string size + 1 so \0 can be put in the end of the string
    printf("%s\n", str);
    char str2[2] = "a";
    printf("%s\n", str2);
    // Common functions to get string values in C

    // gets(*string) - REMOVED
    //char getsstr[100];
    //gets(getsstr);

    // fgets()

    char str3[5];
    fgets(str3, sizeof(str3), stdin); // if the input is higher than __n, then it will cut it. If the output is the same exact size as the size of the variable, it will remove the last letter and put a \0 on the end
    printf("You wrote: %s\n", str3);
    return 0;
}
