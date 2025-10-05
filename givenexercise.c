#include<stdio.h>
#include<string.h>
struct student{
    int math;
    int cs;
    int evs;
    int english;
    int linux;
 char name[50];
 float marks;
};
int main(){
struct student student[2000];
for(int i=0;i<6;i++){
    printf("enter name\n ");
    scanf("%s",student[i].name);

    printf("enter marks of maths\n");
    scanf("%d",&student[i].math);

    printf("enter marks of cs\n");
    scanf("%d",&student[i].cs);

    printf("enter marks of evs\n");
    scanf("%d",&student[i].evs);

    printf("enter the maks of english\n");
    scanf("%d",&student[i].english);

    printf("enter the marks of linux");
    scanf("%d",&student[i].linux);

}
for(int i=0;i<6;i++){
    printf("name: %s\n",student[i].name);
    printf("math:%d\n,cs:%d\n,English:%d\n,linux:%d\n,EVS:%d\n",student[i].math,student[i].cs,student[i].english,student[i].linux,student[i].evs);

}
return 0;
} 






