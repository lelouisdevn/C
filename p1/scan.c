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
    // this variable is a double but stores an int data, so error occurs.
    // you ask for solution? -> change f to int.
    scanf ("%f", &f); 
    printf ("%f", f);
}