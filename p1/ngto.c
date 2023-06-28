#include "stdio.h"
#include "math.h"

int main() {
    int num;
    scanf("%d", &num);
    int s = 0;
    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            s = 1;
        }
    }

    if (s==0) { 
        printf ("La so nguyen to");
    }else {
        printf ("Ko la so nguyen to");
    }
}