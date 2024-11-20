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
      - [Excluindo Itens em Tabelas Hash com Colisão](#excluindo-itens-em-tabelas-hash-com-colisão)
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

Arrays associativos possuem duas propriedades importantes: cada chave é única e cada chave mapeia para um único valor. Assim como em um diretório telefônico, onde cada nome de pessoa é único e está associado a um único número de telefone, em um array associativo, cada chave é única e está associada a um único valor.

Da mesma forma que um número de telefone em um diretório se refere a apenas uma pessoa, uma chave em um array associativo aponta para apenas um valor. No entanto, em um array associativo, o mesmo valor pode ser associado a diferentes chaves.

Por exemplo, imagine um array que armazena informações sobre livros. A chave poderia ser o título do livro e o valor, o autor. Nesse caso, dois livros diferentes poderiam ter o mesmo autor (mesmo valor), mas cada título (chave) seria único.

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




---

### O que é Fator de Carga  

O **fator de carga** \(α\) é uma métrica que indica a densidade de uma tabela hash. Ele é calculado pela fórmula:

```α = m/n```​

Onde:
- \(n\) é o número de elementos (pares de chave-valor) armazenados na tabela.
- \(m\) é o tamanho do array subjacente.

Um fator de carga muito alto significa que a tabela está cheia e, portanto, pode haver muitas colisões, o que degrada a eficiência da tabela. Por outro lado, um fator de carga muito baixo significa que há muito espaço não utilizado, resultando em desperdício de memória. O ideal é manter o fator de carga em um equilíbrio que permita um bom desempenho, geralmente em torno de 0,7.

### Colisões

Uma **colisão** ocorre quando duas chaves diferentes são mapeadas para o mesmo índice na tabela hash. Isso é inevitável devido ao princípio da **Pomba-Gale** (ou princípio da casa dos pombos), que afirma que se mais de \( n \) itens forem colocados em \( m \) compartimentos com \( n > m \), pelo menos um compartimento terá mais de um item.

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

      Após a inserção dessas chaves, a tabela hash fica organizada da seguinte forma:


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


##### Endereçamento Aberto

O endereçamento aberto é uma técnica de tratamento de colisões em tabelas hash, onde, ao ocorrer uma colisão (quando duas ou mais chaves são mapeadas para o mesmo slot), o algoritmo busca por outro slot vazio na tabela para armazenar a chave que colidiu.

Existem diferentes métodos para encontrar esse próximo espaço de armazenamento:

- Sondagem Linear
- Sondagem Quadrática
- Hash Duplo


**Sondagem Linear**

A sondagem linear é uma técnica usada para resolver colisões em tabelas hash. Quando ocorre uma colisão — ou seja, quando duas chaves são mapeadas para o mesmo índice pela função hash —, a sondagem linear busca o próximo índice disponível de forma sequencial. Em vez de tentar resolver a colisão diretamente no índice original, a técnica verifica os índices subsequentes na tabela, um por um, até encontrar uma posição vazia onde a nova chave pode ser inserida.

Para gerenciar a ocupação e a disponibilidade das posições na tabela, é possível marcar as posições com valores específicos. Inicialmente, todas as posições do vetor podem ser marcadas com -1 para indicar que estão vazias. Quando uma chave é inserida em uma posição, ela é ocupada com o valor correspondente. Se uma chave for removida, a posição pode ser marcada com -2 para indicar que está disponível para futuras inserções, mas que anteriormente estava ocupada.

**Exemplo**

Vamos imaginar uma tabela hash com um tamanho de 10, onde inicialmente todos os índices estão marcados como -1, indicando que estão vazios. A função hash usada é key % 10, que calcula o índice a partir da chave dividindo-a pelo tamanho da tabela e pegando o resto da divisão.

1. **Inserindo chaves**:

   Vamos inserir as seguintes chaves: 12, 22, 32 e 42.

   - 12: A função hash calcula 12 % 10 = 2. O índice 2 está vazio (marcado como -1), então a chave 12 é inserida no índice 2.

   - 22: A função hash calcula 22 % 10 = 2. O índice 2 já está ocupado pela chave 12, então ocorre uma colisão. A sondagem linear verifica o próximo índice, que é o índice 3, e encontra que está vazio (marcado como -1). A chave 22 é inserida no índice 3.

   - 32: A função hash calcula 32 % 10 = 2. O índice 2 está ocupado pela chave 12, e o índice 3 está ocupado pela chave 22, resultando em mais uma colisão. A sondagem linear verifica o próximo índice, que é o índice 4, e encontra que está vazio (marcado como -1). A chave 32 é inserida no índice 4.

   - 42: A função hash calcula 42 % 10 = 2. Os índices 2, 3 e 4 estão ocupados pelas chaves 12, 22 e 32, respectivamente, gerando colisões sucessivas. A sondagem linear verifica o índice 5, que está vazio, e a chave 42 é inserida nesse índice.

2. **Estrutura da Tabela**

      Após a inserção dessas chaves, a tabela hash fica organizada da seguinte forma:


   | Índice | Valor |
   |--------|-------|
      0    | -1
      1    | -1
      2    | 12
      3    | -2
      4    | 32
      5    | 42
      6    | -1
      7    | -1
      8    | -1
      9    | -1



**Sondagem Quadrática**

A sondagem quadrática é uma técnica usada para resolver colisões em tabelas hash de forma mais eficiente que a sondagem linear. Quando ocorre uma colisão — ou seja, quando duas chaves são mapeadas para o mesmo índice pela função hash —, a sondagem quadrática procura o próximo índice disponível seguindo um padrão quadrático, em vez de seguir de forma sequencial como na sondagem linear. Isso significa que, em vez de verificar os índices subsequentes um a um, a técnica verifica posições que são progressivamente mais afastadas do índice original.

Esse método é eficaz para reduzir o problema do agrupamento primário, que pode ocorrer na sondagem linear, onde muitos valores acabam se acumulando em uma sequência contínua de índices. Na sondagem quadrática, os índices subsequentes são calculados como uma função do número da sondagem elevada ao quadrado, o que espalha as chaves de forma mais uniforme na tabela.

**Exemplo**

Vamos imaginar uma tabela hash com um tamanho de 10, onde inicialmente todos os índices estão marcados como -1, indicando que estão vazios. Vamos usar uma função hash simples `h(k) = k % 10` para calcular o índice a partir da chave, e aplicar a sondagem quadrática para resolver colisões. Na sondagem quadrática, se a posição calculada estiver ocupada, verificamos as próximas posições usando o padrão quadrático: `(i^2)` onde i é o número da tentativa de sondagem.


1. **Inserindo chaves**:

   Vamos inserir as seguintes chaves: 12, 22, 32.

   - A função hash calcula 12 % 10 = 2. O índice 2 está vazio (marcado como -1), então a chave 12 é inserida no índice 2.

   - A função hash calcula 22 % 10 = 2. O índice 2 já está ocupado pela chave 12, então ocorre uma colisão. Com a sondagem quadrática, verificamos o próximo índice usando (1^2) = 1, o que nos leva ao índice (2 + 1 = 3). O índice 3 está vazio (marcado como -1), então a chave 22 é inserida no índice 3.

   - A função hash calcula 32 % 10 = 2. O índice 2 está ocupado pela chave 12, e o índice 3 está ocupado pela chave 22, resultando em mais uma colisão. Com a sondagem quadrática, verificamos o próximo índice usando (1^2) = 1 que nos leva ao índice (2 + 1 = 3), que também está ocupado. Agora usamos (2^2) = 4, o que nos leva ao índice (2 + 4 = 6). O índice 6 está vazio, então a chave 32 é inserida no índice 6.



2. **Estrutura da Tabela**

   Após as inserções, a estrutura da tabela hash é a seguinte:


   | Índice | Valor |
   |--------|-------|
   |   0    |  -1   |
   |   1    |  -1   |
   |   2    |  12   |
   |   3    |  22   |
   |   4    |  -1   |
   |   5    |  -1   |
   |   6    |  32   |
   |   7    |  -1   |
   |   8    |  -1   |
   |   9    |  -1   |



**Hash Duplo**

O hash duplo é uma técnica eficiente de resolução de colisões em tabelas hash. Ele funciona utilizando duas funções hash diferentes: uma para calcular o índice inicial e outra para determinar o passo de sondagem em caso de colisões. Esse método busca melhorar a distribuição de chaves na tabela, evitando o agrupamento de colisões que ocorre em técnicas como a sondagem linear e a quadrática.

No hash duplo, a primeira função hash calcula o índice base da chave na tabela, assim como em outras técnicas de hashing. No entanto, se ocorrer uma colisão — ou seja, se esse índice já estiver ocupado por outra chave —, a segunda função hash entra em ação. Ela calcula um valor que será usado como o tamanho do passo para a sondagem. Isso significa que, ao invés de buscar sequencialmente ou de maneira quadrática pelo próximo índice disponível, o algoritmo "pula" de acordo com o valor calculado pela segunda função hash, espalhando as tentativas de inserção de forma mais eficiente.

A vantagem do hash duplo é que ele reduz significativamente a probabilidade de colisões recorrentes. Como o segundo valor de sondagem é gerado por uma função hash distinta, as chaves que colidem inicialmente têm maior chance de serem distribuídas em índices diferentes ao longo da tabela, resultando em uma dispersão mais uniforme. Isso melhora o desempenho geral das operações de busca e inserção, tornando-as mais rápidas em comparação com outras técnicas.

Apesar de sua eficiência, o hash duplo apresenta alguns desafios. Um deles é a necessidade de escolher duas boas funções hash, pois o desempenho do algoritmo depende diretamente da qualidade dessas funções. Se ambas as funções hash não forem adequadamente projetadas, a tabela pode continuar a ter muitas colisões, comprometendo o desempenho. Além disso, o uso de duas funções hash aumenta a complexidade computacional, tornando as operações de inserção e busca um pouco mais custosas em termos de tempo de processamento.


**Exemplo**

Vamos imaginar uma tabela hash de tamanho 10, onde inicialmente todos os índices estão marcados como -1, indicando que estão vazios. Para este exemplo de hash duplo, usaremos duas funções hash diferentes:

- A primeira função hash será `h1(k) = k % 10`, que nos dará o índice inicial para a chave.
- A segunda função hash, usada para calcular o tamanho do passo de sondagem em caso de colisão, será `h2(k) = 7 - (k % 7)`. Essa segunda função garante que o passo de sondagem seja diferente para cada chave.


1. **Inserindo chaves**:
   Vamos inserir as seguintes chaves: 12, 22, 32.

   - Para a chave 12:

      - A primeira função hash calcula 12 % 10 = 2. O índice 2 está vazio (marcado como -1), então a chave 12 é inserida no índice 2.
   
   - Para a chave 22:

      - A primeira função hash calcula 22 % 10 = 2. O índice 2 já está ocupado pela chave 12, então ocorre uma colisão.
      - Agora usamos a segunda função hash para calcular o tamanho do passo de sondagem: h2(22) = 7 - (22 % 7) = 7 - 1 = 6. Isso significa que devemos verificar o índice (2 + 6) % 10 = 8.
      - O índice 8 está vazio (marcado como -1), então a chave 22 é inserida no índice 8.
   
   - Para a chave 32:

      - A primeira função hash calcula 32 % 10 = 2. O índice 2 está ocupado pela chave 12, então ocorre uma colisão.
      - Usamos a segunda função hash para calcular o passo de sondagem: h2(32) = 7 - (32 % 7) = 7 - 4 = 3. Isso significa que devemos verificar o índice (2 + 3) % 10 = 5.
      - O índice 5 está vazio (marcado como -1), então a chave 32 é inserida no índice 5.

2. Estrutura da Tabela

   Após as inserções, a estrutura da tabela hash é a seguinte:


   | Índice | Valor |
   |--------|-------|
   |   0    |  -1   |
   |   1    |  -1   |
   |   2    |  12   |
   |   3    |  -1   |
   |   4    |  -1   |
   |   5    |  32   |
   |   6    |  -1   |
   |   7    |  -1   |
   |   8    |  22   |
   |   9    |  -1   |


####  Excluindo Itens em Tabelas Hash com Colisão

Quando ocorre uma colisão e é necessário excluir um item, a forma de remoção dependerá da técnica de resolução de colisão utilizada: **encadeamento aberto** (como sondagem linear, quadrática ou hash duplo) ou **encadeamento fechado** (também conhecido como encadeamento separado). No encadeamento aberto, a exclusão envolve marcar o item removido com um indicador especial, como `-2`, para preservar a continuidade da sondagem nas buscas futuras. Já no encadeamento fechado, o item é removido diretamente da lista encadeada associada ao índice correspondente, sem afetar os outros itens.

1. **Encadeamento Separado**

   No **encadeamento separado**, cada posição da tabela hash armazena uma lista ou estrutura encadeada que contém todas as chaves que colidem no mesmo índice. Quando várias chaves mapeiam para o mesmo índice, elas são armazenadas nessa lista.

   - **Remoção**: Para remover uma chave, aplicamos a função hash para identificar o índice. Se houver uma lista encadeada no índice, percorremos essa lista até encontrar a chave correspondente. Após localizá-la, removemos o elemento da lista. Se a lista ficar vazia após a remoção, o índice ainda permanece ocupado, mas sem elementos.

   **Exemplo**:
   - Imagine uma tabela hash de tamanho 10, com chaves `12`, `22` e `32` armazenadas no índice 2. A tabela ficaria assim:
   
   ```
   Índice 2: [12, 22, 32]
   ```

   - Se quisermos remover a chave `22`, aplicamos a função hash, identificamos o índice 2 e percorremos a lista até encontrar o valor `22`. Após remover o valor, a tabela ficará assim:
   
   ```
   Índice 2: [12, 32]
   ```

   A lista no índice 2 permanece intacta com os elementos restantes.

<br>

2. **Encadeamento Aberto**

   No **encadeamento aberto**, as colisões são tratadas dentro da própria tabela hash, utilizando diferentes técnicas de sondagem (linear, quadrática ou hash duplo) para encontrar um espaço disponível. Ao remover um item em encadeamento aberto, é essencial garantir que a busca e inserção futuras ainda possam percorrer a tabela corretamente.

   #### a) **Sondagem Linear**

   Na sondagem linear, quando uma colisão ocorre, verificamos sequencialmente os próximos índices até encontrar um vazio. A remoção segue um processo semelhante.

   - **Remoção**: Ao remover uma chave, localizamos a posição através de sondagem linear e marcamos o índice como removido (geralmente usando um marcador especial, como `-2`). Esse marcador indica que o espaço estava ocupado, mas agora está disponível para futuras inserções, sem quebrar a sequência de sondagem durante uma busca.

   **Exemplo**:
   - Se a chave `12` é inserida no índice 2 e a chave `22` colidir com `12`, ela será inserida no índice 3 após sondagem linear. A tabela ficaria assim:
   
   ```
   Índice 2: 12
   Índice 3: 22
   ```

   - Se removemos `22`, o índice 3 será marcado com `-2`:

   ```
   Índice 2: 12
   Índice 3: -2
   ```

   Futuras buscas por elementos que sofreram colisão continuarão funcionando corretamente graças ao marcador especial `-2`, que indica uma posição previamente ocupada e agora vazia. A busca só será encerrada quando encontrar o marcador `-1`, que sinaliza que o índice está realmente vazio e que nenhum elemento foi armazenado ali anteriormente. Isso permite que o algoritmo de sondagem continue percorrendo a tabela sem interrupções até localizar o elemento desejado ou confirmar que ele não está presente.

   ---

   #### b) **Sondagem Quadrática**

   Na sondagem quadrática, a sequência de sondagem segue um padrão quadrático, ou seja, a distância dos índices verificados aumenta com o quadrado do número de tentativas.

   - **Remoção**: Assim como na sondagem linear, a chave é removida e o espaço é marcado como `-2`. A busca segue o padrão quadrático para garantir que o comportamento de sondagem se mantenha eficiente.

   **Exemplo**:
   - Se a chave `12` está no índice 2, e `22` colide com `12`, verificamos o próximo índice usando a fórmula `(i^2)`, levando ao índice 3. Se o índice 3 estiver ocupado, tentamos `(2^2)`, levando ao índice 6. A tabela ficaria assim:

   ```
   Índice 2: 12
   Índice 6: 22
   ```

   - Ao remover `22`, o índice 6 será marcado como `-2`:

   ```
   Índice 2: 12
   Índice 6: -2
   ```

   ---

   #### c) **Hash Duplo**

   No hash duplo, utilizamos duas funções hash diferentes. A primeira função calcula o índice inicial, e a segunda função determina o deslocamento de sondagem em caso de colisão.

   - **Remoção**: Para remover uma chave, utilizamos a primeira função hash para localizar o índice, e, em caso de colisão, usamos a segunda função hash para continuar a busca. Quando a chave é removida, o índice é marcado como `-2`, para não interromper futuras inserções e buscas.

   **Exemplo**:                                                                                                        
   - Usando a função hash `h1(k) = k % 10` e `h2(k) = 1 + (k % 7)` para o deslocamento, se `12` for mapeado para o índice 2 e `22` colidir com `12`, verificamos a segunda função para determinar o deslocamento. Supondo que `h2(22) = 4`, a chave `22` será inserida no índice `2 + 4 = 6`.

   ```
   Índice 2: 12
   Índice 6: 22       
   ```

   - Após remover `22`, o índice 6 será marcado como `-2`:

   ```
   Índice 2: 12
   Índice 6: -2
   ```

## Usos de uma Hash Table

As tabelas hash são amplamente utilizadas devido à sua eficiência, oferecendo operações de busca, inserção e exclusão com complexidade média de O(1). Isso significa que, na maioria dos casos, essas operações podem ser realizadas em tempo constante, independentemente do tamanho do conjunto de dados. 

No entanto, no pior cenário, colisões podem ocorrer, o que pode degradar o desempenho dessas operações para O(n). Apesar desse risco, as tabelas hash continuam sendo uma das estruturas de dados mais eficazes para armazenar grandes volumes de informações.

A eficiência das tabelas hash se deve ao fato de que, para determinar se um dado está presente, basta passar a chave pela função hash e acessar o índice correspondente na matriz subjacente. Essa abordagem de busca em tempo constante torna as tabelas hash a escolha ideal para aplicações onde a velocidade de acesso aos dados é crucial. 

Quando se trabalha com grandes conjuntos de dados, a capacidade de realizar operações de busca de forma instantânea, sem a necessidade de percorrer ou ordenar os dados, proporciona uma vantagem significativa em termos de desempenho.

## Operações comuns em Hash Table

Diversas operações podem ser realizadas em uma estrutura de dados **Tabela Hash**. Entre as principais, estão:

### Inserção

A operação de inserção, comumente chamada de `insert`, insere um novo elemento na tabela hash. A posição do elemento é determinada pela aplicação de uma função hash à sua chave, que gera um índice correspondente na tabela. Se o índice já estiver ocupado por outro elemento (uma colisão), diferentes estratégias podem ser aplicadas para resolver o conflito, como encadeamento ou endereçamento aberto, conforme discutido anteriormente.

#### Complexidade da Inserção

A inserção em uma tabela hash, realizada pela função `insert`, geralmente possui complexidade de tempo constante no **melhor caso**, ou seja, O(1). Isso significa que o número de operações para inserir um elemento não aumenta com o número total de elementos na tabela. Assim, a inserção ocorre em tempo constante, desde que não haja colisões.

No **pior caso**, quando há muitas colisões ou a tabela está muito cheia (no caso de endereçamento aberto), ou quando as listas encadeadas ficam longas (no caso de encadeamento), a complexidade pode degradar para O(n), onde *n* é o número total de elementos na tabela. Isso acontece porque, no encadeamento, pode ser necessário percorrer uma lista de elementos no índice correspondente, e, no endereçamento aberto, podem ser necessárias várias sondagens para encontrar um espaço livre ou o local correto para inserção.

### Remoção

A operação de remoção, comumente chamada de `delete`, remove um elemento da tabela hash. A posição do elemento é determinada aplicando a função hash à sua chave, o que gera o índice correspondente na tabela. Se o índice calculado estiver ocupado pelo elemento que queremos remover, o processo é simples: o elemento é removido e o slot é marcado como disponível, geralmente com um valor especial, como `-2`, para indicar que estava ocupado, mas agora está livre para novas inserções.

#### Complexidade da Remoção

A remoção em uma tabela hash, realizada pela operação `delete`, geralmente possui complexidade de tempo constante, ou seja, O(1), no **melhor cenário**. Isso ocorre quando o elemento está diretamente no índice calculado pela função hash, sem colisões, permitindo uma remoção imediata e eficiente.

No **pior cenário**, quando há muitas colisões ou a tabela está próxima de sua capacidade máxima (no caso de encadeamento aberto), a complexidade pode aumentar para O(n), onde *n* é o número total de elementos na tabela. Isso ocorre porque, no caso de encadeamento, pode ser necessário percorrer toda uma lista encadeada de elementos no índice correspondente. Já no endereçamento aberto (sondagem linear, quadrática ou hash duplo), várias sondagens podem ser necessárias para localizar o elemento ou um espaço adequado para remoção, aumentando o número de operações.


### Pesquisa

A operação de pesquisa, conhecida como `search`, é responsável por localizar um elemento em uma tabela hash. A posição do elemento é calculada aplicando a função hash à chave fornecida, que gera o índice correspondente na tabela. Se o índice calculado contiver o elemento desejado, a busca é concluída com sucesso de forma imediata, e o elemento é retornado.

No entanto, se houver uma colisão, o processo de pesquisa varia conforme a estratégia de tratamento de colisão. No caso do **encadeamento fechado** (ou encadeamento separado), a tabela armazenará uma lista de elementos no índice correspondente, e a busca percorrerá essa lista até encontrar o elemento desejado ou determinar que ele não está presente.

No **encadeamento aberto** (com sondagem linear, quadrática ou hashing duplo), a tabela buscará o elemento sondando os próximos índices de acordo com a técnica utilizada. A pesquisa continuará até que o elemento seja encontrado ou que se conclua que ele não está na tabela.


#### Complexidade da Pesquisa

A pesquisa em uma tabela hash, realizada pela operação `search`, geralmente tem complexidade de tempo **constante**, representada por O(1). Isso significa que, no **melhor cenário**, a função hash distribui os elementos de maneira uniforme, sem colisões, permitindo que o elemento desejado seja encontrado diretamente no índice calculado. Nesse caso, a eficiência da busca é extremamente alta, e o número de elementos na tabela não afeta o tempo necessário para encontrar o item.

No entanto, no **pior cenário**, a complexidade de tempo pode degradar para **O(n)**, onde *n* representa o número total de elementos na tabela. Esse cenário acontece quando há muitas colisões, o que ocorre quando a função hash distribui as chaves de forma não uniforme, fazendo com que vários elementos acabem sendo mapeados para o mesmo índice ou índices adjacentes. Dependendo da técnica de tratamento de colisões utilizada (como encadeamento separado ou sondagem aberta), a busca pode precisar percorrer múltiplos elementos ou sondar várias posições, impactando o desempenho da operação.

### Complexidades

| Operação | Complexidade |
|---|---|
| Inserção (insert) | O(1) |
| Remoção (delete) | O(1) |
| Pesquisa (search) | O(1) |

## Implementações

Neste repositório, você encontrará a implementação da estrutura de dados Hash Table em três diferentes tecnologias: <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/5_Hash-Table/C">C</a>, <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/5_Hash-Table/Python">Python</a> e <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/tree/main/Data_Structures/5_Hash-Table/Rust">Rust</a>

## Referências

Livro: <a href="https://www.amazon.com.br/Algoritmos-Teoria-Pr%C3%A1tica-Thomas-Cormen/dp/8535236996" target="_blank">Algoritmos: Teoria e Prática - Thomas Cormen 
</a>

Livro: <a href="https://www.novatec.com.br/livros/cientista-da-computacao-autodidata/">Cientista da Computação Autodidata</a> 

Livro: <a href="https://novatec.com.br/livros/entendendo-algoritmos/">Entendendo Algoritmos</a>

Geeks for Geeks: <a href="https://www.geeksforgeeks.org/hash-table-data-structure/" target="_blank">Hash Table Data Structure
</a>

Livro: <a href="https://www.grupogen.com.br/livro-algoritmos-e-estruturas-de-dados-em-linguagem-c-andre-backes-editora-ltc-9788521638308">Algoritmos e Estruturas de Dados em Linguagem C</a>