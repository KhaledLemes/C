#include <stdio.h>

int main() {
    /*
     * A company hires a plumber for R$45.00 per day.
     * Write a program that asks for the number of days worked by the plumber and prints the net amount to be paid, knowing that 8% is deducted for income tax.
     */
    unsigned int worked_days;
    float gross_income = 45;

    printf("How many days have the plumbed worked?\n");
    scanf("%u", &worked_days);

    gross_income *= worked_days;
    const float net_income = gross_income - ((gross_income*8)/100);

    printf("Gross income: %.2f\n", gross_income);
    printf("..Income tax: 8%%\n");
    printf("..Net income: %.2f\n", net_income);
}