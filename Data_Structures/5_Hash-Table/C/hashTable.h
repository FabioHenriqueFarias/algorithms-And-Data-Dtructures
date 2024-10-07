#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdlib.h>

// Estrutura para um item na tabela hash
typedef struct Ht_item {
    char* key;      // Chave do item
    char* value;    // Valor do item
} Ht_item;

// Estrutura da tabela hash
typedef struct HashTable {
    Ht_item** items; // Array de ponteiros para itens
    int size;        // Tamanho da tabela hash
    int count;       // Contador de itens armazenados
} HashTable;

// Funções para manipulação da tabela hash
HashTable* inicializarTabelaHash(int size);
void insert(HashTable* ht, const char* key, const char* value);
char* search(HashTable* ht, const char* key);
void delete(HashTable* ht, const char* key);
void freeTable(HashTable* ht);

#endif // HASHTABLE_H
