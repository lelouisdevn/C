#include "stdio.h"
#include "math.h"

int main()
{
    int i = 1;
    int n = 2;
    if (i <= n - 1)
    { // i <= (n-1); do phep so sanh co priority thap hon so voi phep toan so hoc;
        printf("true");
    }

    int a = !1;
    printf("%d", !0);

    int a1 = 15.6;
    printf("%d", a1);

    float t = 3.14;
    printf("\n%f", t);

    printf("\n%d", (int)t);

    printf("\n");

    float v = 25;
    // gcc operator.c -o opt -lm
    printf("%f", (float)sqrt(v));

    int n1 = 5;
    int x = n1++;
    printf("\n%d", x);

    // declare y with type int
    int y;
    // assign 3.5 (float) to y; but y is declared as an int
    // so C coverts the value to int by cutting the value after "."
    printf("\n%d", y = 3.5);
    // result: 3
    printf("\n%d", y);
    // result: 3;
}