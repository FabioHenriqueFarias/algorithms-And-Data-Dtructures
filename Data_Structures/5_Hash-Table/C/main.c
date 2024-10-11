#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "hashTable.h"

int main(){
    
    // Cria uma tabela hash
    HashTable* ht = inicializarTabelaHash(10);

    // Inserindo valores que causam colisões
    printf("Inserindo valores...\n");
    insert(ht, "maria", "valor_maria");
    insert(ht, "ariam", "valor_ariam");
    insert(ht, "Fernanda", "valor_fernanda");
    insert(ht, "João", "valor_joao");

    // Mostrando o estado da tabela após inserções
    printf("\nEstado da tabela após inserções:\n");
    printTable(ht);

    // Buscando um valor
    printf("\nBuscando 'maria': %s\n", search(ht, "maria"));

    // Removendo "maria"
    printf("\nRemovendo 'maria'...\n");
    delete(ht, "maria");

    // Mostrando o estado da tabela após remoção
    printf("\nEstado da tabela após remoção:\n");
    printTable(ht);

    // Tentando buscar "maria" novamente
    printf("\nBuscando 'maria' após remoção: %s\n", search(ht, "maria"));

    // Liberar a memória da tabela hash
    freeTable(ht);

    return 0;
    
}