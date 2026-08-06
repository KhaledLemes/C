#include <stdio.h>

int main() {
    int a = 1;
    int* p = &a;

    printf("Endereço da variável \"a\": %p\n", p);
    printf("%zu\n%zu\n%zu\n", sizeof(p), sizeof(double*), sizeof(char));

    long long hexadecimal = 0x7fffab6aa1a0;
    printf("%lld", hexadecimal);
    return 0;
}