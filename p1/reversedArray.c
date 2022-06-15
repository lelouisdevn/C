#include "stdio.h"

int main() {
    int arr[5] = {1, 4, 2, 1, 7};

    int i, j;
    int n = sizeof (arr) / sizeof (arr[0]);
    int c;
    // method 1
    // if (i == j) -> i/j is in the middle position => there nothing to do.
    for ( i = 0, j = n - 1; i < j; i++, j--){
        c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;
    }

    for (i = 0; i < n; i++){
        printf ("%d ", arr[i]);
    }

    // method 2
    for (i = 0, j = n - 1; i < j; c = arr[i], arr[i] = arr[j], arr[j] = c, i++, j--);
    printf ("\n");
    for (i = 0; i < n; i++){
        printf ("%d ", arr[i]);
    }

    // method 3
    i = 0, j = n - 1;
    for ( ; ; ){
        c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;
        if (++i >= --j){
            goto out;
        }
    }
    out: printf ("Reversed array: \n");

    for (i = -1; ++i < n; printf ("%d ", arr[i]));

    printf ("\nFIND THE FIRST NEGATIVE ELEMENT\n");
    float x[3][4] = {
        {15, 46, 3.5, 6.3},
        {34, 0, -25, 35},
        {1, -13, 46, -38}
    };

    float found = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++){
            if (x[i][j] < 0){
                found = x[i][j];
                break;
            }
        }
    }

    if (found != 0){
        printf ("%.2f\n", found);
    }else {
        printf ("No negative element found!\n");
    }

    float max[3], min[3];
    for (i=0; i<3; i++){
        max[i] = min[i] = x[i][0];
        for ( j = 1; j < 4; j++){
            if (max[i] < x[i][j]){
                max[i] = x[i][j];
            }
            if (min[i] > x[i][j]){
                min[i] = x[i][j];
            }
        }
    }

    for (i=0; i<3; i++){
        printf ("Dong %d: Max = %.2f, min = %.2f\n", i+1, max[i], min[i]);
    }
}