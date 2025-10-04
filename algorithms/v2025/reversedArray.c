/* Thai Ngo - Soc Trang, October 4, 2025 - 21:38*/

#include "stdio.h"

int numbers [] = {6, 0, 3, 5, 7, 7, 8};
void reverseArray(int *numbers, int arrSize)
{
    /* arrSize should be the size of the array, not care about index; Since j is the index, let it be size - 1 */
    int j = arrSize - 1;
    for (size_t i = 0; i < j; i++, j--)
    {
        int tmp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = tmp;
    }
}


int main()
{
    /* sizeof (numbers) return the actual size of the array (4 * 7 = 28 bytes allocated) */
    /* because the name also points to the first element, & numbers[0] = *numbers, so sizeof (*numbers) returns 4 byes */
    /* let's do maths, 28 (bytes) / 4 (bytes) = 7 (integers) */
    int arrSize = sizeof(numbers) / sizeof (*numbers);   
    reverseArray(numbers, arrSize);

    for (size_t i = 0; i < arrSize; i++)
    {
        printf ("%d ", numbers[i]);
    }
    
}