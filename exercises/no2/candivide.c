#include <stdio.h>

int main() {
	// Verify if a number can be divided by 2, 3 or 6
	int n;
	printf("Type a number to see if can be divided by 2, 3 or 6:\n");
	scanf("%d", &n);
	
	printf("------------------------\n%d can be divided by ");
	if (n % 2 == 0)
		printf("2\n");
	else if (n % 3 == 0)
		printf("3\n");
	else if (n % 6 == 0)
		printf("6\n");
	else
		printf("none of them :(\n");

	return 0;
}
