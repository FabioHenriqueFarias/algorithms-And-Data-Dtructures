# Hash Table

## Sumário 

- [O que é uma Hash Table?](#o-que-é-uma-hash-table)
- [Usos de uma Hash Table:](#usos-de-uma-hash-table)
- [Operações comuns em Hash Table](#operações-comuns-em-hash-table)
  - [Operação]()
    - [Complexidade da Operação]()
- [Complexidades](#complexidades)
- [Implementações](#implementações)
- [Referências](#referências)

## O que é uma Hash Table?

Uma **tabela hash** é uma implementação específica de um tipo de dado abstrato chamado **array associativo**. Existem várias maneiras de implementar um array associativo, e uma dessas maneiras é através de uma tabela hash.

Uma tabela hash é uma estrutura de dados usada para inserir, procurar e remover pares de chave-valor rapidamente. Ela opera com base no conceito de **hashing**, onde cada chave é transformada por uma função hash em um índice distinto em um array. Esse índice funciona como um local de armazenamento para o valor correspondente. Em termos simples, a tabela hash mapeia chaves para valores, permitindo um acesso eficiente e rápido aos dados associados.

### O que é um Array Associativo?

Um **array associativo**, também conhecido como **mapa**, **dicionário** ou **tabela de símbolos**, é uma estrutura de dados que armazena pares de chave-valor. Essa estrutura permite que os valores sejam acessados, manipulados e gerenciados de forma eficiente usando suas chaves associadas.

Um par chave-valor consiste em dois elementos relacionados: uma **chave** e um **valor**. A **chave** é o identificador único usado para recuperar o **valor** correspondente. O **valor** é o dado associado à chave, que pode ser recuperado e utilizado através da chave específica.


Você pode pensar em um array associativo como uma lista de contatos telefônicos. Nessa lista, você pode procurar o número de telefone de uma pessoa encontrando seu nome. O nome é a chave e o número de telefone é o valor. A tabela abaixo ilustra como essa lista de contatos seria organizada:

| Nome        | Número de Telefone  |
|-------------|----------------------|
| Alice       | (11) 1234-5678       |
| Bob         | (21) 8765-4321       |
| Carol       | (31) 5555-1234       |
| Dave        | (41) 9876-5432       |

Arrays associativos possuem duas propriedades importantes: cada chave é única e cada chave mapeia para um único valor. Assim como em um diretório telefônico onde cada número de telefone só pode aparecer uma vez, em um array associativo, cada chave também deve ser única. 

Da mesma forma, cada número de telefone no diretório se refere a uma única pessoa, e cada chave em um array associativo mapeia para um único valor. No entanto, é possível que o mesmo valor seja associado a diferentes chaves. 

Por exemplo, duas pessoas podem ter o mesmo número de telefone na lista, então é importante lembrar que um valor pode aparecer várias vezes em um array associativo, mas cada chave será exclusiva.

### O que é Hashing?

Hashing é uma técnica utilizada para mapear dados de tamanho arbitrário para dados de tamanho fixo. Esse mapeamento é feito usando fórmulas matemáticas conhecidas como funções hash. O resultado da função hash é um valor hash, que geralmente é utilizado como um índice em uma tabela hash (hash table) para facilitar a busca, inserção e remoção de dados.

A **função hash**  recebe uma entrada (chave) e retorna um valor numérico, que é o índice na tabela hash onde o valor associado à chave será armazenado, idealmente, uma boa função hash distribui as chaves de forma uniforme na tabela, minimizando colisões.


#### Exemplo

Vamos considerar uma função hash simples que usa o operador módulo 10 para calcular o índice na tabela hash. A função hash é definida como:

\[ \{hash(key)} = \{key} \% 10 \]

Dado o array `[11, 13, 40, 72]`, vamos inseri-los em uma tabela hash de tamanho 10. A tabela hash inicialmente está vazia e será representada por um array de tamanho 10 com todos os valores zerados.

1. **Inserir chave 11**:
   - Calcule o índice: `11 % 10 = 1`.
   - Armazene o valor 11 na posição 1 da tabela hash.
   
   ```plaintext
   hash table: [0, 11, 0, 0, 0, 0, 0, 0, 0, 0]
   ```

2. **Inserir chave 13**:
   - Calcule o índice: `13 % 10 = 3`.
   - Armazene o valor 13 na posição 3 da tabela hash.

   ```plaintext
   hash table: [0, 11, 0, 13, 0, 0, 0, 0, 0, 0]
   ```

3. **Inserir chave 40**:
   - Calcule o índice: `40 % 10 = 0`.
   - Armazene o valor 40 na posição 0 da tabela hash.

   ```plaintext
   hash table: [40, 11, 0, 13, 0, 0, 0, 0, 0, 0]
   ```

4. **Inserir chave 72**:
   - Calcule o índice: `72 % 10 = 2`.
   - Armazene o valor 72 na posição 2 da tabela hash.

   ```plaintext
   hash table: [40, 11, 72, 13, 0, 0, 0, 0, 0, 0]
   ```

**Tabela Hash:**

```plaintext
Índice | Valores
-------|--------
  0    | 40
  1    | 11
  2    | 72
  3    | 13
  4    | 0
  5    | 0
  6    | 0
  7    | 0
  8    | 0
  9    | 0
```









## Usos de uma Hash Table

## Operações comuns em Hash Table

### Operação

#### Complexidade da Operações

## Complexidades

## Implementações

## Referências
