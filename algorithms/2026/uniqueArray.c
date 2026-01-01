#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 4, 5, 5, 5, 6, 7, 8};
    int j = 1;
    for (int i = 1; i < sizeof(arr) / sizeof(*arr); i++)
    {
        if (*(arr + i) != *(arr + i - 1))
        {
            *(arr + j++) = *(arr + i);
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("%d ", *(arr + i));
    }
}
