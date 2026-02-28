#include <stdio.h>

int main() {
    // Read user's gender, age, weight and height
    char gender;
    int age;
    float weight, height;

    printf("Please, type your gender ('m' or 'f')\n");
    scanf("%c", &gender);

    printf("Please, type your age, weight and height (kg and cm)\n");
    scanf("%d %f %f", &age, &weight, &height);

    printf("Gender: %c\nAge: %d\nWeight: %.2f\nHeight: %.2f\n", gender, age, weight, height);
}