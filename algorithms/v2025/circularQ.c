/* Thai Ngo - Oct 6, 2025 - 08:12 */

#include "stdio.h"
#define MAX_QUEUE_SIZE 3

typedef struct queue
{
    int front, rear;
    int data[MAX_QUEUE_SIZE];
} Queue;

void initQueue(Queue *q)
{
    q->front = -1;
    q->rear = -1;
    for (int i=0; i<MAX_QUEUE_SIZE; i++)
    {
        q->data[i] = -1;
    }
}

void pushToQueue(Queue *q, int value)
{
    if (q->rear == -1 && q->front == -1)
    {
        q->front = 0;
    }
    else if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front)
    {
        printf ("Queue is now full. Cannot add value [%d] to queue\n", value);
        return;
    }        
    q->rear = ( q->rear + 1 ) % MAX_QUEUE_SIZE;
    q->data[q->rear] = value;
    printf ("Adding vaue [%d] to queue\n", q->data[q->rear]);
}

void getFromQueue(Queue *q)
{
    int temp = -1;
    if (q->front == q->rear)
    {
        if (q->front == -1 && q->rear == -1)
        {
            printf ("Queue is empty\n");
        }
        else
        {
            temp = q->data[q->front];
            q->front = -1;
            q->rear = -1;
        }
    }
    else
    {
        temp = q->data[q->front];
        q->front = ++q->front % MAX_QUEUE_SIZE;
    }
    if (temp != -1) printf ("deq %d\n", temp);
}

void resizeQueue(Queue *q)
{
    q->front = 1;
    q->rear = -1;
}

int main()
{
    Queue *q;
    initQueue(q);
    pushToQueue(q, 5);
    pushToQueue(q, 3);
    pushToQueue(q, 2);
    pushToQueue(q, 6);
    getFromQueue(q);
    getFromQueue(q);
    getFromQueue(q);
    pushToQueue(q, 6);
    pushToQueue(q, 5);
    pushToQueue(q, 3);
    getFromQueue(q);
    getFromQueue(q);
    pushToQueue(q, 2);
    getFromQueue(q);
    getFromQueue(q);
    getFromQueue(q);
}