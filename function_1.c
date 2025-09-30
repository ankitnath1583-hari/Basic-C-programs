#include <stdio.h>
int sum=0;
void add(int a,int b){
    sum=a+b;
}
int print_sum(){
    printf("sum=%d",sum);
}
int main() {
    int num1,num2;
    printf("enter values of num1 and num2");
    scanf("%d %d",&num1,&num2);
    add(num1, num2);
    print_sum();
    
    
    return 0;
}