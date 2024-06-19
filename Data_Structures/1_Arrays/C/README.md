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

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/1_Arrays/C/array.c">`array.c`</a> contém uma implementação das funções necessárias para manipulação de arrays em C. Cada função oferece a lógica necessária para realizar operações como inserção, exclusão, busca e outras, em um array.

As funções implementadas são as seguintes:

- Criar o array
- Adicionar um novo elemento em uma posição específica no array.
- Adicionar um novo elemento no final do array.
- Adicionar um novo elemento no início do array.
- Buscar um elemento no array e retorna sua posição.
- Remover um elemento de uma posição específica no array.
- Remover o primeiro elemento do array.
- Remover o último  elemento do array.
- Retornar o tamanho atual do array.
- Aumentar o tamanho do array dobrando sua capacidade.
- Limpar todos os elementos do array.
- Imprimir os elementos presentes no array.

## Rodando o programa com GCC: 

Para compilar o código usando o compilador GCC, você pode usar o seguinte comando:

```
gcc main.c array.c -o programa
```

Isso compilará o código e gerará um executável chamado `programa`. Você pode então executá-lo com o seguinte comando:

```
./programa
```

Isso executará o código que implementa um **Array** em **C**