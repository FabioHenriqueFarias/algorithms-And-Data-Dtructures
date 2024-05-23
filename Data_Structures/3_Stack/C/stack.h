#ifndef STACK_H
#define STACK_H 

// Estrutura para a pilha
typedef struct pilha{
    int *arr;
    int topo;  
    int qtd;  
} Pilha;

Pilha* inicializaPilha();
void empilha(Pilha *p, int x);
int tamanhoPilha(Pilha *p);
bool estaVazia(Pilha *p);
int desempilha(Pilha *p);
int topo(Pilha *p);

#endif // STACK_H
