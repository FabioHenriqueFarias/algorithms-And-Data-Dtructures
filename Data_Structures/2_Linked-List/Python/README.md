# Linked List em Python

## Sumário 

- [Divisão](#divisão)
    - [main.py](#mainpy)
    - [linkedList.py](#linkedlistpy)
    - [node.py](#nodepy)
- [Rodando o programa com Python:](#rodando-o-programa-com-python)

## Divisão


Estes arquivos constituem a implementação de uma lista encadeada em Python, organizada em três componentes principais: main.py, LinkedList.py e node.py.

- `main.py` é o ponto de entrada do programa, onde a execução principal ocorre.
- `linkedList.py` encapsula os métodos que permitem a manipulação da lista encadeada, como adicionar, remover e acessar elementos.
- Por fim, `node.py` contém a definição da estrutura de nó, que é a unidade básica de armazenamento na lista encadeada.

### main.py

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/2_Linked-List/Python/main.py">`main.py`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.


### linkedList.py

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/2_Linked-List/Python/linkedList.py">`linkedList.py`</a> contém a implementação das operações básicas para manipulação de uma lista encadeada em Python. Essas operações incluem:

- Adicionar um novo nó no final da lista.
- Adicionar um novo nó no início da lista.
- Adicionar um novo nó em uma posição específica na lista.
- Retornar o tamanho atual da lista.
- Imprimir os elementos presentes na lista.

Essas funções permitem ao usuário criar, modificar e visualizar uma lista encadeada de forma eficiente. Com a capacidade de adicionar elementos no início, no final ou em qualquer posição desejada, juntamente com a funcionalidade de obter o tamanho atual da lista e imprimir seus elementos, o arquivo linkedList.py fornece uma estrutura de dados flexível e fácil de usar para trabalhar com listas encadeadas em Python.

### node.py

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/2_Linked-List/Python/node.py">`node.py`</a> apresenta a implementação de um nó, destinado a ser utilizado em uma lista encadeada, juntamente com seu construtor. Este nó é uma estrutura fundamental na construção de uma lista encadeada em Python. O construtor definido no arquivo permite a criação de instâncias de nó com facilidade, atribuindo um valor inicial e inicializando o próximo nó como nulo, indicando que inicialmente não há conexão com outro nó.

## Rodando o programa com Python:

Você pode executar o código Python usando `python3`, o interpretador da linguagem Python. 

Para executar o programa, você pode usar o seguinte comando:

```
python3 main.py
```