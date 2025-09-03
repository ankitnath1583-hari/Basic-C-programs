#include <stdio.h>

int main() {
    int n, i,sum ;
    sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
       sum +=arr[i];  
    }

    printf("sum=%d",sum);

    return 0;
}
