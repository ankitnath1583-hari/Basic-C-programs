/*According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year 
is input through the keyboard write a program to find out what is the day on 1st 
January of this year.*/
#include <stdio.h>

int main() {
    int year, leapYears, normalYears, days, day;
    printf("Enter a year: ");
    scanf("%d", &year);


    leapYears = ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400);
    normalYears = (year - 1) - leapYears;
   days = (normalYears * 1) + (leapYears * 2);
   day = days % 7;
     if (day == 0)
        printf("1st January %d is Monday\n", year);
    else if (day == 1)
        printf("1st January %d is Tuesday\n", year);
    else if (day == 2)
        printf("1st January %d is Wednesday\n", year);
    else if (day == 3)
        printf("1st January %d is Thursday\n", year);
    else if (day == 4)
        printf("1st January %d is Friday\n", year);
    else if (day == 5)
        printf("1st January %d is Saturday\n", year);
    else
        printf("1st January %d is Sunday\n", year);

    return 0;
}
