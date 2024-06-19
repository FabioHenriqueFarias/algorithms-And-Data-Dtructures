#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "queue.h"

// Função para criar uma nova fila
Fila* inicializaFila() {
    Fila* f = (Fila*)malloc(sizeof(Fila));
    if (f == NULL) {
        printf("Erro: Não foi possível alocar memória para a nova fila.\n");
        exit(1);
    }
    f->arr = (int*)malloc(sizeof(int));
    if (f->arr == NULL) {
        printf("Erro: Não foi possível alocar memória para a fila.\n");
        exit(1);
    }
    f->front = -1;
    f->rear = -1;
    f->size = 0;

    return f;
}

// Função para adicionar um novo elemento na fila
void enfileira(Fila *f, int x) {
    f->size++;
    f->arr = (int*)realloc(f->arr, (f->size) * sizeof(int));
    if (f->arr == NULL) {
        printf("Erro: Não foi possível realocar memória para a fila.\n");
        exit(1);
    }
    if (f->front == -1) {
        f->front = 0;
    }
    f->rear++;
    f->arr[f->rear] = x;
}

// Função para remover o elemento da frente da fila
int desenfileira(Fila *f) {
    if (f->front == -1) {
        printf("Erro: A fila está vazia.\n");
        exit(1);
    }

    f->size--;
    if(f->size == 0) {
        f->front = -1;
        int elemento = f->arr[0];
        f->arr[0] = -1;
        return elemento;
    }

    f->arr = (int*)realloc(f->arr, (f->size) * sizeof(int));
    if (f->arr == NULL) {
        printf("Erro: Não foi possível realocar memória para a fila.\n");
        exit(1);
    }
    int elemento = f->arr[f->front];
    f->front++;
    return elemento;
}

// Função para retornar o elemento da frente da fila
int frente(Fila *f) {
    if (f->front == -1) {
        printf("Erro: A fila está vazia.\n");
        exit(1);
    }
    return f->arr[f->front];
}

// Função para retornar o tamanho da Fila
int tamanhoFila(Fila *f) {
    return f->size;
}

// Função para verificar se a Fila está vazia
bool estaVazia(Fila *f) {
    return f->size == 0;
}