#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[3][5];
    srand (time(NULL));
    for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 5; k++) {
                mat[j][k] = 1000 + (rand() % 9000);
                printf("%d ", mat[j][k]);
            }
        printf("\n");
        }
    return 0;
}
