#include <stdio.h>

int main() {
	int line, col, spaces, n;

	printf("Type the amount of lines you wish\n");
	scanf("%d", &n);

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

