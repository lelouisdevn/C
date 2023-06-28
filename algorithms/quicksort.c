#include "stdio.h"
int partition(int *a, int i, int j)
{
    int pivot = a[j];
    int pIndex = i;
    for (int k = i; k <= j - 1; k++)
    {
        if (a[k] < pivot)
        {
            int t = a[k];
            a[k] = a[pIndex];
            a[pIndex] = t;
            pIndex++;
        }
    }
    if (pivot < a[pIndex])
    {
        int t = a[pIndex];
        a[pIndex] = pivot;
        a[j] = t;
    }
    return pIndex;
}
void quicksort(int *a, int i, int j)
{
    if (i < j)
    {
        int pivot = partition(a, i, j);
        quicksort(a, i, pivot - 1);
        quicksort(a, pivot + 1, j);
    }
}
int main()
{
    int a[] = {6, 3, 1, 8, 4, 9, 5};
    int length = sizeof(a) / sizeof(*a);
    quicksort(a, 0, length - 1);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}