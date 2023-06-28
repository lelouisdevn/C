#include <stdio.h>
//#include <conio.h> cannot use this library cause it's not a standard C library

int main() {
    int n;

    char c;
    char c1[10];

    // printf ("Nhap so: \n");
    // scanf ("%d", &n);
    //getchar(); or scanf ("%d%*c", &n);

    printf ("Nhap ki tu: ");
    //scanf ("%c", &c);
    //scanf ("%s", c1);
    // %s need type char * then we just need to put c1

    printf ("%d\n%s", n, c1);

    char str[] = "Computer";
    puts(str);

    //clrscr(); this belongs to conio.h which is not a standard C library
}