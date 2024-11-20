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

A operação de enfileiramento (enqueue) adiciona um item ao final da fila. Em outras palavras, o item é inserido na parte de trás da fila.

#### Complexidade de Enqueue

A operação de enfileiramento possui uma complexidade de tempo constante no pior caso, expressa como ``O(1)``, o que significa que o tempo necessário para adicionar um item à fila é constante, independentemente do tamanho da fila.

### Dequeue

A operação de desenfileiramento (dequeue) remove um item do início da fila. Em outras palavras, o item é removido da frente da fila.

#### Complexidade de Dequeue

A operação de desenfileiramento também possui uma complexidade de tempo constante no pior caso, expressa como ``O(1)``, o que significa que o tempo necessário para remover um item da fila é constante, independentemente do tamanho da fila.

### Search 

A operação de pesquisa (search) é usada para encontrar um item específico na fila. Para pesquisar um item, você deve iterar pelos elementos da fila até encontrar o item desejado.

#### Complexidade de Search

A operação de pesquisa tem uma complexidade de tempo linear no pior caso, expressa como ``O(n)``, onde ``n`` é o número de elementos na fila. Isso significa que o tempo necessário para pesquisar um item na fila é proporcional ao número de elementos na fila.

### Peek

A operação de peek é usada para acessar o item no início da fila sem removê-lo. Em outras palavras, você pode verificar o próximo item a ser removido da fila sem realmente removê-lo.

#### Complexidade de Peek

A operação de peek tem uma complexidade de tempo constante no pior caso, expressa como ``O(1)``, o que significa que o tempo necessário para acessar o item no início da fila é constante, independentemente do tamanho da fila.

### Complexidades

Assim como as pilhas, as filas são eficientes para adicionar ou remover dados. O enfileiramento (enqueue) e o desenfileiramento (dequeue) têm complexidade de pior caso `O(1)`, o que significa que o tempo para adicionar ou remover um elemento é constante, independentemente do tamanho da fila. No entanto, as filas não são eficientes para acessar dados individuais, pois é necessário iterar pelos elementos da fila para encontrar um item específico. Isso significa que a pesquisa em uma fila possui complexidade de pior caso `O(n)`.

| Operação           | Complexidade |
|--------------------|--------------|
| Inserção (enqueue) | O(1)         |
| Remoção (dequeue)  | O(1)         |
| Leitura (peek)     | O(1)         |
| Pesquisa (search)  | O(n)         |

Essas complexidades de tempo constante (O(1)) indicam que o tempo necessário para realizar cada uma dessas operações não depende do tamanho total da pilha. Já a complexidade de tempo linear (O(n)) para a operação de pesquisa indica que o tempo necessário para pesquisar um item na fila é proporcional ao número de elementos na fila. Independentemente do número de elementos presentes na Queue, a inserção, remoção e leitura podem ser executadas em tempo constante, tornando as Queues uma escolha eficiente e eficaz para muitas aplicações computacionais.

## Implementações

Neste repositório, você encontrará a implementação da estrutura de dados Queue em três diferentes tecnologias: <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/4_Queue/C">C</a>, <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/4_Queue/Python">Python</a> e <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/4_Queue/Rust">Rust</a>


## Referências

Livro: <a href="https://www.novatec.com.br/livros/cientista-da-computacao-autodidata/">Cientista da Computação Autodidata</a>

Livro: <a href="https://novatec.com.br/livros/entendendo-algoritmos/">Entendendo Algoritmos</a>

Livro: <a href="https://www.amazon.com.br/Algoritmos-Teoria-Pr%C3%A1tica-Thomas-Cormen/dp/8535236996" target="_blank">Thomas Cormen - Algoritmos: Teoria e Prática
</a>

GeeksforGeeks: <a href="https://www.geeksforgeeks.org/learn-data-structures-and-algorithms-dsa-tutorial/#6-queue">Queue Data Structure</a>

Livro: <a href="https://www.grupogen.com.br/livro-algoritmos-e-estruturas-de-dados-em-linguagem-c-andre-backes-editora-ltc-9788521638308">Algoritmos e Estruturas de Dados em Linguagem C</a>