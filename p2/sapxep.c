#include <stdio.h>

int main() {
    int a[7] = {1, 2, 3, 4, 5, 5, 6};
    int b[7] = {1, 3, 5, 11, 13, 22, 44};

    int c[14];
    int i, j;
    int k = 0;
    for (i=0; i<7; i++){
        c[i] = b[i];
        k++;
        //printf ("%d ", c[i]);
    }
    int l;
    for (i=0; i<7; i++){
        for (j=0; j<k; j++){
            if (a[i] >= c[j] && a[i] <= c[j+1]){
                

                for (l=k; l>j; l--){
                    c[l] = c[l-1];
                }
                c[j+1] = a[i];
                k++;
                break;
            }
        }
    }

    for (i=0; i<k; i++){
        printf ("%d ", c[i]);
    }
}