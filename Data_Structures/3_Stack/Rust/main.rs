mod stack;

use stack::Stack;

fn main() {
    let mut stack = Stack::new();
    stack.empilha(1);
    stack.empilha(2);
    stack.empilha(3);

    println!("Elemento no Topo: {}", stack.topo_elemento().unwrap_or(-1));

    stack.desempilha();


    println!("Pilha está Vazia: {} ", stack.esta_vazia());
    
    println!("Elemento no Topo: {}", stack.topo_elemento().unwrap_or(-1));

    println!("Tamanho da Pilha: {}", stack.tamanho());
}
