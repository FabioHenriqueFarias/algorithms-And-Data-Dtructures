#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Definição da estrutura do nó
typedef struct {
    int data;
    struct Node* next;} 
    Node;

// Definição da estrutura da lista encadeada
typedef struct {
       struct Node* head;
} LinkedList;

Node newNode(int data);
LinkedList newLinkedList();
void connectNode(Node node, Node nextNode);
void printList(LinkedList list);

#endif // LINKEDLIST_H
