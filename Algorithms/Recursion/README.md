# Recursão

## Sumário

- [O que é Recursão?](#o-que-é-recursão)
    - [Definição](#definição)
    - [O que são funções?](#o-que-são-funções)
- [Referências](#referências)

## O que é Recursão?

 > A recursão tem uma reputação intimidante. É considerado difícil de entender, mas em sua essência depende apenas de duas coisas: chamadas de função e estruturas de dados de pilha.

A maioria dos novos programadores rastreia o que um programa faz seguindo a execução. É uma maneira fácil de ler código: basta colocar o dedo na linha de código na parte superior do programa e descer. 
Às vezes, seu dedo volta; outras vezes, ele irá pular para uma função e depois retornar. Isso facilita a visualização do que um programa faz e em que ordem.
b() # Segunda a ser chamada
    a() # Primeira a ser chamada Mas para entender a recursão, você precisa se familiarizar com uma estrutura de dados menos óbvia, chamada **pilha de chamadas**, responsável por gerenciar automaticamente as chamadas de função. Ela possui um funcionamento idêntico à estrutura de dados de uma <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/Stack"> pilha convencional</a>, seguindo o princípio de último a entrar, primeiro a sair.

### Definição

>  A recursão é uma espécie de meta, auto-referência, sonho dentro de um sonho, tipo de coisa infinita de espelho em espelho. Podemos estabelecer uma definição concreta: uma coisa recursiva é algo cuja definição se inclui. Ou seja, possui uma definição autorreferencial.

Em um contexto de programação, uma função *recursiva* é uma função que chama a si mesma. Antes de explorarmos as funções recursivas, vamos dar um passo atrás e entender como funcionam as funções regulares.

As **chamadas de função** são tão comuns e tão integradas ao processo de programação que os programadores muitas vezes não precisam se preocupar com os detalhes internos de como elas são implementadas ou executadas pelo compilador ou pela linguagem de programação.

### O que são funções?

As funções podem ser descritas como miniprogramas dentro do seu programa. Eles são um recurso de quase todas as linguagens de programação. Se você precisar executar idênticoinstruções em três locais diferentes de um programa, em vez de copiar e colar o código-fonte três vezes, você pode escrever o código em uma função uma vez e chamar a função três vezes. 

O resultado benéfico é um programa mais curto e mais legível. O programa também é mais fácil de alterar: se você precisar corrigir um bug ou adicionar recursos, será necessário alterar o programa em apenas um lugar, em vez de três.

**Todas as linguagens de programação implementam quatro recursos em suas funções:**

1. As funções possuem código que é executado quando a função é chamada.

2. Argumentos (ou seja, valores) são passados ​​para a função quando ela é chamada. Esta é a entrada da função e as funções podem ter zero ou mais argumentos.

3. As funções retornam um valor de retorno . Esta é a saída da função, embora algumas linguagens de programação permitam que as funções não retornem nada ou retornem valores nulos como `undefined` ou `None`.

4. O programa lembra qual linha de código chamou a função e retorna a ela quando a função termina sua execução.

Diferentes linguagens de programação podem ter recursos adicionais ou diferentes opções de como chamar funções, mas todas possuem esses quatro elementos gerais. Você pode ver visualmente os três primeiros desses elementos porque os escreve no código-fonte, **mas como um programa controla para onde a execução deve retornar quando a função retornar?**

Para ter uma ideia melhor do problema, crie um programa functionCalls.py que tenha três funções: `a()`, que chama `b()`, que chama `c()`:

```
def a():
    print('a() was called.')
    b()
    print('a() is returning.')

def b():
    print('b() was called.')
    c()
    print('b() is returning.')

def c():
    print('c() was called.')
    print('c() is returning.')

a()
```

Quando você executa este código, a saída fica assim:

    a() was called.
    b() was called.
    c() was called.
    c() is returning.
    b() is returning.
    a() is returning.

A saída mostra o início das funções ``a()``, `b()` e ``c()``. Então, quando as funções retornam, a saída aparece na ordem inversa: ``c()``, ``b()`` e então ``a()``. Observe esse padrão: **ela lembra qual linha de código a chamou originalmente.** 

Começamos com a chamada da função `a()`, que imprime `'a() was called.'`. Em seguida, a função `b()` é invocada e imprime `'b() was called.'`, seguida pela chamada da função `c()`, que imprime `'c() was called.'`.

Pense nessas chamadas como uma pilha.

```
    c() # Terceira a ser chamada
    b() # Segunda a ser chamada
    a() # Primeira a ser chamada 
```

Agora, as funções estão retornando e sendo desempilhadas. Começamos com a função `c()`, que imprime `'c() is returning.'`. Neste momento, a função "lembra" de onde foi chamada e retorna para essa linha, sendo desempilhada da pilha de chamadas.
```
    b() # Segunda a ser chamada
    a() # Primeira a ser chamada 
```

A função `b()` também imprime `'b() is returning.'` e retorna ao ponto de chamada original, sendo então desempilhada da pilha de chamadas.

```
    a() # Primeira a ser chamada 
```

Por fim, a função `a()` imprime `'a() is returning.'`, e o código segue seu fluxo normal, com a pilha de chamadas vazia.

Mas como o programa lembra se foi `a()` ou `b()` que chamou `c()`? 

Este detalhe é tratado implicitamente pelo programa com uma **pilha de chamadas**. Para entender como as pilhas de chamadas lembram onde a execução retorna no final de uma chamada de função, precisamos primeiro entender o que é uma <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/Stack"> Pilha</a>.

## O que são pilhas?

Para realmente entender a recursão, é fundamental compreender as pilhas.

Uma pilha é uma das **estruturas de dados** mais simples da ciência da computação. Ela armazena valores de forma semelhante a uma lista, mas com uma restrição: você só pode adicionar ou remover valores do topo da pilha.

Em implementações de pilhas usando listas ou arrays, o "topo" é o último item, localizado na extremidade direita da lista ou array. Adicionar valores é conhecido como *"empilhar"* ou *"empurrar"* valores para a pilha, enquanto remover valores é chamado de *"desempilhar"* ou *"pop"*.

Imagine que você está envolvido em uma conversa sinuosa com alguém. Você está falando sobre sua amiga Alice, o que então te lembra de uma história sobre seu colega de trabalho Bob, mas para que essa história faça sentido, primeiro você precisa explicar algo sobre sua prima Carol. 

Você termina sua história sobre Carol e volta a falar sobre Bob, e quando termina sua história sobre Bob, volta a falar sobre Alice. 
Então você se lembra de seu irmão David e conta uma história sobre ele. Eventualmente, você consegue terminar sua história original sobre Alice.

![Sua pilha de conversas sinuosas](assents/image01.png)

Em nossa pilha de conversas, os novos tópicos são adicionados ao topo da pilha e retirados à medida que são concluídos. Os tópicos anteriores são “lembrados” abaixo do tópico atual na pilha.

Pilhas são uma estrutura de dados **LIFO** , que significa último a entrar, primeiro a sair , uma vez que o último valor colocado na pilha é o primeiro valor retirado dela. Esse comportamento é semelhante ao botão Voltar do seu navegador. 

O histórico da guia do navegador funciona como uma pilha que contém todas as páginas que você visitou na ordem em que as visitou. O navegador está sempre exibindo a página da web no “topo” da “pilha” do histórico. Clicar em um link *empurra* uma nova página da web para a pilha de histórico, enquanto clicar no botão Voltar abre a página superior e revela a que está *“embaixo”*.

## O que é a pilha de chamadas?

Os programas também usam pilhas. A *pilha de chamadas* do programa, também chamada simplesmente de *pilha*, é criada durante a execução de um programa.

Uma pilha armazena coleções de **stack frames**, que são segmentos de memória do aplicativo usados para armazenar informações sobre a execução de funções ou métodos. 

Quando um programa é iniciado, um **stack frame** é inicialmente criado para representar a execução do programa principal.  
À medida que novas funções são chamadas durante a execução do programa, novos **stack frames** são criados e adicionados à pilha de chamadas para representar a ativação dessas funções. 

Cada **stack frame** contém informações essenciais para a execução da função ou método, como variáveis locais, parâmetros da função e o endereço de retorno, que indica onde a execução deve continuar após o término da função. 

Os programadores geralmente não precisam escrever código que lide diretamente com as **stack frames**, já que a linguagem de programação trata disso automaticamente. As stack frames são gerenciadas internamente pela linguagem, 
diferentes linguagens de programação têm maneiras diferentes de implementar as stack frames, mas, em geral, elas contêm:

1. O endereço de retorno, indicando para onde a execução deve se mover quando a função retornar.

2. Os argumentos passados para a chamada da função.

3. Um conjunto de variáveis locais criadas durante a execução da função.

Por exemplo, dê uma olhada no seguinte programa ``localVariables.py``, que possui três funções:

```
def a():
  ❶ spam = 'Ant'
  ❷ print('spam is ' + spam)
  ❸ b()
    print('spam is ' + spam)

def b():
  ❹ spam = 'Bobcat'
    print('spam is ' + spam)
  ❺ c()
    print('spam is ' + spam)

def c():
  ❻ spam = 'Coyote'
    print('spam is ' + spam)

❼ a()
```
Quando você executa este código, a saída fica assim:

```
spam is Ant
spam is Bobcat
spam is Coyote
spam is Bobcat
spam is Ant
```

Quando o programa chama a função `a()`❼ , um **stack frame** é criado e colocado no topo da pilha de chamadas. Este quadro armazena todos os argumentos passados para `a()`​​ (neste caso, não há nenhum), com a variável local `spam`❶ e o local para onde a execução deve ir quando a função `a()` retornar.

Quando `a()` é chamado, exibe o conteúdo de sua variável ``spam`` local, que é `Ant`❷ . Quando o código da função `a()` chama a função `b()`❸ , uma nova **stack frame** é criado e colocado na pilha de chamadas acima do objeto de quadro para `a()`. 

A função `b()` possui sua própria variável local `spam`❹ que exibe o seu conteúdo e chama a função `c()`❺ . Uma nova **stack frame** para a função `c()` é criado e colocado na pilha de chamadas, a função `c()` também contém a sua variável local ``spam``❻, que exibe seu valor. 

À medida que essas funções retornam, as **stack frames** saem da pilha de chamadas. A execução do programa sabe para onde retornar, pois essa informação de retorno é armazenada na **stack frame**. Quando a execução retorna de todas as chamadas de função, a pilha de chamadas fica vazia.

![Demostração da Pilha de Chamadas](assents/image02.png)

A figura acima mostra o estado da pilha de chamadas conforme cada função é chamada e retorna. Observe que todas as variáveis ​​locais possuem o mesmo nome: `spam`. Isso é usado para destacar que variáveis ​​locais são sempre variáveis ​​separadas com valores distintos, mesmo que tenham o mesmo nome que variáveis ​​locais em outras funções.

Como você pode ver, as linguagens de programação podem ter variáveis ​​locais separadas com o mesmo nome `( spam )` porque são mantidas em **stack frames** separados.  Quando uma variável local é referenciada no código-fonte, a variável com esse nome no **stack frame** em uso naquele momento de execução é utilizada. Isso segue a hierarquia de execução das funções, garantindo que cada função tenha seu próprio contexto de execução e suas variáveis locais não interfiram umas com as outras. 

Cada programa em execução possui uma pilha de chamadas e os programas *multithread* possuem uma pilha de chamadas para cada **thread**. Mas quando você olha o código-fonte de um programa, não consegue ver a pilha de chamadas no código. A pilha de chamadas não é armazenada em uma variável como outras estruturas de dados; ele é tratado automaticamente em segundo plano.

O fato de a pilha de chamadas não existir no código-fonte é o principal motivo pelo qual a recursão é tão confusa: a recursão depende de algo que o programador nem consegue ver! 

Revelar como funcionam as estruturas de dados da pilha e a pilha de chamadas remove grande parte do mistério por trás da recursão. Funções e pilhas são conceitos simples e podemos usá-los juntos para entender como funciona a recursão.

## Referências