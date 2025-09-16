#include <stdio.h>

int main() {
    float a,x1,y1,x2,x3,y2,y3;
    printf("press enter after ever input\n");
    printf("enter the value of x1,y1,x2,y2,x3,y3");
    scanf("%f\n %f\n %f\n %f\n %f\n %f",&x1,&y1,&x2,&y2,&x3,&y3);
    a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(a==0)
    {
        printf("collinear");
    }
    else{
        printf("not collinear");
    }
    return 0;
}