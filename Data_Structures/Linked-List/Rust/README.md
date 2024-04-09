# Linked List em Rust
## Sumário 

- [Divisão]()
    - [main.rs](#mainrs)
    - [linked_list.rs](#linked_listrs)
    - [node.rs](#noders)


## Divisão

Estes arquivos constituem a implementação de uma lista encadeada em Rust, organizada em três componentes principais: main.rs, LinkedList.py e node.py.

- `main.py` é o ponto de entrada do programa, onde a execução principal ocorre.
- `linked_list.rs` encapsula os métodos que permitem a manipulação da lista encadeada, como adicionar, remover e acessar elementos.
- Por fim, `node.rs` contém a definição da estrutura de nó, que é a unidade básica de armazenamento na lista encadeada.

### main.rs

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/Rust/main.rs">`main.rs`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.

### linked_list.rs

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/Rust/linked_list.rs">`linked_list.rs`</a> contém a implementação das operações básicas para manipulação de uma lista encadeada em Rust. Essas operações incluem:

- Adicionar um novo nó no final da lista.
- Adicionar um novo nó no início da lista.
- Adicionar um novo nó em uma posição específica na lista.
- Retornar o tamanho atual da lista.
- Imprimir os elementos presentes na lista.

Essas funções permitem ao usuário criar, modificar e visualizar uma lista encadeada de forma eficiente. Com a capacidade de adicionar elementos no início, no final ou em qualquer posição desejada, juntamente com a funcionalidade de obter o tamanho atual da lista e imprimir seus elementos, o arquivo linked_list.rs fornece uma estrutura de dados flexível e fácil de usar para trabalhar com listas encadeadas em Rust.

### node.rs

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Linked-List/Rust/node.rs">`node.rs`</a> apresenta a implementação de um nó, destinado a ser utilizado em uma lista encadeada, juntamente com seu construtor. Este nó é uma estrutura fundamental na construção de uma lista encadeada em Rust. O construtor definido no arquivo permite a criação de instâncias de nó com facilidade, atribuindo um valor inicial e inicializando o próximo nó como nulo, indicando que inicialmente não há conexão com outro nó.