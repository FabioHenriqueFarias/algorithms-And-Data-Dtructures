# Queue em C

## Sumário 

- [Divisão](#divisão)
    - [main.c](#mainc)
    - [queue.h](#queueh)
    - [queue.c](#queuec)
- [Rodando o programa com GCC:](#rodando-o-programa-com-gcc)

## Divisão 

Estes códigos consistem na implementação de uma **Fila** em linguagem C, dividido em três arquivos principais: `main.c`, `queue.h`, e `queue.c`. O `main.c` é o arquivo principal do programa, `queue.h` contém os métodos disponíveis para manipulação da fila, enquanto `queue.c` apresenta a implementação dos métodos declarados em `queue.h`.

### main.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/4_Queue/C/main.c">`main.c`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.

### queue.h

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/4_Queue/C/queue.c">`queue.h`</a> contém as declarações das funções disponíveis para manipulação da Fila. Ele serve como uma interface para o programa principal `(main.c)`, fornecendo os protótipos das funções que podem ser utilizadas.

### queue.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/4_Queue/C/queue.h">`queue.c`</a> contém uma implementação das funções necessárias para manipulação de uma fila em C. Cada função oferece a lógica necessária para realizar operações como inserção, exclução.

As funções implementadas são as seguintes:

- Criar a Fila
- Adicionar um novo elemento no topo da Fila.
- Remover um elemento no topo da Fila.
- Verificar se a Fila está vazia.
- Retornar o tamanho atual da Fila.
- Imprimir o elemento no topo da Fila.

## Rodando o programa com GCC:

Para compilar o código usando o compilador GCC, você pode usar o seguinte comando:

```
gcc main.c queue.c -o programa
```

Isso compilará o código e gerará um executável chamado `programa`. Você pode então executá-lo com o seguinte comando:

```
./programa
```

Isso executará o código que implementa uma **queue** em **C**