#include <stdio.h>

//#define DEBUG  

int main() {
    int a = 10, b = 5;
    int sum = a + b;

    #ifdef DEBUG
        printf("DEBUG: a = %d, b = %d\n", a, b);
        printf("DEBUG: sum = %d\n", sum);
    #endif

    printf("Result = %d\n", sum);
    return 0;
}
