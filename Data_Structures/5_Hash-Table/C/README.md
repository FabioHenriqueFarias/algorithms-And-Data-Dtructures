# Hash Table em C

## Sumário 

- [Divisão](#divisão)
    - [main.c](#mainc)
    - [hashTable.h](#hashtableh)
    - [hashTable.c](#hashtablec)
- [Rodando o programa com GCC:](#rodando-o-programa-com-gcc)

## Divisão

Estes códigos consistem na implementação de uma Hash Table em linguagem C, dividido em três arquivos principais: main.c, hashTable.h, e hashTable.c. O main.c é o arquivo principal do programa, hashTable.h contém os métodos disponíveis para manipulação da Hash Table, enquanto array.c apresenta a implementação dos métodos declarados em hashTable.h.

- `main.c` serve como o ponto de entrada do programa, onde a execução principal ocorre.
- `hashTable.h` contém a interface para manipulação de uma Hash Table, declarando os métodos disponíveis para adicionar, remover e acessar elementos.
- Já `hashTable.c` encapsula a implementação dos métodos declarados em `hashTable.h`, fornecendo a lógica concreta para manipulação da Hash Table.


### main.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/5_Hash-Table/C/main.c">`main.c`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.


### hashTable.h

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/5_Hash-Table/C/hashTable.h">`hashTable.h`</a> contém as declarações das funções disponíveis para manipulação da Hash Table. Ele serve como uma interface para o programa principal (main.c). Essas operações incluem:

- Criar a Hash Table
- Inserção
- Pesquisa
- Exclusão
- Tratamento de Colisões (Endereçamento Fechado)
- Função Hash
- Imprimir os elementos presentes na tabela.


### hashTable.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/5_Hash-Table/C/hashTable.c">`hashTable.c`</a> contém a implementação das funções declaradas em hashTable.h. Aqui, cada função é definida, oferecendo a lógica necessária para realizar operações como inserção, exclusão, busca, entre outras, na Linked List.

## Rodando o programa com GCC:

Para compilar o código usando o compilador GCC, você pode usar o seguinte comando:

```
gcc main.c hashTable.c -o programa
```

Isso compilará o código e gerará um executável chamado `programa`. Você pode então executá-lo com o seguinte comando:

```
./programa
```

Isso executará o código que implementa uma **Hash Table** em **C**