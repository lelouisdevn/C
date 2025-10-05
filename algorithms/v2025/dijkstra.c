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
int prevNode[V];

/** Dijkstra takes a Graph and the starting node:
 *  First, find the node that has the lowest score (distance)
 *  find its adjacent nodes and updates path if the new distance is smaller
 *  mark it as visited, so we won't check it again; Also store the previous node of the current node 
*/
void Dijkstra(int Graph[][V], int node)
{
    
    for (size_t i = 0; i < V; i++)
    {
        visited[i] = 0;
        distance[i] = 99999999;
        prevNode[i] = -1;
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
                min = distance[j];
                v = j;
            }
        }
        visited[v] = 1;
        
        for (int z = 0; z < V; z++)
        {
            if (visited[z] == 0 && Graph[v][z] != 0 && distance[v] + Graph[v][z] < distance[z])
            {
                distance[z] = distance[v] + Graph[v][z];
                prevNode[z] = v;
            }
        }
    }
}
/** pathFromSrcToDest takes a Graph, destination node, and update it to the int *path and returns the current index:
 *  prevNode contains previous node for the current node, let the current be dest 
 *  find from the dest back to the source, and store them to the array int* path
 *  and when printing out, print them backward to retain the correct order from src to dest
 */
int pathFromSrcToDest(int Graph[][V], int dest, int *path)
{
    int idx = 0;
    int curNode = dest;
    while (curNode != -1)
    {
        /* Well, 'path[idx++] = curNode' is the same but it should be 'path[idx] = curNode; idx++' for better clarity */
        path[idx] = curNode; idx++;
        curNode = prevNode[curNode];
    }
    return idx;
}

int main()
{
    int dest = 2;
    int start = 0;
    Dijkstra(Graph, start);

    for (int i = 1; i < V; i++)
    {
        int path[V] = {0};
        int k = pathFromSrcToDest(Graph, i, path);
        printf ("Path to %d: ", i);

        for (int z = k-1; z >= 0; z--)
        {
           printf ("%d ", path[z]);
        }
        printf ("\n");
    }
}