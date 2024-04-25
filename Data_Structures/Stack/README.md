# Stack

## Sumário

## O que é uma Stack?
Uma pilha é uma estrutura de *dados linear* e *abstrada* que segue o princípio `Last-In-First-Out` **(LIFO)** . 
> LIFO (Last-In-First-Out), ou Último a Entrar, Primeiro a Sair, é um princípio em estruturas de dados onde o último elemento adicionado é o primeiro a ser removido.

É como uma pilha de pratos: você adiciona um novo prato no topo da pilha e, quando precisa remover um prato, você retira o que está no topo, ou seja, o último que foi adicionado.

Para implementar uma estrutura de dados como essa, é necessário manter um ponteiro para o topo da pilha. Este ponteiro indica onde está o último elemento que foi inserido, permitindo acessar e manipular apenas o elemento mais recente adicionado à pilha. Isso ocorre porque, em uma pilha, você só pode inserir e remover elementos na extremidade superior, o que garante que o último item adicionado seja o primeiro a ser removido

![Funcionamento de uma Stack](assents/01.png)

## Usos de uma stack:

### Call Stack

As **call stack (pilha de chamadas)**, são essenciais em diversas linguagens de programação para controlar as chamadas de funções durante a execução do código.

A pilha de chamadas é estabelecida na memória do programa no início da execução do código. Cada vez que uma função é chamada, um novo quadro de ativação, também conhecido como frame de pilha, é criado e colocado no topo da pilha de chamadas. Esse quadro de ativação armazena informações cruciais, como os parâmetros da função, variáveis locais e o endereço de retorno, indicando de onde a execução deve continuar após a conclusão da função.

Imagine um prédio em construção, cada nova função chamada é como adicionar um novo andar ao prédio, empilhando tijolos. Assim como não é possível remover um tijolo do meio do prédio sem que o topo desabe, as funções devem ser executadas e removidas em ordem, da mais recente para a mais antiga, para que o processo ocorra sem problemas.

Conforme as funções são chamadas dentro de outras funções, novos quadros de ativação são gerados e empilhados na pilha de chamadas. O último quadro empilhado corresponde à função atualmente em execução, enquanto os quadros anteriores correspondem às funções que aguardam retorno.

Quando uma função encerra sua execução, seu quadro de ativação é desempilhado da pilha de chamadas, e o controle retorna para a função chamadora, utilizando o endereço de retorno armazenado no quadro desempilhado.

No entanto, é importante observar que a pilha de chamadas possui uma capacidade limitada. Quando ocorrem muitas chamadas de funções aninhadas, pode ocorrer um problema conhecido como "overflowing", onde a pilha de chamadas excede sua capacidade de armazenamento, geralmente resultando em uma exceção ou erro de estouro de pilha.

![call stack](assents/02.png)


## Operações comuns em Stack

### Inserção
#### Complexidades de Inserção

### Remoção
#### Complexidades de Remoção

## Implementações

## Referências





