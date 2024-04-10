#include "array.h"
#include <stdio.h>
#include <stdlib.h>


Array criacaoArray(int tamanho) {
    Array novoArray;
    novoArray.array = (int*) malloc(tamanho * sizeof(int));
    if (novoArray.array == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    novoArray.tamanho = tamanho;
    for(int i = 0; i < tamanho; i++) {
        novoArray.array[i] = -1;
    }
    return novoArray;
}

Array incrementarArray(Array array){
    int tamanho = array.tamanho;
    int novoTamanho = tamanho * 2; // Dobrando o tamanho do array

    Array novoArray;
    novoArray.array = (int*)realloc(novoArray.array, novoTamanho * sizeof(int));

    if (novoArray.array == NULL) {
        printf("Erro ao realocar memória.\n");
        exit(1);
    } // Erro na realocação do array

    // Inicializando os novos elementos com -1
    for (int i = tamanho; i < novoTamanho; i++) {
        novoArray.array[i] = -1;
    }

    for(int i = 0; i < tamanho; i++){
        novoArray.array[i] = array.array[i];
    } // Copiando os elementos do array antigo para o novo

    array.array = novoArray.array;
    novoArray.tamanho = novoTamanho;

    return array;
}

int removerElemento(Array array, int posicao){

    int tamanho = array.tamanho;

    if(posicao < 0 || posicao >= tamanho){
        return 0;
    } // Verifica se a posição é válida

    for(int i = posicao; i < tamanho - 1; i++){
        array.array[i] = array.array[i + 1];
    } // Deslocando os elementos

    return 1;
}

int removerElementoInicio(Array array){

    int tamanho = array.tamanho;

    for(int i = 0; i < tamanho - 1; i++){
        array.array[i] = array.array[i + 1];
    } // Deslocando os elementos
    
    return 1;
}

int removerElementoFim(Array array){
    
    int tamanho = array.tamanho;
    
    array.array[tamanho - 1] = 0;

    return 1;
    
}


int adicionarElementoArray(Array array, int elemento, int posicao){

    int tamanho = array.tamanho;

    if (array.tamanho + 1 < tamanho) {
        array = incrementarArray(array);
    } // Verifica se há espaço disponível

    if(posicao < 0 || posicao >= tamanho){
        return 0;
    } // Verifica se a posição é válida

    for(int i = tamanho - 1; i > posicao; i--){
        array.array[i] = array.array[i - 1];
    } // Deslocando os elementos

    array.array[posicao] = elemento;

    return 1;
}

int adicionarElementoArrayInicio(Array array, int elemento){

    int tamanho = array.tamanho;

    if (array.tamanho + 1 < tamanho) {
        array = incrementarArray(array);
    } // Verifica se há espaço disponível

    for(int i = tamanho - 1; i > 0; i--){
        array.array[i] = array.array[i - 1];
    } // Deslocando os elementos

    array.array[0] = elemento;

    return 1;
}

int adicionarElementoArrayFim(Array array, int elemento){

    int tamanho = array.tamanho;

    if (array.tamanho + 1 < tamanho) {
        array = incrementarArray(array);
    } // Verifica se há espaço disponível

    array.array[tamanho] = elemento;

    return 1;
}

int buscarElementoArray(Array array, int elemento){
    int tamanho = array.tamanho;

    for(int i = 0; i < tamanho; i++){
        if(array.array[i] == elemento){
            return i;
        }
    }

    return -1;
}

int excluirArray(Array array){
    free(array.array);
    array.array = NULL;
    array.tamanho = 0;

    return 1;
}

int tamanhoArray(Array array) {
    return array.tamanho;
}

void imprimirArray(Array array){
    int tamanho = array.tamanho;

    printf("Tamanho do array: %d\n", tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("Indice: %d, Elemento: %d \n",i, array.array[i]);
    }

    printf("\n");
}
