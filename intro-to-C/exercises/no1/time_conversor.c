#include <stdio.h>

int main() {
	/*
	 * Make a program to read the keyboard a number of seconds and print on the screen
	 * conversion to hours, minutes and seconds.
	 * 
	 * Example:
	 * Input: 36272
	 * Output: 1:1:12
	 *
	 */

	unsigned short input_seconds, hours, mins, secs;

	printf("Please, type the amount of seconds you want to convert to hours\n");
	scanf("%d", &input_seconds);
	
	hours = input_seconds / 3600;
	mins = input_seconds % 3600;
	secs = mins % 60;
	mins = mins / 60;
	//mins = mins - secs;
	
	printf("\n%u:%u:%u\n", hours, mins, secs);

	return 0;
}
