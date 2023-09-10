#include "stdio.h"

int sqr(int x){
    return x*x;
};

void inX(int (*p) (int), int y) {
    int a = p(y);
    printf ("%d", a);
};

int tang(int a, int b){
    return ( a < b );
}

int max (int a, int b){
    return (a<b?b:a);
}

int min(int a, int b){
    return (a>b?b:a);
}

//ví dụ cách gọi hàm trong hàm.
int main() {

    int (*f[2]) (int, int);
    f[0] = max;
    f[1] = min;

    int i;
    int j;
    // for (i=0, j=0; i<5; ++i){
    //     int y, z;
    //     printf ("Nhập x và y: ");
    //     scanf ("%d%d", &y, &z);
    //     printf ("max %d va %d = %d\n", y, z, f[j](y, z));
    // }
    inX(sqr, 7);

    //printf ("%d", tang(3, 4));

    // Khai báo a là một mảng con trỏ
    // lưu địa chỉ của các phần tử
    // trong mảng k.
    int *a[5];
    int *p /* , i; */ ;

    int k[5]; // lưu giá trị thực

    // con trỏ p chỏ đến địa chỉ của phần tử đầu tiên
    // trong mảng k.
    p = k;
    for (i=0; i<5; i++){
        scanf ("%d", p);
        a[i] = p;
        p++;
    }

    for (i=0; i<5; i++){
        //printf ("%d", *(a[i]));
        printf ("%d ", k[i]);
    }
}