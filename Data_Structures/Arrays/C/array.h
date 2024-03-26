#ifndef ARRAY_H
#define ARRAY_H

int* criacaoArray(int tamanho);

int removerElemento(int* array, int posicao);

int removerElementoInicio(int* array);

int removerElementoFim(int* array);

int adicionarElementoArray(int* array, int elemento, int posicao);

int adicionarElementoArrayInicio(int* array, int elemento);

int adicionarElementoArrayFim(int* array, int elemento);

int excluirArray(int* array);
