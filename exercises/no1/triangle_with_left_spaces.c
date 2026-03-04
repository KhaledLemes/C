#include <stdio.h>

int main() {
	char line, col, spaces, n;
	n = 8;
	for (line = n; line > 0; line--) {
		for (spaces = 1; spaces <= line-1; spaces++) {
			printf(" ");
		}
		for (col = n; col >= line; col--) {
			printf("*");
		} 
		printf("\n");
	}
	return 0;
}

