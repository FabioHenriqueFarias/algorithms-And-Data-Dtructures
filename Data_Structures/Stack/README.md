# Stack

## Sumário

## O que é uma Stack?
Uma pilha é uma estrutura de *dados linear* e *abstrada* que segue o princípio `Last-In-First-Out` **(LIFO)** . 
> LIFO (Last-In-First-Out), ou Último a Entrar, Primeiro a Sair, é um princípio em estruturas de dados onde o último elemento adicionado é o primeiro a ser removido.

É como uma pilha de pratos: você adiciona um novo prato no topo da pilha e, quando precisa remover um prato, você retira o que está no topo, ou seja, o último que foi adicionado.

As pilhas têm duas operações principais: `push` e `pop`. `Pushing` um item em uma pilha significa colocar um novo item nela. `Popping` um item de uma pilha significa remover o último item dela. As pilhas também podem ter operações adicionais, como `peek`, que significa olhar para o elemento superior de uma pilha sem removê-lo.


Para implementar uma estrutura de dados como essa, é necessário manter um ponteiro para o topo da pilha. Este ponteiro indica onde está o último elemento que foi inserido, permitindo acessar e manipular apenas o elemento mais recente adicionado à pilha.


![Funcionamento de uma Stack](assents/01.png)

As pilhas podem ser limitadas ou ilimitadas. Uma pilha limitada é uma pilha que limita quantos itens você pode adicionar a ela, enquanto uma pilha ilimitada é uma pilha que não limita quantos elementos você pode adicionar a ela. 

Se você ainda está confuso sobre a diferença entre um tipo de dados abstrato e uma estrutura de dados, uma pilha pode ajudá-lo a entender a diferença. O tipo de dados abstrato pilha descreve a ideia de uma estrutura de dados que permite acessar apenas o item mais recente colocado nela. 

No entanto, existem várias maneiras diferentes de criar uma estrutura de dados como esta. Por exemplo, você pode criar uma pilha definindo uma classe que usa internamente uma lista vinculada ou um array para rastrear os itens da pilha. Ao escrever o código para uma pilha usando um array ou uma lista vinculada, **você passou da ideia abstrata de uma pilha para uma estrutura de dados: a implementação real de um tipo de dados abstrato.**

## Usos de uma stack:

As pilhas são uma das estruturas de dados mais utilizadas na computação. Os cientistas da computação usam pilhas para implementar algoritmos de busca em largura para procurar dados em árvores e gráficos. 

Os sistemas de tempo de execução para linguagens como Python e Java usam uma pilha internamente para lidar com chamadas de função. 

Os compiladores usam pilhas para analisar expressões, especialmente quando você tem expressões que usam pares de parênteses aninhados, como em expressões aritméticas padrão, ou pares de colchetes ou colchetes aninhados. 

Os cientistas da computação também usam pilhas nos algoritmos de retrocesso encontrados em machine learning e em outras áreas de intelligence artificielle. 

Como adicionar e remover elementos de uma pilha são `O(1)`, eles são uma excelente escolha sempre que você adiciona e remove elementos de dados com frequência. Por exemplo, programas que precisam de um mecanismo de “desfazer” geralmente usam uma ou duas pilhas para lidar com “desfazer” e “refazer”. 

Os navegadores da Web, por exemplo, costumam usar duas pilhas para retroceder e avançar no histórico de navegação. Como o acesso a cada elemento em uma pilha é O(n), eles não são a melhor escolha para algoritmos que precisam acessar continuamente todos os dados em uma coleta de dados.

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





