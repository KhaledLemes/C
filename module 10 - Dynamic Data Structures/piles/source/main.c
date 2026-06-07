#include <stdio.h>
#include <stdlib.h>
#include "../headers/pile.h"

int main() {
    Node *pile = create();
    push(&pile, 1);
    printf("%d %p\n", pile->n, pile->below);
    push(&pile, 2);
    printf("%d %p\n", pile->n, pile->below);
    push(&pile, 3);
    printf("%d %p\n", pile->n, pile->below);

    Node *old = pop(&pile);
    printf("\nOld top value: %d\nNew top value: %d\n", old->n, pile->n);

    printf("End result:");
    print(pile);
    printf("\n");
    free(pile);
    free(old);
    
		return 0;
}
