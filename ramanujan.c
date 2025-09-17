#include <stdio.h>

int main() {
    int limit = 5000;   
    int a, b, c, d;
    int num1, num2;

    printf("Ramanujan Numbers up to %d are:\n", limit);

    for (a = 1; a * a * a < limit; a++) {
    for (b = a + 1; b * b * b < limit; b++) {
            num1 = (a * a * a) + (b * b * b);

     for (c = a + 1; c * c * c < limit; c++) {
     for (d = c + 1; d * d * d < limit; d++) {
     num2 = (c * c * c) + (d * d * d);

    if (num1 == num2 && num1 <= limit) {
    printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
     num1, a, b, c, d);}}}}}
                 return 0;
}
