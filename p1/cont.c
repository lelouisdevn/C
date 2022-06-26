#include "stdio.h"

int main() {
    int a[3][3] = {
        {-1, 2, 3},
        {4, -5, 6},
        {7, 8, -9}
    };
    int i, j;
    int sum = 0;
    int max = 0;
    int k = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (a[i][j] <= 0){
                continue;
                // go to start;
            }
            if (max < a[i][j]){
                max = a[i][j];
            }
            sum += a[i][j];
            k++;
        }
    }
    printf ("Tong cac so duong = %d\n", sum);
    printf ("So phan tu duong = %d\n", k);
    printf ("Phan tu duong lon nhat = %d\n", max);
printf ("%d", sizeof (long));
printf ("\nShort = %d bytes\n", sizeof (short));
printf ("%d", sizeof (long double));
}
