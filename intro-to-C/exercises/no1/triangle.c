#include <stdio.h>

int main() {
	char line, col;
	for (line = 1; line <= 5; line++) {
		for (col = 0; col < line; col++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
