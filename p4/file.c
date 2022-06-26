#include "stdio.h"
#include "unistd.h"
#include "string.h"

int main() {
    // FILE *fvb;

    // fvb = fopen("vb", "wt");
    // fputc ('A', fvb);
    // fputc ('C', fvb);
    // fputc ('D', fvb);
    // fputc ('B', fvb);
    // fclose (fvb);

    char cwd[100];
    getcwd(cwd, sizeof (cwd));
    // printf ("%s", cwd);

    char *dir = "/C++";
    
    strcat (cwd, dir);
    printf ("%s", cwd);
    mkdir (cwd);
    
}