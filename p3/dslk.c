#include "stdio.h"
#include "malloc.h"
#include "string.h"

typedef struct pp {
    char ht[25];
    char qq[20];
    int tuoi;
    struct pp *next;
}person;
person *pdau, *p;

// prototypes:
void vao();
void in();
//void find(char *name);



// functions:
void vao(){
    // auto int t; auto dung de chi bien t la bien cuc bo
    pdau = NULL;
    auto int t;
    auto char ht[25], qq[20];
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
}

void in() {
    p = pdau;
    while (p != NULL) {
        printf ("Ho ten: %s\n", (*p).ht);
        p = p->next;
    }
}

person *find(char *name){
    p = pdau;
    
    while (p != NULL) {
        if (strcmp(p->qq, name)==0){
            printf ("Ho ten: %s\n", p->ht);
            printf ("Que quan: %s\n", (*p).qq);
            printf ("Tuoi: %d\n", (*p).tuoi);
            printf ("\n");

            return p;
        }

        
    }
}


int main() {
    int t; // tuoi
    vao();
    in();
    person *p1;
    person *position = find("Soc Trang");
    // tao nguoi moi;
    p = (person *)malloc(sizeof(person));
    strcpy(p->ht, "Van D");
    strcpy(p->qq, "Ca Mau");
    p->tuoi = 30;

    p1 = position->next;
    position->next = p;
    p->next = p1;

    //in();

    


    // if (pdau != NULL) {
    //     p = pdau;
    //     pdau = p->next;
    //     free(p);
    // }

    in();
}