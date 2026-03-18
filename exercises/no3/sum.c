#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Sum up each element of an array
    int mat[3][3];
    int sum = 0;
    srand (time(NULL));

    printf("Matrix:\n");
    for (int j = 0; j < 3; j++) {
        printf("\t");
        for (int k = 0; k < 3; k++) {
            int val = mat[j][k] = 100 + (rand() % 999);
            sum += val;
            printf("%d ", mat[j][k]);
        }
        printf("\n");
    }

    printf("\nSum: %d\n", sum);
    return 0;
}