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

Mas para entender a recursão, você precisa se familiarizar com uma estrutura de dados menos óbvia, chamada **pilha de chamadas**, responsável por gerenciar automaticamente as chamadas de função. Ela possui um funcionamento idêntico à estrutura de dados de uma <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/Stack"> pilha convencional</a>, seguindo o princípio de último a entrar, primeiro a sair.

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

3. As funções retornam um valor de retorno . Esta é a saída da função, embora algumas linguagens de programação permitam que as funções não retornem nada ou retornem valores nulos como `undefinedou` ou `None`.

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


## Referências