# Algoritmos

## O que é um algoritmo?
**Donald Knuth** descreve um algoritmo como um processo definido, eficaz e finito que recebe entradas e produz saídas com base nessas entradas.

`Definição` significa que as etapas são claras, concisas e inequívocas. 

`Eficácia` significa que você pode realizar cada operação com precisão para resolver o problema. 

`Finitude` significa que o algoritmo para após um número finito de etapas.

Uma adição comum a esta lista é a `correção`. Um algoritmo deve sempre produzir a mesma saída para uma determinada entrada, e essa saída deve ser a resposta correta para o problema que o algoritmo resolve.

Segue um exemplo de pseudocódigo para calcular a média:

```
    // Início do algoritmo

    // Declaração das variáveis
    real nota1, nota2, media;

    // Leitura das notas
    escreva("Digite a primeira nota: ")
    leia(nota1)
    escreva("Digite a segunda nota: ")
    leia(nota2)

    // Cálculo da média
    media := (nota1 + nota2) / 2

    // Exibição da média
    escreva("A média das notas é: ", media)

    // Fim do algoritmo
```

Este pseudocódigo demonstra um algoritmo simples para calcular a média de duas notas.

## Análise de algoritmos:
Quando se trata de determinar qual é o melhor algoritmo para resolver um problema, pode ser uma tarefa complexa. Os algoritmos são avaliados com base em diversos critérios, incluindo simplicidade, eficiência e consumo de recursos.

Embora o tempo de execução seja uma métrica comum para avaliar algoritmos, ele pode ser afetado por várias variáveis, como o poder de processamento do computador e a linguagem de programação utilizada. Portanto, o tempo de execução isoladamente pode não ser uma métrica eficaz para comparar dois algoritmos.

Uma abordagem mais objetiva é observar o número de operações ou etapas que cada algoritmo realiza para resolver o problema. Isso proporciona uma medida mais independente do ambiente de execução.

O aspecto crucial a entender sobre um algoritmo não é o número exato de passos que ele executa, mas sim uma estimativa do número de passos à medida que o tamanho do input aumenta. Conforme o input aumenta, partes da equação podem se tornar insignificantes em comparação com outras, tornando o restante da equação irrelevante

Por exemplo, considere uma função que calcula o fatorial de um número em C:

```
    int calcularFatorial(int numero) {
        int resultado = 1;
        
        for (int i = 1; i <= numero; i++) {
            resultado *= i;
        }
        
        return resultado;
    }

```

Neste caso, o número de iterações do loop (determinado pelo valor do argumento numero) tem um impacto significativo no desempenho do algoritmo. À medida que numero aumenta, o número de iterações e o tempo de execução do algoritmo também aumentam. Enquanto a atribuição da variável resultado é uma operação simples e rápida em comparação com o loop, a eficiência geral do algoritmo é fortemente influenciada pelo valor de entrada. Neste contexto, é comum usar "n" como uma variável que representa o valor de entrada, e conforme "n" aumenta, a complexidade do algoritmo também aumenta.

Como a parte mais importante de um algoritmo é aquela que cresce mais rapidamente à medida que "n" aumenta, os cientistas da computação usam a notação Big O para expressar a eficiência de um algoritmo. A notação Big O é uma representação matemática que descreve como os requisitos de tempo ou espaço de um algoritmo aumentam à medida que o tamanho da entrada aumenta. Iremos falar mais sobre esse tema em ``asymptotic notation``.

## Tipós de Algoritmos:

Existem diferentes tipos de algoritmos, onde cada um tem sua respectiva estrutura e formato, projetados para lidar com uma variedade de problemas computacionais. A escolha do tipo de algoritmo mais apropriado depende da natureza do problema a ser resolvido e dos requisitos específicos de eficiência e desempenho.

### Algoritmos sequênciais 
Os algoritmos sequenciais são estruturas simples e diretas, compostas por uma série de passos ou instruções que são executadas em ordem, sem desvios ou repetições, até que o processo seja concluído. São ideais para resolver problemas que podem ser resolvidos seguindo uma sequência lógica de ações.


Observe um exemplo prático com um algoritmo básico de soma:


