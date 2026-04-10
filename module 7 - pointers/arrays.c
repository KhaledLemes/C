#include <stdio.h>

// arrays may behave like pointers sometimes
int main() {
    char test[2] = "a";
    char str1[3] = "aa";
    char str2[10] = "Khaled l";

    printf("%p | %p | %p\n\n\n",test, str1, str2);
    printf("%s\n\n\n",test+3);
    char* p = str1;
    printf("str value before changing it: %s\n", p);

    p = str2;

    printf("str val after changing it: %s\n", p);

    printf("%p%s",test+3,test+3);

    return 0;
}