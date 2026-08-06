#include <stdio.h>

int main() {
	// Read a number and state whether it is divisible by 2, by 3, AND by 5.
	int n;	
	printf("Type a number to see if it can de divided by 2, 3 AND 6\n");
	scanf("%d", &n);
	
	printf("-----------------------\n%d can be divided by:\n");
	if (n % 2 == 0)
		printf("2\n");
	if (n % 3 == 0)
		printf("3\n");
	if (n % 5 == 0)
		printf("5\n");
	printf("\n");

	return 0;
}
