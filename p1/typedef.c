// Online C compiler to run C program online
#include <stdio.h>

int main() {
    printf ("\na=%10d, b=%10.2f, c=%10d, d=%10d", -3456, 25e3, 4635, 66666);

    // seven element is 28 byte, so one element is 4 byte.
    // let 28 is devided by 4 . we get 7.
    int sn[] = {1, 2, 3, 4, 5, 6, 7};

    // size of data type is platform-independent, therefore
    // it's better to use the first element of array. eg sn[0];
    int length = sizeof(sn) / sizeof(int);
    // or
    int length1 = sizeof(sn) / sizeof (sn[0]);

    //printf ("%ld", sizeof(sn));
    printf ("length: %d\n", length);
    printf ("length1: %d", length1);
}