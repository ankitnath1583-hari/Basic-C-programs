#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *p;
    p = (int*) calloc(5, sizeof(int));
    for (i = 0; i < 5; i++) {
        printf("%d\n", p[i]);  
}
}