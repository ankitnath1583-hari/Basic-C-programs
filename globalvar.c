//1. Declare a global variable outside all
// functions and use it inside various functions to understand its accessibility.
#include <stdio.h>
int add();
int pi=3.414;
int main() {
   int radius=34,circumference;
   int area=pi*radius*radius;
   printf("area of circle=%d\n",area);
   add();
    
    return 0;
}
int add(){
   int radius=12;
   int circumference=2*pi*radius;
   printf("circumference of a circle is %d",circumference);

}
//here pi is declared as global variable