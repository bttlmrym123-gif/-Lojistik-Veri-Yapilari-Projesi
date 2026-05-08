#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

AdjNode* createNode(int v) {
    AdjNode* newNode = (AdjNode*)malloc(sizeof(AdjNode));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->vertices = vertices;

    for (int i = 0; i < vertices; i++) {
        graph->head[i] = NULL;
    }

    return graph;
}

void addEdge(Graph* graph, int src, int dest) {

    AdjNode* newNode = createNode(dest);
    newNode->next = graph->head[src];
    graph->head[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->head[dest];
    graph->head[dest] = newNode;
}

void BFS(Graph* graph, int startVertex) {

    int visited[MAX] = {0};
    int queue[MAX];

    int front = 0;
    int rear = 0;

    visited[startVertex] = 1;
    queue[rear++] = startVertex;

    printf("\nBFS Gezintisi: ");

    while (front < rear) {

        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        AdjNode* temp = graph->head[currentVertex];

        while (temp) {
            int adjVertex = temp->vertex;

            if (!visited[adjVertex]) {
                visited[adjVertex] = 1;
                queue[rear++] = adjVertex;
            }

            temp = temp->next;
        }
    }

    printf("\n");
}

void displayGraph(Graph* graph) {

    printf("\nGRAF YAPISI\n");

    for (int v = 0; v < graph->vertices; v++) {

        AdjNode* temp = graph->head[v];

        printf("Sehir %d -> ", v);

        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}
