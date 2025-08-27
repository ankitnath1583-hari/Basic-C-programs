#include <stdio.h>
int main(){
    int length,area,perimeter,breadth;
    printf("enter length:");
    scanf("%d",&length);
     printf("enter breadth:");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("Area=%d Perimeter=%d",area,perimeter);
    return 0;
}