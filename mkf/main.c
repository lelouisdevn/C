#include "lib.h"
#include "stdio.h"
int main() {
    // hello();
    // print();
    char c = 'H';
    char *const p = "Thai Ngo";
    char *q = "Thai Ngo";
    *q = "Thai A";
    printf("%s", q);
    printf("%s", p);

    // const char * p = "Thai Ngo";
}