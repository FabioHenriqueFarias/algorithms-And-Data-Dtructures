#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "hashTable.h"

// Função para criar uma nova tabela hash
HashTable* inicializarTabelaHash(int size) {
    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
    if (ht == NULL) {
        printf("Erro: Não foi possível alocar memória para a nova tabela hash.\n");
        exit(1);
    }
    ht->items = (Ht_item**)calloc(size, sizeof(Ht_item*));
    if (ht->items == NULL) {
        printf("Erro: Não foi possível alocar memória para a tabela hash.\n");
        exit(1);
    }
    ht->size = size;

    return ht;
}