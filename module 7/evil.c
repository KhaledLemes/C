#include <stdio.h>

void read(char v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", *(v+i));
    }
}

int main() {

    char s[20] = "Senha segura";
    char s1[100] = "Senhamais segura ainda";
    char s2[20] = "vc nao me ve";
    char s3[60] = "MUITO mais segura";

    printf("%p | %p | %p | %p\n\n", s, s1, s2, s3);
    read((s3)-sizeof(s), 400);
    return 0;
}