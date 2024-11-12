# Heap Sort

## Sumário

- [O que é o algoritmo Heap Sort?](#o-que-é-o-algoritmo-heap-sort)
- [Como Funciona?](#como-funciona)
- [Complexidade](#complexidade)
- [Referências](#referências)

## O que é o algoritmo Heap Sort?

O **HeapSort** é um algoritmo de ordenação que utiliza uma estrutura de dados especializada chamada [**Heap Binário**](#) (*Binary Heap*). Um heap binário é uma árvore binária completa em que cada nó segue uma propriedade específica de ordenação: no **Max-Heap**, o valor de cada nó é maior ou igual aos valores de seus filhos, enquanto no **Min-Heap**, o valor de cada nó é menor ou igual aos valores de seus filhos.

A ordenação com HeapSort é realizada em duas etapas principais. Primeiramente, a entrada é reorganizada para formar um heap binário, uma estrutura eficiente que garante que o maior (ou menor, dependendo da implementação) elemento esteja na raiz da árvore. Em seguida, o algoritmo extrai repetidamente o maior (ou menor) elemento, coloca-o na posição final do array e reestrutura o heap para manter a propriedade do heap.

O HeapSort é um algoritmo eficiente com **complexidade** de **O(n log n)** no pior, melhor e caso médio, o que o torna mais estável em termos de desempenho quando comparado com outros algoritmos como o QuickSort, que pode ter uma complexidade de **O(n²)** no pior caso. Embora o HeapSort não seja tão rápido na prática quanto o QuickSort devido a constantes maiores, ele possui a vantagem de não precisar de espaço extra significativo, já que é um algoritmo **in-place** (não requer memória adicional além da entrada).

Em termos de estabilidade, o HeapSort não é considerado estável, ou seja, ele pode alterar a ordem relativa de elementos com chaves iguais, o que pode ser uma limitação em certos cenários. No entanto, sua **garantia de complexidade** e **uso eficiente de memória** o tornam uma escolha sólida para muitas aplicações.

## Como Funciona?

Primeiro, identificamos o caso base, onde o array vazio ou o array com um elemento é considerado já ordenado.

### 1 - Divisão:

- O algoritmo Heap Sort utiliza uma estrutura de dados chamada **heap** (em português, "montículo"). A ideia principal é transformar o array em uma **árvore binária completa** que satisfaz a propriedade de heap, ou seja, para um **heap máximo**, cada nó pai deve ser maior ou igual aos seus filhos.

- Inicialmente, o algoritmo converte o array em um **heap máximo**. No exemplo abaixo, vamos supor que o array seja:

  ```python
  [33, 15, 10, 20, 5, 8]
  ```

  Agora, aplicamos a transformação para um **heap máximo**, garantindo que os maiores elementos estejam no topo:

  ```python
  # Após a construção do heap máximo:
  [33, 20, 10, 15, 5, 8]
  ```

  Aqui, o maior elemento, 33, está na raiz da árvore (posição 0), e todos os filhos de cada nó respeitam a propriedade de heap.

### 2 - Troca e Redefinição do Heap:

- O próximo passo é **trocar** o primeiro elemento (o maior) com o último elemento do array. Isso é feito porque queremos colocar o maior elemento no final do array, onde ele já está em sua posição correta.

  ```python
  # Troca o maior elemento com o último:
  [8, 20, 10, 15, 5, 33]
  ```

- Agora, o array precisa ser "reformado" para que a propriedade de heap ainda seja válida, mas desconsiderando o último elemento (que já está ordenado).

  Para isso, aplicamos a operação de **heapify** (ou reorganização) no array que restou, isto é, transformamos novamente o array restante em um heap máximo.

  ```python
  # Após o heapify:
  [20, 15, 10, 8, 5]
  ```

### 3 - Repetição:

- Agora, repetimos o processo. Trocamos o primeiro elemento com o penúltimo, e novamente aplicamos o **heapify** no array restante. Com isso, a cada iteração, o maior elemento "sobe" para a posição correta, e o processo continua até o array estar totalmente ordenado.

  - Troca o maior (20) com o penúltimo (5):

    ```python
    [5, 15, 10, 8, 20]
    ```

  - Aplica o heapify novamente:

    ```python
    [15, 8, 10, 5]
    ```

  - Troca o maior (15) com o quarto elemento (5):

    ```python
    [5, 8, 10, 15]
    ```

  - Aplica o heapify novamente:

    ```python
    [10, 8, 5]
    ```

  - Troca o maior (10) com o terceiro elemento (5):

    ```python
    [5, 8, 10]
    ```

  - Aplica o heapify novamente:

    ```python
    [8, 5]
    ```

  - Troca o maior (8) com o segundo elemento (5):

    ```python
    [5, 8]
    ```

  - Finalmente, o array está ordenado:

    ```python
    [5, 8, 10, 15, 20, 33]
    ```

### 4 - Combinação:

- Ao final, todos os elementos são organizados de forma crescente. O processo de troca e heapify garante que, a cada iteração, o maior elemento vá para a posição correta no array, até que o array esteja completamente ordenado.

> Agora que o algoritmo concluiu todas as trocas e reorganizações, você tem uma lista única e ordenada.


## Complexidade

## Referências