#include "stdio.h"
#include "string.h" // strcmp function
#include "malloc.h"

struct date {
    int ngay, thang, nam;
};

typedef struct {
    char ht[40];
    struct date ns;
    float bl;
} person;


// prototypes
void vao(person *p);
person tim(char *name, person h[], int n);
person *ptim(char *name, person h[], int n);
void in(person p);
void hv(person *p1, person *p2);
void sapxep(person *p, int n);



// functions:
void vao (person *p){
    person h;
    float bl;

    printf ("Ho ten: ");
    scanf ("%[^\n]", h.ht);
    printf ("Ngay thang nam sinh: ");
    scanf ("%d%d%d%*c", &h.ns.ngay, &h.ns.thang, &h.ns.nam);
    printf ("Bac luong: ");
    scanf ("%f%*c", &h.bl); //h.bl = bl;
    *p = h;
}

person tim(char *name, person h[], int n){
    person p;
    p.ns.ngay=p.ns.thang=p.ns.nam = 0;
    p.ht[0] = 0;
    p.bl = 0.0;

    int i;
    for (i=0; i<n; i++){
        if (strcmp(name, h[i].ht)==0){
            return h[i];
        }
    }
    return p;
}

person *ptim(char *name, person h[], int n){
    int i;
    for (i=0; i<n; i++){
        if (strcmp(name, h[i].ht)==0){
            return (&h[i]);
        }
    }
    return NULL;
}

void in(person p){
    printf("Ho ten: %s\nNgay sinh: %d/%d/%d\nBac luong: %.2f\n", p.ht, p.ns.ngay, p.ns.thang, p.ns.nam, p.bl);
}

void hv (person *p1, person *p2){
    person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void sapxep(person *p, int n){
    int i, j;
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if ((p+i)->ns.nam > (p+j)->ns.nam){
                // person temp = *(p+i);
                // *(p+i) = *(p+j);
                // *(p+j) = temp;
                hv((p+i), (p+j));
            }
        }
    }
}

int main(){
    int n;

    printf ("Nhap so n = "); scanf ("%d%*c", &n);

    person *ds = (person *)malloc(n * sizeof (person));

    // person ds[] = {
    //     {"Truong Tuan Em", {1,5,2007}, 3.3},
    //     {"Ngo Tran Vinh Thai", {6,3,2001}, 1.5},
    //     {"Le Huu Loc", {18,6,2002}, 2.2}
    // };
    //n = sizeof (ds) / sizeof (ds[0]); // n = 3
    //printf ("%d\n\n", n);

    int i;
    for (i=0; i<n; i++){
        vao (ds+i);
    }

    // char name[40];
    // scanf ("%[^\n]", name);
    // person obj = tim(name, ds, n);
    // person *obj2 = ptim(name, ds, n);
    // printf ("%d/%d/%d", obj.ns.ngay, obj.ns.thang, obj.ns.nam);
    // printf ("%d/%d/%d", obj2->ns.ngay, (*obj2).ns.thang, obj2->ns.nam);

    
    sapxep(ds, n);
    for (i=0; i<=n; i++){
        printf ("Thong tin nguoi thu %d!\n", i+1);
        in(*(ds+i));
        printf ("\n");
    }

    free(ds);
}