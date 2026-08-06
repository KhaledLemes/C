#ifndef LEARNING_LINE_H
#define LEARNING_LINE_H

typedef struct {
    char name[16];
    int deadline;
    float price;
}Product;

typedef struct node {
    Product *p;
    struct node *next;
}Node;

typedef struct {
    Node *start, *end;
}Line;

Line *create();

int insert_fst_p(Line *line, Node *new);
int insert_scnd_p(Line *line, Node *new);
int insert_trd_p(Line *line, Node *new);
int insert(Line *line, Product *p);
void insert_no_p(Line *line, Node *new);
void print_line(Node *start);
Node *delete(Line *line);

#endif //LEARNING_LINE_H