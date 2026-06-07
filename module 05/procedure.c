#include <stdio.h>

// funcs that won't return nothing
void printsmt(char *str, int amount_of_times) {
    for (int i = 0; i < amount_of_times; i++) {
        printf("%s", str);
    }
}

int main() {
    int amt = 0;
    char str[101];
    printf("Type something: ");
    fgets(str, 101,stdin);
    printf("Now the amount of times to print it: ");
    scanf("%d", &amt);
    printsmt(str, amt);
}