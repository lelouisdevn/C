#include <iostream>
using namespace std;

// Define struct;
struct Node {
    int data;
    struct Node *next;
};

// Append an element to the end of the list;
void append(struct Node **node, int X) {
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *node;
    n->data = X;
    n->next = NULL;
    
    if (*node == NULL) {
        *node = n;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = n;
}

// Find position of query element in the list;
// And return a pointer to struct;
struct Node* search(struct Node **node, int query) {
    struct Node *h = *node;
    while (h != NULL) {
        if (h->data == query) {
            break;
        }else {
            h = h->next;
        }
    }
    return h;
}

// Insert element after a found element;
void insertAfterElement(struct Node **found, int element) {
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->data = element;
    if ((*found)->next == NULL) {
        (*found)->next = n;
        n->next = NULL;
    }else {
        n->next = (*found)->next;
        (*found)->next = n;
    }
}

// Print items in the list, start with head;
void printArray(struct Node *node) {
    struct Node *start = node;
    while(start != NULL) {
        cout << start->data << " ";
        start = start->next;
    }
}
int main() {
    // Create a head with initial value of NULL;
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head = NULL;

    // Append 5 first elements to the end of list;
    append(&head, 5);
    append(&head, 7);
    append(&head, 12);
    append(&head, 8);

    cout << "Array after append 5 elements: \n";
    printArray(head);

    // Find element with the value of n;
    // And insert v after that;
    int n = 8, v = 4;
    struct Node *found = search(&head, n);
    insertAfterElement(&found, v);

    cout << "\nArray after insert after " << n << ": \n";
    printArray(head);
}