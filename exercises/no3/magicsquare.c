#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Check if the 4x4 matrix is a magic square
// It was tested with actual magic squares, so it works, but the odds of getting actual magic squares out of random numbers is too low
int main() {
    srand(time(NULL));
    int lin = 3;
    int col = 3;
    int mat[lin][col];
    int sum = 0;

    printf("MATRIX:");
    for (int i = 0; i < lin; i++) {
        printf("\n\t");
        for (int j = 0; j < col; j++){
            mat[i][j] = 1 + (rand() % 2); //Radically increases the chance of a magic square
            // Just puts a 0 on the left if it is a digit number for better visuals
            if (mat[i][j] < 10) {
                printf("0%d ", mat[i][j]);
            } else
                printf("%d ", mat[i][j]);
        }
    }
    for (int i = 0; i < col; i++) {
       sum += mat[0][i];
    }
    printf("\nSUM OF LINES:\n");
    for (int i = 0; i < lin; i++) {
        int sumLin = 0;
        for (int j = 0; j < col; j++) {
            sumLin += mat[i][j];
        }
        printf("\tSum of line %d: %d\n", i+1, sumLin);
        if (sumLin != sum) {
            printf("This is NOT a magic square vro\n");
            return 0;
        }
    }
    printf("SUM OF COLS:\n");
    for (int i = 0; i < col; i++) {
        int sumCol = 0;
        for (int j = 0; j < lin; j++) {
            sumCol += mat[j][i];
        }
        printf("\tSum of col %d: %d\n", i+1, sumCol);
        if (sumCol != sum) {
            printf("This is NOT a magic square vro\n");
            return 0;
        }
    }
    printf("SUM OF MAIN DIAGONAL:\n");
    int sumDiag = 0;
    for (int i = 0; i < col; i++) {
        sumDiag += mat[i][i];
        if (i+1 == col) {
            printf("\tMain diagonal: %d\n", sumDiag);
            if (sumDiag != sum) {
                printf("This is NOT a magic square vro\n");
                return 0;
            }
        }
    }
    printf("SUM OF SECONDARY DIAGONAL:\n");
    sumDiag = 0;
    for (int i = 0; i < col; i++) {
        sumDiag += mat[i][col-1-i];
        if (i+1 == col) {
            printf("\tSecondary diagonal: %d\n", sumDiag);
            if (sumDiag != sum) {
                printf("This is NOT a magic square vro\n");
                return 0;
            }
        }
    }
    printf("This IS a magic square!!!!\n");

    return 0;
}