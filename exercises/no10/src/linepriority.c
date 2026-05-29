#include <stdio.h>
#include "../header/line.h"

/*
 * Create a system for a carrier that puts the items that need to be delivered in an order of priority
 * Items that will reach the deadline in 1 day have the highest priority, 2-3 days the second priority, 4 days, the third.
 * Items that will reach the deadline in 5 or more days will not have priority at all
*/
int main() {
    Product list[12] = {
        {"Laptop", 1},
        {"RTX 5090 GPU", 1},
        {"ThinkPad X1", 1},
        {"ROG Ally", 2},
        {"iPhone 17 Pro", 2},
        {"Pixel 10 XL", 2},
        {"Galaxy S26", 999},
        {"Sony WH-1000", 4},
        {"AirPods Pro", 7},
        {"Stream Deck", 5},
        {"Keychron K2", 1},
        {"Logitech G Pro", 7}
    };
    Line *line = create();
    if (!line) {
        return -1;
    }

    for (int i = 0; i < 12; i++) {
        insert(line, &list[i]);
        printf("Item %d inserted\n", i+1);
    }
    print_line(line->start);
    return 0;
}
