#include <stdio.h>

int main() {
    int mat[2][3][5] = {
        {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15},
        },
        {
                {1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15},
            }
    };
    for (int i = 0; i < 2; i++) {
        printf("=== BLOCO %d ===\n", i);

        for (int j = 0; j < 3; j++) {
            printf("Linha %d: [ ", j);

            for (int k = 0; k < 5; k++) {
                printf("%2d ", mat[i][j][k]);
            }

            printf("]\n");
        }
        printf("\n");
    }
    return 0;
}