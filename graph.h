#ifndef GRAPH_H
#define GRAPH_H

#define MAX 10

typedef struct AdjNode {
    int vertex;
    struct AdjNode* next;
} AdjNode;

typedef struct Graph {
    AdjNode* head[MAX];
    int vertices;
} Graph;

Graph* createGraph(int vertices);
void addEdge(Graph* graph, int src, int dest);
void BFS(Graph* graph, int startVertex);
void displayGraph(Graph* graph);

#endif
