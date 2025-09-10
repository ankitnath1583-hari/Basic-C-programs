#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  
   
   pc = &c;
   printf("Address: %p\n", pc);
   printf("Content : %d\n\n", *pc); 
   
   c = 11;
   printf("Address : %p\n", pc);
   printf("Content : %d\n\n", *pc); 
   
   *pc = 2;
   printf("Address: %p\n", &c);
   printf("Value: %d\n\n", c); 
   return 0;
}