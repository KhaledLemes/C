#include <stdio.h>

int main() {
    char mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    for (int i = 0; i < 9; i++) {
        printf("%p = %d\n", &mat[0][0]+i, (mat[0][0]+i));
    }
    return 0;
}