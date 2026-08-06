#include <stdio.h>
#include <string.h>

// Create a procedure that displays the binary 32bit value of an integer WITHOUT bitwise operators
void bin(unsigned int num) {
    char binstr[33] = "000000000000000000000000000000000";
    for (int i = 31; i >= 0; i--) {
        int rest = num%2;
        num = num/2;
        if (rest == 1)
            binstr[i] = '1';
        else
            binstr[i] = '0';
        if (num < 1) {
            break;
        }
    }
    binstr[32] = '\0';
    printf("%s", binstr);
}

int main() {
    bin(2147483649);
    return 0;
}