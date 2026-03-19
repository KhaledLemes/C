#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Given two 3×3 matrices A and B, write a program to calculate the sum of the matrices and store it in a matrix C. Print all three matrices.
int main() {
    int A[3][3], B[3][3], C[3][3];
    srand (time(NULL));

    printf("Matrix:\n");
    for (int j = 0; j < 3; j++) {
        printf("\t");
        for (int k = 0; k < 3; k++) {
            A[j][k] = 1 + (rand() % 49);
            B[j][k] = 1 + (rand() % 49);
            if (A[j][k] < 10) {
                printf("0%d ", A[j][k]);
            }  else
            printf("%d ", A[j][k]);
        }
        printf("\t");
        for (int k = 0; k < 3; k++) {
            if (B[j][k] < 10) {
                printf("0%d ", B[j][k]);
            } else
            printf("%d ", B[j][k]);
        }
        printf("\n");
    }
    printf("\nSum:\n\t");
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            C[j][k] = A[j][k] + B[j][k];
        if (C[j][k] < 10) {
            printf("0%d ", C[j][k]);
        } else
            printf("%d ", C[j][k]);
        }
        printf("\n\t");
    }
    return 0;
}