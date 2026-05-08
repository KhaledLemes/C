#include <stdio.h>
#include <stdlib.h>
#include "../headers/pile.h"

// Each node holds a value and a pointer to the node below.
Node *create() {
    return NULL;
}

int push(Node **top, int n) {
    Node *new = malloc(sizeof(Node));
    if (new) {
        new->n = n;
        new->below = *top;
        *top = new;
        return 1;
    }
    return -1;
}

Node *pop(Node **top) {
    if (*top) {
        Node *remove = *top;
        *top = remove->below;
        return remove; // returns old node
    }
    return NULL;
}

void print(Node *top) {
    if (top) {
        printf("\n%d", top->n);
        top = top->below;
        print(top);
    }
}