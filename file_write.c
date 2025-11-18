#include <stdio.h>

int main() {
    FILE *ptr;
    fopen("gcd.txt","w");
    int num;
    printf("the value of num is %d \n",num);
    fclose(ptr);
    return 0;
}