#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int adj[MAX][MAX]; // Adjacency Matrix
int visited[MAX];
int n; // Number of vertices

// BFS uses a Queue
void BFS(int start) {
    int queue[MAX], front = -1, rear = -1;
    for(int i = 0; i < n; i++) visited[i] = 0;

    visited[start] = 1;
    queue[++rear] = start;

    printf("BFS Traversal: ");
    while(front != rear) {
        int current = queue[++front];
        printf("%d ", current);

        for(int i = 0; i < n; i++) {
            if(adj[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
    printf("\n");
}

// DFS uses Recursion (which uses the System Stack)
void DFS(int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for(int i = 0; i < n; i++) {
        if(adj[vertex][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int edges, u, v;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        adj[u][v] = adj[v][u] = 1; // For undirected graph
    }

    BFS(0);

    for(int i = 0; i < n; i++) visited[i] = 0; // Reset for DFS
    printf("DFS Traversal: ");
    DFS(0);
    printf("\n");

    return 0;
}