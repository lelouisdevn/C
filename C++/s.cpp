#include "iostream"
using namespace std;
#define N 5
struct Stack {
    int data[N];
    int index;
};
void initStack(struct Stack *S) {
    S->index = -1;
}
void push(struct Stack *S, int X) {
    if (S->index == -1) {
        S->index = 0;
        S->data[S->index] = X;
    }else if (S->index + 1 == N) cout << "Full\n"; 
    else {
        S->index++;
        S->data[S->index] = X;
    }
}
void pop(struct Stack *S) {
    S->index --;
}
void print(struct Stack S) {
    while (S.index >= 0) {
        cout << S.data[S.index] << " ";
        S.index --;
    }
}
int isEmpty(Stack S) {
    return S.index==-1;
}
// int main() {
//     struct Stack S;
//     initStack(&S);
//     push(&S, 3);
//     push(&S, 7);
//     push(&S, 4);
//     print(S);
//     cout << "after pop: ";
//     pop(&S);
//     print(S);
// }
