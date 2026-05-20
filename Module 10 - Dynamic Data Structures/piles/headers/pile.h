#ifndef LEARNING_PILE_H
#define LEARNING_PILE_H

typedef struct node {
    int n; // Value
    struct node *below; // Points to node below it
}Node;

Node *create();
int push(Node **top, int n);
Node *pop(Node **top);
void print(Node *top);

#endif //LEARNING_PILE_H