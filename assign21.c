#include <stdio.h>
int main() {
    int n, i, max1, max2;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    max1 = arr[0];
    max2 = -1000000;
    for(i=1;i<n;i++) {
        if(arr[i]>max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1) {
            max2 = arr[i];
        }
    }
    if (max2 == -1000000) {
        printf("No second largest number\n");
    }
    else {
        printf("Second largest is %d\n", max2);
    }
    return 0;
}
