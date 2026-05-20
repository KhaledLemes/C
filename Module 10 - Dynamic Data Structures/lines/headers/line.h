#ifndef LEARNING_LINE_H
#define LEARNING_LINE_H

typedef struct node {
    int n;
    struct node *next;
}Node;

typedef struct {
    Node *start, *end;
}Line;

Line* create_line();
int insert_to_line(Line *line, int n);
Node *remove_last_item(Line *line);

#endif //LEARNING_LINE_H