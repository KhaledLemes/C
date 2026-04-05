#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // If you have a string, it does not necessarily end on the end of the array.
    // i.e:
    //char str[50] = "Hi";
    // This string is only 3 chars long, but *str* holds up to 50. How would we get to the end of the valid chars itself?
    char str[101];
    printf("Write anything up to 100 chars\n");
    fgets(str, 101, stdin);

    int i;
    printf("For loop: ");
    for (i = 0; str[i] != '\0'; i++) {
        str[i] != '\n' ? printf("%c", str[i]) : printf("");
    }
    printf("\n");
    i = 0;
    //OR
    printf("While loop: ");
    while (str[i] != '\0') {
        str[i] != '\n' ? printf("%c", str[i]) : printf("");
        i++;
    }
    int length = i;
    str[i-1] = '\0';
    printf("\n---\n%sa.\nThis string holds up to %zu chars (Including \\0 on the end).\nThis string is %d chars long", str, sizeof(str), length);
    return 0;
}