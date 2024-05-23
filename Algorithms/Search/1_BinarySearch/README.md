# Binary Search

## Sumário

- [O que é](#o-que-é)
- [Como Funciona?](#como-funciona)
    - [1° Passo:](#1°-passo)
    - [2° Passo:](#2°-passo)
    - [3° Passo:](#3°-passo)
    - [4° Passo:](#4°-passo)
- [Complexidade](#complexidade)
- [Referência](#referências)

## O que é?

A Pesquisa Binária, também conhecida como busca binária, é um algoritmo eficiente utilizado para encontrar um elemento específico em um conjunto de dados ordenados. Ao contrário da busca sequencial, que examina os itens um por um, a busca binária adota o paradigma de Divisão e Conquista, dividindo repetidamente o espaço de busca pela metade e reduzindo drasticamente o número de elementos a serem considerados.

Essa técnica só pode ser aplicada em conjuntos de dados que estejam previamente classificados, já que depende da capacidade de dividir o conjunto em subconjuntos ordenados para funcionar corretamente.

## Como Funciona?

A pesquisa binária compara o elemento do meio da lista com o valor procurado e ajusta os limites da pesquisa com base nessa comparação.

Inicialmente, o algoritmo verifica o elemento do meio da lista e o compara com o valor desejado. Se o valor desejado for menor que o elemento do meio, o algoritmo redefine o limite superior como a posição atual do meio menos um e mantém o limite inferior. Se for maior, o limite inferior é atualizado para a posição do meio mais um, e o limite superior permanece o mesmo.

Esses passos são repetidos até que o valor desejado seja encontrado ou até que os limites se sobreponham, indicando que o valor não está presente na lista. Se o valor for encontrado, a posição correspondente na lista é retornada; caso contrário, o algoritmo indica que o valor não está presente.

Consideremos um array com os seguintes dados: `[3, 4, 5, 6, 7, 8, 9]`, onde os elementos estão previamente ordenados.

<img src="../assents/01.png" alt="Matrix Inicial" style="display: block; margin-left: auto; margin-right: auto;">

<br>

O número que estamos procurando é número `4`.

### 1° Passo:

Inicialmente, são definidas duas variáveis: `low` para representar o limite inferior e `high` para representar o limite superior. Estas variáveis vão ajudar a delimitar a área de busca durante o processo de pesquisa binária.

<img src="../assents/02.png" alt="Configurando os Ponteiros" style="display: block; margin-left: auto; margin-right: auto;">

### 2° Passo:

Agora, é necessário calcular o índice do elemento que está no meio do array, utilizando a fórmula `(low + high) / 2`. Neste caso, o elemento na posição 4, com o valor `6`, será o elemento do meio. Esse valor é armazenado na variável `mid`.

<img src="../assents/03.png" alt="Elemento intermediário" style="display: block; margin-left: auto; margin-right: auto;">

<br>

Depois de calcular o índice do elemento do meio, podemos compará-lo com o valor que estamos procurando, representado por x.

#### Se (x == mid) 

Isso significa que encontramos o valor desejado. Portanto, retornamos mid, que é a posição do elemento encontrado na lista.

#### Se (x > mid) 

Isso indica que o valor que procuramos é maior que o elemento do meio. Nesse caso, precisamos ajustar o limite inferior para mid + 1, para continuar a busca na metade superior da lista.

#### Se (x < mid) 

Isso indica que o valor que procuramos é menor que o elemento do meio. Aqui, ajustamos o limite superior para mid - 1, para continuar a busca na metade inferior da lista.

### 3° Passo:

Como estamos procurando pelo valor `4` e constatamos que ele é menor que o elemento do meio, que é `6`, ajustamos o limite superior, representado pela variável `high`, como `high = mid - 1`. 

### 4° Passo:

Calculamos o índice do elemento que está no meio do array novamente, utilizando a fórmula `(low + high) / 2`.

Neste caso, o elemento na posição 2, com o valor `4`, será o elemento do meio. Esse valor é armazenado na variável `mid`.

<img src="../assents/04.png" alt="Encontrando o elemento intermediário" style="display: block; margin-left: auto; margin-right: auto;">

<br>

Podemos então comparar novamente o elemento do meio com o valor que estamos procurando, representado por `x`.

Como `x == mid`, isso significa que encontramos o valor desejado. Portanto, retornamos a posição de `mid`.

## Complexidade?

A  <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Asymptotic_Notation">Complexidade Assintótica</a>  deste algoritmo é de `O(log n)` no pior caso, tornando-o uma excelente opção para algoritmos de pesquisa. Até mesmo ordenar um conjunto de dados para utilizar a pesquisa binária pode ser uma escolha vantajosa.

Uma característica crucial é sua eficiência constante, `O(1)`, no melhor caso, quando o elemento está exatamente no meio do conjunto. A Binary Search demonstra uma complexidade de tempo mínima, `Ω(O(1))`, indicando seu desempenho ótimo em cenários ideais. Além disso, no caso médio, sua complexidade é `Θ(O(log n))`, representando uma eficiência consistente em diversas situações.

É importante observar que a Binary Search possui uma cota superior `O(n * log n)`, o que significa que mesmo em cenários menos ideais, seu desempenho ainda é muito bom em comparação com algoritmos de busca menos eficientes.

## Referências

Livro: <a href="https://novatec.com.br/livros/entendendo-algoritmos/">Entendendo Algoritmos</a> 

Livro: <a href="https://www.novatec.com.br/livros/cientista-da-computacao-autodidata/">Cientista da Computação Autodidata</a> <br>

Livro: <a href="https://www.grupogen.com.br/e-book-algoritmos-thomas-cormen-9788595159914">Algoritmos: Teoria e Prática</a> 

Programiz: <a href="https://www.programiz.com/dsa/binary-search">Binary Search</a> 
