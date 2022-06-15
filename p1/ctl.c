#include "stdio.h"

int main() {
    start:
    int a = 5, b = 10;
    int max;
    if (a > b) { max = a; } else { max = b; }
    printf ("Max = %d", max);
    printf ("\nContinue? Press c!");
    char c;
    //scanf ("%c%*c", &c);
    c = getchar();
    getchar();
    if ( c == 'C' || c == 'c') {
        goto start;
    }
}