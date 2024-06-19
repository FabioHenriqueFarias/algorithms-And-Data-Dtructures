# Queue em Rust

## Sumário
- [Divisão]()
    - [main.rs](#mainrs)
    - [queue.rs](#queuers)
- [Rodando o programa com Rust:](#rodando-o-programa-com-rust)


## Divisão

Estes códigos consistem na implementação de uma **Pilha** na linguagem Rust, dividido em dois arquivos principais: `main.rs`, `queue.rs`. O `main.rs` é o arquivo principal do programa, `queue.rs` contém os métodos disponíveis para manipulação da pilha bem como sua implementação.

### main.rs 

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/4_Queue/Rust/main.rs">`main.rs`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário. 

### queue.rs

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/4_Queue/Rust/queue.rs">`queue.rs`</a> contém uma implementação das funções necessárias para manipulação de uma fila em rust. Cada função oferece a lógica necessária para realizar operações como inserção, exclução.

As funções implementadas são as seguintes:

- Criar a Fila
- Adicionar um novo elemento no topo da Fila.
- Remover um elemento no topo da Fila.
- Verificar se a Fila está vazia.
- Retornar o tamanho atual da Fila.
- Imprimir o elemento no topo da Fila.

## Rodando o programa com Rust:

Você pode compilar e executar o código Rust usando `rustc`, o compilador da linguagem Rust. 

Para compilar e executar o programa, você pode usar o seguinte comando:

```
rustc main.rs
```

Isso compilará o código e gerará um executável chamado `main`. Você pode então executá-lo com o seguinte comando:

```
./main
```

Isso executará o programa, que pode crir uma **Queue**.
