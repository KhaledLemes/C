#include <stdio.h>

int main() {
    char senha[8], user[11];

    printf("Password:\n");
    scanf("%s", senha);
    senha[7] = '\0';

    printf("User:\n");
    scanf("%s", user);
    user[10] = '\0';

    printf("User: %s\n", user);


    printf("%s\n", senha);
    //printf("%d\n", a);

    printf("senha:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d) %d - %c\n",i, senha[i], senha[i]);
    }
    printf("user:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d) %d - %c\n",i, user[i], user[i]);
    }
    return 0;
}