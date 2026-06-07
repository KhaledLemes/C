#include <stdio.h>

typedef struct {
    int a;
}Stru;

void define(Stru *s) {
    s->a = 1;
}

void define2(Stru *s) {
    (*s).a = 2;
}
int main() {
    Stru st, st2;
    define(&st);
    define2(&st2);
    printf("%d %d", st.a, st2.a);
}