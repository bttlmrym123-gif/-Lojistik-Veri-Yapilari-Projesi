#include <stdio.h>
#include <string.h>
#include "hash.h"
#include "graph.h"

int main() {

    // HASH TABLE TEST

    Package p1 = {101, "Ali", "Ankara", 10.5};
    Package p2 = {202, "Ayse", "Istanbul", 5.2};
    Package p3 = {303, "Mehmet", "Izmir", 8.7};
    Package p4 = {404, "Zeynep", "Bursa", 4.1};
    Package p5 = {505, "Can", "Antalya", 9.9};

    insertPackage(p1);
    insertPackage(p2);
    insertPackage(p3);
    insertPackage(p4);
    insertPackage(p5);

    displayHashTable();

    searchPackage(303);

    deletePackage(202);

    displayHashTable();

    // GRAPH TEST

    Graph* graph = createGraph(6);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 4, 5);

    displayGraph(graph);

    BFS(graph, 0);

    return 0;
}
