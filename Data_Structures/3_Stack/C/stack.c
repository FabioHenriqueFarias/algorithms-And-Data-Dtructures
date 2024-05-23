#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"


// Função para criar uma nova pilha
Pilha* inicializaPilha() {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("Erro: Não foi possível alocar memória para a nova pilha.\n");
        exit(1);
    }
    p->arr = (int*)malloc(sizeof(int));
    if (p->arr == NULL) {
        printf("Erro: Não foi possível alocar memória para a pilha.\n");
        exit(1);
    }
    p->topo = -1;
    p->qtd = 0;

    return p;
}

// Função para adicionar um novo elemento na pilha
void empilha(Pilha *p, int elemento) {
    p->qtd++;
    p->arr = (int*)realloc(p->arr, (p->qtd) * sizeof(int));
    if (p->arr == NULL) {
        printf("Erro: Não foi possível realocar memória para a pilha.\n");
        exit(1);
    }
    p->topo = elemento;
    p->arr[p->qtd - 1] = elemento;
}

// Função para remover o elemento do topo da pilha
int desempilha(Pilha *p) {
    if (p->topo == -1) {
        printf("Erro: A pilha está vazia.\n");
        exit(1);
    }

    p->qtd--;
    if(p->qtd == 0) {
        p->topo = -1;
        int elemento = p->arr[0];
        p->arr[0] = -1;
        return elemento;
    }

    p->arr = (int*)realloc(p->arr, (p->qtd) * sizeof(int));
    if (p->arr == NULL) {
        printf("Erro: Não foi possível realocar memória para a pilha.\n");
        exit(1);
    }
    int elemento = p->arr[p->qtd];
    p->topo = p->arr[p->qtd - 1];
    return elemento;
}

// Função para retornar o tamanho da pilha
int tamanhoPilha(Pilha *p) {
    return p->qtd;
}

// Função para verificar se a pilha está vazia
bool estaVazia(Pilha *p) {
    return p->qtd == 0;
}

// Função para retornar o elemento do topo da pilha
int topo(Pilha *p) {
    return p->topo;
}