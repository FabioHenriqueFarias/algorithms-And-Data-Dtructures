#include <stdio.h>
#include <stdlib.h>
#include <linkedList.h>

// Definição da estrutura do nó
struct Node {
    int data;
    struct Node* next;
};


// Função para criar um novo nó
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Função para ligar os nós
void connectNode(struct Node* node1, struct Node* node2) {
    node1->next = node2;
}

// Função para imprimir os elementos da lista encadeada
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

