# Algoritmos de Recursão Clássicos

## Sumário

- [Somando números em uma matriz](#somando-números-em-uma-matriz)
    - [Análise do processo recursivo:](#análise-do-processo-recursivo)
    - [Resumo da Retomada das Chamadas:](#resumo-da-retomada-das-chamadas)
- [Invertendo uma String](#invertendo-uma-string)
- [Detectando Palíndromos](#detectando-palíndromos)
- [Torre de Hanói](#torre-de-hanói)
    - [Como Usar o Programa](#como-usar-o-programa)


Vamos começar com três algoritmos simples: somar os números em um array, inverter uma string de texto e detectar se uma string é um palíndromo. Em seguida, exploramos um algoritmo para resolver o quebra-cabeça da Torre de Hanói, implementamos o algoritmo de preenchimento de regiões em desenhos e abordamos a complexa função de Ackermann, que é altamente recursiva.

Durante esse processo, você aprenderá sobre a técnica "head-tail" para dividir os dados nos argumentos da função recursiva. Além disso, faremos três perguntas cruciais ao tentar encontrar soluções recursivas:

1. Qual é o caso base?
2. Qual argumento é passado para a chamada de função recursiva?
3. Como os argumentos passados para as chamadas de função recursivas se aproximam do caso base?

À medida que você ganha mais experiência, responder a essas perguntas se tornará mais natural e intuitivo.

## Somando números em uma matriz

Nosso primeiro exemplo é simples: dada uma lista ou um array de inteiros, retorne a soma total de todos os inteiros. Por exemplo, uma chamada como ```sum([5, 2, 4, 8])``` deveria retornar **19**.

Embora isso seja fácil de resolver com um loop, resolvê-lo com recursão requer um pouco mais de reflexão. Como discutido anteriormente, você pode perceber que este algoritmo não se adapta bem à recursão a ponto de justificar a complexidade adicional. No entanto, somar números em uma lista (ou realizar outros cálculos baseados no processamento de dados em uma estrutura linear) é um problema comum em entrevistas de programação e merece nossa atenção.

Para resolver esse problema, vamos examinar a técnica **head-tail** para implementar funções recursivas. Definimos a função recursiva **sum()** para encontrar a soma dos inteiros da lista adicionando o primeiro elemento da lista (head) à soma dos elementos restantes (tail). Para calcular a soma do tail, chamamos recursivamente a função **sum()** com os elementos restantes da lista.

Como o tail é um elemento a menos que a lista original, eventualmente chamaremos a função recursiva com uma lista vazia. Uma lista vazia é trivial de somar, resultando em 0, e não requer mais chamadas recursivas. A partir desses fatos, nossas respostas às três perguntas são as seguintes:

1. **Qual é o caso base?** 
    - Uma lista vazia, cuja soma é 0.

2. **Qual argumento é passado para a chamada recursiva?** 
    - A parte da lista excluindo o primeiro elemento (tail).

3. **Como esse argumento se aproxima do caso base?** 
    - A lista diminui em um elemento a cada chamada recursiva até que se torne uma lista vazia.

Aqui está <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Algorithms/Recursion/2_AlgoritmosRecursaoClassicos/Algoritmos/sumHeadTail.py">``sumHeadTail.py``</a>, um programa Python para somar uma lista de números:

``` Python
def sum(numbers):
    if len(numbers) == 0:
        # Caso base: lista vazia tem soma 0
      ❶  return 0
    else:
        # Caso recursivo: soma o primeiro elemento com a soma dos elementos restantes
        ❷ head = numbers[0]
        ❸ tail = numbers[1:]
        ❹ return head + sum(tail)


# Testando a função
print(sum([5, 2, 4, 8]))  # Saída: 19
print(sum([]))            # Saída: 0
print(sum([1, 2, 3, 4, 5]))  # Saída: 15

```

Output:

```
# Saída: 19
# Saída: 0
# Saída: 15
```

Quando chamado com um argumento de lista vazio, o caso base da nossa função simplesmente retorna 0❶. No caso recursivo, formamos a cabeça (head)❷ e a cauda (tail)❸ a partir do argumento original `numbers`. Tenha em mente que o tipo de dados de `tail` é uma lista de números, assim como o argumento `numbers`. Mas o tipo de dados de `head` é apenas um único valor numérico, e não uma lista com um valor numérico. O valor de retorno da função `sum()` também é um valor numérico único e não uma lista de números; é por isso que podemos somar `head` e `sum(tail)` no caso recursivo.

Vamos analisar as partes importantes do código:

1. **Caso Base**: 
    ```python
    if len(numbers) == 0:
        return 0
    ```
    - Se a lista estiver vazia, retornamos 0. Este é o caso base que termina a recursão.

2. **Caso Recursivo**:
    ```python
    head = numbers[0]
    tail = numbers[1:]
    return head + sum(tail)
    ```
    - `head = numbers[0]`: Pegamos o primeiro elemento da lista.
    - `tail = numbers[1:]`: Pegamos todos os elementos restantes da lista.
    - `return head + sum(tail)`: Somamos o primeiro elemento (`head`) com a soma dos elementos restantes (`tail`), que é calculada pela chamada recursiva à função `sum()`.

Cada chamada recursiva passa um array cada vez menor para `sum()`, aproximando-o do caso base de um array vazio. Por exemplo, a imagem mostra o estado da pilha de chamadas para sum([5, 2, 4, 8]).

![Pilas da Funcão sum()](../assents/Image06.png)

Na imagem, cada cartão na pilha representa uma chamada de função. No topo de cada cartão está o nome da função com o argumento que foi passado quando chamada. Abaixo, estão as variáveis ​​locais: o parâmetro `numbers` e as variáveis locais `head` e `tail` criadas durante a chamada. Na parte inferior do cartão está a expressão `head + sum(tail)` retornada pela chamada de função. Quando uma nova função recursiva é chamada, um novo cartão é colocado na pilha. Quando a chamada de função retorna, o cartão do topo é removido da pilha.

### Análise do processo recursivo:

1. **Chamada Inicial**: `sum([5, 2, 4, 8])`
   - `head = 5`
   - `tail = [2, 4, 8]`
   - Retorna `5 + sum([2, 4, 8])`

2. **Segunda Chamada**: `sum([2, 4, 8])`
   - `head = 2`
   - `tail = [4, 8]`
   - Retorna `2 + sum([4, 8])`

3. **Terceira Chamada**: `sum([4, 8])`
   - `head = 4`
   - `tail = [8]`
   - Retorna `4 + sum([8])`

4. **Quarta Chamada**: `sum([8])`
   - `head = 8`
   - `tail = []`
   - Retorna `8 + sum([])`

5. **Caso Base**: `sum([])`
   - Lista vazia
   - Retorna `0`

### Resumo da Retomada das Chamadas:

- `sum([])` retorna `0`
- `sum([8])` retorna `8 + 0 = 8`
- `sum([4, 8])` retorna `4 + 8 = 12`
- `sum([2, 4, 8])` retorna `2 + 12 = 14`
- `sum([5, 2, 4, 8])` retorna `5 + 14 = 19`

Podemos usar a função `sum()` como modelo para aplicar a técnica head-tail a outras funções recursivas. Por exemplo, podemos modificar a função `sum()` para criar uma função `concat()` que concatena uma lista de strings. O caso base retornaria uma string vazia para uma lista vazia, enquanto o caso recursivo retornaria a primeira string concatenada ao valor de retorno da chamada recursiva com o resto da lista.

Lembre-se de que a recursão é especialmente adequada para problemas que envolvem uma estrutura semelhante a uma árvore e retrocesso. Uma lista, string ou outra estrutura de dados linear pode ser considerada uma estrutura semelhante a uma árvore, embora seja uma árvore que possui apenas uma ramificação em cada nó, como mostrado na imagem abaixo:

![Arvores](../assents/Image07.png)

Uma lista (direita) `[5, 2, 4, 8]` é análoga a uma estrutura de dados em árvore (esquerda) com apenas uma ramificação em cada nó.

A chave para identificar se nossa função recursiva é desnecessária é verificar se ela nunca retrocede nos dados que processa. Ela realiza uma única passagem sobre cada elemento da lista, do início ao fim, algo que um loop básico pode facilmente realizar.

Além disso, a função de soma recursiva em Python é cerca de 100 vezes mais lenta que um algoritmo iterativo simples. Mesmo que o desempenho não fosse um problema, a função `sum()` causaria um estouro de pilha se tentássemos somar uma lista com dezenas de milhares de números. A recursão é uma técnica avançada, mas nem sempre é a melhor abordagem.


## Invertendo uma String

Inverter uma string é um exemplo clássico de um algoritmo recursivo, embora a solução iterativa seja bastante direta. Como uma string é essencialmente um array de caracteres, podemos empregar a abordagem head-tail para nossa função `rev()`, assim como fizemos para o algoritmo de soma.
Para strings maiores, vamos tentar dividir a string em cabeça (apenas o primeiro caractere) e cauda (todos os caracteres após o primeiro). Para uma string de dois caracteres como 'XY', 'X'é a cabeça e 'Y'é a cauda. Para inverter a corda, precisamos colocar a cabeça atrás da cauda: 'YX'.

Para strings maiores, dividimos a string em cabeça (o primeiro caractere) e cauda (todos os caracteres após o primeiro). Por exemplo, para uma string de dois caracteres como 'XY', 'X' é a cabeça e 'Y' é a cauda. Para inverter a string, colocamos a cabeça atrás da cauda: 'YX'.

Mas será que esse algoritmo funciona para strings mais longas? Considere a string 'CAT'. Dividimos em cabeça 'C' e cauda 'AT'. Colocar a cabeça atrás da cauda simplesmente nos dá 'ATC', o que não é o que queremos. O que realmente queremos é inverter a cauda e então colocar a cabeça no final. Ou seja, 'AT' se torna 'TA' e adicionar 'C' ao final resulta em 'TAC'.

Então, como podemos inverter a cauda? Podemos fazer isso chamando recursivamente `rev()` passando a cauda como argumento. Vamos nos concentrar nas entradas e saídas da nossa função: `rev()` recebe uma string e retorna a string invertida.

Implementar uma função recursiva como `rev()` pode parecer complicado porque envolve um problema de ovo e galinha. Para escrever o caso recursivo de `rev()`, precisamos chamar uma função que inverte uma string – ou seja, `rev()` em si. Ao confiar na técnica do "salto de fé", podemos escrever nosso caso recursivo assumindo que a chamada para `rev()` retorna o valor correto, mesmo que ainda não tenhamos terminado de escrever a função.

O "salto de fé" não é uma técnica mágica que garante que seu código funcionará sem erros. É uma maneira de superar o bloqueio mental ao pensar em como implementar sua função recursiva. Essa técnica funciona quando você tem um entendimento claro dos argumentos e do valor de retorno da sua função recursiva.

Lembre-se de que o "salto de fé" ajuda apenas a escrever o caso recursivo. Você deve passar um argumento que esteja mais próximo do caso base a cada chamada recursiva. Não adianta passar o mesmo argumento repetidamente. Vamos ver como isso se aplica na prática com o exemplo da função `rev()`.

```python
def rev(theString): 
    return rev(theString) # Isso não funcionará magicamente.
```

Para continuar nosso exemplo 'CAT', ao passarmos a string 'AT' para a função `rev()`, a cabeça (primeiro caractere) é 'A' e a cauda (restante da string) é 'T' nessa chamada de função. Já sabemos que o inverso de uma string de um único caractere, como 'T', é simplesmente 'T'. Esse é o nosso caso base. Portanto, essa segunda chamada de `rev()` retornará 'TA' ao inverter 'AT', que é exatamente o que a chamada anterior de `rev()` precisa. A imagem abaixo mostra o estado da pilha de chamadas durante todas as chamadas recursivas para `rev()`.

Vamos fazer três perguntas sobre o algoritmo recursivo da função `rev()`:

1. **Qual é o caso base?**
   O caso base é uma string de zero ou um caractere.

2. **Qual argumento é passado para a chamada de função recursiva?**
   A cauda da string original, ou seja, a string original sem o primeiro caractere.

3. **Como esse argumento se aproxima do caso base?**
   A cada chamada recursiva, o argumento da string é reduzido em um caractere, aproximando-se assim do caso base, que é uma string de comprimento um ou zero.


![Pilha de chamadas](../assents/Image08.png)

Aqui está <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Algorithms/Recursion/2_AlgoritmosRecursaoClassicos/Algoritmos/reverseString.py">`reverseString.py`</a> , um programa Python para reverter uma string:

```python
def rev(theString):
  ❶ if len(theString) == 0 or len(theString) == 1:
        # CASO BASE
        return theString
    else:
        # CASO RECURSIVO
      ❷ head = theString[0]
      ❸ tail = theString[1:]
      ❹ return rev(tail) + head

print(rev('abcdef'))
print(rev('Hello, world!'))
print(rev(''))
print(rev('X'))
```

Aqui está a saída desse programa:

```
fedcba
!dlrow ,olleH

X
```

Nossa função recursiva `rev()` retorna a string que é o inverso do argumento, `theString`. Vamos considerar as strings mais simples de reverter: a string vazia e uma string de um único caractere. Ambas seriam “revertidas” para si mesmas. Esses são os casos base que utilizamos (embora os combinemos com um operador booleano `or` em ❶).

Para o caso recursivo, separamos o primeiro caractere da string em ❷ (`head`) e todos os caracteres após o primeiro em ❸ (`tail`). O caso recursivo então retorna o inverso de `tail` seguido pelo caractere `head` em ❹.

Vamos analisar detalhadamente:

1. **Caso Base**: Se a string é vazia ou contém apenas um caractere (`if len(theString) == 0 or len(theString) == 1`), retornamos a string como está.

2. **Caso Recursivo**: 
   - ❷ Separamos o primeiro caractere da string (`head = theString[0]`).
   - ❸ Pegamos todos os caracteres após o primeiro (`tail = theString[1:]`).
   - ❹ Retornamos o resultado da chamada recursiva para `rev(tail)`, adicionando `head` ao final (`return rev(tail) + head`).

## Detectando Palíndromos

Um palíndromo é uma palavra ou frase que tem a mesma grafia quando escrita para frente e para trás, como "radar" ou "A grama é amarga". Para detectar se uma string é um palíndromo, podemos escrever uma função recursiva chamada `isPalindrome()`.

O caso base é uma sequência de zero ou um caractere, que por natureza é sempre a mesma quando escrita para frente ou para trás. Usaremos uma abordagem semelhante à técnica de divisão em cabeça e cauda, exceto que, neste caso, dividiremos a string em três partes: cabeça (`head`), meio (`middle`) e última (`last`). Se o primeiro e o último caractere forem iguais e a parte do meio também for um palíndromo, então a string inteira é um palíndromo. A recursão acontece ao passarmos a string do meio para a função `isPalindrome()`.

Qual é o caso básico? Uma sequência de zero ou um caractere, que retorna Trueporque é sempre um palíndromo.

Qual argumento é passado para a chamada de função recursiva? Os caracteres do meio do argumento de string.

Como esse argumento se aproxima do caso base? O argumento string diminui em dois caracteres para cada chamada recursiva até se tornar uma string com zero ou um caractere.

1. **Qual é o caso base?** 
    - Uma lista vazia, cuja soma é 0.

2. **Qual argumento é passado para a chamada recursiva?** 
    - Os caracteres do meio do argumento da string.

3. **Como esse argumento se aproxima do caso base?** 
    - O argumento da string diminui em dois caracteres a cada chamada recursiva até se tornar uma string com zero ou um caractere.

Aqui está <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Algorithms/Recursion/2_AlgoritmosRecursaoClassicos/Algoritmos/isPalindrome.py">`isPalindrome()`</a>, um programa Python para detectar palíndromos:

```
def isPalindrome(theString):
    if len(theString) == 0 or len(theString) == 1:
        # CASO BASE
        return True
    else:
        #  CASO RECURSIVO
      ❶ head = theString[0]
      ❷ middle = theString[1:-1]
      ❸ last = theString[-1]
      ❹ return head == last and isPalindrome(middle)

text = 'reviver'
print(text + ' is a palindrome: ' + str(isPalindrome(text)))
text = 'omissíssimo'
print(text + ' is a palindrome: ' + str(isPalindrome(text)))
text = 'romaeamor'
print(text + ' is a palindrome: ' + str(isPalindrome(text)))
text = 'saias'
print(text + ' is a palindrome: ' + str(isPalindrome(text)))
```

O caso base retorna `True` porque uma sequência de zero ou um caractere é sempre um palíndromo. Caso contrário, o argumento da string será dividido em três partes: o primeiro caractere ❶, o último caractere ❸, e os caracteres intermediários entre eles ❷.

A instrução `return` no caso recursivo ❹ faz uso de curto-circuito booleano, um recurso presente em quase todas as linguagens de programação. Em uma expressão com operadores booleanos `and` ou `&&`, se a expressão do lado esquerdo for `False`, não importa se a expressão do lado direito é `True` ou `False`, porque a expressão inteira será `False`. O curto-circuito booleano é uma otimização que ignora a avaliação da expressão do lado direito de um operador `and` se o lado esquerdo for `False`. Portanto, na expressão `head == last and isPalindrome(middle)`, se `head == last` for `False`, a chamada recursiva para `isPalindrome()` é ignorada. Isso significa que assim que os caracteres `head` e `last` não corresponderem, a recursão para e simplesmente retorna `False`.

Esse algoritmo recursivo ainda é sequencial, como as funções de soma e de inversão de string das seções anteriores, exceto que, em vez de percorrer os dados do início ao fim, ele percorre de ambas as extremidades em direção ao meio. A versão iterativa deste algoritmo, que usa um loop simples, é mais direta. 

## Torre de Hanói

A Torre de Hanói é um clássico quebra-cabeça que envolve uma torre de discos empilhados de tamanhos variados. O quebra-cabeça começa com todos os discos empilhados em um poste, organizados do maior na parte inferior ao menor no topo. Cada disco tem um orifício no centro, permitindo que sejam empilhados uns sobre os outros em um poste.

![Torre de Hanói](../assents/Image09.png)

Para resolver o quebra-cabeça da Torre de Hanói, o jogador deve mover a pilha de discos de um poste para outro seguindo três regras:

1. O jogador pode mover apenas um disco por vez.
2. O jogador só pode mover discos do topo de uma torre para o topo de outra torre.
3. O jogador nunca pode colocar um disco maior em cima de um disco menor.

O módulo integrado `turtledemo` do Python tem uma demonstração da Torre de Hanói que você pode visualizar executando o seguinte comando no Windows:

```bash
python -m turtledemo
```

Ou no macOS/Linux:

```bash
python3 -m turtledemo
```

Em seguida, selecione `minimal_hanoi` no menu Exemplos. As animações da Torre de Hanói também são facilmente encontradas através de uma pesquisa na Internet.

O algoritmo recursivo para resolver o quebra-cabeça da Torre de Hanói não é intuitivo. Vamos começar com o menor caso: uma Torre de Hanói com um disco. A solução é trivial: basta mover o disco para outro poste e está resolvido. Resolver o quebra-cabeça com dois discos é um pouco mais complicado: mova o disco menor para um poste temporário, o disco maior para o poste final, e finalmente mova o disco menor do poste temporário para o poste final. Ambos os discos estarão agora no poste final na ordem correta.

Para resolver o quebra-cabeça com mais discos, seguimos estes passos recursivos:

1. Resolva o quebra-cabeça para os n – 1 discos, movendo esses discos do poste inicial para o poste temporário.
2. Mova o n-ésimo disco (o maior) do poste inicial para o poste final.
3. Resolva o quebra-cabeça para os n – 1 discos restantes, movendo esses discos do poste temporário para o poste final.

Assim como o algoritmo de Fibonacci, o caso recursivo do algoritmo da Torre de Hanói faz duas chamadas recursivas em vez de apenas uma. Se desenharmos um diagrama em árvore das operações para resolver uma Torre de Hanói com quatro discos, ele se parecerá com a imagem abaixo:

![alt text](../assents/Image10.png)

Resolver o quebra-cabeça de quatro discos requer as mesmas etapas que resolver o quebra-cabeça de três discos, além de mover o quarto disco e executar as etapas de resolução do quebra-cabeça de três discos novamente. Da mesma forma, resolver o quebra-cabeça de três discos requer as mesmas etapas do quebra-cabeça de dois discos, além de mover o terceiro disco e assim por diante. Resolver o quebra-cabeça de um único disco é o caso básico trivial: envolve apenas mover o disco.

A estrutura em forma de árvore, como na imagem, sugere que uma abordagem recursiva é ideal para resolver o quebra-cabeça da Torre de Hanói. Nesta árvore, a execução se move de cima para baixo e da esquerda para a direita.

Embora uma Torre de Hanói de três ou quatro discos seja fácil de ser resolvida por um ser humano, um número crescente de discos requer um número exponencialmente crescente de operações para ser concluído. Para n discos, são necessários no mínimo 2^ n – 1 movimentos para resolver. Isso significa que uma torre de 30 discos requer mais de um bilhão de movimentos para ser concluída!

Embora uma Torre de Hanói de três ou quatro discos seja relativamente fácil de resolver por um ser humano, um número crescente de discos requer um número exponencialmente maior de operações para ser concluído. Para n discos, são necessários no mínimo \(2^n - 1\) movimentos para resolver o quebra-cabeça. Isso significa que uma torre de 30 discos requer mais de um bilhão de movimentos para ser concluída!

Vamos nos perguntar três questões para criar uma solução recursiva:

1. **Qual é o caso básico?**
   O caso básico é resolver uma torre de um disco, que é trivial: basta mover o disco para outro poste.

2. **Qual argumento é passado para a chamada de função recursiva?**
   O argumento passado é uma torre de tamanho um a menos que o tamanho atual, ou seja, estamos resolvendo a torre de \( n-1 \) discos.

3. **Como esse argumento se aproxima do caso base?**
   O tamanho da torre a ser resolvida diminui em um disco para cada chamada recursiva até se tornar uma torre de um disco.

O seguinte programa <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Algorithms/Recursion/2_AlgoritmosRecursaoClassicos/Algoritmos/towerOfHanoiSolver.py">`towerOfHanoiSolver.py`</a> resolve o quebra-cabeça da Torre de Hanói e exibe uma visualização de cada etapa:

``` Python
import sys

# Configure as torres A, B e C. O final da lista é o topo da torre.
  TOTAL_DISKS = 6 ❶

# Preencher a Torre A:
  TOWERS = {'A': list(reversed(range(1, TOTAL_DISKS + 1))), ❷
          'B': [],
          'C': []}

def printDisk(diskNum):
    # Imprima um único disco de largura diskNum.
    emptySpace = ' ' * (TOTAL_DISKS - diskNum)
    if diskNum == 0:
        # Basta desenhar o poste.
        sys.stdout.write(emptySpace + '||' + emptySpace)
    else:
        # Desenhe o disco.
        diskSpace = '@' * diskNum
        diskNumLabel = str(diskNum).rjust(2, '_')
        sys.stdout.write(emptySpace + diskSpace + diskNumLabel + diskSpace + emptySpace)

def printTowers():
    # Imprima todas as três torres.
    for level in range(TOTAL_DISKS, -1, -1):
        for tower in (TOWERS['A'], TOWERS['B'], TOWERS['C']):
            if level >= len(tower):
                printDisk(0)
            else:
                printDisk(tower[level])
        sys.stdout.write('\n')
    # Imprima as etiquetas da torre A, B e C.
    emptySpace = ' ' * (TOTAL_DISKS)
    print('%s A%s%s B%s%s C\n' % (emptySpace, emptySpace, emptySpace, emptySpace, emptySpace))

def moveOneDisk(startTower, endTower):
    # Mova o disco superior de startTower para endTower.
    disk = TOWERS[startTower].pop()
    TOWERS[endTower].append(disk)

def solve(numberOfDisks, startTower, endTower, tempTower):
    # Mova os discos numberOfDisks superiores de startTower para endTower.
    if numberOfDisks == 1:
        # CASO BASE
        moveOneDisk(startTower, endTower) ❸
        printTowers()
        return
    else:
        # CASE RECURSIVO
        solve(numberOfDisks - 1, startTower, tempTower, endTower) ❹
        moveOneDisk(startTower, endTower) ❺
        printTowers()
        solve(numberOfDisks - 1, tempTower, endTower, startTower) ❻
        return

# Resolver:
printTowers()
solve(TOTAL_DISKS, 'A', 'B', 'C')

#Modo interativo para mover discos manualmente:
#while True:
#    printTowers()
#    print('Enter letter of start tower and the end tower. (A, B, C) Or Q to quit.')
#    move = input().upper()
#    if move == 'Q':
#        sys.exit()
#    elif move[0] in 'ABC' and move[1] in 'ABC' and move[0] != move[1]:
#        moveOneDisk(move[0], move[1])
```

Quando você executa este código, a saída mostra cada movimento dos discos até que toda a torre tenha sido movida da Torre A para a Torre B:

![alt text](../assents/Image11.png)

O código do programa `towerOfHanoiSolver.py` possui um modo interativo onde você pode resolver o quebra-cabeça por conta própria. Para ativar o modo interativo, remova os comentários das linhas de código no final do arquivo.

### Como Usar o Programa

1. **Executando o Programa**:
   - Defina a constante `TOTAL_DISKS` ❶ no topo do programa como 1 ou 2 para começar com casos menores.
   - Execute o programa para observar a solução automática do quebra-cabeça.
   
2. **Estrutura dos Dados**:
   - Em nosso programa, um pólo é representado por uma lista de inteiros em Python.
   - Cada número inteiro representa um disco, com números maiores representando discos maiores.
   - O inteiro no início da lista está na parte inferior do pólo, e o inteiro no final está no topo. Por exemplo, `[6, 5, 4, 3, 2, 1]` representa um pólo com seis discos, onde o maior disco está na base.
   - Uma lista vazia `[]` representa um pólo sem discos.
   - A variável `TOWERS` ❷ contém três dessas listas, representando os três pólos A, B e C.
O caso base apenas move o menor disco do pólo inicial para o pólo final ❸ . O caso recursivo para uma torre de n discos realiza três etapas: resolver o caso n – 1 ❹ , mover o n- ésimo disco ❺ e então resolver o caso n – 1 novamente ❻ 

3. **Implementação Recursiva**:
   - **Caso Base**:
     - O menor disco é movido do pólo inicial para o pólo final ❸.
   - **Caso Recursivo**:
     - Para resolver uma torre de `n` discos, três etapas são realizadas:
       1. Resolver o caso de `n – 1` discos ❹.
       2. Mover o `n`-ésimo disco ❺.
       3. Resolver novamente o caso de `n – 1` discos ❻.