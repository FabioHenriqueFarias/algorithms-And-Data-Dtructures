#include "array.h"
#include <stdlib.h>


int* criacaoArray(int tamanho){
    int* array = (int*) malloc(tamanho * sizeof(int));

    if (array == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    for(int i = 0; i < tamanho; i++){
        array[i] = -1;
    }

    return array;
}

int verificarEspacoArray(int* array){
    for(int i = 0; i < tamanho; i++){
        if(array[i] == -1){
            return 1; // Retorna 1 se houver espaço disponível
        }
    }

    return 0; // Retorna 0 se não houver espaço disponível
}

int* incrementarArray(int* array){
    int tamanho = sizeof(array) / sizeof(array[0]);
    int novoTamanho = tamanho * 2; // Dobra o tamanho do array

    array = (int*)realloc(array, novoTamanho * sizeof(int));

     if (array == NULL) {
        printf("Erro ao realocar memória.\n");
        exit(1);
    }

    // Inicializa os novos elementos com -1
    for (int i = tamanho; i < novoTamanho; i++) {
        array[i] = -1;
    }

    return array;
}

int removerElemento(int* array, int posicao){

    int tamanho = sizeof(array) / sizeof(array[0]);

    if(posicao < 0 || posicao >= tamanho){
        return 0;
    }
    for(int i = posicao; i < tamanho - 1; i++){
        array[i] = array[i + 1];
    }

    return 1;
}

int removerElementoInicio(int* array){

    int tamanho = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < tamanho - 1; i++){
        array[i] = array[i + 1];
    }
    
    return 1;
}

int removerElementoFim(int* array){
    
        int tamanho = sizeof(array) / sizeof(array[0]);
    
        array[tamanho - 1] = 0;
    
        return 1;
    
}


int adicionarElementoArray(int* array, int elemento, int posicao){

    int tamanho = sizeof(array) / sizeof(array[0]);

    if (verificarEspacoArray < 1) {
        array = incrementarArray(array);
    }

    if(posicao < 0 || posicao >= tamanho){
        return 0;
    }

    for(int i = tamanho - 1; i > posicao; i--){
        array[i] = array[i - 1];
    }

    array[posicao] = elemento;

    return 1;
}

adicionarElementoArrayInicio(int* array, int elemento){

    int tamanho = sizeof(array) / sizeof(array[0]);

    for(int i = tamanho - 1; i > 0; i--){
        array[i] = array[i - 1];
    }

    array[0] = elemento;

    return 1;
}

int adicionarElementoArrayFim(int* array, int elemento){

    int tamanho = sizeof(array) / sizeof(array[0]);

    array[tamanho] = elemento;

    return 1;
}

int excluirArray(int* array){
    free(array);
    return 1;
}
