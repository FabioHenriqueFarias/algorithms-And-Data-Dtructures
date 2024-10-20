#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Definição da estrutura do nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Definição da estrutura da lista encadeada
typedef struct {
    Node* head;
} LinkedList;

// Protótipos das funções
Node* newNode(int data);
LinkedList* newLinkedList();
void printList(LinkedList* list);
void appendNode(LinkedList* list, int data);
void pushNode(LinkedList* list, int data);
int size(LinkedList* list);
void appendNodeIndex(LinkedList* list, int data, int index);

#endif // LINKEDLIST_H
