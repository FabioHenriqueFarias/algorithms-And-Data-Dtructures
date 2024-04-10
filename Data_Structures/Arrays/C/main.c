#include <stdio.h>
#include <stdlib.h>
#include "array.h" 

int main(){

    int tamanho = 10;
    Array meuArray = criacaoArray(tamanho);
    
    // Inserindo elementos no array
    for(int i = 0; i < tamanho; i++){
        adicionarElementoArray(meuArray, i+5, i);
    }

    // Exemplo de saída: 
    printf("Saída 1: \n");
    imprimirArray(meuArray);
    printf("\n");

    // Usando as funções definidas em array.c
    adicionarElementoArrayInicio(meuArray, 5);
    adicionarElementoArrayFim(meuArray, 10);

    // Exemplo de saída: 
    printf("Saída 2: \n");
    imprimirArray(meuArray);
    printf("\n");

    // Removendo o elemento na posição 2
    removerElemento(meuArray, 2);
    removerElementoInicio(meuArray);
    removerElementoFim(meuArray);

    // Exemplo de saída:
    printf("Saída 3: \n");
    imprimirArray(meuArray);
    printf("\n");

    // Buscando o elemento por valor
    printf("Posição: %d\n", buscarElementoArray(meuArray, 8));
    printf("\n");


    // Liberando a memória alocada para o array
    excluirArray(meuArray);

    // Exemplo de saída 4:
    printf("Saída 4: \n");
    imprimirArray(meuArray);

    return 0;
}
