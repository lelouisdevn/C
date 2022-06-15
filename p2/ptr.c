#include "stdio.h"

// sử dụng *a họăc a[] đều được.
// tên mảng là một hằng địa chỉ => là con trỏ.
void sum1 (int *a, int n, int *b){
    int i;
    int sum = 0;
    for (i=0; i<n; i++){
        //sum += *(a+i);
        sum += *(a+i);
    }
    *(b) = sum;
}
int main() {

    //int a[] = {1, 3, 2, 1, 6};

    int i, n;
    // int *p;
    int b[1] = {0};
    printf ("Nhap n: \n");
    scanf ("%d", &n);
    int a[n];

    // nhap gia tri cho cac phan tu
    for (i=0; i<n; ++i){
        printf ("Nhap so thu %d: ", i+1);
        scanf ("%d", a+i);
    }

    // khoi tao bien sum;
    int sum = 0;

    // su dung ham (function);
    // Hàm là 1 hằng địa chỉ, không cần sử dụng thêm toán tử "&" khi gọi hàm.
    sum1 (a, n, b);
    printf ("Tong la: %d\n", *(b));

    // char c[25];
    // int a;
    // scanf ("%[^\n]", c);
    // printf ("%s", c);

    // char *p;
    // p = "Nguyen Van A";

    // printf ("%s", p);

    // printf ("\n\n");

    // int *pa, arr[2][3];
    // //pa = (float *) arr;

    // int i;
    // for (i=0; i<6; i++){
    //     scanf ("%d", (int *) arr+i);
    //     //printf ("%f ", *(pa + i));
    // }
    // for (i=0; i<6; i++){
    //     //scanf ("%f", pa+i);
    //     printf ("%d ", *((int *)arr + i));
    // }

    
}