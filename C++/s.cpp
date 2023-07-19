#include "iostream"
using namespace std;
#define SN 10
typedef void* eType;
struct Stack {
    eType data[SN];
    int index;
};
void initStack(struct Stack *S) {
    S->index = -1;
}
void push(struct Stack *S, eType X) {
    if (S->index == -1) {
        S->index = 0;
        S->data[S->index] = X;
    }else if (S->index + 1 == SN) cout << "Full\n"; 
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
