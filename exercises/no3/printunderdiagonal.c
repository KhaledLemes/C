#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Write a program that prints only the values below the main diagonal of a 4×4 matrix.
int main() {
    srand(time(NULL));
    int lin = 4;
    int col = 4;
    int mat[lin][col];

    printf("MATRIX:\n\t");
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++){
            mat[i][j] = 1 + (rand() % 99);
            // Just puts a 0 on the left if it is a digit number for better visuals
            if (mat[i][j] < 10) {
                printf("0%d ", mat[i][j]);
            } else
                printf("%d ", mat[i][j]);
        }
        printf("\n\t");
    }
    printf("\n");
    printf("Under main diagonal:");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] < 10) {
                printf("0%d ", mat[i][j]);
            } else
                printf("%d ", mat[i][j]);
        }
        printf("\n\t");
    }

    return 0;
}