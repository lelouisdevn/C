#include "stdio.h"

void swap(int *a, int i, int j)
{
    int temp = *(a+i);
    *(a+i) = *(a+j);
    *(a+j) = temp;
}

void printArr(int *a, int arrSize)
{
    for (int i=0; i<arrSize; i++)
    {
        printf ("%d ", *(a + i));
    }
    printf ("\n");
}