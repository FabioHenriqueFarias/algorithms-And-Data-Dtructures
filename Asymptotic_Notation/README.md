# Notação Assintótica

## Sumário

- [Medindo o Desempenho de Algoritmos](#medindo-o-desempenho-de-algoritmos)
- [O que é a Notação Assintótica?](#o-que-é-a-notação-assintótica)

## Medindo o Desempenho de Algoritmos

Para entender quanto tempo um algoritmo leva para ser executado, precisamos levar em conta alguns fatores importantes. Se olharmos apenas para o **tempo de execução real**, ele pode variar bastante, dependendo da velocidade do computador, da linguagem de programação usada e até do compilador, que traduz o código para uma linguagem que o computador entende. Além disso, o desempenho pode ser influenciado pela forma como o algoritmo foi implementado e pelas condições em que ele roda.

Uma abordagem mais eficaz para medir o desempenho de um algoritmo é observar o tamanho da entrada e analisar como o tempo de execução cresce à medida que essa entrada aumenta. Isso faz muito mais sentido, certo? Assim, nos livramos de fatores externos que podem distorcer o tempo de execução. É como avaliar um livro pela história e não pelo tipo de fonte usada na impressão.

Felizmente, existe uma notação matemática que nos ajuda a descrever o tempo de execução de um algoritmo de forma clara e objetiva. Ela considera o número de operações básicas ou "passos" que o algoritmo realiza. Em vez de nos preocuparmos com o tempo exato, somamos o tempo de execução de cada instrução realizada, o que nos dá uma boa ideia de como o algoritmo se comporta à medida que a entrada cresce.

## O que é a Notação Assintótica?


**Notação Assintótica** é uma forma de descrever a complexidade de tempo ou espaço de um algoritmo com base no tamanho de sua entrada.

> A [Análise Assintótica](https://en.wikipedia.org/wiki/Asymptotic_analysis) refere-se à abordagem que lida com esses aspectos na análise de algoritmos. Nela, avaliamos o desempenho de um algoritmo em função do tamanho da entrada, sem medir o tempo de execução real. O foco é entender como o tempo (ou espaço) consumido por um algoritmo aumenta à medida que o tamanho da entrada cresce.

Essa notação é utilizada para caracterizar a complexidade dos algoritmos e para descrever seu desempenho à medida que o tamanho da entrada aumenta.