#include "stdio.h"

int main()
{
    char name[40];

    // printf ("Nhap ten nguoi dung: \n");
    // scanf ("%[^\n]", name);
    // printf ("Name: %s\n", name);

    // fprintf (prn, "Lap trinh C");

    // int a = 10;
    // long b = 3478925;
    // printf("%d%ld", a, b);

    double f; // int f
    /**
     * 'f' is a double variable but stored as a float that leads to errors
     * change format specifier for scanf function to 'lf' which mean 'long float'
     * and cast double to float when printing if we prefer to do that or use 'lf' instead.
    */
    scanf ("%lf", &f);  // scanf("%f", &f);
    printf ("%.2f", (float) f);
}