#include <stdio.h>
int addmult(int,int);
int main() {
    int i=3,j=4,k,l;
    k= addmult(i,j);
    l = addmult(i,j);
    printf("%d %d",k,l);
    return 0;
}
int addmult( int i,int j)
{
    int k,l;
    k=i+j;
    l=i*j;
    return(k,l);
}