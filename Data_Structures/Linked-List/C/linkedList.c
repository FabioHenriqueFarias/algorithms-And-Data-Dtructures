#include <stdio.h>
#include <stdlib.h>
#include <linkedList.h>



// Função para criar um novo nó
Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("Erro: Não foi possível alocar memória para o novo nó.\n");
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

// Função para criar uma nova lista encadeada
LinkedList newLinkedList() {
    LinkedList list;
    list.head = NULL;
    return list;
}

// Função para adicionar um novo nó no final da lista
void appendNode(LinkedList list, int data) {
    struct Node* node = newNode(data);
    if (list.head == NULL) {
        list.head = node;
        return;
    }
    struct Node* temp = list.head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}

// Função para adicionar um novo nó no início da lista
void pushNode(LinkedList list, int data) {
    Node node = newNode(data);
    Node* temp = list.head;
    list.head = &node;
    node.next = temp;
}

// Função para ligar os nós
void connectNode(Node node1, Node node2) {
    node1->next = node2;
}

// Função para imprimir os elementos da lista encadeada
void printList(LinkedList list) {
    Node* temp = list.head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

