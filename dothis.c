#include <stdio.h>
struct student{
    int sap;
char name[50];
float marks;};
int main() {
    struct student student1,student2 ,student3;
    student1.sap=100234;
    strcpy(student1.name,"sam");
    student1.marks=93;

    student2.sap=100222;

    return 0;
}