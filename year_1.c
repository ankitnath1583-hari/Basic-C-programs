#include <stdio.h>

int main() {
    int year, totalDays = 0;
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Enter the year (e.g., 2025): ");
    scanf("%d", &year);

   
    for (int y = 2001; y < year; y++) {
        
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            totalDays += 366;
        else
            totalDays += 365;
    }

    
    int dayIndex = (totalDays) % 7;

    printf("On 1st January %d, it was a %s.\n", year, days[dayIndex]);

    return 0;
}