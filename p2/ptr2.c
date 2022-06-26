#include "stdio.h"

int main() {
    int **p, *q, a= 10, b = 11;
    q = &a;
    //*p = q;

    // con trỏ thì chứa địa chỉ
    // **p là con trỏ đến con trỏ
    // p lưu địa chỉ của con trỏ q, q lại lưu địa chỉ của biến a.
    p = &q;
    printf ("**p = %d\n *q = %d\n", *p, *q);
    *p = &b;
    printf ("**p = %d\n", **p);
    
}