#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
}Person;

int main() {
    FILE *f = fopen("bin.txt", "rb");
    Person p;

    if (f) {
        while (fread(&p, sizeof(Person), 1, f)) {
            printf("name: %s\nage: %d\n\n", p.name, p.age);
        }
    }
    else
        printf("coding isn't really for u man");
    return 0;
}
