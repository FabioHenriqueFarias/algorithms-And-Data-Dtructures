# Notação Assintótica

## Sumário

- [Medindo o Desempenho de Algoritmos](#medindo-o-desempenho-de-algoritmos)
- [O que é a Notação Assintótica?](#o-que-é-a-notação-assintótica)

## Medindo o Desempenho de Algoritmos

Para entender quanto tempo um algoritmo leva para ser executado, precisamos levar em conta alguns fatores importantes. Se olharmos apenas para o **tempo de execução real**, ele pode variar bastante, dependendo da velocidade do computador, da linguagem de programação usada e até do compilador, que traduz o código para uma linguagem que o computador entende. Além disso, o desempenho pode ser influenciado pela forma como o algoritmo foi implementado e pelas condições em que ele roda.

Então, uma abordagem mais eficaz para medir o desempenho de um algoritmo é observar o tamanho da entrada e analisar como o tempo de execução cresce à medida que essa entrada aumenta. Isso faz muito mais sentido, certo? Assim, nos livramos de fatores externos que podem distorcer o tempo de execução. É como avaliar um livro pela história e não pelo tipo de fonte usada na impressão.

Felizmente, existe uma notação matemática que nos ajuda a descrever o tempo de execução de um algoritmo de maneira clara e objetiva, focando no número de operações básicas ou "passos" que ele executa. Em vez de nos preocuparmos com o tempo exato de cada operação, somamos o tempo de execução de todas as instruções, o que nos dá uma boa ideia de como o algoritmo se comporta à medida que o tamanho da entrada aumenta.

No entanto, o número de "passos" que um algoritmo realiza pode levar a funções matemáticas bastante complexas, se considerarmos cada etapa em detalhes. Para simplificar essa análise, focamos apenas no termo de maior grau da função que descreve o tempo de execução, já que ele domina o comportamento do algoritmo à medida que a entrada cresce. Isso nos permite avaliar a eficiência de maneira prática e intuitiva, ignorando os termos menores que têm pouco impacto em entradas grandes.

Por exemplo, considere a função que representa a quantidade de passos de um algoritmo:

```text
f(x) = x² + 3x + 2
```
Nessa função, temos três termos que descrevem diferentes aspectos do comportamento do algoritmo: o termo quadrático, o termo linear e a constante. À medida que x (o tamanho da entrada) cresce, o termo x² se torna o mais relevante, pois ele cresce muito mais rápido que os outros dois.

Com a ***notação assintótica***, simplificamos a função descartando os termos de menor impacto, como 3x e 2, e nos concentramos apenas no termo de maior crescimento: x². Isso nos permite estimar o comportamento do algoritmo em larga escala, e concluímos que a complexidade desse algoritmo é O(x²).

Essa simplificação é essencial na análise de algoritmos, porque nos permite ver além de um único caso e entender como o algoritmo se comporta à medida que lidamos com entradas maiores. Em outras palavras, em vez de nos prender a números específicos, conseguimos ter uma visão mais clara do desempenho geral do algoritmo e como ele escala. Isso é especialmente útil ao compararmos diferentes algoritmos e decidirmos qual deles é o mais eficiente para resolver um problema.



## O que é a Notação Assintótica?

**Notação Assintótica** é, portanto, uma forma de descrever a complexidade de tempo ou espaço de um algoritmo com base no tamanho de sua entrada. Ela nos permite focar nos aspectos mais relevantes do desempenho, ignorando detalhes que se tornam irrelevantes em entradas grandes.


> A [Análise Assintótica](https://en.wikipedia.org/wiki/Asymptotic_analysis) refere-se à abordagem que lida com esses aspectos na análise de algoritmos. Nela, avaliamos o desempenho de um algoritmo em função do tamanho da entrada, sem medir o tempo de execução real. O foco é entender como o tempo (ou espaço) consumido por um algoritmo aumenta à medida que o tamanho da entrada cresce.

