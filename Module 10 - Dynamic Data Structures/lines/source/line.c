#include <stdio.h>
#include <stdlib.h>
#include "../headers/line.h"

Line *create_line() {
    Line *line = malloc(sizeof(Line));
    line->start = NULL;
    line->end = NULL;
    return line;
}

void priority_insert(Line *line, Node *new) {
    if (line->start->n < 60) {
        new->next = line->start;
        line->start = new;
    } else {
        Node *aux = line->start;
        while (aux->next && aux->next->n >= 60) {
            aux = aux->next;
        }
        new->next = aux->next;
        aux->next = new;
    }
}

void non_priority_insert(Line *line, Node *new) {
    if (line->end) {
        line->end->next = new;
        line->end = new;
    } else {
        line->start = new;
        line->end = new;
    }
}

int insert_to_line(Line *line, int n) {
    Node *new = malloc(sizeof(Node));
    if (new) {
        new->n = n;
        new->next = NULL;
        if (n < 60) {
            // Priority is numbers above 59
            non_priority_insert(line, new);
            return 0;
        }
        priority_insert(line, new);
        return 0;
    }
    return -1;
}

Node *remove_last_item(Line *line) {
    Node *removed = line->start;
    line->start = line->start->next;
    return removed;
}
