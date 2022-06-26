#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    // char name[30];
    // char ho[10] = "Ngo";
    // char dem[10] = "Tran Vinh";
    // char ten[10] = "Thai";

    // strcat(name, ho);
    // strcat(name, dem);
    // strcat(name, ten);
    // printf ("%s\n", name);
    // // sprintf(name, "%s%s%s", ho, dem, ten); //gep chuoi (1)



    // itoa (97, name, 10);
    printf ("Chuyen ky tu thanh in thuong: %c\n", tolower('C'));
    printf ("Chuyen ky tu thanh in hoa: %c\n", toupper('a'));


    // cac ham xu ly chuoi ky tu
    printf ("1. Strchr\n");
    printf ("Hàm tìm lần xuất hiện đầu tiên của ký tự trong chuỗi:\n");
    char *str = "Lap trinh C";
    char *p = strchr(str, 32); // ASCII of 32 is " " (space)
    p++;
    printf ("%s\n", p); //result = "trinh C";

    printf ("2. Stricmp or strcmpi\n");
    char *s1, *s2;
    s1 = "van AB"; // b - 98 in ASCII code.
    s2 = "Van a";

    // stricmp is windows only
    int result = strcasecmp(s1, s2);
    printf ("%d\n", result); //0

    // in hoa chuoi
    //printf ("%c", s2[0]+32); // 'V' = 86 + 32 = 118 ('v')
    int i;
    char s4[6];
    for (i=0; i<6; i++){
        if (s1[i] >= 'A' && s1[i] <= 'Z'){
            s4[i] = s1[i] + 32;
            printf ("%d ", s1[i]);
        }else if (s1[i] >= 'a' && s1[i] <= 'z') {
            s4[i] = s1[i];
            printf ("%d ", s1[i]);
        }else if (s1[i] == 32){
            s4[i] = s1[i];
            printf ("%d ", s1[i]);
        }
    }
    printf ("\n\n\n");
    // for (i=0; i<10; i++){
    //     printf ("%d ", s4[i]);
    // }

    puts(s4);

    int ran = rand();
    printf ("%d\n", ran);
    int ran2 = rand();
    printf ("%d\n", ran2);
}