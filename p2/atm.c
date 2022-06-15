#include "stdio.h"

void assign(int *x, int y);
int main() {
    // bai 11/ tr 114;

    // int money = 200000;
    // int i, j, k;
    // for (i=0; i<=40; i++){
    //     int rm_money=money;
    //     rm_money = money - (i * 5000);
    //     for (j=0; j<=rm_money/2000; j++){
    //         printf ("%d %d %d\n", i, j, (rm_money - (j * 2000) )/ 1000);
    //     }
    // }

    int a[] = {10, 5, 2, 1, 5, 9};
    int length = sizeof (a) / sizeof (a[0]); //6
    int p, q;
    for (p=0; p<length-1; p++){
        for (q=p+1; q<length; q++){
            if (a[p] > a[q]){
                int x = a[p];
                a[p] = a[q];
                a[q] = x;
            }
        }
    }

    for (p = 0; p<6; p++){
        printf ("%d ", a[p]);
    }

    int c = 5, b = 7;
    printf ("Max is %d", c>b?c:b);

    int x = 5;

    int y=7, z=1;
    assign(&x, y);

    printf ("\n%d", x);
}

void assign(int *x, int y){
    *x = y;
}