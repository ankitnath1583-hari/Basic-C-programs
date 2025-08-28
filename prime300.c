#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 300 are:\n");

    for(i = 2; i <= 300; i++) {
        isPrime = 1;  // assume number is prime

        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
