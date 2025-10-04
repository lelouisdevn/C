/* Thai Ngo - Ho Chi Minh City, Oct 3, 2025 */

#include "stdio.h"
#define V 5

int Graph[V][V] =
    {
        {0, 6, 0, 1, 0},
        {6, 0, 5, 2, 2},
        {0, 5, 0, 0, 5},
        {1, 2, 0, 0, 1},
        {0, 2, 5, 1, 0},
};

int visited[V];
int distance[V];

/* First, find the node that has the lowest score (distance)*/
/* find its adjacent nodes and updates path if the new distance is smaller */
/* mark it as visited, so we won't check it again */
void Dijkstra(int Graph[][V], int node)
{
    
    for (size_t i = 0; i < V; i++)
    {
        visited[i] = 0;
        distance[i] = 99999999;
    }
    distance[node] = 0;
    for (int i = 0; i < V; i++)
    {
        int min = 99999999;
        int v;
        for (int j = 0; j < V; j++)
        {
            if (visited[j] == 0 && distance[j] < min)
            {
                //printf("min = %d\n", distance[j]);
                min = distance[j];
                v = j;
            }
        }
        visited[v] = 1;
        printf ("vis %d\n", v);
        for (int z = 0; z < V; z++)
        {
            if (visited[z] == 0 && Graph[v][z] != 0 && distance[v] + Graph[v][z] < distance[z])
            {
                distance[z] = distance[v] + Graph[v][z];
                //printf ("dist %d", distance[z]);
            }
        }
        
    }
}

int main()
{
    Dijkstra(Graph, 0);
    for (size_t i = 0; i < 5; i++)
    {
        //printf("%d ", distance[i]);
    }
}