# Implementação de um Array em Rust

## Sumário

- [Divisão](#divisão)
    - [main.rs](#mainrs)
    - [array.rs](#arrayrs)
- [Rodando o programa com Rust:](#rodando-o-programa-com-rust)

## Divisão 
Estes arquivos constituem a implementação de um array em Rust, organizados em dois arquivos principais: `main.rs` e `array.rs`. O arquivo `main.rs` serve como ponto de entrada do programa, enquanto `array.rs` contém os métodos disponíveis para manipulação do array, juntamente com suas implementações.

### main.rs

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Arrays/Rust/main.rs">`main.rs`</a> é o ponto de entrada do programa. Aqui, ocorre a inicialização do programa, chamadas para funções e interações com o usuário, se necessário.

### array.rs

O arquivo <a href="https://github.com/FabioHenriqueFarias/algorithms-And-Data-Dtructures/blob/main/Data_Structures/Arrays/Rust/array.rs">`array.rs`</a> abriga a implementação dos métodos necessárias para manipulação de arrays em Rust. Cada função oferece a lógica necessária para realizar operações como inserção, exclusão, busca e outras, em um array.

As funções implementadas são as seguintes:

- Criar o array
- Adicionar um novo elemento em uma posição específica no array.
- Adicionar um novo elemento no final do array.
- Adicionar um novo elemento no início do array.
- Buscar um elemento no array e retorna sua posição.
- Remover um elemento de uma posição específica no array.
- Remover o primeiro elemento do array.
- Remover o último  elemento do array.
- Retornar o tamanho atual do array.
- Aumentar o tamanho do array dobrando sua capacidade.
- Limpar todos os elementos do array.
- Imprimir os elementos presentes no array.

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

Isso executará o programa, que pode crir um Array.