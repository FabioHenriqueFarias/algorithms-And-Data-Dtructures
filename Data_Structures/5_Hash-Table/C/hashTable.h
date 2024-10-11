#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdlib.h>
#include <string.h>

// Estrutura para um item na tabela hash
typedef struct Node {
    char* key;          // Chave do item
    char* value;        // Valor do item
    struct Node* next;  // Ponteiro para o próximo nó
} Node;

// Estrutura da tabela hash
typedef struct HashTable {
    Node** array;       // Array de listas encadeadas
    int size;           // Tamanho da tabela
} HashTable;


// Funções para manipulação da tabela hash
HashTable* inicializarTabelaHash(int size);
void insert(HashTable* ht, const char* key, const char* value);
char* search(HashTable* ht, const char* key);
void delete(HashTable* ht, const char* key);
void freeTable(HashTable* ht);
unsigned long getHash(const char* key, int size);
void printTable(HashTable* ht);

#endif // HASHTABLE_H
