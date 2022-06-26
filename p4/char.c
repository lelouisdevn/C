#include "stdio.h"
//#include "conio.h"
#include "string.h"
#include <math.h>

int main() {
    char ten[25];
    
    strcpy(ten, "Van A");
    printf ("%s", ten);

    int a = 15.6;
    printf ("%f\n", (float) a);

    

    printf ("%.3e\n", 15.76);
    printf ("%x\n", 11);

    int b = -1;
    // printf ("%u", b);
    printf ("-----\n");
    printf("%5.2f\n\n", 1.7);

    printf ("Short=%ld", sizeof(short));
    printf ("\nInt=%d\n", sizeof (int));
    printf ("Float=%d\n", sizeof (float));
    printf ("Double=%d\n", sizeof (double));
    printf ("Char=%d\n", sizeof (char));

    int sq = 25;
    printf ("%f", sqrt((double) sq));
}