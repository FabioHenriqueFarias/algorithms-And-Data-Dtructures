# Queue

## Sumário 

- [O que é uma Queue?](#o-que-é-uma-queue)
- [Usos de uma Queue](#usos-de-uma-queue)
  - [Impressão de Documentos em uma Impressora](#impressão-de-documentos-em-uma-impressora)
  - [Solicitações de Gravação em Disco](#solicitações-de-gravação-em-disco)
  - [Envio e Recebimento de Pacotes de Rede](#envio-e-recebimento-de-pacotes-de-rede)
  - [Solicitações Web em um Servidor](#solicitações-web-em-um-servidor)
- [Operações comuns em Queue](#operações-comuns-em-queue)
  - [Enqueue](#enqueue)
    - [Complexidade de Enqueue](#complexidade-de-enqueue)
  - [Dequeue](#dequeue)
    - [Complexidade de Dequeue](#complexidade-de-dequeue)
  - [Search](#search)
    - [Complexidade de Search](#complexidade-de-search)
  - [Peek](#peek)
      - [Complexidade de Peek](#complexidade-de-peek)
  - [Complexidades](#complexidades)
  - [Implementações](#implementações)
  - [Referências](#referências)

## O que é uma Queue?

Uma fila (ou Queue, em inglês) é um tipo de dado abstrato e uma estrutura de dados linear onde os itens são adicionados no final e removidos do início. Em outras palavras, os elementos entram pela parte de trás da fila e saem pela frente, seguindo o princípio `FIFO (First In, First Out) - primeiro a entrar, primeiro a sair`.

Como mostra a imagem abaixo, o conceito de fila pode ser comparado a uma fila de pessoas em um supermercado: a primeira pessoa a entrar na fila é a primeira a ser atendida no caixa, enquanto as pessoas que chegam depois devem esperar no final da fila.


![Queue](assents/01.png)

As filas, assim como as <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/3_Stack"> pilhas</a>, são estruturas de dados de acesso limitado. As filas têm duas operações principais: **Inclusão (enqueue)** e **Remoção (dequeue)**. Enfileirar (enqueue) significa adicionar um item ao final da fila, enquanto desenfileirar (dequeue) significa remover um item do início da fila.

Como ilustrado na imagem, você enfileira os elementos no final da fila e os retira da fila pela frente.

![Queue](assents/02.png)

Existem várias maneiras de implementar o tipo de dado abstrato de fila como uma estrutura de dados. Assim como as pilhas, você pode implementar uma fila usando um <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/1_Arrays">array</a> ou uma <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/2_Linked-List">Linked List</a>. Além disso, as filas podem ser classificadas como limitadas ou ilimitadas. 

Uma fila limitada restringe a quantidade de itens que podem ser adicionados, enquanto uma fila ilimitada não impõe essa restrição. Por exemplo, você pode criar uma fila limitada usando um array, onde o tamanho máximo é predefinido. Por outro lado, uma fila ilimitada pode ser implementada usando uma lista ligada, permitindo adicionar itens indefinidamente até que a memória seja esgotada. Também é possível implementar uma fila limitada usando uma lista ligada, desde que se controle o número de itens armazenados.

## Usos de uma stack

As filas são uma estrutura de dados ideal quando você está programando qualquer sistema que necessite de processamento baseado no princípio de "primeiro a chegar, primeiro a ser atendido" (FIFO).

### Impressão de Documentos em uma Impressora

Quando vários documentos são enviados para impressão, eles são colocados em uma fila. A impressora processa o documento que foi enviado primeiro, seguido pelos documentos que foram enviados posteriormente.

### Solicitações de Gravação em Disco

Os sistemas operacionais utilizam filas para gerenciar solicitações de gravação em disco. Quando um programa solicita a gravação de dados, a solicitação é colocada em uma fila. O sistema operacional grava os dados no disco na ordem em que as solicitações foram recebidas.

### Envio e Recebimento de Pacotes de Rede

As filas gerenciam pacotes de dados à medida que são enviados e recebidos através da rede. Isso garante que os pacotes sejam processados na ordem correta, evitando congestionamento e perda de dados.

### Solicitações Web em um Servidor

Os servidores web utilizam filas para gerenciar solicitações recebidas. Quando várias solicitações são feitas simultaneamente a um servidor, elas são colocadas em uma fila para serem processadas uma a uma, garantindo que cada solicitação seja tratada de maneira eficiente e na ordem correta.

## Operações comuns em Queue

Para manipular uma Queue, diversas operações são oferecidas para a estrutura de dados **Queue**, que incluem:

### Enqueue

#### Complexidade de Enqueue

### Dequeue

#### Complexidade de Dequeue

### Search 

#### Complexidade de Search

### Peek

#### Complexidade de Peek


### Complexidades

Assim como as pilhas, as filas são eficientes para adicionar ou remover dados. O enfileiramento (enqueue) e o desenfileiramento (dequeue) têm complexidade **O(1)**, independentemente do tamanho da fila. No entanto, as filas não são eficientes para acessar dados individuais, pois é necessário iterar pelos elementos da fila para encontrar um item específico. Isso significa que tanto o acesso a um item quanto a pesquisa em uma fila possuem complexidade O(n).

## Implementações

## Referências



