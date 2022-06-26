#include "stdio.h"

#define max(a, b) (a)>(b)?(a):(b);
void in();
int main() {
    #define MAX 100
    #if MAX == 100
        #undef MAX
        #define MAX 200
        #define MIN -200
    #endif
    in();

    // ifndef = if not defined
    // ifdef = if defined
    #ifdef max
        printf ("Da dinh nghia macro \"max\"!");
    #else
        printf ("Chua dinh nghi");
    #endif

    #ifndef INFINITY 
        #define INFINITY 999999
    #endif

    #ifdef INFINITY
    printf ("%d", INFINITY);
    #endif
}

void in() {
    printf ("%d", MAX);
}