# Linked List em C

## Sumário 

- [Divisão](#divisão)
    - [main.c](#mainc)
    - [linkedList.h](#linkedlisth)
    - [linkedList.c](#linkedlistc)
- [Rodando o programa com GCC:](#rodando-o-programa-com-gcc)

## Divisão

Estes códigos consistem na implementação de uma Linked List em linguagem C, dividido em três arquivos principais: main.c, linkedList.h, e linkedList.c. O main.c é o arquivo principal do programa, linkedList.h contém os métodos disponíveis para manipulação da Linked List, enquanto array.c apresenta a implementação dos métodos declarados em linkedList.h.

- `main.c` serve como o ponto de entrada do programa, onde a execução principal ocorre.
- `linkedList.h` contém a interface para manipulação de uma lista encadeada, declarando os métodos disponíveis para adicionar, remover e acessar elementos.
- Já `linkedList.c` encapsula a implementação dos métodos declarados em `linkedList.h`, fornecendo a lógica concreta para manipulação da lista encadeada.


### main.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/C/main.c">`main.c`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.


### linkedList.h

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/C/linkedList.h">`linkedList.h`</a> contém as declarações das funções disponíveis para manipulação da Linked List. Ele serve como uma interface para o programa principal (main.c). Essas operações incluem:

- Adicionar um novo nó no final da lista.
- Adicionar um novo nó no início da lista.
- Adicionar um novo nó em uma posição específica na lista.
- Retornar o tamanho atual da lista.
- Imprimir os elementos presentes na lista.

### linkedList.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/C/linkedList.c">`linkedList.c`</a> contém a implementação das funções declaradas em linkedList.h. Aqui, cada função é definida, oferecendo a lógica necessária para realizar operações como inserção, exclusão, busca, entre outras, na Linked List.

## Rodando o programa com GCC:

Para compilar o código usando o compilador GCC, você pode usar o seguinte comando:

```
gcc main.c liinkedList.c -o programa
```

Isso compilará o código e gerará um executável chamado `programa`. Você pode então executá-lo com o seguinte comando:

```
./programa
```

Isso executará o programa, que ordenará um array usando o algoritmo de Merge Sort e imprimirá o resultado.