#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int *arr = malloc(size * sizeof(int)); // Better with calloc tho
    return arr;
}

int main() {
    int size = 5;
    int *arr = createArray(size);


    for (int i = 0; i < size; i++) {
        *(arr+i) = i;
        printf("%d ", *(arr+i));
    }
    printf("\n");

    size = 20;
    int *arr2 = realloc(arr, size * sizeof(int));
    printf("");

    printf("\n\n");
    for (int i = 0; i < size; i++) {
        if (*arr2+i > 4) {
        *(arr2+i) = i;
        }
        printf("%d ", *(arr2+i));
    }
}