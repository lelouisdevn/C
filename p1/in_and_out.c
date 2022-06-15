#include <stdio.h>

int main()
{
    printf ("|%3s|          %-19s|\n|---------------------------------|\n", "STT", "Ho va ten");
    printf ("|%-3s| %-*s|", "1", 28, "Ngo Tran Vinh Thai");
    // 28 is for "*";
    int a = 10, b= 1245;
    int m = printf ("\n A = %4d B = %d", a, b);
    printf ("\n%d", m);
}