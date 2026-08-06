#include <stdio.h>

int main() {
	// Receive 3 numbers and find the biggest and the smallest ones
	int a, b, c;
	int biggest, smallest;

	// Considering the class has not got so far, I decided to use conditionals intead of fancy for loops and arrays
	// Respecting the teacher's pace and content.
	
	printf("Type tree values\n");
	scanf("%d%d%d", &a, &b, &c);

	if ((a == b || a == c) || (b == a || b == c)) {
		printf("The number's can't be the same please dont do that\n");
		return 0;	
	}

	if (a > b && a > c)
		biggest = a;
	if (a < b && a < c)
		smallest = a;

	
	if (b > a && b > c)
		biggest = b;
	if (b < a && b < c)
		smallest = b;
	
	if (c > a && c > b)
		biggest = c;
	if (c < a && c < b)
		smallest = c;
	
	printf("small number: %d\n", smallest);
	printf("big number: %d\n", biggest);
	
	return 0;
}
