#ifndef ARRAY_H
#define ARRAY_H

typedef struct {
    int *array;
    int tamanho;
} Array;

Array criacaoArray(int tamanho);
Array incrementarArray(Array array);
int removerElemento(Array array, int posicao);
int removerElementoInicio(Array array);
int removerElementoFim(Array array);
int adicionarElementoArray(Array array, int elemento, int posicao);
int adicionarElementoArrayInicio(Array array, int elemento);
int adicionarElementoArrayFim(Array array, int elemento);
int excluirArray(Array array);
int tamanhoArray(Array array);
int buscarElementoArray(Array array, int elemento);
void imprimirArray(Array array);

#endif // ARRAY_H
