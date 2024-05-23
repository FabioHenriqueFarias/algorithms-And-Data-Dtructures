#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h" 

int main() {
    // Criando os nós da lista encadeada
    LinkedList* list = newLinkedList();

    // Adicionando os nós na lista encadeada
    pushNode(list, 45);
    pushNode(list, 55);
    pushNode(list, 65);
    appendNode(list, 5);
    pushNode(list, 2);
    appendNodeIndex(list, 15, 2);



    // Imprimindo os elementos da lista encadeada
    printf("Lista Encadeada: ");
    printList(list);
    printf("\n");
    printf("Tamanho da Lista Encadeada: %d\n", size(list));

    return 0;
}