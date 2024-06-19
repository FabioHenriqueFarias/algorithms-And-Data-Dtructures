#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "queue.h"

int main(){

    // Criando uma fila
    Fila* f = inicializaFila();

    // Verificando se a pilha está vazia
    printf("A fila está vazia? %s\n", estaVazia(f) ? "Sim" : "Não");

    // Adicionando elementos na fila
    enfileira(f, 10);
    printf("Elemento %d adicionado na fila.\n", 10);
    printf("Elemento da frente da fila: %d\n", frente(f));

    // Verificando tamanho da fila
    printf("Tamanho da fila: %d\n", tamanhoFila(f));

    // Adicionando mais elementos na fila
    enfileira(f, 20);
    printf("Elemento %d adicionado na fila.\n", 20);
    printf("Elemento da frente da fila: %d\n", frente(f));

    // Removendo o elemento do topo da fila
    printf("Elemento removido da frente da fila: %d\n", desenfileira(f));
    printf("Elemento da frente da fila: %d\n", frente(f));

    return 0;
}