#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Write a program that prints the main diagonal of a 5×5 matrix.
    srand(time(NULL));
    int mat[5][5];

    printf("MATRIX:\n\t");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            mat[i][j] = 1 + (rand() % 99);
            // Just puts a 0 on the left if it is a digit number for better visuals
            if (mat[i][j] < 10) {
                printf("0%d ", mat[i][j]);
            } else
                printf("%d ", mat[i][j]);
        }
        printf("\n\t");
    }

    printf("\nDIAGONAL:\n\t");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mat[i][i]);
    }
}