#include <stdio.h>

int main() {
    // Class #1
    // Hello world and comments

    printf("Hello world!\n");

    // Class #2
    // Escape chars

    printf("hey\n"); // \n just breaks the line like any other language
    printf("\they\n"); // \t tabulates

    printf("10k for a piece of paper is \"just a little expensive\"\n"); // \" makes " as part of a string.
    // Output:
    // 10k for a piece of paper is "just a little expensive"
    // Just like in Unix-like systems, '\' always ignores the next char, it is not exclusive for "

    char a = 'a';
    printf("%c\n", a);

    char *p = &a;
    printf("%p\n", p);

    // Class #3
    // Declaring variables and using scanf

    int age;
    printf("type your age\n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    // Class #4
    // real numbers

    float weight; // float = bad
    double height; // We usually opt for double, because it has a better precision.

    // Class #5
    // char

    char character;
    printf("Type a character\n");
    character = getchar();
    printf("Your character is %c\n", character);

    // Or

    char character2 = 'a';
    printf("Your character is %c\n", character2);

    // Also

    char character3 = 102;
    printf("Your character is %c and has a value of %d on the ASCII table\n", character3, character3);

    // Just like in Golang, each char is a numeric value

    // We also have getc
    char character4 = getc(stdin);
    printf("%c", character4);
    return 0;
}
