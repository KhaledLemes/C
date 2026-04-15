#include <stdio.h>
#include <stdlib.h>

int main() {
    int **mat;
    int lin = 4, col = 120;

    mat = malloc(4*sizeof(int*)); // 4 columns
    for (int i = 0; i < lin; i++) {
        *(mat+i) = malloc(col*sizeof(int));
        if (*(mat+i) == NULL) {
            printf("Learn how to code then u come back lmaooo");
            free(mat);
            return 11;
        }
        for (int j = 0; j < col; j++) {
            mat[i][j] = j;
        }
    }
    for (int i = 0; i < lin; i++) {
        printf("\n");
        for (int j = 0; j < col; j++) {
            printf("%c", *(*(mat+i)+j));
        }
    }
    for (int i = 0; i < lin; i++) {
        free(mat[i]);
    }
    free(mat);
}