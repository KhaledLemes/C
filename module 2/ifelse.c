#include <stdio.h>

int main() {
	int x;
	printf("Type a value for x\n");
	scanf("%d", &x);

	if(x) {
		printf("x is true\n");
	} else {
		printf("x is false\n");
	}
	
	// We can see above a really bad practice
	// In C, everything that is != 0 is considered true, meaning <> 0 is always true
	// For security, we must always declare a secured bool or use the method bellow:

	
	if(x == 1) {
		printf("x is true\n");
	} else {
		printf("x is false\n");
	}

	// Now, every time x != 1, it will be false instead of true
	
	
	unsigned int age;
	printf("Type your age to see if you can drive in most countries\n");
	scanf("%d", &age);

	if(age >= 18) {
		printf("you sure can drive\n");
	} else {
		printf("get away from any car you find\n");
	}

	return 0;
}
