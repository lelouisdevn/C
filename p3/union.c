#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main() {
    char *date = "18/12/2022";
    // p = "/06/2022";
    // date = 18
    char *p = strchr(date, '/');
    printf ("%02u/", atoi(date));

    // *p = "/06/2022" -> *p++ = 06/2022
    // gán date = "06/2022"
    p++;
    date = p;
    p = strchr(date, '/'); // p = "/2022"; date = 06
    printf ("%02u/", atoi(date));

    p++;
    printf ("%d", atoi(p));

}