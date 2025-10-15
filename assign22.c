#include <stdio.h>
int main() {
    int n, arr[100], i, pos=0, neg=0, odd=0, even=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++) {
        if(arr[i]>0) pos++;
        if(arr[i]<0) neg++;
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    return 0;
}
