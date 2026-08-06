#include <stdio.h>

int main() {
    /*
    Write a program that reads a restaurant bill amount, the tip amount (as a percentage)
    and the number of people to split the bill.
    Print the amount each person should pay. Assume the bill will be split equally.
     */
    unsigned int people, tip_in_percentage;
    float total, real_total, real_tip;

    printf("Type the bill total amount:\n$");
    scanf("%f", &total);

    printf("Now type the tip amount (in %%)\n%%");
    scanf("%u", &tip_in_percentage);

    real_tip = (total * tip_in_percentage)/100;
    real_total = total + tip_in_percentage;

    printf("How many people will pay?\n");
    scanf("%u", &people);

    printf("                Summary:\n----------------------------------------\n");
    printf("             Bill total:\t$%.2f\n", total);
    printf("                    Tip:\t$%.2f (%u%%) \n\n", real_tip, tip_in_percentage);
    printf("                  Total:\t$%2.f\n", real_total);
    // printf("                 .\n");
    printf("                 People:\t%u\n", people);
    printf("Total amount per person:\t$%.2f\n", real_total/people);
    printf("----------------------------------------");

}