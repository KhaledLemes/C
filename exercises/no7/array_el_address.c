#include <stdio.h>

// Create program to print each element of an array and its address
int main() {
    int a[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        printf("%p: %d\n", &a, *(a+i));
    }


    return 0;
}