#include <stdio.h>

// Recreate stringcopy with pointers
void stringcopy(char s[], char s2[]) {
    int i = 0;
    while (*(s2+i) != '\0') {
        *(s+i) = *(s2+i);
        i++;
    }
}

int main() {
    char str1[100],str2[200] = "Test";
    stringcopy(str1, str2);
    printf("%s", str1);
    return 0;
}