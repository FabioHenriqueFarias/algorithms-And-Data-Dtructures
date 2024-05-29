# Algoritmos de Recursão Clássicos

## Sumário

- [Somando números em uma matriz](#somando-números-em-uma-matriz)
    - [Análise do processo recursivo:](#análise-do-processo-recursivo)
    - [Resumo da Retomada das Chamadas:](#resumo-da-retomada-das-chamadas)

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

Aqui está ``sumHeadTail.py``, um programa Python para somar uma lista de números:

```
def sum_recursive(arr):
    if len(numbers) == 0:
        # Caso base: lista vazia tem soma 0
      ❶  return 0
    else:
        # Caso recursivo: soma o primeiro elemento com a soma dos elementos restantes
        ❷ head = numbers[0]
        ❸ tail = numbers[1:]
        ❹ return head + sum(tail)


# Testando a função
print(sum_recursive([5, 2, 4, 8]))  # Saída: 19
print(sum_recursive([]))            # Saída: 0
print(sum_recursive([1, 2, 3, 4, 5]))  # Saída: 15

```

Output:

```
# Saída: 19
# Saída: 0
# Saída: 15
```

Quando chamado com um argumento de lista vazio, o caso base da nossa função simplesmente retorna 0❶. No caso recursivo, formamos a cabeça (head)❷ e a cauda (tail)❸ a partir do argumento original `numbers`. Tenha em mente que o tipo de dados de `tail` é uma lista de números, assim como o argumento `numbers`. Mas o tipo de dados de `head` é apenas um único valor numérico, e não uma lista com um valor numérico. O valor de retorno da função `sum_recursive()` também é um valor numérico único e não uma lista de números; é por isso que podemos somar `head` e `sum_recursive(tail)` no caso recursivo.

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
    return head + sum_recursive(tail)
    ```
    - `head = numbers[0]`: Pegamos o primeiro elemento da lista.
    - `tail = numbers[1:]`: Pegamos todos os elementos restantes da lista.
    - `return head + sum_recursive(tail)`: Somamos o primeiro elemento (`head`) com a soma dos elementos restantes (`tail`), que é calculada pela chamada recursiva à função `sum_recursive()`.

Cada chamada recursiva passa um array cada vez menor para `sum_recursive()`, aproximando-o do caso base de um array vazio. Por exemplo, a imagem mostra o estado da pilha de chamadas para sum([5, 2, 4, 8]).

![Pilas da Funcão sum_recursive()](../assents/Image06.png)

Na imagem, cada cartão na pilha representa uma chamada de função. No topo de cada cartão está o nome da função com o argumento que foi passado quando chamada. Abaixo, estão as variáveis ​​locais: o parâmetro `numbers` e as variáveis locais `head` e `tail` criadas durante a chamada. Na parte inferior do cartão está a expressão `head + sum_recursive(tail)` retornada pela chamada de função. Quando uma nova função recursiva é chamada, um novo cartão é colocado na pilha. Quando a chamada de função retorna, o cartão do topo é removido da pilha.

### Análise do processo recursivo:

1. **Chamada Inicial**: `sum_recursive([5, 2, 4, 8])`
   - `head = 5`
   - `tail = [2, 4, 8]`
   - Retorna `5 + sum_recursive([2, 4, 8])`

2. **Segunda Chamada**: `sum_recursive([2, 4, 8])`
   - `head = 2`
   - `tail = [4, 8]`
   - Retorna `2 + sum_recursive([4, 8])`

3. **Terceira Chamada**: `sum_recursive([4, 8])`
   - `head = 4`
   - `tail = [8]`
   - Retorna `4 + sum_recursive([8])`

4. **Quarta Chamada**: `sum_recursive([8])`
   - `head = 8`
   - `tail = []`
   - Retorna `8 + sum_recursive([])`

5. **Caso Base**: `sum_recursive([])`
   - Lista vazia
   - Retorna `0`

### Resumo da Retomada das Chamadas:

- `sum_recursive([])` retorna `0`
- `sum_recursive([8])` retorna `8 + 0 = 8`
- `sum_recursive([4, 8])` retorna `4 + 8 = 12`
- `sum_recursive([2, 4, 8])` retorna `2 + 12 = 14`
- `sum_recursive([5, 2, 4, 8])` retorna `5 + 14 = 19`