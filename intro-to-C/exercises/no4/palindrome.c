#include <stdio.h>

// Invert string
int main() {
    char str1[51], str2[51];
    int i = 0;

    printf("Type something to check if it is a palindrome:\n");
    fgets(str1, 51, stdin);

    while(str1[i] != '\0' && str1[i] != '\n') {
        i++;
    }
    str1[i] = '\0';
    int length = i-1;
    i = 0;
    while (i <= length) {
        str2[i] = str1[length-i];
        if (str1[i] != str2[i]) {
            printf("\nI am sorry but %s is not a palindrome. letter number %d is %c, while inverted is %c. Get a life", str1, i+1, str1[i], str2[i]);
            return 0;
        }
        i++;
    }
    printf("\n%s is a palindrome!\nInverted version: %s", str1, str2);
    return 0;
}
