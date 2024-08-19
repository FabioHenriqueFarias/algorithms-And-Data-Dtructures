# Hash Table

## Sumário 

- [O que é uma Hash Table?](#o-que-é-uma-hash-table)
   - [O que é um Array Associativo?](#o-que-é-um-array-associativo)
   - [O que é Hashing?](#o-que-é-hashing)
      - [Exemplo de uma Função Hash](#exemplo-de-uma-função-hash)
   - [Fator de Carga](#fator-de-carga)
   - [Colisões](#colisões)
      - [Exemplo de Colisão](#exemplo-de-colisão)
      - [Formas de Tratar uma colisão](#formas-de-tratar-uma-colisão)
         - [Encadeamento Separado](#encadeamento-separado)
         - [Endereçamento Aberto](#endereçamento-aberto)
- [Usos de uma Hash Table:](#usos-de-uma-hash-table)
- [Operações comuns em Hash Table](#operações-comuns-em-hash-table)
  - [Inserção](#inserção)
    - [Complexidade da Inserção](#complexidade-da-inserção)
  - [Remoção](#remoção)
    - [Complexidade da Remoção](#complexidade-da-remoção)
  - [Pesquisa](#pesquisa)
    - [Complexidade da Pesquisa](#complexidade-da-pesquisa)
   - [Complexidades](#complexidades)
- [Implementações](#implementações)
- [Referências](#referências)

## O que é uma Hash Table?

Uma **tabela hash** é uma implementação específica de um tipo de dado abstrato chamado **array associativo**. Dentre várias maneiras de implementar um array associativo, uma das mais comuns é através de uma tabela hash.

Uma tabela hash é uma estrutura de dados usada para inserir, procurar e remover pares de chave-valor rapidamente. Ela opera com base no conceito de **hashing**, onde cada chave é transformada por uma função hash em um índice distinto em um array. Esse índice funciona como um local de armazenamento para o valor correspondente. Em termos simples, a tabela hash mapeia as chaves aos valores, permitindo um acesso eficiente e rápido aos dados associados.

Uma boa tabela hash possui um **fator de carga** equilibrado, normalmente entre 0 e 1. O fator de carga é a relação entre o número de elementos armazenados e o tamanho total da tabela. Se o fator de carga for muito alto, a tabela pode ficar desorganizada, resultando em tempos de busca mais longos e mais **colisões**. Por outro lado, um fator de carga muito baixo pode ser um desperdício de memória. Manter um fator de carga ideal envolve o uso de uma função hash eficiente e o redimensionamento adequado da tabela conforme necessário.

### O que é um Array Associativo?

Um **array associativo**, também conhecido como **mapa**, **dicionário** ou **tabela de símbolos**, é uma estrutura de dados que armazena pares de chave-valor. Essa estrutura permite que os valores sejam acessados, manipulados e gerenciados de forma eficiente usando suas chaves associadas.

Um par chave-valor consiste em dois elementos relacionados: uma **chave** e um **valor**. A **chave** é o identificador único usado para recuperar o **valor** correspondente. O **valor** é o dado associado à chave, que pode ser recuperado e utilizado através da chave específica.


Você pode pensar em um array associativo como uma lista de contatos telefônicos. Nessa lista, você pode procurar o número de telefone de uma pessoa encontrando seu nome. O nome é a chave e o número de telefone é o valor. A tabela abaixo ilustra como essa lista de contatos seria organizada:

| Nome        | Número de Telefone  |
|-------------|----------------------|
| Alice       | (11) 1234-5678       |
| Bob         | (21) 8765-4321       |
| Carol       | (31) 5555-1234       |
| Dave        | (41) 9876-5432       |

Arrays associativos possuem duas propriedades importantes: cada chave é única e cada chave mapeia para um único valor. Assim como em um diretório telefônico onde cada número de telefone só pode aparecer uma vez, em um array associativo, cada chave também deve ser única. 

Da mesma forma, cada número de telefone no diretório se refere a uma única pessoa, e cada chave em um array associativo mapeia para um único valor. No entanto, é possível que o mesmo valor seja associado a diferentes chaves. 

Por exemplo, duas pessoas podem ter o mesmo número de telefone na lista, então é importante lembrar que um valor pode aparecer várias vezes em um array associativo, mas cada chave será exclusiva.

### O que é Hashing?

Hashing é uma técnica utilizada para mapear dados de tamanho arbitrário para dados de tamanho fixo. Esse mapeamento é feito usando fórmulas matemáticas conhecidas como funções hash. O resultado da função hash é um valor hash, que geralmente é utilizado como um índice em uma tabela hash (hash table) para facilitar a busca, inserção e remoção de dados.

A **função hash**  recebe uma entrada (chave) e retorna um valor numérico, que é o índice na tabela hash onde o valor associado à chave será armazenado, idealmente, uma boa função hash distribui as chaves de forma uniforme na tabela, minimizando colisões.


#### Exemplo de uma Função Hash

Vamos considerar uma função hash simples que usa o operador módulo 10 para calcular o índice na tabela hash. A função hash é definida como:

```plaintext
hash(key) = key % 10
```

Dado o array `[11, 13, 40, 72]`, vamos inseri-los em uma tabela hash de tamanho 10. A tabela hash inicialmente está vazia e será representada por um array de tamanho 10 com todos os valores zerados.

1. **Inserir chave 11**:
   - Calcule o índice: `11 % 10 = 1`.
   - Armazene o valor 11 na posição 1 da tabela hash.
   
   ```plaintext
   hash table: [0, 11, 0, 0, 0, 0, 0, 0, 0, 0]
   ```

2. **Inserir chave 13**:
   - Calcule o índice: `13 % 10 = 3`.
   - Armazene o valor 13 na posição 3 da tabela hash.

   ```plaintext
   hash table: [0, 11, 0, 13, 0, 0, 0, 0, 0, 0]
   ```

3. **Inserir chave 40**:
   - Calcule o índice: `40 % 10 = 0`.
   - Armazene o valor 40 na posição 0 da tabela hash.

   ```plaintext
   hash table: [40, 11, 0, 13, 0, 0, 0, 0, 0, 0]
   ```

4. **Inserir chave 72**:
   - Calcule o índice: `72 % 10 = 2`.
   - Armazene o valor 72 na posição 2 da tabela hash.

   ```plaintext
   hash table: [40, 11, 72, 13, 0, 0, 0, 0, 0, 0]
   ```

**Tabela Hash Resultante:**

```plaintext
Índice | Valores
-------|--------
  0    | 40
  1    | 11
  2    | 72
  3    | 13
  4    | 0
  5    | 0
  6    | 0
  7    | 0
  8    | 0
  9    | 0
```



---

### O que é Fator de Carga  

O **fator de carga** \(α\) é uma métrica que indica a densidade de uma tabela hash. Ele é calculado pela fórmula:

```α = m/n```​

Onde:
- \(n\) é o número de elementos (pares de chave-valor) armazenados na tabela.
- \(m\) é o tamanho do array subjacente.

Um fator de carga muito alto significa que a tabela está cheia e, portanto, pode haver muitas colisões, o que degrada a eficiência da tabela. Por outro lado, um fator de carga muito baixo significa que há muito espaço não utilizado, resultando em desperdício de memória. O ideal é manter o fator de carga em um equilíbrio que permita um bom desempenho, geralmente em torno de 0,7.

### Colisões

Uma **colisão** ocorre quando duas chaves diferentes são mapeadas para o mesmo índice na tabela hash. Isso é inevitável devido ao princípio da **Pomba-Gale** (ou princípio da casa dos pombos), que afirma que se mais de \( n \) itens forem colocados em \( m \) compartimentos (com \( n > m \)), pelo menos um compartimento terá mais de um item.

#### Exemplo de Colisão

Vamos supor que temos uma tabela hash com um array de tamanho 10 e usamos uma função hash simples que calcula o índice tomando o valor da chave módulo 10.

```plaintext
hash_function(key) = key % 10
```

Vamos inserir as seguintes chaves: 12, 22 e 32.

1. **Inserir a chave 12**:
   - `hash_function(12) = 12 % 10 = 2`
   - A chave 12 é armazenada no índice 2.

2. **Inserir a chave 22**:
   - `hash_function(22) = 22 % 10 = 2`
   - A chave 22 também é mapeada para o índice 2.
   - Temos uma colisão porque o índice 2 já está ocupado pela chave 12.

3. **Inserir a chave 32**:
   - `hash_function(32) = 32 % 10 = 2`
   - A chave 32 é mapeada para o mesmo índice 2.
   - Novamente, temos uma colisão porque o índice 2 já está ocupado pelas chaves 12 e 22.


#### Formas de Tratar uma colisão

Quando ocorre uma colisão em uma tabela hash, ou seja, quando dois elementos distintos mapeiam para o mesmo índice na tabela, é essencial implementar uma estratégia para resolver esse conflito. As duas abordagens mais comuns para lidar com colisões são **Encadeamento** e **Endereçamento Aberto**.

##### Encadeamento Separado

No encadeamento separado, o crescimento das listas encadeadas nos índices da tabela permite que a tabela hash continue operando de forma eficiente, mesmo quando ocorrem múltiplas colisões. Isso significa que, independentemente do número de chaves diferentes mapeadas para o mesmo índice, a tabela pode armazenar vários pares de chave-valor em cada posição. No entanto, se essas listas encadeadas se tornarem muito longas, o desempenho da tabela pode ser comprometido, já que o tempo necessário para buscar ou remover um elemento aumenta proporcionalmente ao tamanho da lista.

Esse processo funciona porque, quando um novo valor é inserido e ocorre uma colisão — ou seja, o índice gerado já está ocupado por outro valor — uma lista encadeada é criada naquele índice. Dessa forma, o novo valor é armazenado na lista associada e pode ser acessado de maneira eficiente, sem sobrescrever o valor anterior.

O termo "encadeamento separado" refere-se ao fato de que, ao ocorrer uma colisão, o valor não é armazenado diretamente na tabela hash, mas em uma lista encadeada "separada", associada ao índice correspondente. Isso mantém a tabela hash organizada, permitindo que cada índice armazene múltiplos elementos sem comprometer a integridade dos dados, mesmo com um aumento no número de colisões.

No entanto, se uma lista encadeada em um determinado índice se tornar excepcionalmente grande, o desempenho da estrutura como um todo pode ser afetado, já que a busca e a remoção de elementos nessa lista específica se tornam mais lentas, comprometendo a eficiência da tabela hash.

**Exemplo**

Imagine que estamos armazenando informações de alunos, onde a chave é o número de matrícula do aluno e o valor é o nome do aluno.

1. **Inserindo chaves**:

   Vamos inserir as seguintes chaves (números de matrícula): 12, 22, 32 e 42.

   - 12: A função hash calcula o índice como 12 % 10 = 2. A chave 12 é armazenada no índice 2.

   - 22: A função hash calcula o índice como 22 % 10 = 2. Aqui ocorre uma colisão, pois o índice 2 já está ocupado pela chave 12. No encadeamento separado, 22 é armazenado em uma lista encadeada no índice 2.

   - 32: Novamente, a função hash calcula o índice como 32 % 10 = 2. Outra colisão ocorre, e 32 é adicionado à lista encadeada no índice 2.

   - 42: A função hash calcula o índice como 42 % 10 = 2. Mais uma colisão ocorre, e 42 é também adicionado à lista encadeada no índice 2.

2. **Estrutura da Tabela**

   ```plaintext
   Índice | Valores
   -------|--------
   0    | 
   1    | 
   2    | [12, 22, 32 e 42]
   3    | 
   4    | 
   5    | 
   6    | 
   7    | 
   8    | 
   9    | 
   ```


##### Endereçamento Aberto

O endereçamento aberto é uma técnica de tratamento de colisões em tabelas hash, onde, ao ocorrer uma colisão (quando duas ou mais chaves são mapeadas para o mesmo slot), o algoritmo busca por outro slot vazio na tabela para armazenar a chave que colidiu.

Existem diferentes métodos para encontrar esse próximo espaço de armazenamento:

- Sondagem Linear
- Sondagem Quadrática
- Hash Duplo


**Sondagem Linear**

A sondagem linear é uma técnica usada para resolver colisões em tabelas hash. Quando ocorre uma colisão — ou seja, quando duas chaves são mapeadas para o mesmo índice pela função hash —, a sondagem linear busca o próximo índice disponível de forma sequencial. Em vez de tentar resolver a colisão diretamente no índice original, a técnica verifica os índices subsequentes na tabela, um por um, até encontrar uma posição vazia onde a nova chave pode ser inserida.

Para gerenciar a ocupação e a disponibilidade das posições na tabela, é possível marcar as posições com valores específicos. Inicialmente, todas as posições do vetor podem ser marcadas com -1 para indicar que estão vazias. Quando uma chave é inserida em uma posição, ela é ocupada com o valor correspondente. Se uma chave for removida, a posição pode ser marcada com -2 para indicar que está disponível para futuras inserções, mas que anteriormente estava ocupada.

**Sondagem Quadrática**

**Hash Duplo**

**Exemplo**



## Usos de uma Hash Table

As tabelas hash são amplamente utilizadas devido à sua eficiência, oferecendo operações de busca, inserção e exclusão com complexidade média de O(1). Isso significa que, na maioria dos casos, essas operações podem ser realizadas em tempo constante, independentemente do tamanho do conjunto de dados. 

No entanto, no pior cenário, colisões podem ocorrer, o que pode degradar o desempenho dessas operações para O(n). Apesar desse risco, as tabelas hash continuam sendo uma das estruturas de dados mais eficazes para armazenar grandes volumes de informações.

A eficiência das tabelas hash se deve ao fato de que, para determinar se um dado está presente, basta passar a chave pela função hash e acessar o índice correspondente na matriz subjacente. Essa abordagem de busca em tempo constante torna as tabelas hash a escolha ideal para aplicações onde a velocidade de acesso aos dados é crucial. 

Quando se trabalha com grandes conjuntos de dados, a capacidade de realizar operações de busca de forma instantânea, sem a necessidade de percorrer ou ordenar os dados, proporciona uma vantagem significativa em termos de desempenho.

## Operações comuns em Hash Table

Diversas operações podem ser realizadas em uma estrutura de dados **Tabela Hash**. Entre as principais, estão:

### Inserção

A operação de inserção, comumente chamada de `put`, adiciona um novo elemento à tabela hash. A posição desse elemento é determinada pela aplicação de uma função hash à sua chave, que gera um índice correspondente na tabela. Se o índice já estiver ocupado por outro elemento (uma colisão), diversas estratégias podem ser empregadas para resolver o conflito, como encadeamento ou endereçamento aberto, conforme mencionado anteriormente.

#### Complexidade da Inserção

### Remoção

#### Complexidade da Remoção

### Pesquisa

#### Complexidade da Pesquisa

### Complexidades

## Implementações

## Referências
