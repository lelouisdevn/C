/* Thai Ngo - Oct 12, 2025 - 11:46 */

#include "stdio.h"

void swap(int *arr, int i, int j)
{
    int tmp = *(arr + i);
    *(arr + i) = *(arr + j);
    *(arr + j) = tmp;
}

/**
 * Find a pivot position, items on the left are all smaller, and on the right are bigger
 * Recursively quickSort sorts the array ascendingly
 */
int findPivot(int *arr, int from, int last)
{
    int pivot = from;
    int second2LastElementIdx = last - 1;
    for (int i = from; i <= second2LastElementIdx; i++)
    {
        if (*(arr + i) < *(arr + last))
        {
            swap(arr, i, pivot); 
            pivot++;
        }
    }

    /**
     * Place the last element where pivot currently points to
     */
    if (*(arr + last) < *(arr + pivot))
    {
        swap(arr, pivot, last);
    }

    return pivot;
}

/**
 * Recursively quickSort based on found Pivot on its left and right, 
 * The pivoted element already stays at the right position
 */
void quickSort(int *arr, int i, int j)
{
    if (i < j)
    {
        int pivot = findPivot(arr, i, j);
        quickSort(arr, i, pivot-1);
        quickSort(arr, pivot+1, j);
    }
}

int main()
{
    int arr[] = {6, 3, 1, 8, 4, 9, 5};
    int arrSize = sizeof(arr) / sizeof(*arr);
    quickSort(arr, 0, arrSize-1);

    for (int i=0; i<arrSize; i++)
    {
        printf ("%d ", *(arr + i));
    }
}