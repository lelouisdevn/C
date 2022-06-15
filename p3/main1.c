#include "stdio.h"

int main(int n, char *a[]) {
    printf ("%d", n);
    printf ("\n%s", a[0]);

    /* gcc main1.c -o mainn
     ./mainn 123 -456 34
     => n = 4, trong đó: 
     a[0] = ./mainn
     a[1] = 123
     a[2] = -456
     a[3] = 34
    */
}