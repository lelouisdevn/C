#include "stdio.h"
#include "string.h"

int main()
{
    char s1[100];
    char s2[100];
    int COUNT = 0;

    scanf("%[^\n]%*c", s1);
    scanf("%[^\n]", s2);

    int s1_len = strlen(s1); // sub_string
    int s2_len = strlen(s2); // string

    for (int i = 0; i < s2_len;)
    {
        int j = 0;
        int count = 0;
        while (s2[i] == s1[j])
        {
            if (s2[i] == '\0')
            {
                break;
            }
            count++;
            i++;
            j++;
        }

        if (count == s1_len)
        {
            COUNT++;
        }
        else
        {
            i++;
        }
    }

    printf("so lan xuat hien: %d\n", COUNT);
}