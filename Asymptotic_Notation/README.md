# Notação Assintótica

## Sumário

- [Medindo o Desempenho de Algoritmos](#medindo-o-desempenho-de-algoritmos)
- [O que é a Notação Assintótica?](#o-que-é-a-notação-assintótica)
    - [Tipos de Medição de Desempenho de Algoritmos](#tipos-de-medição-de-desempenho-de-algoritmos)
    - [Notações Assintóticas](#notações-assintóticas)
    - [Classificações de Desempenho](#classificações-de-desempenho)
        - [Tempo constante: O(1)](#tempo-constante-o1)
        - [Tempo logarítmico: O(log n)](#tempo-logarítmico-olog-n)
        - [Tempo log-linear: O(n log n)](#tempo-log-linear-on-log-n)
        - [Tempo quadrático: O(n²)](#tempo-quadrático-on)
        - [Tempo exponencial: O(2ⁿ) ou O(cⁿ)](#tempo-exponencial-o2ⁿ-ou-ocⁿ)
        - [Tempo fatorial O(n!)](#tempo-fatorial-on)

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

#### **Tempo constante**: **O(1)** 

O tempo constante O(1) é extremamente valorizado pelos programadores, pois indica que o tempo de execução de um algoritmo permanece constante, independentemente do tamanho da entrada. Uma boa analogia para O(1) é acessar um valor em um array utilizando seu índice: não importa quantos elementos existam no array, a operação de recuperar um item específico pela sua posição leva sempre o mesmo tempo. 

#### **Tempo logarítmico**: **O(log n)**

O tempo logarítmico é a segunda complexidade de tempo mais eficiente. Um algoritmo leva tempo logarítmico quando seu tempo de execução aumenta proporcionalmente ao logaritmo do tamanho da entrada.

Por exemplo, imagine que você tenha uma lista de 1.000 pessoas e queira encontrar uma pessoa específica. Em um tempo logarítmico, o número de comparações necessárias cresce muito lentamente à medida que a lista aumenta. Para calcular o número de verificações necessárias, usamos a fórmula do logaritmo na base 2:

```text
    k = log₂(n)
```

onde ***\(n\)*** é o tamanho da lista.
1. Para uma lista de 1.000 nomes:
```text
    k = log₂(1000) ≈ 9,97
```
Isso significa que, em média, seriam necessárias cerca de 10 comparações para encontrar a pessoa desejada.

2. Agora, se aumentarmos o tamanho da lista para 1.000.000:
```text
    k = log₂(1.000.000) ≈ 19,93
```
Assim, mesmo com 1.000.000 de pessoas, o número de comparações necessárias seria ainda em torno de 20.

#### **Tempo Linear**: **O(n)**

Um algoritmo é considerado de tempo linear quando seu tempo de execução aumenta proporcionalmente ao tamanho da entrada. Isso significa que, se você dobrar a quantidade de dados, o tempo de execução também dobrará.

Por exemplo, imagine que você tenha uma lista de 1.000 produtos em um estoque e queira encontrar o preço de um produto específico. Em um algoritmo de tempo linear, você teria que verificar cada produto um por um até encontrar o desejado. O número de comparações necessárias é diretamente proporcional ao tamanho da lista.

1. Para uma lista de 1.000 produtos:
   - No pior cenário, você pode ter que verificar todos os 1.000 produtos. Portanto, o tempo de execução seria O(1.000), ou seja, 1.000 operações.

2. Agora, se aumentarmos a lista para 10.000 produtos:
   - Da mesma forma, no pior cenário, você pode precisar verificar todos os 10.000 produtos, resultando em O(10.000) operações.

Isso mostra como algoritmos de tempo linear são simples, mas podem se tornar ineficientes à medida que o tamanho da entrada aumenta, exigindo um número proporcional de operações.

#### **Tempo log-linear**: **O(n log n)**

Um algoritmo é considerado de tempo log-linear quando seu tempo de execução aumenta de forma proporcional ao tamanho da entrada, multiplicado pelo logaritmo desse tamanho. Isso significa que, embora o tempo de execução cresça rapidamente, ele não é tão rápido quanto o tempo quadrático, o que o torna mais eficiente para grandes volumes de dados.

Um exemplo comum de algoritmo de tempo log-linear é o **Merge Sort**, um método eficiente de ordenação. Para entender melhor, considere o seguinte cenário:

Imagine que você tenha uma lista de 1.000 números que deseja ordenar. O Merge Sort divide a lista em duas metades, ordena cada metade recursivamente e, em seguida, combina as duas metades ordenadas. Esse processo de divisão e combinação é o que leva ao tempo log-linear.

1. **Divisão da Lista**:
   - A lista de 1.000 números é dividida repetidamente até que cada sublista contenha apenas um número. Esse processo de divisão leva log₂(1.000) operações, que é aproximadamente 10.

2. **Combinação das Listas**:
   - Após a divisão, cada uma das sublistas é combinada de forma ordenada. Este processo de combinação leva O(n) operações, onde n é o número total de elementos na lista (1.000 neste caso).

Portanto, o tempo total de execução para o Merge Sort se torna O(n log n), que pode ser detalhado assim:
- Para uma lista de 1.000 números: 
  - O número total de operações seria O(1.000 × 10), ou seja, 10.000 operações.

3. **Aumento do Tamanho da Entrada**:
   - Se aumentarmos a lista para 10.000 números, o tempo de execução será O(10.000 × log₂(10.000)). O log₂(10.000) é aproximadamente 14, resultando em aproximadamente 140.000 operações.

Isso ilustra como algoritmos de tempo log-linear, como o Merge Sort, conseguem lidar com grandes volumes de dados de maneira mais eficiente em comparação com algoritmos de tempo quadrático, como o Bubble Sort, que teria um tempo de execução O(n²). O tempo log-linear é especialmente útil em situações que envolvem ordenação ou busca em grandes conjuntos de dados.

#### **Tempo quadrático**: **O(n²)**

Um algoritmo é considerado de tempo quadrático quando seu tempo de execução aumenta proporcionalmente ao quadrado do tamanho da entrada. Isso significa que, à medida que o tamanho da entrada cresce, o tempo de execução pode aumentar rapidamente, tornando esses algoritmos menos eficientes para grandes conjuntos de dados.

Um exemplo clássico de algoritmo de tempo quadrático é o **Bubble Sort**, um método simples de ordenação. Para ilustrar melhor, considere o seguinte cenário:

Imagine que você tenha uma lista de 1.000 números que deseja ordenar. O Bubble Sort funciona comparando pares de elementos adjacentes e trocando-os se estiverem na ordem errada. Este processo é repetido até que a lista esteja completamente ordenada.

1. **Comparações e Trocas**:
   - Para uma lista de 1.000 números, o algoritmo fará comparações e possíveis trocas em várias passagens. Na primeira passagem, ele realizará 999 comparações (entre os primeiros e os últimos números). Na segunda passagem, fará 998 comparações, e assim por diante, até a última passagem, que terá apenas uma comparação.

2. **Total de Comparações**:
   - O número total de comparações pode ser calculado como a soma dos primeiros 999 números, que é aproximadamente *\( n (n-1)/2 \)*. Para n = 1.000, isso resulta em cerca de 500.000 comparações.

3. **Aumento do Tamanho da Entrada**:
   - Se aumentarmos a lista para 10.000 números, o tempo de execução será O(10.000²), resultando em 100.000.000 operações. Isso ilustra como a eficiência do algoritmo diminui drasticamente à medida que o tamanho da entrada aumenta.

Portanto, o tempo total de execução para o Bubble Sort em uma lista de 1.000 números é O(1.000²), que pode ser detalhado assim:
   -    Para uma lista de 1.000 números: 

         - O número total de operações seria O(1.000 × 1.000), ou seja, 1.000.000 operações.

<br>

Esse exemplo demonstra como algoritmos de tempo quadrático, como o Bubble Sort, são ineficientes para grandes volumes de dados, especialmente em comparação com algoritmos de tempo log-linear, como o Merge Sort, que podem lidar melhor com o aumento do tamanho da entrada. O tempo quadrático é geralmente aceitável apenas para listas pequenas, pois seu desempenho se deteriora rapidamente com o crescimento da entrada.

#### **Tempo cúbico**: **O(n³)**

Um algoritmo é considerado de tempo cúbico quando seu tempo de execução aumenta proporcionalmente ao cubo do tamanho da entrada. Isso significa que, à medida que o tamanho da entrada cresce, o tempo de execução aumenta de forma ainda mais drástica do que nos algoritmos de tempo quadrático, tornando-os ineficientes para conjuntos de dados maiores.

Um exemplo clássico de algoritmo de tempo cúbico é o **algoritmo de multiplicação de matrizes**. Para ilustrar melhor, considere o seguinte cenário:

Imagine que você tenha duas matrizes quadradas de tamanho \( n \times n \) que deseja multiplicar. O processo de multiplicação de matrizes envolve calcular cada elemento da matriz resultante, que é feito por meio da soma dos produtos dos elementos correspondentes das linhas da primeira matriz e das colunas da segunda.

1. **Operações para Cada Elemento**:
   - Para calcular um único elemento da matriz resultante, é necessário realizar \( n \) multiplicações e \( n-1 \) adições. Como há \( n^2 \) elementos na matriz resultante, o número total de operações para a multiplicação completa será proporcional a \( n^3 \).

2. **Total de Operações**:
   - O número total de operações pode ser aproximado como \( O(n^3) \). Para uma matriz de 10 elementos (ou seja, \( n = 10 \)), teremos aproximadamente \( 10^3 = 1.000 \) operações. Para matrizes maiores, como \( n = 100 \), isso resulta em \( 100^3 = 1.000.000 \) operações.

3. **Aumento do Tamanho da Entrada**:
   - Se aumentarmos o tamanho das matrizes para \( n = 1.000 \), o tempo de execução se torna O(1.000³), resultando em 1.000.000.000.000 operações. Essa explosão no número de operações ilustra claramente a ineficiência dos algoritmos de tempo cúbico para grandes entradas.

Portanto, o tempo total de execução para a multiplicação de matrizes em matrizes de \( 10 × 10 \) é O(10³), que pode ser detalhado assim:
   - Para matrizes de \( 10 × 10 \):

      - O número total de operações seria O(10 × 10 × 10), ou seja, 1.000 operações.

<br>

Esse exemplo demonstra como algoritmos de tempo cúbico, como o algoritmo de multiplicação de matrizes, são altamente ineficientes para grandes volumes de dados. Para conjuntos de dados maiores, algoritmos mais eficientes, como os que utilizam técnicas de multiplicação de matrizes mais avançadas (como Strassen), são preferidos, já que esses conseguem reduzir a complexidade para algo mais próximo de \( O(n^{2.81}) \). O tempo cúbico, assim como o tempo quadrático, é geralmente aceitável apenas para entradas pequenas, pois seu desempenho se deteriora rapidamente com o aumento do tamanho da entrada.

#### **Tempo exponencial**: **O(2ⁿ)** ou **O(cⁿ)**

Um algoritmo é considerado de tempo exponencial quando seu tempo de execução aumenta proporcionalmente a uma base elevada ao tamanho da entrada. Isso significa que, conforme o tamanho da entrada cresce, o tempo de execução cresce de forma extremamente rápida, tornando esses algoritmos inviáveis para conjuntos de dados relativamente pequenos.

Um exemplo clássico de algoritmo de tempo exponencial é o **algoritmo de resolução do problema da mochila** (0/1 Knapsack Problem) ou o **algoritmo para a sequência de Fibonacci** na sua forma recursiva. Para ilustrar melhor, considere o seguinte cenário:

Imagine que você deseja calcular o enésimo número de Fibonacci usando uma abordagem recursiva simples. O número de Fibonacci é definido como:

- \( F(0) = 0 \)
- \( F(1) = 1 \)
- \( F(n) = F(n-1) + F(n-2) \) para \( n >=  2 \)

1. **Chamadas Recursivas**:
   - Para calcular \( F(n) \), o algoritmo faz chamadas recursivas para \( F(n-1) \) e \( F(n-2) \). Isso resulta em uma árvore de chamadas que cresce exponencialmente, com aproximadamente \( 2^n \) chamadas recursivas para calcular \( F(n) \).

2. **Total de Operações**:
   - O número total de operações pode ser aproximado como \( O(2^n) \). Por exemplo, para calcular \( F(10) \), o algoritmo pode realizar até \( 2^{10} = 1.024 \) operações. Para valores maiores, como \( n = 20 \), o número de operações salta para \( 2^{20} = 1.048.576 \).

3. **Aumento do Tamanho da Entrada**:
   - Se aumentarmos \( n \) para 30, o tempo de execução se torna O(2³⁰), resultando em mais de 1 bilhão de operações (aproximadamente 1.073.741.824). Essa explosão no número de operações destaca a ineficiência dos algoritmos de tempo exponencial, que rapidamente se tornam impraticáveis para entradas moderadas.

Portanto, o tempo total de execução para calcular \( F(10) \) é O(2¹⁰), que pode ser detalhado assim:
   - Para calcular \( F(10) \):

      - O número total de operações seria O(2 × 2 × 2 × ... (10 vezes)), ou seja, 1.024 operações.

<br>

Esse exemplo demonstra como algoritmos de tempo exponencial, como o algoritmo recursivo para a sequência de Fibonacci, são extremamente ineficientes mesmo para entradas relativamente pequenas. Para resolver problemas de forma mais eficaz, é preferível utilizar abordagens que aplicam memoização ou programação dinâmica, que podem reduzir a complexidade para O(n), tornando o cálculo viável mesmo para entradas maiores. O tempo exponencial é geralmente aceitável apenas para problemas de pequeno a médio porte, pois seu desempenho se deteriora rapidamente com o aumento do tamanho da entrada.

#### **Tempo fatorial**: **O(n!)**

Um algoritmo é considerado de tempo fatorial quando seu tempo de execução aumenta de acordo com o fatorial do tamanho da entrada. Isso significa que, à medida que o tamanho da entrada cresce, o tempo de execução cresce de forma extremamente rápida, tornando esses algoritmos impraticáveis mesmo para entradas de tamanho moderado.

Um exemplo clássico de algoritmo de tempo fatorial é o **problema do caixeiro viajante** (Traveling Salesman Problem), onde o objetivo é encontrar o caminho mais curto que visita um conjunto de cidades e retorna à cidade de origem. Para ilustrar melhor, considere o seguinte cenário:

Imagine que você tem um conjunto de \( n \) cidades e deseja calcular todas as possíveis rotas que o caixeiro viajante pode fazer. A abordagem ingênua envolve gerar todas as permutações das cidades, o que resulta em uma complexidade de tempo fatorial.

1. **Permutações**:
   - Para \( n \) cidades, o número total de rotas possíveis é dado por \( n! \) (n fatorial), que representa todas as maneiras de arranjar \( n \) elementos. Por exemplo, se houver 3 cidades, o número total de permutações é \( 3! = 6 \).

2. **Total de Operações**:
   - O número total de operações requeridas para calcular todas as rotas e determinar o caminho mais curto pode ser aproximadamente \( O(n!) \). Para \( n = 4 \), existem \( 4! = 24 \) rotas possíveis. Para \( n = 5 \), o número de rotas aumenta para \( 5! = 120 \) e, para \( n = 6 \), salta para \( 6! = 720 \).

3. **Aumento do Tamanho da Entrada**:
   - Se aumentarmos \( n \) para 10, o número de rotas se torna \( 10! = 3.628.800 \). Para valores ainda maiores, como \( n = 20 \), o número de rotas cresce para \( 20! \), que é aproximadamente \( 2,43 \times 10^{18} \). Essa explosão no número de operações demonstra a ineficiência dos algoritmos de tempo fatorial, que rapidamente se tornam impraticáveis para entradas de tamanho moderado.

Portanto, o tempo total de execução para calcular todas as rotas de um caixeiro viajante com 4 cidades é \( O(4!) \), que pode ser detalhado assim:
- Para calcular todas as rotas possíveis:

   - O número total de operações seria \( O(4 × 3 × 2 × 1) \), resultando em 24 operações.

<br>

Esse exemplo demonstra como algoritmos de tempo fatorial, como o algoritmo para o problema do caixeiro viajante, são extremamente ineficientes mesmo para entradas relativamente pequenas. Para resolver problemas de forma mais eficaz, é preferível utilizar abordagens como algoritmos aproximativos ou heurísticas, que podem oferecer soluções viáveis sem a necessidade de explorar todas as permutações. O tempo fatorial é geralmente aceitável apenas para problemas de pequeno porte, pois seu desempenho se deteriora rapidamente com o aumento do tamanho da entrada.


A **notação assintótica** é uma ferramenta para analisar o desempenho de algoritmos, ajudando-nos a entender como eles se comportam à medida que o tamanho da entrada aumenta. Em vez de nos perdermos em detalhes que se tornam irrelevantes quando lidamos com grandes volumes de dados, focamos nas operações que mais impactam o tempo de execução. Para isso, usamos três formas principais de análise: 

- O **pior caso**, que nos dá um limite superior do tempo de execução, utilizando a notação **Big O**.
- O **caso médio**, representado pela notação **Big Θ**, que nos mostra o comportamento típico do algoritmo.
- O **melhor caso**, medido pela notação **Big Ω**, que indica o tempo mínimo de execução.

Essas medições são importantes para entendermos como um algoritmo pode se comportar em diferentes situações e nos ajudam a classificar seu desempenho conforme o tempo de execução cresce — desde **tempo constante** (O(1)) até **tempo fatorial** (O(n!)). Assim, conseguimos prever e otimizar a eficiência dos algoritmos, escolhendo a melhor abordagem à medida que a complexidade do problema aumenta.