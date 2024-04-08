# Implementação de um Array em C

## Sumário

- [Divisão](#divisão)
    - [main.c](#mainc)
    - [array.h](#arrayh)
    - [array.c](#arrayc)
- [Rodando o programa com GCC](#rodando-o-programa-com-gcc)

## Divisão:

Estes códigos consistem na implementação de um array em linguagem C, dividido em três arquivos principais: `main.c`, `array.h`, e `array.c`. O `main.c` é o arquivo principal do programa, `array.h` contém os métodos disponíveis para manipulação do array, enquanto `array.c` apresenta a implementação dos métodos declarados em `array.h`.

### main.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Arrays/C/main.c">`main.c`</a> é o ponto de entrada do programa. Aqui,   ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.

### array.h

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Arrays/C/array.h">`array.h`</a> contém as declarações das funções disponíveis para manipulação do array. Ele serve como uma interface para o programa principal `(main.c)`, fornecendo os protótipos das funções que podem ser utilizadas.

### array.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Arrays/C/array.c">`array.c`</a> contém a implementação das funções declaradas em `array.h`. Aqui, cada função é definida, oferecendo a lógica necessária para realizar operações como inserção, exclusão, busca, entre outras, no array.

## Rodando o programa com GCC: 

O comando para rodar o código pelo compilador GCC:

```
gcc main.c array.c -o programa
```