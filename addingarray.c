#include <stdio.h>

int main() {
    int arr[10],i,n,sum;
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("Enter number%d: ",i+1);
    scanf("%d",&arr[i]);
    sum= arr[0] + arr[4];
    printf("sum=%d",sum);
    return 0;
}
