# Quick Sort

## Sumário

- [O que é o algoritmo Quick Sort?](#o-que-é-o-algoritmo-quick-sort)
- [Como Funciona?](#como-funciona)
- [Complexidade](#complexidade)
  - [Complexidade do Quick Sort](#complexidade-do-merge-sort)
- [Implementações](#implementações)
- [Referências](#referências)

## O que é o algoritmo Quick Sort?

O QuickSort é um algoritmo de ordenação recursivo baseado no paradigma de **Divisão e Conquista**. Sua abordagem consiste em selecionar um pivô e reorganizar o array de forma que todos os elementos menores que o pivô fiquem à esquerda e todos os elementos maiores fiquem à direita. Este processo é chamado de *particionamento*. 

Após o particionamento, o QuickSort é aplicado recursivamente às sublistas dos elementos à esquerda e à direita do pivô. Essas sublistas são ordenadas independentemente. Como o processo é recursivo, eventualmente todas as sublistas serão reduzidas a um único elemento ou ficarão vazias. Nesse ponto, o array estará completamente ordenado.

O QuickSort é amplamente utilizado devido à sua baixa **complexidade**. Apesar de pertencer à mesma classe de complexidade do MergeSort e do HeapSort, o QuickSort é, na prática, o mais rápido entre eles, pois suas constantes são menores. No entanto, é importante destacar que, em seu pior caso, o QuickSort tem complexidade **(O(n^2))**, enquanto o MergeSort e o HeapSort garantem **(O(n log n))** para todos os casos.

## Como Funciona?

## Complexidade

### Complexidade do Quick Sort

## Implementações

## Referências
