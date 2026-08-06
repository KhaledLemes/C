#include <stdio.h>
#include <math.h>

int main() {
	// BMI calculator	
	double w, h; // Using double for increased precision. It is a small program, it will not consume that much memory
	
	printf("Please, type your weight in kg and yor height in meters.\n");
	
	printf("Weight (kg):");
	scanf("%lf", &w);

	printf("Height (m):");
	scanf("%lf", &h);

	double BMI = w / (h * h);
	char *adjective;
	
	if (isnan(BMI)) {
		printf("\nThat ain't no number bro get out\n");
		return 67;
	}	
	else if (BMI < 18.5)
		adjective = "thin af bro go get sum to eat";
	else if (BMI >= 18.5 && BMI <= 25)
		adjective = "normal weight man u fine aint got no worries";
	else if (BMI > 25 && BMI <= 30)
		adjective = "kinda fatty my n just eat a lil bit less and u must be fine in 3 weeks or sm";
	else if (BMI > 30 && BMI <= 35)
		adjective = "fat af, u starting to get bad man quit eating that bs you eat fr";
	else if (BMI > 35 && BMI <= 40)
		adjective = "real fat right now quit that shit man or else ur gonn die";
	else if (BMI > 40)
		adjective = "the great king of Texas, the final boss of Walmart";	

	
	printf("Your BMI is %.2lf, you are %s\n", BMI, adjective);

	
	return 0;
}
