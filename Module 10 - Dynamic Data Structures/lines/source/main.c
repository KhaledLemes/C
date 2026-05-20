#include <stdio.h>
#include <stdlib.h>
#include "../headers/line.h"

int main() {
    Line *line = create_line();
    for (int i = 0; i < 8; i++) {
        int err = insert_to_line(line, i+1);
        if (err != 0) {
            printf("Error allocating memory");
            return err;
        }
        printf("Beggining: %d\nEnd:%d\n", line->start->n, line->end->n);
    }

    Node *removed = remove_last_item(line);
    printf("Removed (before loop): %d\nBeggining: %d\nEnd:%d\n\n", removed->n,line->start->n, line->end->n);
    free(removed);
    for (int i = 0; i < 7; i++) {
        removed = remove_last_item(line);
        printf("Removed: %d\n", removed->n);
        free(removed);
    }
    free(line);
}