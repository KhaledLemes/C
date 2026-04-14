#include <stdio.h>

// Recreate stringcopy with pointers
void stringcopy(char s[], char s2[]) {
    while(*s2) {
        *s = *s2;
        s++; s2++;
    }
    *s = '\0';
}

int main() {
    char str1[100],str2[200] = "a";
    stringcopy(str1, str2);
    printf("%s", str1);
    return 0;
}