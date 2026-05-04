#include <stdio.h>
#include <stdlib.h>

// Each node holds a value and a pointer to the node below.
typedef struct node {
    int n; // Value
    struct node *below; // Points to node below it
}Node;

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

int main() {
    Node *pile = create();
    push(&pile, 1);
    printf("%d %p\n", pile->n, pile->below);
    push(&pile, 2);
    printf("%d %p\n", pile->n, pile->below);
    push(&pile, 3);
    printf("%d %p\n", pile->n, pile->below);

    Node *old = pop(&pile);
    printf("\nOld top value: %d\nNew top value: %d", old->n, pile->n);
    free(pile);
    free(old);
    return 0;
}