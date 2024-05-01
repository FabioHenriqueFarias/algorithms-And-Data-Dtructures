#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

int main() {

    // Criando uma pilha
    Pilha* p = inicializaPilha();

    // Verificando se a pilha está vazia
    printf("A pilha está vazia? %s\n", estaVazia(p) ? "Sim" : "Não");

    // Adicionando elementos na pilha
    empilha(p, 10);
    printf("Elemento do topo da pilha: %d\n", topo(p));

    // Verificando tamanho da pilha
    printf("Tamanho da pilha: %d\n", tamanhoPilha(p));

    // Adicionando mais elementos na pilha
    empilha(p, 20);
    printf("Elemento do topo da pilha: %d\n", topo(p));

    // Removendo o elemento do topo da pilha
    printf("Elemento removido do topo da pilha: %d\n", desempilha(p));
    printf("Elemento do topo da pilha: %d\n", topo(p));

    return 0;
}