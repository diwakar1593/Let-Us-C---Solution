#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

// Structure for representing a graph as an adjacency matrix
struct Graph {
    int vertices;
    int adjMatrix[MAX_NODES][MAX_NODES];
};

// Initialize the graph
void initializeGraph(struct Graph *g, int vertices) {
    g->vertices = vertices;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            g->adjMatrix[i][j] = 0;
        }
    }
}

// Add an edge to the graph
void addEdge(struct Graph *g, int start, int end) {
    g->adjMatrix[start][end] = 1;
    g->adjMatrix[end][start] = 1;
}

// Array to keep track of visited nodes in DFS
int visited[MAX_NODES] = {0};

// Perform DFS on the graph
void depthFirstSearch(struct Graph *g, int startNode) {
    printf("DFS Traversal: %d ", startNode);
    visited[startNode] = 1;

    for (int i = 0; i < g->vertices; i++) {
        if (g->adjMatrix[startNode][i] == 1 && !visited[i]) {
            depthFirstSearch(g, i);
        }
    }
}

int main() {
    struct Graph g;
    int vertices, edges;
    int startNode;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    initializeGraph(&g, vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++) {
        int start, end;
        printf("Enter edge %d (start end): ", i + 1);
        scanf("%d %d", &start, &end);
        addEdge(&g, start, end);
    }

    printf("Enter the starting node for DFS: ");
    scanf("%d", &startNode);

    depthFirstSearch(&g, startNode);

    return 0;
}
