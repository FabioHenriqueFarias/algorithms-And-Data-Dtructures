# Algoritmos de Recursão Clássicos

## Sumário

- [Somando números em uma matriz](#somando-números-em-uma-matriz)

Vamos começar com três algoritmos simples: somar os números em um array, inverter uma string de texto e detectar se uma string é um palíndromo. Em seguida, exploramos um algoritmo para resolver o quebra-cabeça da Torre de Hanói, implementamos o algoritmo de preenchimento de regiões em desenhos e abordamos a complexa função de Ackermann, que é altamente recursiva.

Durante esse processo, você aprenderá sobre a técnica "head-tail" para dividir os dados nos argumentos da função recursiva. Além disso, faremos três perguntas cruciais ao tentar encontrar soluções recursivas:

1. Qual é o caso base?
2. Qual argumento é passado para a chamada de função recursiva?
3. Como os argumentos passados para as chamadas de função recursivas se aproximam do caso base?

À medida que você ganha mais experiência, responder a essas perguntas se tornará mais natural e intuitivo.

## Somando números em uma matriz

Nosso primeiro exemplo é simples: dada uma lista ou um array de inteiros, retorne a soma total de todos os inteiros. Por exemplo, uma chamada como ```sum([5, 2, 4, 8])``` deveria retornar **19**.

Embora isso seja fácil de resolver com um loop, resolvê-lo com recursão requer um pouco mais de reflexão. Como discutido anteriormente, você pode perceber que este algoritmo não se adapta bem à recursão a ponto de justificar a complexidade adicional. No entanto, somar números em uma lista (ou realizar outros cálculos baseados no processamento de dados em uma estrutura linear) é um problema comum em entrevistas de programação e merece nossa atenção.

