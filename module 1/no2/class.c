#include <stdlib.h>
#include <stdio.h>

int main() {
    // 1 - Getting multiple values from user in
    int age;
    double height, weight;

    // printf("Please type your age, weight and height in the given order\n");
    // scanf("%d %lf %lf", &age, &weight, &height);
    // printf("Your age is %d, weight is %.2lf and height is %.2lf\n", age, weight, height);

    // It is important to note that whenever we ask the program to read a char after numeric values, it will break (except when we tell the program it may happen, like bellow)
    // The keyboard buffer interprets " " and "\n" as a possible character, so when we ask to print it as a char, it will not display anything:
    char gender;

    printf("Please type your age, weight and height in the given order\n");
    scanf("%d%lf%lf %c", &age, &weight, &height, &gender);
    printf("Char: %c\nNumeric: %d\n", gender, gender);

    // To solve it, we simply put spaces between expected arguments when we expect a char:
    char a,b;
    printf("Please, write 2 characters:\n");
    scanf("%c %c", &a, &b);
    // When we put this space, the program will expect and discard the space between the chars, thus, it will not save var b as a space/enter, even if
    // we press them
    printf("Char A: %c\nNumeric A: %d\n", a, a);
    printf("Char B: %c\nNumeric B: %d\n", b, b);

    // The method above can also fail since we still have to break to continue the application, the the "\n" will be variable a's value instead
    // We may also use getchar()
    return 0;
}