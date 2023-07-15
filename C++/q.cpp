#include "iostream"

using namespace std;
#define N 6
typedef int eType;
typedef struct {
    eType data[N];
    int front, rear;
}Queue;

// Initialise a queue -1
void initQueue(Queue *Q) {
    Q->front = Q->rear = -1;
}

// Push X to the end of queue Q
void push(Queue *Q, eType X) {
    if (Q->rear == -1) {
        Q->front = Q->rear = 0;
        Q->data[Q->front] = X;
    }else if ((Q->rear + 1) % N == Q->front) {
        cout << "FULL\n";
    }else {
        Q->rear = (Q->rear + 1) % N;
        Q->data[Q->rear] = X;
        
    }
}
// Pop element at the first of queue Q
void pop(Queue *Q) {
    if (Q->front == Q->rear) {
        Q->front = Q->rear = -1;
    }else {
        Q->front = (Q->front + 1) % N;
    }
}

// Print queue Q
void print(Queue Q) {
    while (Q.front != -1) {
        cout << Q.data[Q.front] << " ";
        pop(&Q);
    }
}

// int main() {
//     Queue Q;
//     initQueue(&Q);
//     push(&Q, 3);
//     push(&Q, 8);
//     push(&Q, 7);
//     push(&Q, 5);
//     pop(&Q);
//     push(&Q, 4);
//     push(&Q, 6);
//     print(Q); // 8 7 5 4 6
//     cout << "\n";
// }