#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Write a program that prints the secondary diagonal of a 7×7 matrix.
int main() {
    srand(time(NULL));
    int mat[7][7];

    printf("MATRIX:\n\t");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++){
            mat[i][j] = 1 + (rand() % 99);
            // Just puts a 0 on the left if it is a digit number for better visuals
            if (mat[i][j] < 10) {
                printf("0%d ", mat[i][j]);
            } else
                printf("%d ", mat[i][j]);
        }
        printf("\n\t");
    }
    printf("\nSECONDARY DIAGONAL:\n\t");
    for (int i = 0; i < 7; i++) {
        printf("%d ", mat[i][6-i]);
    }
    return 0;
}