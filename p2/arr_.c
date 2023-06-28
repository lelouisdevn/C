#include <stdio.h>

int main() {
    float a[5] = {5, -2, 4, 9, 10}, *ptr;

    ptr = a;
    int n = 5;
    for (ptr=a; ptr<a + (n); ptr++){
        printf ("%.2f ", *(ptr));
    }

    unsigned int c = 0xABCDEF;
    char *d;
    d = (char*) (&c);
    
    // ABCDEF
    //hex -> decimal
    /*  10 (A) x 16^5 + (10485760)
        11 (B) x 16^4 + (720896)
        12 (C) x 16^3 + (49152)
        13 (D) x 16^2 + (3328)
        14 (E) x 16^1 + (224)
        15 (F) x 16^0   (15)

    sum = 10485760 + 720896 + 49152 + 3328 + 224 + 15 = 11259375

    */
    printf ("\n");
    printf ("\n %d", c); //11259375
    printf ("\n %x", *d);
    printf ("\n %x", *(d+1));
    printf ("\n %x\n", *(d + 2));
}