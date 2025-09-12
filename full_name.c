#include <stdio.h>

int main() {
    char fullName[100];

    printf("Enter your full name: ");
    scanf("%[^\n],fullName");

    printf("Your full name is: %s\n", fullName);

    return 0;
}