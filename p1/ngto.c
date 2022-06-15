#include "stdio.h"
#include "math.h"

int main() {
    int n;
    int isNT = 1;
    scanf ("%d", &n);
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            isNT = 0;
            break;
        }
    }
    if (isNT) {
        printf ("%d la so nguyen to!\n", n);
    }else {
        printf ("%d khong la so nguyen to!\n", n);
    }
}