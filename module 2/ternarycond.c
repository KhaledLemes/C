#include <stdio.h>

int main() {
	unsigned short age;
	printf("Please, insert your age:\n");
	scanf("%hu", &age);

	age < 18 ? printf("Can't drive, sorry\n") : printf("Please drive NOW\n");
	return 0;
}
