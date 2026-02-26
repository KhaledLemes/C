#include <stdio.h>

int main() {
    long long int a = sizeof(long);
    printf("Size of long long int in bytes: %lld (%lldbits)\n",a, a*8);

    int intsize = sizeof(int);
    int csize = sizeof(char);
    short shortsize = sizeof(short);

    printf("Size of shor in bytes: %d (%dbits)\n", shortsize, shortsize*8);
    printf("Size of int in bytes: %d (%dbits)\n", intsize, intsize*8);
    printf("Size of char in bytes: %d (%dbits)\n", csize, csize*8);

    char bigword[] = "PNEUMOULTRAMICROSCOPICOSSILICOVULCANOCONIOSE";
    char word[] = "word";

    printf("size of hi: %lu bytes\n", sizeof("hi"));
    printf("Size of word (bytes): %lu\nSize of big word (bytes): %lu\n", sizeof(word), sizeof(bigword));


    printf("Size of sizeof(char) in bytes: %lu (%lubits)\n", sizeof csize, sizeof csize*8);

    return 0;
}