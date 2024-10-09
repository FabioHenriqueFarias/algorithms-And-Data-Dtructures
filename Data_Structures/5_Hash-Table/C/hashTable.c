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
    ht -> size = size;

    return ht;
}

// Função que calcula o índice hash para uma chave dada 
unsigned long getHash(HashTable* ht, const char* key) {
     unsigned long hashvalue = 0; 

    // Itera sobre cada caractere na chave
    for (const char* p = key; *p != '\0'; p++) {
        hashvalue += (unsigned char)(*p); // Adiciona o valor ASCII do caractere atual
    }
    
    return hashvalue % ht->size; // Retorna o índice hash
}

// Função para inserir um novo item na tabela hash
void insert(HashTable* ht, const char* key, const char* value) {
    unsigned long index = getHash(ht, key);
  
    // Cria um novo item
    Node* newItem = (Node*)malloc(sizeof(Node));
    if (newItem == NULL) {
        printf("Erro: Não foi possível alocar memória para o novo item.\n");
        exit(1);
    }
    
    newItem->key = strdup(key);
    newItem->value = strdup(value);
    newItem->next = NULL; // Inicializa o ponteiro next como NULL
    
   // Verifica se o índice já está ocupado
    if (ht->array[index] != NULL) {
        Node* current = ht->array[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newItem; // Adiciona no final da lista
    } else {
        ht->array[index] = newItem; // Primeira inserção no índice
    }
}

// Função para liberar a memória da tabela hash
void freeTable(HashTable* ht) {
    if (ht == NULL) return; // Verifica se a tabela hash é NULL
  
}