#include <stdio.h>
#define SUM(x,y)\
    ((x)+(y));\
    printf("Addition done succesfully\n sum=%d\n",(x)+(y));
int main() {
    int a=23;
    int b=43;
   SUM(a,b);

    
    return 0;
}