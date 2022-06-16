#include "stdio.h"
#include "malloc.h"
#include "string.h"

typedef struct pp {
    char ht[25];
    char qq[20];
    int tuoi;
    struct pp *next;
}person;

int main() {
    int t; // tuoi
    char ht[25], qq[20];
    person *pdau, *p;

    pdau = NULL;
    while (1) {
        printf ("Ho ten: ");
        scanf ("%[^\n]%*c", ht);
        if (strcmp(&ht[0], "0")==0){
            break;
        }
        if (pdau == NULL) {
            pdau = (person *)malloc(sizeof(person));
            p = pdau;
        }else {
            p->next = (person *)malloc(sizeof(person));
            p = p->next;
        }

        strcpy(p->ht, ht);
        printf ("Que quan: ");
        scanf ("%[^\n]%*c", qq); strcpy(p->qq, qq);
        printf ("Tuoi: "); scanf ("%d%*c", &t); (*p).tuoi = t;
        p->next == NULL;
    }
    p = pdau;
    while (p != NULL) {
        printf ("Ho ten: %s\n", p->ht);
        p = p->next;
    }
}