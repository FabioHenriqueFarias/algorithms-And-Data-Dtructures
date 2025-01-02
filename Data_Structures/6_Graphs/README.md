# Graphs

## Sumário

- [O que é uma Graph?](#o-que-é-uma-graph)
- [Elementos de um Grafo](#elementos-de-um-grafo)
  - [Vértices](#vértices)
  - [Arestas](#arestas)
  - [Graus de Vértices](#grau-de-um-vértice)
- [Tipos de Grafos](#tipos-de-grafos)
  - [Grafo direcionado:](#grafo-direcionado)
  - [Grafo nãodirecionado:](#grafo-não-direcionado)
  - [Grafo trivial](#grafo-trivial)
  - [Grafo cíclico](#grafo-cíclico)
- [Como funciona um Grafo?](#como-funciona-um-grafo)
  - [Nomenclaturas](#nomenclaturas)
- [Implementações](#implementações)
- [Referências](#referências)

## O que é uma Graph?

Já pensou em como elementos do nosso dia a dia se conectam? Seja um grupo de amigos no WhatsApp, um mapa de rodovias ou uma rede social, essas conexões contam histórias sobre relações e interações. É aqui que entra o conceito de **Grafos**.

![Grafos](out/image_01.png)

Um **grafo** é como uma ferramenta mágica que usamos para organizar e entender essas conexões. Ele é composto de dois elementos principais:  
- **Vértices (ou Nodes):** Representam os elementos individuais, como pessoas, cidades ou páginas de internet.  
- **Arestas (ou Edges):** Representam as conexões entre os vértices, como amizades, estradas ou links.

**Entendendo os Grafos com um Exemplo**

Imagine que você está planejando uma viagem de carro por várias cidades. Cada cidade é um **vértice** e as estradas que ligam essas cidades são as **arestas**. O grafo ajuda a visualizar os caminhos possíveis e como as cidades estão conectadas.

***Representação do Grafo:***
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

## Elementos de um Grafo

Os elementos de um grafo são como as peças de um quebra-cabeça que, juntas, mostram como as coisas estão conectadas. Temos os **vértices**, que são os "pontos" representando os objetos ou lugares, como cidades, pessoas ou computadores. E temos as **arestas**, que são as "linhas" que ligam esses pontos, mostrando as relações ou caminhos entre eles, como estradas, amizades ou cabos de rede. Esses dois elementos trabalham juntos para ajudar a entender e visualizar como tudo está interligado.

### Vértices

### Vértices

Como já mencionamos antes, os **vértices** são os "pontos" do grafo, representando os elementos que estão sendo conectados. Em uma analogia com uma viagem, cada cidade seria um vértice, um local de interesse ou um destino. Esses vértices podem ser qualquer tipo de entidade que estamos modelando, como pessoas, computadores, lugares ou até mesmo conceitos. São eles que definem os "pontos de partida" ou os "alvos" das conexões no grafo, e a partir deles é que conseguimos entender como as coisas se relacionam entre si. Cada vértice tem seu próprio papel, e a maneira como estão conectados por meio das arestas vai nos mostrar a estrutura e a dinâmica do sistema que estamos analisando.

### Arestas

### Arestas

Como já mencionamos antes, as **arestas** são as "linhas" que conectam os vértices, ou seja, as relações entre os pontos. Para tornar mais claro, imagine que as arestas são as estradas que ligam as cidades em uma viagem. Elas são o que permite que você se mova de um lugar para outro, fazendo a ligação entre diferentes pontos. No grafo, essas conexões mostram como as coisas estão relacionadas ou como elas podem interagir. Assim como uma estrada pode ser de uma única direção ou ter pedágio, as arestas também podem ter características como direção (quando o caminho tem um sentido específico) ou peso (se há algum custo ou valor associado à conexão). Elas ajudam entender como a rede funciona, já que são as "pontes" que conectam os diferentes elementos entre si.

### Graus de Vértices

O grau de um vértice é o número de conexões (arestas) que ele tem em um grafo. Pense em um vértice como uma cidade em um mapa, e as arestas como estradas ligando essa cidade a outras. O grau do vértice é o total de estradas que chegam ou saem dessa cidade.

<div align="center">
  <img src="out/image_05.png" alt="Grafo Não Direcionado" height="200">
</div>

  No caso de um **grafo não direcionado** (como o da imagem), cada aresta conta como uma conexão, independentemente da direção. Por exemplo:

  - O vértice A está conectado aos vértices B e D. Portanto, o grau de A é 2.
  - O vértice B está conectado aos vértices A, D e E. Portanto, o grau de B é 3.

  Em um **grafo direcionado**:

  <div align="center">
    <img src="out/image_08.png" alt="Grafo Direcionado" height="200">
  </div>

<br/>

  - **Grau de entrada**: o número de arestas que chegam ao vértice. Por exemplo, o vértice 2 recebe arestas dos vértices 1 e 4, então o grau de entrada de 2 é 2.
  - **Grau de saída**: o número de arestas que saem do vértice. Por exemplo, o vértice 2 tem arestas que saem para os vértices 0 e 3, então o grau de saída de 2 é 2.

  O grau de um vértice é uma medida usada em teoria dos grafos para entender a conectividade e a estrutura de um grafo. Em grafos não direcionados, o grau é apenas o número de conexões que um vértice tem com outros. Já em grafos direcionados, há duas maneiras de medir o grau: o grau de entrada, que conta quantas arestas entram no vértice, e o grau de saída, que conta quantas arestas saem dele. Isso ajuda a entender melhor como os vértices estão interligados de diferentes maneiras.


## Tipos de Grafos

Existem diversos tipos de grafos, cada um com suas características específicas e aplicabilidades em contextos distintos. Vamos explorar os principais tipos, entendendo como cada um pode ser útil na prática. Seja para modelar redes sociais, otimizar rotas de entrega ou resolver problemas complexos na ciência da computação, os grafos se mostram uma ferramenta poderosa e intuitiva. Eles nos ajudam a visualizar relações, conexões e fluxos de forma clara, permitindo resolver desafios do mundo real de maneira mais eficiente e estratégica.

### **Grafo direcionado**: 

Um **grafo direcionado** é uma estrutura em que as conexões entre os vértices têm uma direção específica. Isso significa que, se há uma ligação de \( A \) para \( B \), o caminho só pode ser seguido nesse sentido, a menos que exista uma outra ligação separada permitindo o percurso de \( B \) para \( A \). Esse tipo de grafo é muito útil em situações onde a direção das relações importa, como em redes sociais (onde uma pessoa segue outra, mas não necessariamente ao contrário), diagramas de fluxo ou mapas de trânsito.

<div align="center">
  <img src="out/image_03.png" alt="Grafo Direcionado" height="200" width="300">
</div>

Na imagem acima, podemos ver um exemplo claro desse tipo de grafo. Por exemplo, a conexão de \( 5 \) para \( 7 \) permite que se vá de \( 5 \) para \( 7 \), mas o caminho inverso só é possível porque existe uma seta apontando de \( 7 \) para \( 5 \). Já o vértice \( 6 \) pode ser alcançado a partir dos vértices \( 2 \), \( 4 \) e \( 0 \), mas não há conexões diretas que permitam que \( 6 \) retorne a esses vértices. Também podemos observar ciclos, como o que envolve \( 5 \), \( 7 \) e \( 4 \), onde é possível percorrer esses vértices e voltar ao ponto de partida seguindo as direções indicadas pelas setas.

### **Grafo não direcionado**: 
Um **grafo não direcionado** é uma estrutura composta por **vértices** (ou nós) e **arestas**, onde as conexões entre os vértices não têm direção, ou seja, podemos percorrê-las em qualquer sentido.

Na imagem abaixo, temos um exemplo de grafo não direcionado com cinco vértices, representados pelas letras A, B, C, D e E. As arestas conectam esses vértices, e se há uma aresta entre A e E, podemos ir de A para E e também de E para A. O grafo é **conexo**, pois é possível alcançar qualquer vértice a partir de outro, como no caminho A → E → D.

<div align="center">
  <img src="out/image_06.png" alt="Grafo Não Direcionado" height="200" width="300">
</div>

Um exemplo de uso de grafo não direcionado é em **redes de comunicação**, onde a troca de informações pode ocorrer em ambas as direções entre os dispositivos conectados.


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



#### ***Adjacência*** 

Um vértice é dito adjacente a outro vértice se há uma aresta conectando-os. Por exemplo, os vértices 3 e 2 são adjacentes porque há uma linha que os conecta diretamente.

<div align="center">
  <img src="out/image_02.png" alt="Grafo Direcionado" height="250" width="600">
</div>

<br/>

#### ***Caminho*** 

Uma sequência de conexões (arestas) que nos permite ir de um ponto a outro. Por exemplo, no caso do vértice 5, existem diferentes maneiras de chegar ao vértice 2, passando por outros vértices, como 5-2, 5-1, 5-4 e depois 3-2. Essas são as rotas possíveis que podemos seguir a partir do vértice 5 para alcançar o vértice 2.

#### ***Conectividade***


A **conectividade** nos grafos mostra como seus vértices e arestas estão ligados e nos ajuda a entender se é possível ir de um ponto a outro. Um grafo pode ser **conexo**, quando todos os vértices estão conectados de alguma forma, ou **desconexo**, quando existem partes separadas, onde alguns vértices não têm nenhuma ligação com outros. 

**Grafos Conexos**

Um grafo é considerado **conexo** quando existe um caminho entre qualquer par de vértices. Em outras palavras, é possível viajar de qualquer vértice para qualquer outro vértice do grafo, seja direta ou indiretamente. Isso significa que todos os vértices estão interligados de alguma forma, formando um único conjunto conectado.

**Exemplo:**

Imagine uma cidade com cinco bairros (A, B, C, D e E), onde as ruas (arestas) conectam os bairros da seguinte forma:
- A está conectado a B e E.
- B está conectado a C.
- C está conectado a D.
- D está conectado a E.

Nesse caso, o grafo é **conexo**, pois é possível ir de qualquer bairro a qualquer outro. Por exemplo:
- Para ir de A ao D, podemos seguir o caminho A → E → D.
- Para ir de A ao C, podemos seguir A → B → C.

Como todos os bairros estão interligados, o grafo forma uma única rede conectada, chamada de **componente conexa**.



**Grafos Desconexos**

Um grafo é chamado de **desconexo** quando nem todos os vértices estão conectados entre si. Isso significa que existem pares de vértices que não possuem nenhum caminho ligando-os. Quando isso ocorre, o grafo é formado por partes separadas chamadas **componentes conexas**.

 ***O que são Componentes Conexas?***

As **componentes conexas** são subpartes de um grafo onde todos os vértices estão conectados de alguma forma internamente, mas não possuem ligação com vértices de outras partes do grafo. Cada componente conexa é, por si só, um grafo conexo.

**Exemplo:**

Imagine os mesmos cinco bairros (A, B, C, D e E), mas as conexões entre eles mudaram:
- A está conectado apenas a B.
- C está conectado a D e E.
- Não há conexão entre os grupos {A, B} e {C, D, E}.

Neste caso, o grafo é **desconexo**, pois os bairros estão divididos em dois grupos sem ligação entre si:

1. A primeira **componente conexa** é formada pelos bairros A e B.
2. A segunda **componente conexa** é formada pelos bairros C, D e E.

Por exemplo:
- Podemos ir de C para E pelo caminho C → D → E.
- Porém, não é possível ir de A para C, pois eles pertencem a diferentes componentes conexas.

Resumidamente, temos:  

- **Grafo conexo**: Todos os pontos (vértices) estão conectados de alguma forma, ou seja, é possível ir de qualquer vértice a outro. Exemplo: todos os bairros de uma cidade estão interligados por ruas.  
- **Grafo desconexo**: Nem todos os pontos estão conectados, formando grupos separados. Exemplo: bairros de uma cidade divididos em dois ou mais grupos sem ligação entre eles.  
- **Componentes conexas**: Em um grafo desconexo, cada grupo isolado de pontos conectados forma uma componente conexa. Dentro de cada componente, é possível ir de um vértice a outro, como se fosse um grafo separado.  

#### **Subgrafos**

#### **Grafos Bipartidos**

### Diferença entre Grafos e Árvores

### Grafos Planos e Não Planos

### Conceito de Caminho Mínimo




### Como Representar Grafos

Existem duas formas principais de representar grafos:


## Implementações

Neste repositório, você encontrará a implementação de uma estrutura de dados baseada em grafos em três linguagens de programação distintas: <a href="">C</a>, <a href="">Python</a> e <a href="">Rust</a>.

## Referências

Livro: <a href="https://www.grupogen.com.br/livro-algoritmos-e-estruturas-de-dados-em-linguagem-c-andre-backes-editora-ltc-9788521638308">Algoritmos e Estruturas de Dados em Linguagem C</a>