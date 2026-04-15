#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int *arr = malloc(size * sizeof(int)); // Better with calloc tho
    return arr;
}

int main() {
    // int size = 20;
    // int arr[len];
    //
    // We will be doing this, but with malloc instead. Specially useful to share info between functions, for example.
    // We also use dynamic array for when an array does not have a fixed value or its value is determined by user input

    int *arr, size = 5;
    arr = createArray(size);

    for (int i = 0; i < size; i++) {
        printf("%d", *(arr+i));
    }
}
