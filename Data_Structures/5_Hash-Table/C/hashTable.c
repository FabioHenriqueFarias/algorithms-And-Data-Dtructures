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

    ht -> array = (Node**)malloc(size * sizeof(Node*));
    if (ht->array == NULL) {
        printf("Erro: Não foi possível alocar memória para o array de listas encadeadas.\n");
        exit(1);
    }

    ht->size = size;
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

// Função para buscar um item na tabela hash
char* search(HashTable* ht, const char* key) {
    unsigned long index = getHash(ht, key);
    Node* current = ht->array[index]; // Pega o primeiro nó da lista encadeada

    // Itera sobre a lista encadeada
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value; // Retorna o valor se a chave for encontrada
        }
        current = current->next; // Avança para o próximo nó
    }

    return NULL; // Retorna NULL se a chave não for encontrada
}

// Função para liberar a memória da tabela hash
void freeTable(HashTable* ht) {
    if (ht == NULL) return; // Verifica se a tabela hash é NULL

    // Itera sobre cada índice do array
    for (int i = 0; i < ht->size; i++) {
        Node* current = ht->array[i]; // Pega o primeiro nó da lista encadeada
        while (current != NULL) {
            Node* temp = current; // Armazena o nó atual
            current = current->next; // Avança para o próximo nó
            free(temp->key); // Libera a memória da chave
            free(temp->value); // Libera a memória do valor
            free(temp); // Libera a memória do nó
        }
    }

    free(ht->array); // Libera a memória do array
    free(ht); // Libera a memória da tabela hash em si
  
}