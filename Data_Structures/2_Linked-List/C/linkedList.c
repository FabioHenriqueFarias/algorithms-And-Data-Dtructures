#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"



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
LinkedList* newLinkedList() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    if (list == NULL) {
        printf("Erro: Não foi possível alocar memória para a nova lista encadeada.\n");
        exit(1);
    }
    list->head = NULL;
    return list;
}

// Função para adicionar um novo nó no final da lista
void appendNode(LinkedList* list, int data) {
    Node* node = newNode(data);
    if (list->head == NULL) {
        list->head = node;
        return;
    }
    struct Node* temp = list->head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}

// Função para adicionar um novo nó no início da lista
void pushNode(LinkedList* list, int data) {
    Node* node = newNode(data);
    Node* temp = list->head;
    list->head = node;
    node->next = temp;
}

// Função para adicionar um novo nó em uma posição específica da lista
void appendNodeIndex(LinkedList* list, int data, int index) {
    if (index < 0) {
        printf("Erro: O índice não pode ser negativo.\n");
        return;
    }
    if (index == 0) {
        pushNode(list, data);
        return;
    }
    
    Node* nodeData = newNode(data);
    Node* temp = list->head;
    for (int i = 0; i < index -2; i++) {
        if (temp == NULL) {
            printf("Erro: O índice é maior que o tamanho da lista.\n");
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Erro: O índice é maior que o tamanho da lista.\n");
        return;
    }
    nodeData->next = temp->next;
    temp->next = nodeData;
}

// Função para retornar o tamanho da lista encadeada
int size(LinkedList* list) {
    Node* temp = list->head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Função para imprimir os elementos da lista encadeada
void printList(LinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

