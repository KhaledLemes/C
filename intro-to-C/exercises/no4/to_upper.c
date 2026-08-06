#include <stdio.h>

// To upper
int main() {
    char str1[51], str2[51];
    int i = 0;


    printf("Type something to transform to upper case:\n");
    fgets(str1, 50, stdin);

    while(str1[i] != '\n' && str1[i] != '\0') {
        if (str1[i] >= 97 && str1[i] <= 122) {
            str2[i] = str1[i]-32;
        } else {
            str2[i] = str1[i];
        }
        i++;
    }
    str1[i] = '\0';
    str2[i] = '\0';

    printf("\tOriginal string: %s\n\tTo upper: %s", str1, str2);
    return 0;
}
