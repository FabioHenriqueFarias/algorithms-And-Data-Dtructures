# Stack em C

## Sumário 

- [Divisão](#divisão)
    - [main.c](#mainc)
    - [stack.h](#stackh)
    - [stack.c](#stackc)
- [Rodando o programa com GCC:](#rodando-o-programa-com-gcc)

## Divisão

Estes códigos consistem na implementação de uma **Pilha** em linguagem C, dividido em três arquivos principais: `main.c`, `stack.h`, e `stack.c`. O `main.c` é o arquivo principal do programa, `stack.h` contém os métodos disponíveis para manipulação do array, enquanto `stack.c` apresenta a implementação dos métodos declarados em `stack.h`.

### main.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Stack/C/main.c">`main.c`</a> é o ponto de entrada do programa. Aqui,   ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.

### stack.h

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Stack/C/stack.h">`stack.h`</a> contém as declarações das funções disponíveis para manipulação da Pilha. Ele serve como uma interface para o programa principal `(main.c)`, fornecendo os protótipos das funções que podem ser utilizadas.

### stack.c

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Stack/C/stack.c">`stack.c`</a> contém uma implementação das funções necessárias para manipulação de uma pilha em C. Cada função oferece a lógica necessária para realizar operações como inserção, exclução.

As funções implementadas são as seguintes:

- Criar a pilha
- Adicionar um novo elemento no topo da pilha.
- Remover um elemento no topo da pilha.
- Verificar se a pilha está vazia.
- Retornar o tamanho atual da pilha.
- Imprimir o elemento no topo da pilha.

## Rodando o programa com GCC:

Para compilar o código usando o compilador GCC, você pode usar o seguinte comando:

```
gcc main.c stack.c -o programa
```

Isso compilará o código e gerará um executável chamado `programa`. Você pode então executá-lo com o seguinte comando:

```
./programa
```

Isso executará o código que implementa uma **Stack** em **C**