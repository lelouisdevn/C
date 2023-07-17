#include "iostream"
using namespace std;
typedef struct node{
    int data;
    node *prev, *next;
}Node;

void initDBLL(Node **DBLL) {
    (*DBLL) = NULL;
}

void appendDBLL(Node **DBLL, int X) {
    Node *l = *DBLL;
    if (*DBLL == NULL) {
        (*DBLL) = (Node*)malloc(sizeof(Node));
        (*DBLL)->data = X;
        (*DBLL)->next = NULL;
        (*DBLL)->prev = NULL;
    }else {
        while(l->next != NULL) {
            l = l->next;
        }
        Node *n = (Node*)malloc(sizeof(Node));
        l->next = n;
        n->data = X;
        n->next = NULL;
        n->prev = l;
    }
}

// Print from start to end;
void printDBLL(Node *DBLL) {
    while ((DBLL) != NULL) {
        cout << DBLL->data << " ";
        DBLL = DBLL->next;
    }
}

// Find the end node;
Node* endDBLL(Node *DBLL) {
    while (DBLL->next != NULL)
        DBLL = DBLL->next;
    return DBLL;
}

// Print from end to start;
void printDBLL_rvs(Node *DBLL) {
    Node *end = endDBLL(DBLL);
    while (end != NULL) {
        cout << end->data << " ";
        end = end->prev;
    }
}
int main() {
    // create 1st list;
    Node *L1 = (Node*)malloc(sizeof(Node));
    initDBLL(&L1);

    // Append 4 elements to the list;
    appendDBLL(&L1, 3);
    appendDBLL(&L1, 5);
    appendDBLL(&L1, 7);
    appendDBLL(&L1, 9);

    cout << "list: \n";
    printDBLL(L1);
    cout << "\nreverse list\n";
    printDBLL_rvs(L1);

}