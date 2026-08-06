#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Write a program that prints the secondary diagonal of a 7×7 matrix.
int main() {
    srand(time(NULL));
    int lin = 5;
    int col = 4;
    int mat[lin][col];
    int transp[col][lin];

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
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            transp[j][i] = mat[i][j];
        }
    }
    printf("\nTRANSPOSE:\n\t");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < lin; j++) {
            if (transp[i][j] < 10) {
                printf("0%d ", transp[i][j]);
            } else
                printf("%d ", transp[i][j]);
        }
        printf("\n\t");
    }
}