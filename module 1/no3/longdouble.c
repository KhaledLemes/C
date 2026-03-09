#include <stdio.h>

int main() {
    printf("Numeric types and size:\n");
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));

    printf("Float and double:\n");
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));
    printf("long double in bits: %zu\n", sizeof(long double)*8);

    return 0;
}