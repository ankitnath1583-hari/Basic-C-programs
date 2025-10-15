#include <stdio.h>
int main() {
    int n, arr[100], num, i, cnt=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to find frequency: ");
    scanf("%d",&num);
    for(i=0;i<n;i++) {
        if(arr[i]==num) {
            cnt++;
        }
    }
    printf("Frequency of %d is %d\n", num, cnt);
    return 0;
}
