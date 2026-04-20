#include <stdio.h>

int main() {
    // Writing something to a file
    FILE* file = fopen("test.txt", "w");
    char str[100];
    if (file) {
        printf("Write smt to ur file: ");
        fgets(str, 99, stdin);
        fputs(str, file);
        printf("aight done get a life now");
        fclose(file);
    }
    else
        printf("u cant do anything bruh");

    return 0;
}