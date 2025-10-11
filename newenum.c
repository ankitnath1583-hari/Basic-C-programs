#include<stdio.h>
#include<string.h>
enum Days{
    sunday,
    monday,
    tuesday,
    wednesday,
};
void main(){
    enum Days now;
    now= wednesday;
    printf("%d\n",now);
}