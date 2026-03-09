#include <stdio.h>

int main() {
    // To solve the problem presented in last class, we can simply use getchar()
    // Considering the problem would be \n being attached as a value to the next char variable asked by the scan, we can simply put this value in
    // another var before going to the one we are actually aiming to store user's info

    char a, b;
    printf("Please, inform me a char you like a lot: ");
    scanf("%c", &a);
    getchar();
    printf("I want one more now, please inform me another character you like a lot: ");
    scanf("%c", &b);

    // Due to keyboard buffer, the value of 10 (\n) would be originally attached to *b*, however, it was wasted on getchar() instead
    // so we can now write the value we want to var *b*

    printf("Chars liked by you:\n1- char: %c\tNumeric: %d\n2- char: %c\tnumeric: %d\n", a, a, b, b);
    return 0;
}