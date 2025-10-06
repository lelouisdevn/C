/* Thai Ngo - Oct 5 2025 - 11:10 */

#include "stdio.h"
#define STATIC_STACK_SIZE 3
#define NEGATIVE_STACK_INDICATOR -1

typedef struct stack 
{
    int data[STATIC_STACK_SIZE];
    int indicator;
} Stack;

void initStack(Stack *s)
{
    /* -1 indicates no element is stored yet */
    s->indicator = -1;
}

/* Only push to stack when the next indicator is valid >= 0 && <= max size */
void pushToStack(Stack* s, int value)
{
    if (s->indicator == STATIC_STACK_SIZE - 1)
    {
        printf ("STACK reaches its size. Cannot add [%d] to stack.\n", value);
    }
    else if (s->indicator < NEGATIVE_STACK_INDICATOR)
    {
        printf ("Cannot add value [%d] to stack with negative index\n", value);
    }
    else
    {
        s->data[++s->indicator] = value;
        printf ("Adding value [%d] to stack...\n", value);
    }
}

void getFromStack(Stack *s)
{   
    if (s->indicator <= NEGATIVE_STACK_INDICATOR)
    {
        printf ("STACK is empty. Cannot print data in this state\n");
    }
    else
    {
        printf ("%d ", s->data[s->indicator--]);
    }
}

int main()
{
    Stack * s;
    initStack(s);
    pushToStack(s, 5);
    pushToStack(s, 2);
    //s->indicator = -2;
    pushToStack(s, 3);
    pushToStack(s, 7);
    
    getFromStack(s);
    getFromStack(s);
    getFromStack(s);
    getFromStack(s);

    printf ("%d", s->indicator);
}