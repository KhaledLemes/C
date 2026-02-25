#include <stdlib.h>
#include <stdio.h>

int main() {
    // Challenge is to ask for user's gender (M or F), age, weight and height
    // The challenge supposes the user will put the right info without trying to break or put anything dumb in here

    char gender;
    int age;
    double weight, height;

    printf("Please, insert your gender (M or F), age, weight and height in the given order\n");
    scanf("%c%d%lf%lf", &gender, &age, &weight, &height);
    printf("Gender: %c\tAge: %d\tWeight: %lf\tHeight: %lf\n", gender, age, weight, height);


    return 0;
}