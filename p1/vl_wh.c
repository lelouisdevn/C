#include <stdio.h>

int main() {
    // int i = -1;

    // while (++i < 4){
    //     printf ("%d ", i);
    // }

    int a[] = {3, 1, 4, 5};
    int n = sizeof (a) / sizeof (a[0]);
    int i = 0;
    while (a[i] >= 0 && i < n){
        i++;
    }
    // if (i < n){
    //     printf ("first - element is %d\n", a[i]);
    // }else {
    //     printf ("no - element");
    // }

    int b[] = {3, 1, 7, 8, -6};
    int length = sizeof (b) / sizeof (b[0]);
    int j = -1;
    do {
        j++;
    }while (b[j] >= 0 && j < length);
    printf ("%d ", b[j]);
}