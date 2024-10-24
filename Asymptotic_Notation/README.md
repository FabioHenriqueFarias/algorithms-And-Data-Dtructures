# Notação Assintótica

## Sumário

- [Medindo o Desempenho de Algoritmos](#medindo-o-desempenho-de-algoritmos)
- [O que é a Notação Assintótica?](#o-que-é-a-notação-assintótica)
    - [Tipos de Medição de Desempenho de Algoritmos](#tipos-de-medição-de-desempenho-de-algoritmos)
    - [Notações Assintóticas](#notações-assintóticas)
    - [Classificações de Desempenho](#classificações-de-desempenho  )

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

Para ilustrar, imagine que você está organizando um grande evento. Se o número de convidados for pequeno, detalhes como a rapidez em arrumar as mesas são importantes. Mas, conforme o número de convidados aumenta, aspectos mais amplos, como a logística da comida ou a organização dos assentos, se tornam as principais preocupações. O mesmo acontece na notação assintótica: quando lidamos com grandes entradas de dados, os detalhes menores do algoritmo se tornam irrelevantes, e focamos nos fatores que mais impactam o tempo de execução.

### Tipos de Medição de Desempenho de Algoritmos

Ao analisar um algoritmo, medimos seu desempenho de três formas:

- **Pior caso**: Pense no pior cenário possível, onde tudo dá errado. É como prever o tempo que você levaria para servir o último convidado, caso houvesse filas gigantescas e atrasos inesperados. No mundo dos algoritmos, o **Big O** nos ajuda a prever esse comportamento, mostrando o limite superior de tempo de execução.

- **Caso médio**: Este é o cenário mais comum, quando tudo acontece conforme esperado. Usamos o **Big Θ (Theta)** para descrever o tempo típico que o algoritmo levará. É como calcular quanto tempo normalmente você levaria para organizar o evento, assumindo que nem tudo corre perfeitamente, mas também não há grandes imprevistos.

- **Melhor caso**: Aqui, imaginamos que tudo funciona a favor, sem interrupções. No caso do evento, seria como calcular o tempo de preparação se todos os convidados chegassem pontualmente e tudo fosse executado sem falhas. Nos algoritmos, o **Big Ω (Omega)** nos ajuda a identificar o tempo mínimo que um algoritmo levará para completar sua tarefa.

### Notações Assintóticas

Essas três notações — **Big O**, **Big Θ** e **Big Ω** — são usadas para descrever como um algoritmo se comporta em diferentes situações. É como ter três relógios diferentes para medir o tempo: um para o cenário mais pessimista, outro para o mais comum, e um terceiro para o cenário ideal.

1. **Big O**: Representa o **pior caso**, onde o algoritmo precisa realizar o maior número possível de operações.

2. **Big Θ** (Theta): Representa o **caso médio**, descrevendo o desempenho que o algoritmo terá na maior parte das vezes.

3. **Big Ω** (Omega): Representa o **melhor caso**, indicando o tempo mínimo que o algoritmo pode levar.

### Classificações de Desempenho

Cada algoritmo pode ser classificado com base em como o tempo de execução cresce à medida que o tamanho da entrada aumenta. Aqui estão as classificações, explicadas com uma analogia do mundo real:

- **Tempo constante**: **O(1)** 
- **Tempo logarítmico**: **O(log n)**
- **Tempo linear**: **O(n)**
- **Tempo log-linear**: **O(n log n)**
- **Tempo quadrático**: **O(n²)**
- **Tempo cúbico**: **O(n³)** 
- **Tempo exponencial**: **O(2ⁿ)** ou **O(cⁿ)**
- **Tempo fatorial** (**O(n!)**)

A **notação assintótica** é uma ferramenta essencial para analisar o desempenho de algoritmos, pois nos permite avaliar como eles se comportam à medida que o tamanho da entrada aumenta. Ignorando detalhes menores que se tornam irrelevantes em grandes volumes de dados, focamos nas operações que mais influenciam o tempo de execução. Para medir esse desempenho, utilizamos três formas principais de análise: o **pior caso**, que nos dá o limite superior do tempo de execução usando a notação **Big O**; o **caso médio**, representado pela notação **Big Θ**, que descreve o comportamento típico; e o **melhor caso**, medido pela notação **Big Ω**, que indica o tempo mínimo de execução. Esses tipos de medição são fundamentais para entender como o algoritmo se comporta em diferentes cenários, e nos ajudam a classificar seu desempenho de acordo com o crescimento do tempo de execução — desde **tempo constante** (O(1)) até **tempo fatorial** (O(n!)). Dessa forma, podemos prever e otimizar a eficiência dos algoritmos, escolhendo a melhor abordagem conforme a complexidade do problema aumenta.
