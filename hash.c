#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

Node* hashTable[TABLE_SIZE];

// Tip B Hash Fonksiyonu
int hashFunction(int id) {
    return (id * 7 + 3) % TABLE_SIZE;
}

void insertPackage(Package p) {
    int index = hashFunction(p.id);

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = p;
    newNode->next = NULL;

    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }

    printf("Paket eklendi! Index: %d\n", index);
}

void searchPackage(int id) {
    int index = hashFunction(id);

    Node* temp = hashTable[index];

    while (temp != NULL) {
        if (temp->data.id == id) {
            printf("\nPaket Bulundu:\n");
            printf("ID: %d\n", temp->data.id);
            printf("Gonderici: %s\n", temp->data.sender);
            printf("Hedef: %s\n", temp->data.destination);
            printf("Agirlik: %.2f\n", temp->data.weight);
            return;
        }
        temp = temp->next;
    }

    printf("Paket bulunamadi!\n");
}

void deletePackage(int id) {
    int index = hashFunction(id);

    Node* temp = hashTable[index];
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data.id == id) {

            if (prev == NULL) {
                hashTable[index] = temp->next;
            } else {
                prev->next = temp->next;
            }

            free(temp);
            printf("Paket silindi!\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Silinecek paket bulunamadi!\n");
}

void displayHashTable() {
    printf("\nHASH TABLE DURUMU\n");

    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d -> ", i);

        Node* temp = hashTable[i];

        while (temp != NULL) {
            printf("[%d] -> ", temp->data.id);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}
