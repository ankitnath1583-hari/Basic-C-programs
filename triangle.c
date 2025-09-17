
/*WAP to take check if the triangle is valid or not. If the validity is established, do 
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the 
triangle as input from a user. */#include<stdio.h>
int main(){
    int a,b,c;
    if(a>0 && b>0 && c>0 &&
    (a+b>c) &&
    (a+c>b) &&
    (b+c>a)){
    if(a!=b && b!=c&& c!= a){
    printf("triangle is scalene");
    }
    else if(a==b&&b==c&&c==a)
    printf("triangle is equilateral");
    else{
        printf("Triangle is isosceles");
    }
   } else{
        printf("this is an invalid triangle.");
    }
    
}