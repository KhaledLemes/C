#include <stdio.h> 

int main() {
	// Read 5 integers, one at a time. Count how many of these values are negative and how many are positive. At the end, print on the screen the quantity of negative and positive numbers.
	
	int a,b,c,d,e;
	char pos, neg;
	
	printf("Please type 5 numbers below\n");

	scanf("%d", &a);
	if (a > 0)
		pos++;
	else if (a < 0)
		neg++;

	scanf("%d", &b);
	if (b > 0)
		pos++;
	else if (b < 0)
		neg++;

	scanf("%d", &c);
	if (c > 0)
		pos++;
	else if (c < 0)
		neg++;

	scanf("%d", &d);
	if (d > 0)
		pos++;
	else if (d < 0)
		neg++;

	scanf("%d", &e);
	if (e > 0)
		pos++;
	else if (e < 0)
		neg++;

	printf("Negatives: %d\tPositives: %d\n", neg, pos);

	return 0;
}
