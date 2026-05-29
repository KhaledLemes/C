#include <stdio.h>
#include <stdlib.h>
#include "../header/line.h"

Line *create() {
    Line *line = malloc(sizeof(Line));
    if (line) {
        line->start = NULL;
        line->end = NULL;
        return line;
    }
    return NULL;
}

int p_insert(Line *line, Node *new, int days) {
    if (line->start->p->deadline > days) {
        new->next = line->start;
        line->start = new;
    } else {
        Node *aux = line->start;
        if (!aux)
            return -1;
        while (aux->next && aux->next->p->deadline <= days)
            aux = aux->next;
        new->next = aux->next;
        aux->next = new;
    }
    return 0;
}

int insert(Line *line, Product *p) {
    Node *node = malloc(sizeof(Node));
    if (!node) {
        return -1;
    }
    if (!p) {
        free(node);
        return -1;
    }

    node->p = p;
    if (line->start) {
        return p_insert(line, node, p->deadline);
    }
    line->start = node;
    line->end = node;
    return 0;
}

Node *delete(Line *line) {
    if (line->start) {
        Node *removed = line->start;
        line->start = removed->next;
        return removed;
    }
    return NULL;
}

void print_line(Node *start) {
    if (start) {
        printf("\n-------------------------------------\n%s - %d days to deliver\t", start->p->name,
               start->p->deadline);
        print_line(start->next);
    } else
        printf("\n-------------------------------------\n\nEND OF LINE!\n");
}
