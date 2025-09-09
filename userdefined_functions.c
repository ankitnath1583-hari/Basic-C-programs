#include <stdio.h>
int addNumbers(int a, int b);         

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)            
{
    int result;
    result = a+b;
    return result;               
}
/* if n1 is of char type ,a also should be of char type 
If n2 is of float type, variable b is also should be of float type.*/
 
