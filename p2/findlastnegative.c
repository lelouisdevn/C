#include "stdio.h"
#include "math.h"

int main(){
    int i;
    // int a[] = {4, 2, -3, 4, 1, 9, -9, -8, 11};
    //length = sizeof (a) / sizeof (a[0]);
    // i = 0;
    // int neg;
    // while (i < length){
    //     if (a[i] < 0) neg = i;
    //     i++;
    // }
    // printf ("%d", a[neg]);

    // bai 17/114
    // 128 -> 255 la cac ky tu do hoa
    for (i=33; i<=127; i++){
        printf ("%c", i);
    }
    printf ("\n\n");

    // bai 10/114
    int n;
    printf ("Nhap n: ");
    scanf ("%d", &n);
    int sum = 0;
    float kq;
    for (i=1; i<=n; i++){
        sum += pow(i, 2);
    }
    kq = pow(sum, 0.5);
    printf ("%.2f\n\n\n", kq);

    // bai 5/114
    int a[5] = {3, -1, 5, 2, 4};
    int b[5] = {3, 7, 9, 1, 6};
    int c[5] = {1, 2, -3, 5, 3};
    int d[5] = {7, 4, -1, 0, 5};

    for (i=0; i<5; i++){
        int max = a[i];
        int min= a[i];
        if (max < b[i]){
            max = b[i];
        }
        if (max < c[i]) {
            max = c[i];
        }
        if (max < d[i]) {
            max = d[i];
        }

        if (min > a[i]){
            min = a[i];
        }
        if (min > b[i]){
            min = b[i];
        }
        if (min > c[i]) {
            min = c[i];
        }
        if (min > d[i]){
            min = d[i];
        }

        printf ("%d\t%d\t%d\t%d\t%d\t%d\n", a[i], b[i], c[i], d[i], min, max);
    }
}