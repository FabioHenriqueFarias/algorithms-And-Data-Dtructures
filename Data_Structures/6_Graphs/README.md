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

## Como funciona um Grafo?

### Nomenclaturas

Um **grafo**, como já mencionado, é uma forma de organizar informações que ajuda a entender como diferentes elementos estão conectados entre si. Para compreender melhor essa estrutura, é importante conhecer alguns termos-chave, que vamos explicar a seguir.

![Grafo](out/image_02.png)

- ***Adjacência***: Um vértice é dito adjacente a outro vértice se há uma aresta conectando-os. Por exemplo, os vértices 3 e 2 são adjacentes porque há uma linha que os conecta diretamente.

- ***Caminho***: Uma sequência de conexões (arestas) que nos permite ir de um ponto a outro. Por exemplo, no caso do vértice 5, existem diferentes maneiras de chegar ao vértice 2, passando por outros vértices, como 5-2, 5-1, 5-4 e depois 3-2. Essas são as rotas possíveis que podemos seguir a partir do vértice 5 para alcançar o vértice 2.

- **Grafo não direcionado**: Um ***grafo não direcionado*** é um tipo de grafo em que as arestas não possuem direção associada a elas. Ou seja, se existe uma aresta entre os vértices A e B, ela pode ser percorrida tanto de A para B quanto de B para A, sem que haja uma orientação específica. Dessa forma, não há distinção entre o ponto de origem e o ponto de chegada das arestas. Esse tipo de grafo é ilustrado na figura acima, onde as arestas não apresentam setas indicando direção.

- **Grafo direcionado**: Um ***grafo direcionado*** é um tipo de grafo no qual as arestas possuem uma direção associada. Isso significa que, se existe uma aresta entre os vértices \( A \) e \( B \), ela indica um caminho de \( A \) para \( B \), mas não necessariamente de \( B \) para \( A \), a menos que haja uma segunda aresta específica na direção oposta. Essas arestas direcionadas são representadas graficamente por setas que apontam o sentido permitido de travessia. Assim, há uma distinção clara entre o ponto de origem (inicial) e o ponto de chegada (final) de cada aresta, o que confere ao grafo um caráter orientado. 

- **Gráfico trivial**: Grafo trivial: Um grafo trivial é um tipo de grafo que consiste em um único vértice e nenhuma aresta. Esse grafo é considerado o caso mais simples, pois não há conexões entre vértices, já que existe apenas um vértice isolado. Não há caminhos ou ciclos possíveis, já que a ausência de arestas impede qualquer travessia entre vértices. O grafo trivial é uma representação mínima e serve como um exemplo base em muitos conceitos da teoria dos grafos, sendo utilizado em contextos teóricos ou como caso base em algoritmos.

### Terminologia de um Grafo:

### **Tipos de Grafos**

## Implementações

## Referências

Livro: <a href="https://www.grupogen.com.br/livro-algoritmos-e-estruturas-de-dados-em-linguagem-c-andre-backes-editora-ltc-9788521638308">Algoritmos e Estruturas de Dados em Linguagem C</a>