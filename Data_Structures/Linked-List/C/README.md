# Linked List em C

## Sumário 

- [Divisão](#divisão)
    - [main.c](#mainc)
    - [linkedList.h](#linkedlisth)
    - [linkedList.c](#linkedlistc)
- [Rodando o programa com GCC:](#rodando-o-programa-com-gcc)

## Divisão

Estes códigos consistem na implementação de uma Linked List em linguagem C, dividido em três arquivos principais: main.c, linkedList.h, e linkedList.c. O main.c é o arquivo principal do programa, linkedList.h contém os métodos disponíveis para manipulação da Linked List, enquanto array.c apresenta a implementação dos métodos declarados em linkedList.h.

### main.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/C/main.c">`main.c`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.


### linkedList.h

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/C/linkedList.h">`linkedList.h`</a> contém as declarações das funções disponíveis para manipulação da Linked List. Ele serve como uma interface para o programa principal (main.c), fornecendo os protótipos das funções que podem ser utilizadas.

### linkedList.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/C/linkedList.c">`linkedList.c`</a> contém a implementação das funções declaradas em linkedList.h. Aqui, cada função é definida, oferecendo a lógica necessária para realizar operações como inserção, exclusão, busca, entre outras, na Linked List.

## Rodando o programa com GCC:

O comando para rodar o código pelo compilador GCC:
```
gcc main.c liinkedList.c -o programa
```
