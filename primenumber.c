#include <stdio.h>
 int ISPRIME(int a);
int main() { int m,n;
    printf("enter the number to start ");
    scanf("%d",&m);
    printf("enter the number to end");
    scanf("%d",n);
    printf("prime number between these two numbers are");
    for(int i=m; i<=n;i++){
        if(ISPRIME(i)){
            printf("%d", i);

        }
    }


    
    return 0;
}
 int ISPRIME(int a){
    int i;
    if( a <=1 )
    {
      return 0;  
    }
 if(a==2){
    return 1;
 }
 if (a%2==0){
    return 0;
 }
 for (int i=3; i*i <=a; i+=2){
    if(a%i==0){
        return 0;
    }
 }
 return 1;
}