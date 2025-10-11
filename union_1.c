#include <stdio.h>
#include <string.h>
union student
{
    int roll;
    float marks;
    char x;
};

int main() {
    union student s1;
    s1.roll=1000;
    s1.marks=97;
    printf(sizeof(union student));
    
    return 0;
}