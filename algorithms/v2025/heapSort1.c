#include "stdio.h"
#include "lib.h"

void buildMaxHeap(int *a, int node, int len)
{
    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int max = node;
    if (left < len && *(a+left) > *(a + max))
    {
        max = left;
    }
    if (right < len && *(a + right) > *(a + max))
    {
        max = right;
    }
    if (max != node)
    {
        swap(a, max, node);
        buildMaxHeap(a, max, len);
    }
}

int main()
{
    int a[] = {17, 3, 2, 1, 100, 7, 19, 36, 25};
    int len = sizeof(a) / sizeof(*a);

    for (int i=len/2-1; i>=0; i--)
    {
        buildMaxHeap(a, i, len);
    }

    for (int i=len-1; i>0; i--)
    {
        swap(a, 0, i);
        buildMaxHeap(a, 0, i-1);
    }

    printArr(a, len);
}