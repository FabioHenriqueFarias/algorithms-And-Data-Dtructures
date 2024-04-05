#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h" 

int main() {
    // Criando os nós da lista encadeada
    struct Node* head = newNode(1);
    struct Node* second = newNode(2);
    struct Node* third = newNode(3);

    // Ligando os nós
    connectNode(head, second);
    connectNode(second, third);

    // Imprimindo os elementos da lista encadeada
    printf("Lista Encadeada: ");
    printList(head);

    return 0;
}