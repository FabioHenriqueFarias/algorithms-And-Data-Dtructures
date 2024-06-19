#ifndef QUEUE_H
#define QUEUE_H

// Estrutura para a pilha
typedef struct Queue{
    int *arr;   
    int front;  
    int rear;   
    int size;   
} Fila;

Fila* inicializaFila();
int tamanhoFila(Fila *f);
bool estaVazia(Fila *f);
void enfileira(Fila *f, int x);
int desenfileira(Fila *f);
int frente(Fila *f);

#endif // QUEUE_H