```
// Início do algoritmo
inicio:

// Declaração das variáveis
real numero1, numero2, soma;

// Entrada de dados
escreva("Digite o primeiro número: ")
leia(numero1)
escreva("Digite o segundo número: ")
leia(numero2)

// Cálculo da soma
soma := numero1 + numero2

// Saída de dados
escreva("A soma dos números é: ", soma)

// Fim do algoritmo
fim.

```

Neste exemplo, as instruções seguem uma ordem sequencial, iniciando com a declaração das variáveis necessárias, a entrada dos valores dos números fornecidos pelo usuário, o cálculo da soma desses números e, por fim, a exibição do resultado. É importante ressaltar que cada instrução é executada em ordem, sem desvios ou repetições, caracterizando a natureza linear dos algoritmos sequenciais.



### Algoritmos de Seleção

Os algoritmos de seleção são fundamentais quando há a necessidade de escolher uma opção específica entre várias possibilidades, tudo isso baseado em critérios ou condições predefinidas. São especialmente úteis em situações em que múltiplas alternativas estão disponíveis e uma decisão precisa ser tomada com base em um determinado critério.


Um exemplo prático é a instrução case, também conhecida como switch em algumas linguagens de programação. Nesse tipo de estrutura, um valor específico é avaliado e, dependendo do resultado, uma ação correspondente é executada. Aqui está um exemplo:


```
Escolha (valor)
    Caso 1:
        Faça algo
    Caso 2:
        Faça outra coisa
    Caso padrão:
        Faça alguma coisa padrão
Fim escolha

```

Neste caso, cada valor resultará em uma ação diferente, conforme especificado nos casos individuais. Essa abordagem oferece uma maneira clara e organizada de lidar com várias opções, tornando o código mais legível e fácil de entender.

### Algoritmos de Repetição

Os algoritmos de repetição permitem que uma instrução ou uma sequência de instruções seja executada mais de uma vez, quando necessário. Esses algoritmos são usados para automatizar tarefas repetitivas e lidar com conjuntos de dados. Para implementar repetições em um algoritmo, é necessário utilizar uma instrução de repetição.

Aqui está um exemplo de um contador usando a estrutura de repetição:


```
// Início do algoritmo

// Declaração da variável contador
inteiro contador

// Inicialização do contador
contador := 0

// Início do laço de repetição
Para cada valor de i de 1 até 10 faça
    // Incremento do contador
    contador := contador + 1
Fim do laço de repetição

// Exibição do resultado
Escreva("O valor do contador é: ", contador)

//

```

Neste exemplo, o algoritmo inicializa um contador como zero e, em seguida, utiliza um laço de repetição for para incrementar o contador de 1 a 10. Ao final do laço, o valor do contador é exibido. Este é um exemplo simples de como utilizar uma estrutura de repetição para contar.


### Algoritmos Recursivos


Um algoritmo recursivo é uma abordagem na qual um problema é resolvido ao dividi-lo em instâncias menores ou mais simples do próprio problema, repetindo esse processo até que essas instâncias atinjam um ponto onde possam ser resolvidas diretamente, sem mais subdivisões. Esse conceito é conhecido como recursão.

Na implementação de um algoritmo recursivo, uma função ou procedimento chama a si mesmo repetidamente, geralmente com argumentos ou parâmetros diferentes em cada chamada. Essa chamada recursiva continua até que o algoritmo atinja uma condição de parada, que é uma condição que determina quando a recursão deve ser encerrada.

É importante observar que, embora a recursão seja frequentemente utilizada em algoritmos recursivos, também é possível implementar esses algoritmos utilizando iterações, ou seja, utilizando estruturas de repetição. No entanto, a recursão é muitas vezes considerada mais clara e elegante para problemas que possuem uma natureza recursiva inerente, como aqueles relacionados a estruturas de dados recursivas ou problemas de divisão e conquista (que serão mencionados futuramente).

Aqui está um exemplo para calcular o fatorial de um número:

```
função fatorial(n)
    se n igual a 0 então
        retorne 1
    senão
        retorne n multiplicado pelo fatorial(n - 1)
    fim se
fim função

```

