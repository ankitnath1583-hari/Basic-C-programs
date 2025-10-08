#include <stdio.h>
void modified(int *a,char *b,float *c);
int main() {
    int a = 30;
    char b = 'A';
    float c = 2.5;
    

    
    modified(&a, &b, &c);

    printf("After modifying the value we get these values\n");
    printf("a = %d, b = %c, c = %f\n", a, b, c);

    return 0;
}
void modified(int *a, char *b, float *c) {
    *a = *a/2;        
    *b = *b + 1;        
    *c = *c*223;         
}

