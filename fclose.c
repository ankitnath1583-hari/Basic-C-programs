#include <stdio.h>

int main() {
    FILE *ptr;
    ptr=fopen("fclose.txt","r");
    int num;
    fscan(ptr, "%d",&num);
    printf("the value of num is %d \n",num);
     fscanf(ptr, "%d",&num);
    printf("the value of num is %d \n",num);
    return 0;
 fclose(ptr);
    
}