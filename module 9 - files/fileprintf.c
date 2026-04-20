#include <stdio.h>

int main() {
    FILE* f = fopen("test2.txt", "w");
    char str[1000];

    if (f) {
        printf("Write something to your file:");
        fgets(str, 999, stdin);
        fprintf(f, "%s", str);
        printf("Go check it now :D\n");
        fclose(f);
    }
    else
        printf("Did not work lil bro");
    return 0;
}