#include "stdio.h"

int main() {
    FILE *f;
    f = fopen("fm", "wt");
    fprintf (f, "%s", "Nguyen Van A");
    fclose(f);
}