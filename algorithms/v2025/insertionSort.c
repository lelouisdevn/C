#include "stdio.h"

int main()
{
    int arr[] = {5, 4, 6, 2, 1, 7, 8, 11, 3};

    /**
     * Insertion sort: for each element at index i in array *arr
     * iterate back from i to 0, perform comparision and swapping
     * to put the right elements at the right position
     */
    for (int i=1; i<sizeof(arr) / sizeof(*arr); i++)
    {
        for (int j=i; j>0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    for (int i=0; i<sizeof(arr) / sizeof(*arr); i++)
    {
        printf ("%d ", arr[i]);
    }
}