/* Thai Ngo - Oct 14, 2025 - 20:49 */

#include "stdio.h"

void swap(int *a, int i, int j)
{
    int temp = *(a+i);
    *(a+i) = *(a+j);
    *(a+j) = temp;
}

/**
 * a is the array of size s
 * e is the node from that we heapify
 */
void buildMaxHeap(int *a, int e, int s)
{
    /* Stop when the current node is the root itself */
    if (e == s) return;

    int l = 2*e + 1;
    int r = 2*e + 2;
    int max = e;

    if (l < s && a[l] > a[max]) max = l;
    if (r < s && a[r] > a[max]) max = r;

    if (max != e)
    {
        swap(a, max, e);
        /**
         * Recursively call builMaxHeap to swap from root to leaf
         */
        buildMaxHeap(a, max, s);
    }
}

int main()
{
    int a[] = {17, 3, 2, 1, 100, 7, 19, 36, 25};

    int arrSize = sizeof(a) / sizeof(*a);

    /* Build the Max Heap Tree */
    for (int i=arrSize/2-1; i>=0; i--)
    {
        buildMaxHeap(a, i, arrSize);
    }
    
    /**
     * Swap the root and the last leaf
     * and Build Max Heap
     */
    for (int i=arrSize-1; i>0; i--)
    {
        swap(a, 0, i);
        buildMaxHeap(a, 0, i-1);
    }

    for (int i=0; i<arrSize; i++)
    {
        printf ("%d ", a[i]);
    }
}