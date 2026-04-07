#include <stdio.h>
#include <string.h>

// Write a program using functions and procedures that receives the average temperature of each month of the year, storing them in an array.
// At the end, display the highest and lowest temperatures of the year and indicate in which month they occurred (show the month in full: January, February, …). Ignore ties.
void avgtemp(double avg_month_temp[12]) {
    double highest_and_lowest_temp[2] = {avg_month_temp[0], avg_month_temp[0]};
    char month_names[2][10] = {"January", "January"};

    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for (int i = 0; i < 12; i++) {
        if (avg_month_temp[i] < highest_and_lowest_temp[0]) {
           highest_and_lowest_temp[0] = avg_month_temp[i];
            strcpy(month_names[0], months[i]);
        } else if (avg_month_temp[i] > highest_and_lowest_temp[1]) {
           highest_and_lowest_temp[1] = avg_month_temp[i];
            strcpy(month_names[1], months[i]);
        }
    }
        printf("\t%s was the coldest month, average temperature: %.2f°C\n\t%s was the hottest month, average temperature: %.2f°C", month_names[0],highest_and_lowest_temp[0], month_names[1],highest_and_lowest_temp[1]);
}

int main() {
    double temp[12] = {29.50,25.94,30.30,26.30,24.50,21.80,20.60,23.40,25.80,26.20,25.90,26.5}; // All data is from Brazil, 2025
    avgtemp(temp);
    return 0;
}