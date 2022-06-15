#include "stdio.h"

// hàm đệ quy tìm ước chung lớn nhất
int ucln (int x, int y){
    if (x==y){
        return x;
    }else if (x>y){
        return ucln(x-y, y);
    }else {
        return ucln(x, y-x);
    }
}

int main() {
    printf ("%d", ucln(8,4));
}