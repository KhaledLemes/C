#include <stdio.h>

// Print the highest and highest element of an array using pointers instead of index position
int main() {
    int a[100] = {1,6,2,3,4,5,55,67,0};
    int low = *a, hig = *a;
    for (int i = 1; i <= 100; i++) {
        if (*(a+i) < low) {
            low = *(a+i);
        }
        else if (*(a+i) > hig) {
            hig = *(a+i);
        }
    }
    printf("lowest value: %d\nHighest value: %d\n", low, hig);
}