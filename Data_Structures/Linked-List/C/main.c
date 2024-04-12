#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h" 

int main() {
    // Criando os nós da lista encadeada
    Node* head = newNode(1);
    Node* second = newNode(2);
    Node* third = newNode(3);
    LinkedList* list = newLinkedList();



    // Imprimindo os elementos da lista encadeada
    printf("Lista Encadeada: ");
    printList(list);

    return 0;
}