#include "stdio.h"

int sqr(int x){
    return x*x;
};

void inX(int (*p) (int), int y) {
    int a = sqr(y);
    printf ("%d", a);
};

int tang(int a, int b){
    return ( a < b );
}

int main() {
    int a[5] = {1, 2, 4, 2, 6};

    int i;
    for (i=0; i<5; i++){
        printf ("*(a + %d) = %d - a[%d] = %d\n", i, *(a+i), i, a[i]);
    }
}