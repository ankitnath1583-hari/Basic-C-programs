#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1 for Monday, ..., 7 for Sunday): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("It's a Weekday.\n");
            break;
        case 6:
        case 7:
            printf("It's the Weekend! 🎉\n");
            break;
        default:
            printf("Invalid day number! Please enter a number from 1 to 7.\n");
    }

    return 0;
}