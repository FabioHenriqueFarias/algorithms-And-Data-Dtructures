# Recursão VS. Iteração

> Nem a recursão nem a iteração são técnicas superiores em geral. Na verdade, qualquer código recursivo pode ser escrito como código iterativo com um loop e uma pilha. A recursão não tem nenhum poder especial que lhe permita realizar cálculos que um algoritmo iterativo não consegue. E qualquer loop iterativo pode ser reescrito como uma função recursiva.

## Sumário

- [Calculando Fatoriais](#calculando-fatoriais)


## Calculando Fatoriais

O fatorial de um número inteiro (vamos chamá-lo de n) é o produto de todos os números inteiros de 1 a n . Por exemplo, o fatorial de 4 é 4 × 3 × 2 × 1, ou 24. Um ponto de exclamação é a notação matemática para fatoriais, como em `4!`, que significa o fatorial de 4 .

![Tabela Fatorial](./../assents/image04.png)

Fatoriais são usados em diversos tipos de cálculos, como para encontrar o número de permutações de um conjunto. Por exemplo, se você quiser saber quantas maneiras existem de ordenar quatro pessoas — Alice, Bob, Carol e David — em uma fila, a resposta é o fatorial de 4.

Para determinar isso:

1. Existem quatro opções para a primeira posição na fila (4).
2. Para cada uma dessas quatro opções, restam três pessoas que podem ocupar a segunda posição (4 × 3).
3. Para cada uma dessas configurações, restam duas pessoas para a terceira posição (4 × 3 × 2).
4. A última pessoa restante ocupará a quarta posição (4 × 3 × 2 × 1).

Portanto, o número de maneiras de ordenar essas quatro pessoas em fila — isto é, o número de permutações — é igual ao fatorial de 4 (4!).

Vamos examinar uma abordagem iterativa e recursiva para calcular fatoriais.

### O Algoritmo Fatorial Iterativo

Calcular fatoriais iterativamente é bastante simples: basta multiplicar os inteiros de 1 até n, inclusive, em um loop. Algoritmos iterativos sempre utilizam um loop. Um programa chamado factorialByIteration.py pode ser escrito da seguinte forma:

```
def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

# Exemplo de uso
print(factorial(5))  # Saída: 120

```
Não há nada de errado com a solução iterativa para calcular fatoriais; é simples e faz o trabalho. Mas vamos também dar uma olhada no algoritmo recursivo para obter insights sobre a natureza dos fatoriais e da própria recursão.

### O Algoritmo Fatorial Recursivo

Observe que o fatorial de 4 é 4 × 3 × 2 × 1, e o fatorial de 5 é 5 × 4 × 3 × 2 × 1. Então você poderia dizer que 5! = 5 × 4!. Isto é recursivo porque a definição do fatorial de 5 (ou qualquer número n ) inclui a definição do fatorial de 4 (o número n – 1). Por sua vez, 4! = 4 × 3!, e assim por diante, até que você precise calcular 1!, o caso base, que é simplesmente 1.

O programa em Python `factorialByRecursion.py` usa um algoritmo fatorial recursivo:

```
def factorial(number):
    if number == 1:
        # CASO BASE
        return 1
    else:
        # CASO RECURSIVO
        return number * factorial(number - 1)❶

print(factorial(5))
```

Quando você executa este código para calcular 5! recursivamente, a saída é:

```
120
```

Para muitos programadores, esse código recursivo pode parecer estranho. Você sabe que `factorial(5)` deve calcular 5 × 4 × 3 × 2 × 1, mas é difícil identificar exatamente onde essa multiplicação está ocorrendo no código.

A confusão surge porque o caso recursivo tem uma linha ❶, metade da qual é executada antes da chamada recursiva e a outra metade ocorre após o retorno da chamada recursiva. Não estamos acostumados com a ideia de apenas metade de uma linha de código ser executada por vez.

A primeira parte da linha é `factorial(number - 1)`. Isso envolve calcular `number - 1` e fazer uma chamada recursiva, criando um novo quadro na pilha de chamadas. Esta parte da execução acontece antes da chamada recursiva ser feita.

A próxima vez que o código continuar a partir do quadro antigo será após `factorial(number - 1)` retornar. Por exemplo, quando `factorial(5)` é chamado, `factorial(number - 1)` se torna `factorial(4)`, que eventualmente retorna 24. Nesse momento, a segunda metade da linha é executada. A expressão `return number * factorial(number - 1)` agora se parece com `return 5 * 24`.

Portanto, a multiplicação final só é resolvida após todas as chamadas recursivas terem retornado, seguindo a cadeia de retornos até a chamada original.

### Por que o algoritmo fatorial recursivo é terrível

A implementação recursiva para cálculo de fatoriais tem uma fraqueza crítica. Calcular o fatorial de 5 requer cinco chamadas de função recursivas. Isso significa que cinco objetos de quadro são colocados na pilha de chamadas antes que o caso base seja alcançado. Isso não escala.

Se você quiser calcular o fatorial de 1.001, a função recursiva `factorial()`  deverá fazer 1.001 chamadas de função recursiva. No entanto, é provável que seu programa cause um estouro de pilha antes de terminar, porque fazer tantas chamadas de função sem retornar excederia o tamanho máximo da pilha de chamadas do interpretador. *Isso é terrível*; você nunca iria querer usar uma função fatorial recursiva em código do mundo real.

![Pilha de Chamads](../assents/image05.png)

Por outro lado, o algoritmo iterativo para calcular fatoriais completa o cálculo de forma rápida e eficiente. O estouro de pilha pode ser evitado usando uma técnica disponível em algumas linguagens de programação chamada *otimização de chamadas em cauda* (tail-call optimization, TCO). No entanto, essa técnica complica ainda mais a implementação da função recursiva. Para calcular fatoriais, a abordagem iterativa é a mais simples e direta.