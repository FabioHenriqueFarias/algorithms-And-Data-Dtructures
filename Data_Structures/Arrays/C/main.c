#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho = 10;
    int *meuArray = criacaoArray(tamanho);

    // Usando as funções definidas em array.c
    adicionarElementoArrayInicio(meuArray, 5);
    adicionarElementoArrayFim(meuArray, 10);
    removerElementoInicio(meuArray);

    // Imprimindo os elementos do array (apenas para demonstração)
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meuArray[i]);
    }
    printf("\n");

    // Liberando a memória alocada para o array
    excluirArray(meuArray);

    return 0;
}