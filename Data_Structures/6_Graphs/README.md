# Graphs

## Sumário

- [O que é uma Graph?](#o-que-é-uma-graph)
- [Como funciona um Grafo?](#como-funciona-um-grafo)
- [Implementações](#implementações)
- [Referências](#referências)

## O que é uma Graph?

Já parou para pensar como diferentes elementos do nosso dia a dia se conectam? Seja um grupo de amigos no WhatsApp, um mapa rodoviário ou até mesmo uma rede social, as conexões entre os elementos contam histórias importantes. É aqui que entra o conceito de **Grafos**.

![Grafos](out/image_01.png)

Um **grafo** é formado por **vértices** e **arestas**:
- Os **vértices( ou Nodes)** (também chamados de nós) representam os elementos, como cidades, pessoas ou até páginas da internet.
- As **arestas (ou Edges)** (as conexões) mostram as relações entre esses elementos, como estradas, amizades ou links.

**Exemplo**

Imagine que você está planejando uma viagem. Cada cidade é um vértice, e cada estrada entre elas é uma aresta. Este grafo simples ajuda a visualizar os caminhos possíveis e como as cidades estão conectadas.

Representação:
```
(1) → (2) → (4)
 ↓
(3) → (5) → (6)
```

Se você começa na **Cidade 1**, pode visualizar duas possibilidades de rota. Imagine que você tem um destino final, mas precisa decidir como chegar lá, levando em conta fatores como tempo, distância ou até mesmo paisagens que gostaria de ver no caminho.

1. **Partindo da Cidade 1:**
   - Você tem **duas opções** iniciais:
     - **Seguir para a Cidade 2:** Um caminho direto e possivelmente mais rápido, mas com menos opções de desvios no futuro.
     - **Seguir para a Cidade 3:** Um trajeto que pode ser um pouco mais longo, mas oferece mais alternativas de rota no meio do caminho.

2. **Escolhendo a Cidade 2:**
   - Ao optar por esse trajeto, você segue para a **Cidade 4**.
   - Esse caminho é linear, sem bifurcações, o que pode ser vantajoso se a prioridade for simplicidade e rapidez.

3. **Escolhendo a Cidade 3:**
   - Esse caminho abre novas possibilidades, levando você até a **Cidade 5**.
   - Ao chegar na Cidade 5, surge mais uma conexão: a estrada até a **Cidade 6**, que é o seu destino final.

Cada escolha de rota reflete diferentes cenários do mundo real:
- Se você precisa de uma solução direta e objetiva (como no planejamento de uma entrega ou na execução de uma tarefa), o caminho pela Cidade 2 e Cidade 4 pode ser o ideal.
- Por outro lado, se a flexibilidade é importante (como em uma viagem turística ou na análise de alternativas em um projeto), o trajeto passando pela Cidade 3 e Cidade 5 permite explorar mais opções antes de concluir a jornada.

Essa estrutura pode ajudar a ***modelar problemas complexos*** e ***visualizar soluções***, seja no planejamento de trajetos, na otimização de redes de transporte, ou até mesmo na análise de fluxos de trabalho. Ao pensar em vértices e arestas, você pode planejar estratégias, prever resultados e tomar decisões mais informadas.

## Tipos de Grafos

## Como funciona um Grafo?

### Nomenclaturas

Um **grafo**, como já mencionado, é uma forma de organizar informações que ajuda a entender como diferentes elementos estão conectados entre si. Para compreender melhor essa estrutura, é importante conhecer alguns termos-chave, que vamos explicar a seguir.

<div align="center">
  <img src="out/image_02.png" alt="Grafo Direcionado">
</div>

- ***Adjacência***: Um vértice é dito adjacente a outro vértice se há uma aresta conectando-os. Por exemplo, os vértices 3 e 2 são adjacentes porque há uma linha que os conecta diretamente.

- ***Caminho***: Uma sequência de conexões (arestas) que nos permite ir de um ponto a outro. Por exemplo, no caso do vértice 5, existem diferentes maneiras de chegar ao vértice 2, passando por outros vértices, como 5-2, 5-1, 5-4 e depois 3-2. Essas são as rotas possíveis que podemos seguir a partir do vértice 5 para alcançar o vértice 2.

- **Grafo não direcionado**: Um ***grafo não direcionado*** é um tipo de grafo em que as arestas não possuem direção associada a elas. Ou seja, se existe uma aresta entre os vértices A e B, ela pode ser percorrida tanto de A para B quanto de B para A, sem que haja uma orientação específica. Dessa forma, não há distinção entre o ponto de origem e o ponto de chegada das arestas. Esse tipo de grafo é ilustrado na figura acima, onde as arestas não apresentam setas indicando direção.

- **Grafo direcionado**: Um ***grafo direcionado*** é uma estrutura onde as conexões entre os elementos possuem uma direção específica. Isso significa que, se há uma ligação de \( A \) para \( B \), o caminho só pode ser feito nesse sentido, a menos que exista outra ligação separada permitindo o trajeto de \( B \) para \( A \). Esse tipo de grafo é muito útil em situações onde a ordem ou direção das relações importa, como em redes sociais (quem segue quem), diagramas de fluxo ou mapas de trânsito.

   Na imagem apresentada, podemos ver exemplos claros disso. Por exemplo, a ligação de \( 5 \) para \( 7 \) permite que se vá de \( 5 \) para \( 7 \), mas o caminho inverso só é possível porque há outra seta indicando a direção oposta. Já o vértice \( 6 \) pode ser alcançado a partir de \( 2 \), \( 4 \) e \( 0 \), mas não há conexões diretas que permitam \( 6 \) retornar a esses vértices. Também é possível identificar ciclos, como o que conecta \( 5 \), \( 7 \) e \( 4 \), onde é possível percorrer esses vértices e retornar ao ponto de partida seguindo as direções indicadas.

   Esse tipo de grafo ajuda a organizar e entender relações direcionadas, permitindo a análise de caminhos, acessos e dependências em diferentes contextos.   

<div align="center">
  <img src="out/image_03.png" alt="Grafo Direcionado">
</div>

- **Grafo trivial**: Um grafo trivial é um tipo de grafo que consiste em um único vértice e nenhuma aresta. Esse grafo é considerado o caso mais simples, pois não há conexões entre vértices, já que existe apenas um vértice isolado. Não há caminhos ou ciclos possíveis, já que a ausência de arestas impede qualquer travessia entre vértices. O grafo trivial é uma representação mínima e serve como um exemplo base em muitos conceitos da teoria dos grafos, sendo utilizado em contextos teóricos ou como caso base em algoritmos.

   Por exemplo, na imagem abaixo, podemos ver um grafo trivial representado por um único ponto (vértice) sem nenhuma linha (aresta) conectando a outros pontos. Este ponto isolado é o único componente do grafo, ilustrando a simplicidade e a ausência de conexões que caracterizam um grafo trivial.


<div align="center">
  <img src="out/image_04.png" alt="Grafo Direcionado" height="200">
</div>

- **Grafo cíclico**: 

- **Grau de um vértice**: O grau de um vértice é a quantidade de conexões que ele possui em um grafo. Imagine que um vértice é uma cidade em um mapa, e as arestas são as estradas que conectam essa cidade a outras. O grau desse vértice seria o número total de estradas que chegam ou saem dessa cidade. É como contar quantas formas diferentes existem para entrar ou sair de um ponto.

   No caso de um **grafo não direcionado** (onde as arestas não têm sentido), cada aresta conta como uma conexão, independentemente da direção. Por exemplo, se a cidade \( A \) estiver conectada às cidades \( B \), \( C \) e \( D \), então o grau de \( A \) será 3, pois existem 3 estradas conectando \( A \) a outras cidades.

   Em um **grafo direcionado** (onde as arestas têm sentido), precisamos observar duas coisas:  
- **Grau de entrada**: é o número de arestas que chegam ao vértice, ou seja, as "estradas" que vêm de outras cidades e terminam ali. Por exemplo, se a cidade \( A \) recebe estradas de \( B \) e \( C \), o grau de entrada de \( A \) é 2.  
- **Grau de saída**: é o número de arestas que saem do vértice, ou seja, as "estradas" que partem daquela cidade em direção a outras. Se de \( A \) saem estradas para \( D \) e \( E \), então o grau de saída de \( A \) é 2.



<div align="center">
  <img src="out/image_05.png" alt="Grafo Direcionado" height="200">
</div>

### Terminologia de um Grafo:

### **Tipos de Grafos**

## Implementações

## Referências

Livro: <a href="https://www.grupogen.com.br/livro-algoritmos-e-estruturas-de-dados-em-linguagem-c-andre-backes-editora-ltc-9788521638308">Algoritmos e Estruturas de Dados em Linguagem C</a>