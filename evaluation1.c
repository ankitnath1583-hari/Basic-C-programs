#include <stdio.h>

int main() {
    int i=3;
   
    float f=3.987;
    char c='s';
   int  *j=&i;
    float *k=&f;
  char *l=&c;


    printf("Address of i=%u\n",&i);
    printf("Address of of j =%u\n",*(&j));
    printf("value of j=%u\n",*j);
    printf("address of f =%u\n",*(&k));
    printf("address of c =%u\n",*(&l));
    printf("value of f=%f\n",*k);
    printf("value of c =%c\n",*l );
    
    return 0;
}