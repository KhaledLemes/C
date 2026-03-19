#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Write a program that fills a 5×10 integer matrix,
    // computes the sum of each row and column storing them in separate vectors,
    // and prints the matrix along with both vectors labeled as row sums and column sums.

    srand(time(NULL));
    int mat[5][10] = {0};
    int lines[5], cols[10], i, j;

    printf("MATRIX:\n\t");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++){
            mat[i][j] = 1 + (rand() % 99);
            // Just puts a 0 on the left if it is a digit number for better visuals
            if (mat[i][j] < 10) {
                printf("0%d ", mat[i][j]);
            } else
                printf("%d ", mat[i][j]);
        }
        printf("\n\t");
    }
    printf("-------------------------------\n");
    for (i = 0; i < 5; i++) {
        int lineSum = 0;
        for (j = 0; j < 10; j++)
            lineSum += mat[i][j];
        lines[i] = lineSum;
        printf("\n\tLine %d sum: %d", i+1, lineSum);
    }

    printf("\n\n");

    for (i = 0; i < 10; i++) {
        int colSum = 0;
        for (j = 0; j < 5; j++)
            colSum += mat[j][i];
        cols[i] = colSum;
        printf("\n\tCol %d sum: %d", i+1, colSum);
    }
}