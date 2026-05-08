#ifndef HASH_H
#define HASH_H

#include "package.h"

#define TABLE_SIZE 10

typedef struct Node {
    Package data;
    struct Node* next;
} Node;

extern Node* hashTable[TABLE_SIZE];

int hashFunction(int id);
void insertPackage(Package p);
void searchPackage(int id);
void deletePackage(int id);
void displayHashTable();

#endif
