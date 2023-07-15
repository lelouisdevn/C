#include "iostream"
#include "q.cpp"
#include "s.cpp"
using namespace std;
#define V 10
typedef struct {
    int n;
    int a[V][V];
}Graph;
void initGraph(Graph *G, int n) {
    G->n = n;
    for (int i=0; i<G->n; i++) {
        for (int j=0; j<G->n; j++) {
            G->a[i][j] = 0;
        }
    }
}
void printGraph(Graph G) {
    cout << G.n << " \n";
    for (int i=0; i<G.n; i++) {
        for (int j=0; j<G.n; j++) {
            cout << G.a[i][j] << " ";
        }
        cout << "\n";
    }
}

void addEdge(Graph *G, int x, int y) {
    G->a[x][y] = 1;
    G->a[y][x] = 1;
}

void adjacent(Graph G, int x) {
    for (int i=0; i<G.n; i++) {
        if (G.a[i][x] != 0) {
            cout << i << " ";
        }
    }
}
void bfs(Graph G, Queue *Q, int mark[], int x) {
    initQueue(Q);
    for (int i=0; i<V; i++) {
        mark[i] = 0;
    }
    push(Q, x);
    mark[x] = 1;
    while (Q->front != -1) {
        int u = Q->data[Q->front];
        pop(Q);
        cout << u << " ";
        for (int i=0; i<G.n; i++) {
            if (G.a[u][i] != 0 && mark[i] == 0) {
                push(Q, i);
                mark[i] = 1;
            }
        }
    }
}
void dfs(Graph G, Stack *S, int mark[], int x) {
    initStack(S);
    for (int i=0; i<V; i++) {
        mark[i] = 0;
    }
    push(S, x);
    while(S->index != -1) {
        int u = S->data[S->index];
        cout << u << " ";
        pop(S);
        mark[u] = 1;
        for (int i=0; i<G.n; i++) {
            if (G.a[u][i] != 0 && mark[i]==0) {
                push(S, i);
            }
        }
    }
}
int main() {
    Graph G;
    initGraph(&G, 5);
    int mark[V];

    // Add edges
    addEdge(&G, 0, 1);
    addEdge(&G, 0, 2);
    addEdge(&G, 0, 3);
    addEdge(&G, 2, 4);

    Queue Q;
    cout << "Breadth first search: \n";
    bfs(G,&Q,mark, 0);

    Stack S;
    cout << "\nDepth first search: \n";
    dfs(G, &S, mark, 0);
}