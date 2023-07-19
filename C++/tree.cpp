#include "iostream"
using namespace std;
#include "q.cpp"
#include "s.cpp"

typedef struct node{
    int data;
    struct node *left, *right;
}Node;

Node* initRoot(int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Using Level Order Traversal using Queue;
void insertNode(Node *node, int data) {
    Queue Q;
    initQueue(&Q);
    push(&Q, node);
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    while (Q.front != -1) {
        Node* u = (Node*)Q.data[Q.front];
        pop(&Q);
        if (u->left == NULL) {
            u->left = n;
            return;
        }else push(&Q, u->left);

        if (u->right == NULL) {
            u->right = n;
            return;
        }else push(&Q, u->right);
    }
}
void levelOrder(Node *root) {
    Queue Q; initQueue(&Q);
    push(&Q, root);
    while (Q.front != -1) {
        Node *u = (Node*)Q.data[Q.front];
        pop(&Q);
        cout << u->data << " ";
        if (u->left != NULL) push(&Q, u->left);
        if (u->right != NULL) push(&Q, u->right);
    }
}

void inOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void inOrderStack(Node *root) {
    Stack S; initStack(&S);
    push(&S, root);
    Node *current = root->left;
    while (current != NULL || S.index != -1) {
        while(current != NULL) {
            push(&S, current);
            current = current->left;
        }
        Node *top = (Node*)S.data[S.index]; pop(&S);
        cout << top->data << " ";

        current = top->right;
    }
}
int main() {
    Node * root = initRoot(10);
    insertNode(root, 11);
    insertNode(root, 9);
    insertNode(root, 7);
    insertNode(root, 15);
    insertNode(root, 8);
    cout << "In-order traversal: \n";
    inOrder(root); // 7 11 15 10 8 9
    cout << "\nLevel-order Traversal: \n";
    levelOrder(root); // 10 11 9 7 15 8
    cout << "\nIn-order traversal using stack: \n";
    inOrderStack(root);
    cout << "\n";
}