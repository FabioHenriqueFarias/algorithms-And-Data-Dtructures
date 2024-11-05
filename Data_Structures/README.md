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
    - [Array (Arranjo)](#array-arranjo)
    - [Linked List (Lista Encadeada)](#linked-list-lista-encadeada)
    - [Stack (Pilha)](#stack-pilha)
    - [Queue (Fila)](#queue-fila)
    - [Hash Table (Tabela de Hash)](#hash-table-tabela-de-hash)
    - [Tree (Árvore)](#tree-árvore)
    - [Graph (Grafo)](#graph-grafo)
    - [Heap](#heap)
- [Referências](#referências)

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

Exemplos:
- **Array**: uma coleção de elementos indexados.
- **Linked List**: onde cada elemento aponta para o próximo.
- **Stack**: elementos adicionados e removidos pela última posição.
- **Queue**: elementos adicionados no final e removidos do início (FIFO - First In, First Out).

### Estruturas não Lineares:

### Estruturas não Lineares

Estruturas de dados não lineares organizam elementos de maneira complexa, sem seguir uma sequência única, o que permite representações mais flexíveis e dinâmicas de dados interconectados. Essas estruturas permitem múltiplas conexões entre os elementos, dificultando a iteração simples por todos eles em uma única execução. Embora sejam mais complexas de implementar, utilizam a memória do computador de maneira eficiente e representam dados interligados de modo natural.

Na prática, um exemplo comum de estrutura não linear é uma **rede social**. Usuários estão conectados uns aos outros de várias formas, formando uma rede de relações sem uma única linha de conexão direta. Isso permite múltiplas associações entre os dados, como amizade entre usuários, onde cada amigo pode estar conectado a outros amigos, formando uma rede densa e interdependente.

Principais exemplos de estruturas não lineares:
- **Árvore (Tree)**: Estrutura hierárquica onde cada nó pode ter filhos, como a estrutura de um sistema de arquivos ou de uma organização.
- **Grafo (Graph)**: Composto de nós (ou vértices) conectados por arestas, é útil para representar redes sociais, rotas de transporte, sistemas de recomendação, entre outros.

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

### Array (Arranjo)

- Armazena elementos em posições contíguas na memória.
- Acesso rápido a qualquer elemento pelo índice.
- Ideal para dados com tamanho fixo ou que não exigem muitas inserções e remoções.

### Linked List (Lista Encadeada)

- Cada elemento, ou "nó", contém um valor e uma referência ao próximo nó.
- Facilita inserções e exclusões, mas o acesso a elementos específicos é mais lento.

### Stack (Pilha)

- Baseada no princípio LIFO (Last In, First Out).
- Usada em algoritmos de recursão, navegação de histórico e operações de desfazer/refazer.
- Operações principais: `push` (inserir no topo) e `pop` (remover do topo).

### Queue (Fila)

- Baseada no princípio FIFO (First In, First Out).
- Útil para sistemas de fila de impressão, processamento de tarefas e mensagens.
- Operações principais: `enqueue` (inserir no final) e `dequeue` (remover do início).

### Hash Table (Tabela de Hash)

- Estrutura que mapeia chaves a valores, usando uma função de hash.
- Permite busca, inserção e exclusão rápidas com complexidade média constante (O(1)).
- Pode ter colisões, que são resolvidas por técnicas como encadeamento ou sondagem linear.

### Tree (Árvore)

- Estrutura hierárquica com um nó raiz e filhos.
- Usada em sistemas de arquivos, estrutura de diretórios e árvores de decisão.
- Subtipos: árvores binárias, árvores AVL, árvores B.

### Graph (Grafo)

- Representa dados conectados, com vértices (nós) e arestas (conexões).
- Aplicações em redes de computadores, redes sociais e rotas de transporte.
- Tipos: grafos direcionados, grafos não-direcionados e grafos ponderados.

### Heap

- Tipo especial de árvore binária usada em algoritmos de ordenação e estruturas de prioridade.
- Um heap mínimo garante que o menor elemento esteja sempre na raiz, enquanto um heap máximo mantém o maior elemento na raiz.
- Muito usado em algoritmos de busca e ordenação, como o Heap Sort.

## Referências

Livro: <a href="https://www.amazon.com.br/Algoritmos-Teoria-Pr%C3%A1tica-Thomas-Cormen/dp/8535236996" target="_blank">Algoritmos: Teoria e Prática - Thomas Cormen 
</a>

Livro: <a href="https://www.novatec.com.br/livros/cientista-da-computacao-autodidata/">Cientista da Computação Autodidata</a> 

Livro: <a href="https://novatec.com.br/livros/entendendo-algoritmos/">Entendendo Algoritmos</a>

Livro: <a href="https://www.grupogen.com.br/livro-algoritmos-e-estruturas-de-dados-em-linguagem-c-andre-backes-editora-ltc-9788521638308">Algoritmos e Estruturas de Dados em Linguagem C</a>


Geeks for Geeks: <a href="https://www.geeksforgeeks.org/data-structures/" target="_blank">Data Structures Tutorial</a>