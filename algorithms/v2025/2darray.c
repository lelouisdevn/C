/* Thai Ngo - Oct 7, 2025 - 11:33 */

#include "stdio.h"
#include "stdlib.h"


int main()
{
    int n = 5; int m = 7;
    /* Dynamically allocate n row with malloc; Malloc return void* which requires stdlib.h to support implicit declaration */
    int ** arr = (int **)malloc(sizeof(int*) * n);
    

    /**
     * Pointer-to-Pointer to int
     * arr is equivalent to arr[0] : the address of the first row
     * *arr is the address of the first element of that row after being dereferenced
     * *(arr) + 3 : the address of the 3th element of 0th row.
     * *(arr + 2) + 2 : the address of the 2th element of the 2nd row
     * *(*(arr + 3) + 1) : get the value stored in address of 1st element of the 3rd row
     * ...
     */

    /* For each row, dynamically allocate m elements inside of it with malloc */
    for (int i = 0; i<n; i++)
    {
        *(arr + i) = (int*)malloc(sizeof(int) * m);
    }

    /* For each element inside the 2-D array, assign an incrementing k value */
    int k = 1;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            // arr[i][j] = k++;
            *(*(arr + i) + j) = k++;
        }
    }

    /* After assigning values; Print them out into the output */
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("arr[%d][%d]: %d\t", i, j, *(*(arr + i) + j));
        }
        printf ("\n");
    }
}