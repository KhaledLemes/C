#include <stdio.h>

struct Date {
    int d,m,y;
};

// typedef permanently changes the name of whatever comes afterwards
typedef struct Perms {
    char rwx[4];
}Perms;

typedef struct File {
    char name[250];
    int bytes;
    Perms perms;
}File;

typedef int integer_number_meaning_it_is_not_a_real_number;
typedef int a;
typedef a b;

int main() {
    struct Date date = {
        21,06,2026
    };
    struct Date date2;
    date2.d = 1;
    date2.m = 2;
    date2.y = 2003;

    File file = {
        "test.txt",
        15,
        "rw-"
    };

    integer_number_meaning_it_is_not_a_real_number a = 2;

    printf("%zu\n%zu", sizeof(File), sizeof(file));

    return 0;
}