#include <stdio.h>

int main() {
    int a, result;
    printf("Binary calculator that only multiplies by two. Type the number you want to multiply:");
    scanf("%d", &a);
    result = a << 1;
    printf("Result: %d\n", result);
}