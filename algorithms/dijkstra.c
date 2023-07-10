#include "stdio.h"
#define V 5
#define infinity 9999999

int mark[V];
int dist[V];
int path[V];
void dijkstra(int a[][V], int start)
{
    for (int i = 0; i < V; i++)
    {
        // *(dist + i) = infinity;
        dist[i] = infinity;
        // *(mark + i) = 0;
        mark[i] = 0;
    }
    *(dist + start) = 0;
    for (int i=0; i<V; i++) {
        int min = infinity;
        int k;
        for (int j=0; j<V; j++) {
            if (mark[j] == 0 && dist[j] < min) {
                min = dist[j];
                k = j;
            }
        }
        mark[k] = 1;
        for (int u=0; u<V; u++){
            if (mark[u] == 0 && a[k][u] != 0 && dist[k] + a[k][u] < dist[u]) {
                dist[u] = dist[k] + a[k][u];
            }
        }
    }
}
int main()
{
    int graph[V][V] = {{0, 6, 0, 1, 0},
                        {6, 0, 5, 2, 2},
                        {0, 5, 0, 0, 5},
                        {1, 2, 0, 0, 1},
                        {0, 2, 5, 1, 0},
                       };

    printf ("Graph: \n");
    int *pa = (int*)graph;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            // printf("%d ", *(*(graph + i) + j));
            printf ("%d ", *(pa + i*V + j));
        }
        printf("\n");
    }
    dijkstra(graph, 0);
    printf ("Shortest path from src to other nodes: \n");
    for (int i=0; i<V; i++) {
        printf ("%d ", dist[i]);
    }
}