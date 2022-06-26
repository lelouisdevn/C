#include "stdio.h"
#include "ext.c"


void max () {
    int a = 10;
    static int b = 10;

    a += 5;
    b += 5;
    printf ("%d - %d\n", a, b);
}
// extern int a; ko can luon
int main() {
    const float PI = 3.14;
    const char *COPYRIGHT = "Ngo Tran Vinh Thai";
    int i;
    // register int i; 
    // for (i=0; i<10; i++){
    //     max();
    // }

    //  "\"
    printf ("%s\n\
    ",COPYRIGHT);

    char c;
    
    #define begin (
    #define end )
    for (i=0; i<255; i++) {
        printf ("%d = %c\n", i, i);
    }

    // #undef begin
    // #undef end
    printf begin"Hello"end;
    
    #undef begin
    #undef end
}