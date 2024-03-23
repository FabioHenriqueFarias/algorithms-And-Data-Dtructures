# Algoritmos

## Sumário

- [O que é um algoritmo?](#o-que-é-um-algoritmo)
- [Análise de Algoritmos](#análise-de-algoritmos)
- [Tipos de Algoritmos:](#tipos-de-algoritmos)
  - [Algoritmos sequênciais:](#algoritmos-sequênciais)
  - [Algoritmos de Seleção:](#algoritmos-de-seleção)
  - [Algoritmos de Repetição:](#algoritmos-de-repetição)
  - [Algoritmos Recursivos](#algoritmos-recursivos)
- [Técnicas de projeto de algoritmos](#técnicas-de-projeto-de-algoritmos)
  - [Dividir para conquistar](#dividir-para-conquistar)
  - [Programação dinâmica](#programação-dinâmica)
    - [Abordagem “Top-Down”](#abordagem-top-down)
    - [Abordagem “Bottom-up”](#abordagem-bottom-up)
    - ["Top-Down" vs "Bottom-up"](#top-down-vs-bottom-up)
    - [Algoritmo guloso ou míope](#algoritmo-guloso-ou-míope)
    - [Algoritmos Backtracking](#algoritmos-backtracking)
- [Algoritmos Específicos](#algoritmos-específicos)
    - [Algoritmos de Ordenação (sorting algorithms)](#algoritmos-de-ordenação-sorting-algorithms)
    - [Algoritmo de busca (searching algorithm)](#algoritmo-de-busca-searching-algorithm)
- [Referências](#referências)



## O que é um algoritmo?
**Donald Knuth** descreve um algoritmo como um processo definido, eficaz e finito que recebe entradas e produz saídas com base nessas entradas.

`Definição` significa que as etapas são claras, concisas e inequívocas. 

`Eficácia` significa que você pode realizar cada operação com precisão para resolver o problema. 

`Finitude` significa que o algoritmo para após um número finito de etapas.

Uma adição comum a esta lista é a `correção`. Um algoritmo deve sempre produzir a mesma saída para uma determinada entrada, e essa saída deve ser a resposta correta para o problema que o algoritmo resolve.

Segue um exemplo de pseudocódigo para calcular a média:

```
    // Início do algoritmo

    // Declaração das variáveis
    real nota1, nota2, media;

    // Leitura das notas
    escreva("Digite a primeira nota: ")
    leia(nota1)
    escreva("Digite a segunda nota: ")
    leia(nota2)

    // Cálculo da média
    media := (nota1 + nota2) / 2

    // Exibição da média
    escreva("A média das notas é: ", media)

    // Fim do algoritmo
```

Este pseudocódigo demonstra um algoritmo simples para calcular a média de duas notas.

## Análise de algoritmos:
Quando se trata de determinar qual é o melhor algoritmo para resolver um problema, pode ser uma tarefa complexa. Os algoritmos são avaliados com base em diversos critérios, incluindo simplicidade, eficiência e consumo de recursos.

Embora o tempo de execução seja uma métrica comum para avaliar algoritmos, ele pode ser afetado por várias variáveis, como o poder de processamento do computador e a linguagem de programação utilizada. Portanto, o tempo de execução isoladamente pode não ser uma métrica eficaz para comparar dois algoritmos.

Uma abordagem mais objetiva é observar o número de operações ou etapas que cada algoritmo realiza para resolver o problema. Isso proporciona uma medida mais independente do ambiente de execução.

O aspecto crucial a entender sobre um algoritmo não é o número exato de passos que ele executa, mas sim uma estimativa do número de passos à medida que o tamanho do input aumenta. Conforme o input aumenta, partes da equação podem se tornar insignificantes em comparação com outras, tornando o restante da equação irrelevante

Por exemplo, considere uma função que calcula o fatorial de um número em C:

```
    int calcularFatorial(int numero) {
        int resultado = 1;
        
        for (int i = 1; i <= numero; i++) {
            resultado *= i;
        }
        
        return resultado;
    }

```

Neste caso, o número de iterações do loop (determinado pelo valor do argumento numero) tem um impacto significativo no desempenho do algoritmo. À medida que numero aumenta, o número de iterações e o tempo de execução do algoritmo também aumentam. Enquanto a atribuição da variável resultado é uma operação simples e rápida em comparação com o loop, a eficiência geral do algoritmo é fortemente influenciada pelo valor de entrada. Neste contexto, é comum usar "n" como uma variável que representa o valor de entrada, e conforme "n" aumenta, a complexidade do algoritmo também aumenta.

Como a parte mais importante de um algoritmo é aquela que cresce mais rapidamente à medida que "n" aumenta, os cientistas da computação usam a notação Big O para expressar a eficiência de um algoritmo. A notação Big O é uma representação matemática que descreve como os requisitos de tempo ou espaço de um algoritmo aumentam à medida que o tamanho da entrada aumenta. Iremos falar mais sobre esse tema em ``asymptotic notation``.

## Tipos de Algoritmos:

Existem diferentes tipos de algoritmos, onde cada um tem sua respectiva estrutura e formato, projetados para lidar com uma variedade de problemas computacionais. A escolha do tipo de algoritmo mais apropriado depende da natureza do problema a ser resolvido e dos requisitos específicos de eficiência e desempenho.

### Algoritmos sequênciais:

Os algoritmos sequenciais são estruturas simples e diretas, compostas por uma série de passos ou instruções que são executadas em ordem, sem desvios ou repetições, até que o processo seja concluído. São ideais para resolver problemas que podem ser resolvidos seguindo uma sequência lógica de ações.


Observe um exemplo prático com um algoritmo básico de soma:


```
// Início do algoritmo
inicio:

// Declaração das variáveis
real numero1, numero2, soma;

// Entrada de dados
escreva("Digite o primeiro número: ")
leia(numero1)
escreva("Digite o segundo número: ")
leia(numero2)

// Cálculo da soma
soma := numero1 + numero2

// Saída de dados
escreva("A soma dos números é: ", soma)

// Fim do algoritmo
fim.

```

Neste exemplo, as instruções seguem uma ordem sequencial, iniciando com a declaração das variáveis necessárias, a entrada dos valores dos números fornecidos pelo usuário, o cálculo da soma desses números e, por fim, a exibição do resultado. É importante ressaltar que cada instrução é executada em ordem, sem desvios ou repetições, caracterizando a natureza linear dos algoritmos sequenciais.



### Algoritmos de Seleção:

Os algoritmos de seleção são fundamentais quando há a necessidade de escolher uma opção específica entre várias possibilidades, tudo isso baseado em critérios ou condições predefinidas. São especialmente úteis em situações em que múltiplas alternativas estão disponíveis e uma decisão precisa ser tomada com base em um determinado critério.


Um exemplo prático é a instrução case, também conhecida como switch em algumas linguagens de programação. Nesse tipo de estrutura, um valor específico é avaliado e, dependendo do resultado, uma ação correspondente é executada. Aqui está um exemplo:


```
Escolha (valor)
    Caso 1:
        Faça algo
    Caso 2:
        Faça outra coisa
    Caso padrão:
        Faça alguma coisa padrão
Fim escolha

```

Neste caso, cada valor resultará em uma ação diferente, conforme especificado nos casos individuais. Essa abordagem oferece uma maneira clara e organizada de lidar com várias opções, tornando o código mais legível e fácil de entender.

### Algoritmos de Repetição:

Os algoritmos de repetição permitem que uma instrução ou uma sequência de instruções seja executada mais de uma vez, quando necessário. Esses algoritmos são usados para automatizar tarefas repetitivas e lidar com conjuntos de dados. Para implementar repetições em um algoritmo, é necessário utilizar uma instrução de repetição.

Aqui está um exemplo de um contador usando a estrutura de repetição:


```
// Início do algoritmo

// Declaração da variável contador
inteiro contador

// Inicialização do contador
contador := 0

// Início do laço de repetição
Para cada valor de i de 1 até 10 faça
    // Incremento do contador
    contador := contador + 1
Fim do laço de repetição

// Exibição do resultado
Escreva("O valor do contador é: ", contador)

//

```

Neste exemplo, o algoritmo inicializa um contador como zero e, em seguida, utiliza um laço de repetição for para incrementar o contador de 1 a 10. Ao final do laço, o valor do contador é exibido. Este é um exemplo simples de como utilizar uma estrutura de repetição para contar.


### Algoritmos Recursivos:


Um algoritmo recursivo é uma abordagem na qual um problema é resolvido ao dividi-lo em instâncias menores ou mais simples do próprio problema, repetindo esse processo até que essas instâncias atinjam um ponto onde possam ser resolvidas diretamente, sem mais subdivisões. Esse conceito é conhecido como recursão.

Na implementação de um algoritmo recursivo, uma função ou procedimento chama a si mesmo repetidamente, geralmente com argumentos ou parâmetros diferentes em cada chamada. Essa chamada recursiva continua até que o algoritmo atinja uma condição de parada, que é uma condição que determina quando a recursão deve ser encerrada.

É importante observar que, embora a recursão seja frequentemente utilizada em algoritmos recursivos, também é possível implementar esses algoritmos utilizando iterações, ou seja, utilizando estruturas de repetição. No entanto, a recursão é muitas vezes considerada mais clara e elegante para problemas que possuem uma natureza recursiva inerente, como aqueles relacionados a estruturas de dados recursivas ou problemas de divisão e conquista (que serão mencionados futuramente).

Aqui está um exemplo para calcular o fatorial de um número:

```
função fatorial(n)
    se n igual a 0 então
        retorne 1
    senão
        retorne n multiplicado pelo fatorial(n - 1)
    fim se
fim função

```

Neste exemplo, a função fatorial recebe um número n como argumento e retorna o fatorial desse número. Se o valor de `n` for 0, a função retorna 1, pois o fatorial de 0 é 1. Caso contrário, a função retorna n multiplicado pelo fatorial de `n - 1`, chamando a si mesma recursivamente até que `n` seja igual a 0.

## Técnicas de projeto de algoritmos

As técnicas de projeto de algoritmos são métodos sistemáticos e estratégias utilizadas para desenvolver algoritmos. Essas técnicas envolvem a aplicação de princípios de design e estruturação de algoritmos para garantir que eles sejam corretos, eficientes em termos de tempo e recursos, e fáceis de entender e manter.

### Dividir para conquistar


A estratégia "Dividir para Conquistar" é uma abordagem que visa decompor um problema complexo em partes menores e mais gerenciáveis. Esse processo de fragmentação facilita o controle e a resolução do problema, tornando mais acessível a conquista do objetivo final.

O método consiste em dividir o problema inicial em subproblemas menores e mais simples. Cada um desses subproblemas é então resolvido individualmente, muitas vezes utilizando técnicas recursivas. Posteriormente, as soluções dos subproblemas são combinadas para formar a solução completa do problema original.

Essa técnica é especialmente valiosa em algoritmos complexos, nos quais a simplificação do problema inicial é fundamental para uma abordagem eficiente. Ao dividir o problema em partes menores, os desenvolvedores podem lidar com cada subproblema de forma mais eficaz, o que tende a resultar em algoritmos mais eficientes e com melhor desempenho.

O Merge Sort exemplifica como a abordagem "Dividir para Conquistar" pode ser aplicada com sucesso para resolver problemas complexos de maneira eficiente.

```
Função mergeSort(lista):
    Se o tamanho da lista for menor ou igual a 1, retorne a lista

    Divida a lista ao meio em duas sublistas, esquerda e direita

    Aplicar mergeSort na sublista esquerda
    Aplicar mergeSort na sublista direita

    Combine as duas sublistas ordenadas usando a função merge
    
    Retorne a lista combinada

Função merge(esquerda, direita):
    Inicializar uma lista vazia resultante
    Enquanto houver elementos em ambas as listas esquerda e direita:
        Se o primeiro elemento da lista esquerda for menor que o primeiro elemento da lista direita:
            Adicione o primeiro elemento da lista esquerda à lista resultante
            Remova o primeiro elemento da lista esquerda
        Senão:
            Adicione o primeiro elemento da lista direita à lista resultante
            Remova o primeiro elemento da lista direita
    Adicione todos os elementos restantes da lista esquerda à lista resultante
    Adicione todos os elementos restantes da lista direita à lista resultante

    Retorne a lista resultante


```

Este pseudocódigo implementa o algoritmo Merge Sort, que classifica uma lista de números inteiros em ordem crescente. A função mergeSort é responsável por dividir a lista em sublistas menores e, em seguida, mesclar essas sublistas ordenadas usando a função merge. O programa principal demonstra o uso do Merge Sort ordenando uma lista de exemplo e exibindo o resultado antes e depois da ordenação.

### Programação dinâmica

"Programação dinâmica é um nome sofisticado para [recursão] com uma tabela. Em vez de resolver subproblemas recursivamente, resolva-os sequencialmente e armazene suas soluções em uma tabela. O truque é resolvê-los na ordem certa para que sempre que a solução de um subproblema for necessária, ela já esteja disponível na tabela." - Ian Parberry (Problems on Algorithms)

A programação dinâmica é uma técnica de desenvolvimento de algoritmos que visa resolver problemas complexos combinando soluções para subproblemas menores. A essência dessa técnica é evitar cálculos repetidos na busca pela solução ótima de um problema recursivo, o que é alcançado através da criação de uma estrutura de memória para armazenar esses resultados. Existem duas abordagens principais para implementar a programação dinâmica: a abordagem "Top-Down" e a abordagem "Bottom-up", ambas visando eficiência e otimização.


#### Abordagem “Top-Down”

Na abordagem "Top-Down", também conhecida como memoization, começamos com a solução geral ótima que desejamos encontrar e, em seguida, analisamos quais subproblemas precisam ser resolvidos até chegarmos a um subproblema com uma solução trivial. Durante esses cálculos, os resultados são armazenados para reutilização futura. O algoritmo consulta a tabela para verificar se a solução ótima do subproblema já foi calculada. Se sim, o valor é simplesmente extraído; caso contrário, o algoritmo resolve o subproblema e armazena o resultado na tabela.


#### Abordagem “Bottom-up”

Já na abordagem "Bottom-up", também conhecida como tabulation, a solução ótima começa a ser calculada a partir do subproblema mais trivial e avança gradualmente para os subproblemas mais complexos. Nessa abordagem, as soluções são calculadas e armazenadas em uma tabela, começando pelos casos base e avançando até o problema original. Isso elimina a necessidade de recursão e garante que cada subproblema seja resolvido apenas uma vez, tornando o algoritmo eficiente e escalável.


**Abordagem "Bottom-up" da Programação Dinâmica**

1. **Divisão em subproblemas**: Inicialmente, dividimos o mapa em subproblemas menores. Um desses subproblemas é encontrar o menor caminho entre cidades adjacentes, pois essa informação poderá servir para calcular o menor caminho entre quaisquer duas cidades no mapa.

2. **Cálculo dos caminhos menores**: Em seguida, calculamos o menor caminho entre cada par de cidades adjacentes. Isso pode ser feito utilizando uma técnica apropriada, como o algoritmo de Dijkstra, que é amplamente utilizado para encontrar os caminhos mais curtos em grafos ponderados.

3. **Utilização das soluções pré-calculadas**: Por fim, utilizamos as soluções pré-calculadas para encontrar o menor caminho entre as duas cidades desejadas. Isso é feito combinando os caminhos menores entre cidades adjacentes de forma a percorrer o caminho mais curto possível entre as duas cidades específicas.

**Abordagem "Top-Down" da Programação Dinâmica**

1. **Divisão em subproblemas**: Começamos identificando o problema principal de encontrar o menor caminho entre duas cidades específicas em um mapa. Em seguida, analisamos quais subproblemas são necessários para resolver esse problema. Um desses subproblemas pode ser encontrar o menor caminho entre duas cidades que estão mais próximas uma da outra no mapa, e assim por diante, até chegarmos a um subproblema trivial.

2. **Memoization (Armazenamento de resultados)**: Durante o processo de resolução dos subproblemas, armazenamos os resultados em uma tabela (ou outra estrutura de dados adequada). Assim, quando precisarmos resolver o mesmo subproblema novamente, podemos simplesmente recuperar o resultado armazenado, em vez de recalculá-lo.

3. **Resolução recursiva**: Com os resultados dos subproblemas armazenados, podemos resolver o problema original de forma recursiva, consultando a tabela para encontrar os resultados dos subproblemas necessários.

4. **Obtenção da solução final**: Com o resultado do problema original calculado recursivamente, temos a solução para o menor caminho entre as duas cidades desejadas.


#### "Top-Down"  vs "Bottom-up"

A abordagem "Top-Down" da programação dinâmica oferece diversas vantagens. Ao começar com o problema principal e dividi-lo em subproblemas menores, reflete diretamente a maneira como muitas pessoas abordam problemas complexos. Além disso, a estrutura recursiva dessa abordagem pode ser mais intuitiva para alguns desenvolvedores, especialmente aqueles familiarizados com a recursão. Em termos de simplicidade conceitual, a abordagem "Top-Down" pode ser mais fácil de entender e explicar em alguns casos, especialmente para iniciantes.

Por outro lado, na abordagem "Bottom-Up", há algumas desvantagens a serem consideradas. Se não for implementada corretamente com memoização, a abordagem "Bottom-Up" pode resultar em cálculos desnecessários, o que pode reduzir a eficiência do algoritmo. Além disso, a implementação correta da memoização pode adicionar complexidade ao código, especialmente para problemas mais complexos. Também é importante notar que a abordagem "Bottom-Up" pode ter potencial para estouro de pilha (stack overflow) em problemas com muitas chamadas recursivas, dependendo da profundidade da recursão.

### Algoritmo guloso ou míope

"Um algoritmo ganancioso começa com uma solução para um subproblema muito pequeno e aumenta-o sucessivamente até uma solução para o grande problema. O aumento é feito de forma “ganancioso”, isto é, prestando atenção ao ganho local ou de curto prazo, sem se preocupar se isso levará a uma boa solução global ou de longo prazo. Como na vida real, algoritmos gananciosos às vezes levam à melhor solução, às vezes a soluções muito boas e às vezes a soluções ruins. O truque é determinar quando ser ganancioso." - Ian Parberry (Problems on Algorithms)

A estratégia gulosa é comparável à abordagem de um montanhista que opta por seguir sempre "para cima", na direção da "maior elevação", na esperança de alcançar o pico mais alto da montanha. No entanto, como é amplamente conhecido, essa estratégia nem sempre conduz ao resultado desejado.

Um algoritmo guloso seleciona, em cada iteração, o objeto que parece ser o melhor no momento. Esse objeto escolhido é então incorporado à solução que o algoritmo está construindo.

Um algoritmo guloso é míope: ele toma decisões com base nas informações disponíveis na iteração corrente, sem considerar as consequências que essas decisões terão no futuro. Além disso, um algoritmo guloso jamais se arrepende ou volta atrás: as escolhas que faz em cada iteração são definitivas.

Algoritmos gulosos nem sempre garantem soluções ótimas, porém são eficazes na resolução de muitos problemas.

Aqui um exemplo de um algoritmo de Dijkstra que é um algoritmo guloso.

```
função Dijkstra(G, origem):
    distância = novo array com tamanho igual ao número de vértices em G
    para cada vértice v em G:
        distância[v] = infinito
    distância[origem] = 0
    conjuntoS = conjunto vazio
    enquanto conjuntoS não contém todos os vértices:
        u = vértice em G - conjuntoS com a menor distância[v]
        adicionar u ao conjuntoS
        para cada vértice v adjacente a u:
            se distância[u] + peso da aresta(u, v) < distância[v]:
                distância[v] = distância[u] + peso da aresta(u, v)
    retornar distância

```

Neste pseudo código, G é o grafo ponderado, origem é o vértice de onde se inicia a busca pelo menor caminho. O algoritmo mantém um conjunto de vértices já processados (conjuntoS) e calcula as distâncias mínimas de origem para todos os outros vértices usando a abordagem gulosa. Ele seleciona o vértice mais próximo do conjunto de vértices ainda não processados a cada iteração e atualiza as distâncias conforme necessário. No final, retorna um array contendo as distâncias mínimas de origem para todos os outros vértices do grafo.

### Algoritmos Backtracking

Backtracking é uma técnica algorítmica utilizada para encontrar todas as soluções viáveis de um problema. É uma forma sistemática de busca que explora todas as possibilidades, semelhante a uma abordagem de força bruta.

O algoritmo começa construindo uma solução parcial e, se essa solução não for adequada ou não puder ser estendida para uma solução completa, ele retrocede (daí o termo "backtracking") e tenta outras alternativas. Essa abordagem é particularmente útil para problemas que possuem múltiplas soluções.

Em essência, o backtracking explora recursivamente todas as escolhas possíveis, decidindo se cada escolha leva a uma solução válida e, se não, retrocede para explorar outras opções. Isso continua até que todas as soluções viáveis tenham sido encontradas ou até que não haja mais opções a serem exploradas.

*Exemplo:*

```
função podeColocarRainha(tabuleiro, linha, coluna, N):
    para cada i de 1 até linha-1:
        se tabuleiro[i][coluna] == 1:
            retorna Falso
        se coluna - (linha - i) > 0 e tabuleiro[i][coluna - (linha - i)] == 1:
            retorna Falso
        se coluna + (linha - i) <= N e tabuleiro[i][coluna + (linha - i)] == 1:
            retorna Falso
    retorna Verdadeiro

função resolveNQueens(tabuleiro, linha, N):
    se linha > N:
        imprimir tabuleiro
        retorna
    para cada coluna de 1 até N:
        se podeColocarRainha(tabuleiro, linha, coluna, N):
            tabuleiro[linha][coluna] = 1
            resolveNQueens(tabuleiro, linha + 1, N)
            tabuleiro[linha][coluna] = 0

função NQueens(N):
    tabuleiro[N][N] = 0
    resolveNQueens(tabuleiro, 1, N)

NQueens(4)  // Exemplo com um tabuleiro de 4x4

```

Neste exemplo, podeColocarRainha verifica se é possível colocar uma rainha em uma determinada posição no tabuleiro, considerando as rainhas já colocadas anteriormente. `resolveNQueens` é a função principal que tenta colocar rainhas em todas as linhas do tabuleiro, chamando recursivamente a si mesma para as linhas subsequentes. `NQueens` é a função de entrada que inicializa o tabuleiro e chama `resolveNQueens` para começar a busca. Este algoritmo encontrará todas as soluções possíveis para o problema das *N* rainhas em um tabuleiro de tamanho *N*.

## Algoritmos Específicos

Existem conjuntos de algoritmos que são projetados para resolver problemas específicos de forma eficiente e precisa.

### Algoritmos de Ordenação (sorting algorithms)

Algoritmos de ordenação são ferramentas fundamentais para organizar conjuntos de dados em uma ordem específica, como crescente, decrescente ou alfabética.

Essas técnicas são aplicáveis em uma variedade de cenários, desde a organização de bancos de dados até a otimização de algoritmos de busca.

### Algoritmo de busca (searching algorithm)

Algoritmos de busca, também conhecidos como algoritmos de pesquisa, são métodos utilizados para encontrar um ou mais elementos específicos em uma coleção de dados. Esses algoritmos são essenciais em muitos contextos, como em bancos de dados, processamento de linguagem natural, inteligência artificial, entre outros.

## Referências

Thomas Cormen - <a href="https://www.amazon.com.br/Algoritmos-Teoria-Pr%C3%A1tica-Thomas-Cormen/dp/8535236996" target="_blank">Algoritmos: Teoria e Prática
</a>

Cory Althoff: <a href="https://www.novatec.com.br/livros/cientista-da-computacao-autodidata/" target="_blank">Livro - Cientista da Computação Autodidata
</a>

Daniel Rosa: <a href="https://www.freecodecamp.org/portuguese/news/algoritmo-de-dividir-para-conquistar-significado-explicado-e-com-exemplos/" target="_blank">Algoritmo de dividir para conquistar
</a>

Victor Matheus R. de Carvalho: <a href="https://lamfo-unb.github.io/2019/05/30/Programacao-Dinamica/" target="_blank">Programação Dinâmica
</a>

Paulo Feofiloff: <a href="https://www.ime.usp.br/~pf/analise_de_algoritmos/aulas/dynamic-programming.html" target="_blank">Programação Dinâmica</a>

Paulo Feofiloff: <a href="https://lamfo-unb.github.io/2019/05/30/Programacao-Dinamica/" target="_blank">Método Guloso
</a>