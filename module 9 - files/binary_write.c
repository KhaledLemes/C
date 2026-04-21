#include <stdio.h>

typedef struct {
    char name[50];
    int age;
}Person;

int main() {
    FILE *f = fopen("bin.txt", "wb");
    char str[100]; int option = 1;
    Person p;

    if (f) {
        while (option) {
            printf("Write a name to the person: ");
            fgets(p.name, sizeof(p.name), stdin);
            printf("Now an age: ");
            scanf("%d", &p.age);
            printf("Type 0 to stop ");
            fwrite(&p, sizeof(Person), 1, f);
            scanf("%d", &option);
            getchar();
        }
            fclose(f);
    }
    else
        printf("coding isn't really for u man");
    return 0;
}
