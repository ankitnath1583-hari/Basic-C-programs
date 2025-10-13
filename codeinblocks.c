//3.    Declare variables within different code blocks
// (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>
char globalVar = 'ankit'; 

int main() {
    int almond = 10; 
    printf(" almond = %d, globalVar = %s\n", almond, globalVar);
    { 
        int bike = 20;
        printf("Inside first block: a = %d, b = %d, globalVar = %c\n", almond, bike, globalVar);
    }
   // printf("%d", bike);
   //here code is showing wrong
    {  
        int cash = 30;
        printf("Inside second block: a = %d, cash = %d\n", almond, cash);
    }
 //printf("%d", cash);
 // here code is showing wrong 
 printf("almond = %d, globalVar = %s\n", almond, globalVar);

    return 0;
}

