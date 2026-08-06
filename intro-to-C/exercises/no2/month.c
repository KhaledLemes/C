#include <stdio.h>

int main() {
	// Write a program to read an integer and check if it corresponds to a valid month in the calendar. If it does, print the name of the month; otherwise, print the message 'Invalid Month'.
	int m;

	printf("Type a number between 1-12 to see its month on the calendar\n");
	scanf("%d", &m);

	printf("The chosen month is ");
	
	switch(m) {
		case 1:
			printf("Jan\n");
			break;
		case 2:
			printf("Feb\n");
			break;
		case 3:
			printf("Mar\n");
			break;
		case 4:
			printf("Apr\n");
			break;
		case 5:
			printf("May\n");
			break;
		case 6:
			printf("Jun\n");
			break;
		case 7:
			printf("Jul\n");
			break;
		case 8:
			printf("Aug\n");
			break;
		case 9:
			printf("Sep\n");
			break;
		case 10:
			printf("Oct\n");
			break;
		case 11:
			printf("Nov\n");
			break;
		case 12:
			printf("Dec\n");
			break;
		default:
			printf("invalid\n");
			break;
	}
	return 0;
}
