#include <stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], m, n, p, q, i, j, k;
    printf("Enter rows and cols for A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and cols for B: ");
    scanf("%d %d", &p, &q);
    if(n!=p) {
        printf("Cannot multiply! Columns of A must be equal to rows of B\n");}
    printf("Enter elements of A: ");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);} }
    printf("Enter elements of B: ");
    for(i=0;i<p;i++) {
        for(j=0;j<q;j++) {
            scanf("%d",&b[i][j]);}}
    for(i=0;i<m;i++) {
        for(j=0;j<q;j++) {
            c[i][j]=0;
            for(k=0;k<n;k++) {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];} } }
    printf("Matrix A:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<p;i++) {
        for(j=0;j<q;j++) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Result Matrix:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<q;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
