/* Thai Ngo - Oct 8 2025 - 21:03 */

#include "stdio.h"
#include "stack.c"
#include "stdlib.h"

#define V 5

/**
 * Un-connected Graph
 */
/*int Graph[][V] =
    {
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
};*/

/**
 * Connected Graph
 */
int Graph[][V] =
    {
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
};

/**
 * Depth-First Search
 * takes a Graph, a Stack, starting node, and a list of visited nodes
 */
void DFS(int Graph[][V], Stack * s, int src, int visited[V])
{
    pushToStack(s, src);

    int u;
    while ((u = getFromStack(s)) != -1 && visited[u] == 0)
    {
        visited[u] = 1;
        printf ("Visit %d\n", u);

        /* Check for every unvisited adjacent nodes, push them to Stack */
        for (int i=0; i<V; i++)
        {
            if (Graph[u][i] != 0 && visited[i] == 0)
            {
                pushToStack(s, i);
            }
        }
    }
}

int main()
{
    Stack *s = (Stack*)malloc(sizeof(Stack));
    initStack(s);

    int visited[V] = {0};
    DFS(Graph, s, 0, visited);

    /**
     * A connected graph is a graph that there's way from a node to all other nodes 
     * If there's a node that's unvisited, the graph is not connected
     */
    for (int i=0; i<V; i++)
    {
        if (visited[i] == 0)
        {
            printf ("Un-connected Graph\n");
            return 0;
        }
    }
    printf ("Connected Graph\n");
}