#include <stdio.h>

int main() {
    double a[5][5];

    int m, n, i, j;
    printf ("Nhập mảng, dòng m = , hàng n = \n");
    scanf ("%d%d", &m, &n);

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf ("Nhập a[%d][%d] = ", i, j);
            scanf ("%lf", (double *) a + i * 5 + j);
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            //printf ("%.2lf ", a[i][j]);
            // (double *) a + i*5 + j       NOT     (double *)(a + i*5 + j)
            //  => ép kiểu cho con trỏ      NOT     ép kiểu cho biểu thức
            printf ("%.2lf ", *((double *)a + i * 5 + j));
            // printf ("%.2lf ", a[i][j]); in như vầy cho giống con người :)
            
        }
        printf ("\n");
    }
}