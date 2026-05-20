#include <stdio.h>
#include <stdlib.h>
#include "../headers/line.h"

Line *create_line() {
    Line *line = malloc(sizeof(Line));
    line->start = NULL;
    line->end = NULL;
    return line;
}

int insert_to_line(Line *line, int n) {
    Node *new = malloc(sizeof(Node));
    if (new) {
        new->n = n;
        new->next = NULL;
        if (line->end) {
            line->end->next = new;
            line->end = new;
        } else {
            line->start = new;
            line->end = new;
        }
        return 0;
    }
        return -1;
}

Node *remove_last_item(Line *line) {
    Node *removed = line->start;
    line->start = line->start->next;
    return removed;
}