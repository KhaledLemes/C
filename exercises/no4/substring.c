#include <stdio.h>

// Count the occurrences of a substring in a string
int main() {
    char str[222] = "khaled cebolinha ts mais aacebolinhalkllum ovo janela cebolinha porta quadrado teste";
    char search[16];
    int i = 0, searchlen = 0, occurrences = 0;

    printf("Big string:\n%s\n\nSearch in big string:\n", str);
    fgets(search, 16, stdin);

    while (search[searchlen] != '\n' && search[searchlen] != '\0') {
        searchlen++;
    }
    search[searchlen] = '\0';

    while (str[i] != '\0') {
        if (str[i] == search[0]) {
            for (int si = 0; si < searchlen; si++) {
                if (search[si] != str[i+si]) {
                    break;
                }
                if (si == searchlen-1) {
                    occurrences++;
                }
            }
        }
        i++;
    }
    printf("There are %d occurrences of substring '%s' in the big string", occurrences, search);
    return 0;
}