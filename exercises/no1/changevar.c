#include <stdio.h>

int main() {
    // Change the value of two variables with and without an auxiliary
    // With temp var ------------------------
    int a = 1, b = 2, c = a;
    printf("Before changing:\na: %d\tb: %d\n", a, b);

    a = b;
    b = c;
    printf("After changing:\na: %d\tb: %d\n", a, b);

    // Without temp var ------------------------
    a = 200, b = 50;
    printf("Before changing:\na: %d\tb: %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a- b;
    printf("After changing:\na: %d\tb: %d\n", a, b);

}