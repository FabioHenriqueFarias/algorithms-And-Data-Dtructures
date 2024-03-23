# Estrutura de Dados

## Sumário

- [O que são Dados?](#o-que-são-dados)
- [O Que são Estruturas de Dados?](#o-que-são-estruturas-de-dados)
- [Características das Estruturas de dados](#características-das-estruturas-de-dados)
    - [Estruturas Lineares e Estruturas Não Lineares](#estruturas-lineares-e-estruturas-não-lineares)
        - [Estruturas Lineares:](#estruturas-lineares)
        - [Estruturas não Lineares:](#estruturas-não-lineares)
    - [Estruturas Homogêneas e Estruturas Heterogêneas](#estruturas-homogêneas-e-estruturas-heterogêneas)
        - [Estruturas Homogêneas](#estruturas-homogêneas)
        - [Estruturas Heterogêneas](#estruturas-heterogêneas)
    - [Estruturas Estáticas e Estruturas Dinâmicas](#estruturas-estáticas-e-estruturas-dinâmicas)
        - [Estruturas Estáticas](#estruturas-estáticas)
        - [Estruturas Dinâmicas](#estruturas-dinâmicas)
- [Estruturas de Dados Comuns:](#estruturas-de-dados-comuns)

## O que são Dados?

Os dados são os elementos fundamentais da computação, representando unidades que podem ser criadas, lidas, modificadas ou excluídas.<br> 
Por exemplo, uma variável em uma linguagem de programação, como o vetor de caracteres ("char") no trecho de código abaixo:

```
    int main() {
        char hello[13] = "Hello Word!"; 
    }
```

Neste caso, o vetor de caracteres "hello" é um exemplo de dado, contendo a mensagem "Hello World!".<br>
Existem diversos tipos de dados, e cada linguagem de programação geralmente possui seus próprios tipos específicos. No entanto, há quatro tipos de dados básicos comuns:

* int (Inteiros): Valores numéricos inteiros, que podem ser positivos ou negativos.
* float (Valores com ponto flutuante): Valores numéricos com casas decimais.
* boolean (Valores Lógicos): Representa dados lógicos, podendo ser "Verdadeiro" ou "Falso".
* text (Textos): Sequências de caracteres, que podem representar nomes, endereços, entre outros.

Por exemplo, na linguagem C, existem vários tipos de dados utilizados para representar diferentes categorias de valores manipulados por um programa. Abaixo estão alguns exemplos:


| Tipo   | Descrição                |
|--------|--------------------------|
| char   | Caractere                |
| int    | Inteiro                  |
| float  | Real de precisão simples |
| double | Real de precisão dupla   |
| void   | Vazio (sem valor)        |

## O Que são Estruturas de Dados?

Esses dados mencionados precisam ser estruturados para facilitar a manipulação pelo programador. É aí que entram as estruturas de dados, que permitem organizar e gerenciar conjuntos de dados de forma eficiente em um programa.

A maneira como esses dados são agregados e organizados varia conforme a utilização e o processamento requeridos. Aspectos como eficiência em buscas, volume de dados, complexidade da implementação e inter-relações entre os dados são considerados. Essas diferentes formas de organização são conhecidas como estruturas de dados.

Cada estrutura de dados possui um conjunto próprio de métodos para realizar operações como **inserção** ou **exclusão de elementos**, **busca** e **localização de elementos**, e **ordenação** de acordo com critérios específicos.

## Características das Estruturas de dados

Conforme mencionado anteriormente, cada estrutura de dados possui características únicas que as tornam mais adequadas para diferentes necessidades. Elas podem ser divididas em alguns grupos principais:

- Estruturas Lineares e Estruturas Não Lineares.
- Estruturas Homogêneas e Estruturas Heterogêneas.
- Estruturas Estáticas e Estruturas Dinâmicas.  

### Estruturas Lineares e Estruturas Não Lineares

#### Estruturas Lineares:

Uma estrutura de dados em que os elementos são organizados sequencial ou linearmente, com novos elementos sendo adicionados após o último elemento da lista. 

Na estrutura de dados linear, todos os elementos são organizados em uma única dimensão ou nível, o que implica que não há ramificações ou subdivisões entre eles. Essa organização facilita a iteração por todos os elementos em uma única execução, tornando a implementação mais simples, especialmente devido à natureza linear da memória do computador.

Um exemplo comum dessa estrutura é uma fila, na qual as pessoas entram no final e saem do início, seguindo uma ordem de chegada sequencial.

### Estruturas não Lineares:

Estruturas de dados nas quais os elementos não são organizados sequencial ou linearmente.

Em uma estrutura de dados não linear, não há um único nível envolvido, impossibilitando a iteração por todos os elementos em uma única execução. Essas estruturas são mais complexas de implementar em comparação com as estruturas de dados lineares. No entanto, elas têm a capacidade de utilizar a memória do computador de forma mais eficiente do que as estruturas de dados lineares.

Um exemplo ilustrativo é uma rede social, onde os usuários estão interconectados de várias maneiras, formando uma teia de conexões. Cada usuário pode ter múltiplos amigos, e esses amigos, por sua vez, podem possuir suas próprias conexões, criando uma rede complexa e não linear. Essa estrutura não segue uma organização linear simples e não é hierárquica, o que significa que não há uma única linha de conexões.

### Estruturas Homogêneas e Estruturas Heterogêneas

#### Estruturas Homogêneas
As estruturas de dados homogêneas são aquelas em que todos os elementos possuem o mesmo tipo de dado (como tipo int, tipo float, etc.) na memória do computador.

Um exemplo é uma lista de nomes, onde todos os elementos são nomes.

#### Estruturas Heterogêneas
Diferentemente das estruturas homogêneas, as estruturas heterogêneas permitem a manipulação de um conjunto de informações de tipos de dados primitivos diferentes, mantendo um relacionamento lógico entre eles.

Um exemplo de estrutura heterogênea é um cardápio, onde você possui o nome da comida e seu respectivo valor. Nesse caso, temos dois tipos de dados diferentes: o nome da comida (provavelmente uma string) e o valor (talvez um número de ponto flutuante para representar o preço). Apesar de serem tipos diferentes, eles estão logicamente relacionados dentro da mesma estrutura de dados.

### Estruturas Estáticas e Estruturas Dinâmicas

#### Estruturas Estáticas
As estruturas de dados estáticas possuem um tamanho fixo, no qual os dados armazenados podem ser modificados sem alterar o espaço de memória alocado.

Um exemplo concreto de uma estrutura estática pode ser encontrada em uma lista de alunos de uma turma. Nessa lista, o tamanho é fixo e limitado ao número de alunos matriculados naquela turma específica. Portanto, o tamanho da lista é estático, uma vez que não pode ser facilmente alterado sem a necessidade de adicionar ou remover novas salas de aula para acomodar mais ou menos alunos.

#### Estruturas Dinâmicas    

As estruturas de dados dinâmicas não têm um tamanho fixo, o que significa que podem variar em tamanho por meio da alocação de memória em tempo de execução.

Por exemplo, considere uma lista de tarefas em um aplicativo de gerenciamento de tarefas. Nesse contexto, os usuários podem adicionar, remover ou modificar tarefas a qualquer momento. O número de tarefas na lista pode variar conforme as necessidades e atividades do usuário. A estrutura de dados subjacente para armazenar essas tarefas é dinâmica, pois pode crescer conforme novas tarefas são adicionadas ou encolher à medida que as tarefas existentes são concluídas, ou removidas.

## Estruturas de Dados Comuns: 

- Array (Arranjo)
- Linked List (Lista Encadeada)
- Stack (Pilha)
- Queue (Fila)
- Hash Table (Tabela de Hash)
- Tree (Árvore)
- Graph (Grafo)
- Heap (Heap)



