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

Existem diversos tipos de grafos, cada um com suas características específicas e aplicabilidades em contextos distintos. Vamos explorar os principais tipos, entendendo como cada um pode ser útil na prática. Seja para modelar redes sociais, otimizar rotas de entrega ou resolver problemas complexos na ciência da computação, os grafos se mostram uma ferramenta poderosa e intuitiva. Eles nos ajudam a visualizar relações, conexões e fluxos de forma clara, permitindo resolver desafios do mundo real de maneira mais eficiente e estratégica.

### **Grafo não direcionado**: 
Um **grafo não direcionado** é uma estrutura composta por **vértices** (ou nós) e **arestas**, onde as conexões entre os vértices não têm direção, ou seja, podemos percorrê-las em qualquer sentido.

Na imagem abaixo, temos um exemplo de grafo não direcionado com cinco vértices, representados pelas letras A, B, C, D e E. As arestas conectam esses vértices, e se há uma aresta entre A e E, podemos ir de A para E e também de E para A. O grafo é **conexo**, pois é possível alcançar qualquer vértice a partir de outro, como no caminho A → E → D.

<div align="center">
  <img src="out/image_06.png" alt="Grafo Não Direcionado" height="200" width="300">
</div>

Um exemplo de uso de grafo não direcionado é em **redes de comunicação**, onde a troca de informações pode ocorrer em ambas as direções entre os dispositivos conectados.



### **Grafo direcionado**: 

Um **grafo direcionado** é uma estrutura em que as conexões entre os vértices têm uma direção específica. Isso significa que, se há uma ligação de \( A \) para \( B \), o caminho só pode ser seguido nesse sentido, a menos que exista uma outra ligação separada permitindo o percurso de \( B \) para \( A \). Esse tipo de grafo é muito útil em situações onde a direção das relações importa, como em redes sociais (onde uma pessoa segue outra, mas não necessariamente ao contrário), diagramas de fluxo ou mapas de trânsito.

<div align="center">
  <img src="out/image_03.png" alt="Grafo Direcionado" height="200" width="300">
</div>

Na imagem acima, podemos ver um exemplo claro desse tipo de grafo. Por exemplo, a conexão de \( 5 \) para \( 7 \) permite que se vá de \( 5 \) para \( 7 \), mas o caminho inverso só é possível porque existe uma seta apontando de \( 7 \) para \( 5 \). Já o vértice \( 6 \) pode ser alcançado a partir dos vértices \( 2 \), \( 4 \) e \( 0 \), mas não há conexões diretas que permitam que \( 6 \) retorne a esses vértices. Também podemos observar ciclos, como o que envolve \( 5 \), \( 7 \) e \( 4 \), onde é possível percorrer esses vértices e voltar ao ponto de partida seguindo as direções indicadas pelas setas.


### **Grafo trivial**: 
Um **grafo trivial** é o tipo mais simples de grafo, composto por um único vértice e nenhuma aresta. Nesse caso, não há conexões entre vértices, pois o grafo é formado por um único ponto isolado. Como não existem arestas, não é possível formar caminhos ou ciclos, já que não há travessia entre vértices. O grafo trivial é uma representação mínima, muitas vezes utilizada como exemplo básico em conceitos da teoria dos grafos ou como caso base em algoritmos e definições.

Por exemplo, em um algoritmo de busca em grafos, o grafo trivial pode ser usado como o caso base, onde não há necessidade de busca, pois não há arestas para percorrer. Na imagem abaixo, podemos ver um grafo trivial representado por um único ponto (vértice) sem nenhuma linha (aresta) conectando a outros pontos. Esse único vértice é o único componente do grafo, ilustrando de forma simples a ausência de conexões que caracteriza um grafo trivial.




<div align="center">
  <img src="out/image_04.png" alt="Grafo Direcionado" height="200" width="300">
</div>

### **Grafo cíclico**: 

Um **grafo cíclico** é um tipo de grafo que contém pelo menos um ciclo — ou seja, uma sequência de vértices conectados por arestas, onde o caminho retorna ao ponto de partida, formando um loop. Nesse ciclo, todos os vértices e arestas são únicos, sem repetições ao longo do percurso. Esse tipo de grafo é útil para representar situações em que há uma conexão contínua e repetitiva entre os elementos, como em processos ou sistemas que se retroalimentam ou seguem um ciclo sem fim.

Os grafos cíclicos podem ser **dirigidos** ou **não dirigidos**. Em um **grafo cíclico não direcionado**, as arestas não possuem direção, permitindo uma conexão bidirecional entre os vértices. Já em um **grafo cíclico dirigido**, as arestas têm uma direção específica, estabelecendo um caminho orientado ao longo do ciclo. Esses grafos podem ter ciclos de diferentes comprimentos e podem ser simples, ou seja, não contêm arestas múltiplas entre os mesmos vértices, ou até mesmo serem multigrafos, onde podem existir várias arestas entre dois vértices.

Os grafos cíclicos são frequentemente usados para modelar sistemas com feedback, como em redes de comunicação, onde a informação pode retornar ao ponto de origem por meio de um ciclo. 

Na imagem abaixo, podemos ver exemplos de grafos cíclicos tanto dirigidos quanto não dirigidos. O grafo **direcionado** apresenta as arestas com uma direção específica, formando um ciclo orientado. Já o grafo **não direcionado** apresenta arestas sem direção, permitindo que o caminho percorra em qualquer sentido entre os vértices, criando também um ciclo, mas de forma bidirecional.


<div align="center">
  <img src="out/image_07.png" alt="Grafo cíclico" height="200" width="300">
</div>


## Como funciona um Grafo?

### Nomenclaturas

Um **grafo**, como já mencionado, é uma forma de organizar informações que ajuda a entender como diferentes elementos estão conectados entre si. Para compreender melhor essa estrutura, é importante conhecer alguns termos-chave, que vamos explicar a seguir.

<div align="center">
  <img src="out/image_02.png" alt="Grafo Direcionado" height="250" width="600">
</div>

<br/>

- ***Adjacência*** Um vértice é dito adjacente a outro vértice se há uma aresta conectando-os. Por exemplo, os vértices 3 e 2 são adjacentes porque há uma linha que os conecta diretamente.

- ***Caminho***: Uma sequência de conexões (arestas) que nos permite ir de um ponto a outro. Por exemplo, no caso do vértice 5, existem diferentes maneiras de chegar ao vértice 2, passando por outros vértices, como 5-2, 5-1, 5-4 e depois 3-2. Essas são as rotas possíveis que podemos seguir a partir do vértice 5 para alcançar o vértice 2.

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