Neste exemplo, a função fatorial recebe um número n como argumento e retorna o fatorial desse número. Se o valor de `n` for 0, a função retorna 1, pois o fatorial de 0 é 1. Caso contrário, a função retorna n multiplicado pelo fatorial de `n - 1`, chamando a si mesma recursivamente até que `n` seja igual a 0.

## Técnicas de projeto de algoritmos

As técnicas de projeto de algoritmos são métodos sistemáticos e estratégias utilizadas para desenvolver algoritmos. Essas técnicas envolvem a aplicação de princípios de design e estruturação de algoritmos para garantir que eles sejam corretos, eficientes em termos de tempo e recursos, e fáceis de entender e manter.

### Dividir para conquistar


A estratégia "Dividir para Conquistar" é uma abordagem que visa decompor um problema complexo em partes menores e mais gerenciáveis. Esse processo de fragmentação facilita o controle e a resolução do problema, tornando mais acessível a conquista do objetivo final.

O método consiste em dividir o problema inicial em subproblemas menores e mais simples. Cada um desses subproblemas é então resolvido individualmente, muitas vezes utilizando técnicas recursivas. Posteriormente, as soluções dos subproblemas são combinadas para formar a solução completa do problema original.

Essa técnica é especialmente valiosa em algoritmos complexos, nos quais a simplificação do problema inicial é fundamental para uma abordagem eficiente. Ao dividir o problema em partes menores, os desenvolvedores podem lidar com cada subproblema de forma mais eficaz, o que tende a resultar em algoritmos mais eficientes e com melhor desempenho.

O Merge Sort exemplifica como a abordagem "Dividir para Conquistar" pode ser aplicada com sucesso para resolver problemas complexos de maneira eficiente.

```
#include <stdio.h>

// Função para mesclar duas sublistas ordenadas
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Cria subvetores temporários
    int L[n1], R[n2];

    // Copia os dados para os subvetores L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Mescla os subvetores de volta em arr[left..right]
    i = 0; // Índice inicial do primeiro subvetor
    j = 0; // Índice inicial do segundo subvetor
    k = left; // Índice inicial do vetor mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal que implementa o algoritmo Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Encontra o ponto médio do vetor
        int middle = left + (right - left) / 2;

        // Classifica a primeira metade
        mergeSort(arr, left, middle);
        // Classifica a segunda metade
        mergeSort(arr, middle + 1, right);

        // Mescla as duas metades ordenadas
        merge(arr, left, middle, right);
    }
}

// Função de utilidade para imprimir um vetor de tamanho n
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Programa principal
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nArray ordenado usando Merge Sort:\n");
    printArray(arr, arr_size);
    return 0;
}

```

Este código implementa o algoritmo Merge Sort em C. Ele classifica um array de inteiros em ordem crescente. O algoritmo é dividido em duas funções principais: mergeSort, que implementa a lógica de dividir e mesclar, e merge, que mescla duas sublistas ordenadas em uma única lista ordenada. O programa principal demonstra o uso do Merge Sort ordenando um array de exemplo e exibindo o resultado antes e depois da ordenação.


### Programação dinâmica

A programação dinâmica é uma técnica de desenvolvimento de algoritmos que busca resolver um problema complexo através da combinação de soluções para subproblemas menores. Essa abordagem permite otimizar a resolução de problemas que podem ser divididos em partes menores e mais simples.

Por exemplo, considere o problema de encontrar o menor caminho entre duas cidades em um mapa. Com a programação dinâmica, podemos seguir os seguintes passos:

1. Dividir o mapa em subproblemas menores, como encontrar o menor caminho entre cidades adjacentes.
2. Calcular o menor caminho entre cada par de cidades adjacentes utilizando uma técnica adequada, como o algoritmo de Dijkstra (será explicado posteriormente).
3. Utilizar as soluções pré-calculadas para encontrar o menor caminho entre as duas cidades desejadas.

Essa abordagem nos permite evitar recálculos desnecessários e otimizar o processo de encontrar o menor caminho entre as cidades, tornando a solução mais eficiente e escalável.



